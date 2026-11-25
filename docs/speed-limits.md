# Geschwindigkeitsbegrenzung im Motorcontroller

Die regionalen Firmwares begrenzen den internen Geschwindigkeitssollwert im normalen schnellen Fahrmodus auf **3560 DE, 4160 EU und 6288 US**. Die eigene Geschwindigkeitsausgabe bildet diese auf **21,7 / 25,4 / 38,4 km/h** ab. Ein Nutzer berichtete etwa 21 km/h DE und 38 km/h US. Eine reale EU-Fahrt wurde nicht gemessen; die Emulation ersetzt keine unabhängige Fahr- oder GPS-Messung.

Die Begrenzung ist durch den Datenfluss bis zum Regler und durch Ausführung der Originalbefehle im Emulator belegt. Die Funktionsnamen stammen aus Ghidra, nicht aus Herstellersymbolen.

## Adresskonvention

Alle **Dateioffsets** beziehen sich auf die unveränderten BIN-Dateien einschließlich ihres 1.024-Byte-Vorspanns. Befehle und Datenwerte werden nach Rückgängigmachen der additiven Kodierung interpretiert:

```text
Dateioffset = Prozessoradresse - 0x01000000 + 0x400
```

Die erzeugten Analysefassungen beginnen direkt mit den Nutzdaten. Ihr Offset ist somit jeweils 0x400 kleiner als der hier angegebene Dateioffset.

## Normaler schneller Fahrmodus

| Stelle | DE | EU | US |
|---|---|---|---|
| Zuständige Funktion | `0x0100283C` | `0x0100293C` | `0x01002940` |
| Beginn im Originalfile | `0x002C3C` | `0x002D3C` | `0x002D40` |
| Steigung der normalen Gasgriffkennlinie | `142848 = 0x22E00` | `167488 = 0x28E40` | `254784 = 0x3E340` |
| Dateioffset dieser Konstante | `0x002E90` | `0x002F90` | `0x002F90` |
| Maximaler interner Sollwert | **3560 = 0x0DE8** | **4160 = 0x1040** | **6288 = 0x1890** |
| Herkunft des Maximalwerts | `3357 + 203`; 3357 steht bei `0x002E64` | `65 << 6` bei `0x002DB0` / `0x002DB2` | Konstante bei `0x002F94` |
| Vergleich und Begrenzung | `0x002CAE` bis `0x002CB8` | `0x002DB0` bis `0x002DB8` | `0x002DB4` bis `0x002DBA` |
| Sollwert im RAM | `0x200001BE` | `0x200001C2` | `0x200001C2` |

Bei gültigem Gasgriffsignal oberhalb der Einschaltschwelle und freigegebenem Antrieb gilt für diesen Pfad vereinfacht:

```c
u = min(ADC - 1023, 1597);
US_Sollwert = min(((254784 * u) >> 16) + 80, 6288);
DE_Sollwert = min(((142848 * u) >> 16) + 80, 3560);
EU_Sollwert = min(((167488 * u) >> 16) + 80, 4160);
```

Die Emulation liefert bei ADC 2620 und 3000 jeweils dieselben Obergrenzen. Für ADC 1023 liefert der getestete Anfangszustand null. Fehlerzustände, andere Fahrmodi und zusätzliche Abregelungen können niedrigere Vorgaben erzwingen.

Belege: [US-Funktion](../analysis/evidence/US/functions/01002940.c), [DE-Funktion](../analysis/evidence/DE/functions/0100283c.c), [EU-Funktion](../analysis/evidence/EU/functions/0100293c.c), [Emulationsprotokoll](../analysis/results/emulated-speed-limits.json).

## Übergabe an den Regler

| Datenfluss | DE | EU | US |
|---|---|---|---|
| Routine für die Antriebsvorgabe | `0x01005444` | `0x0100555C` | `0x01005560` |
| Sollwertkopie | `0x200001BE → 0x200001BC` | `0x200001C2 → 0x200001C0` | `0x200001C2 → 0x200001C0` |
| Geschwindigkeitsregler | `0x01005040` | `0x01005158` | `0x0100515C` |
| Erfasstes Argument R0 bei voller Vorgabe | **3560** | **4160** | **6288** |
| Gemessenes Geschwindigkeitssignal | `0x20000214` | `0x20000218` | `0x20000218` |

Der Regler bildet den Fehler zwischen Vorgabe und gemessener Motorgeschwindigkeit. Die Emulation erfasst die Übergabe am Reglereintritt; sie simuliert keine vollständige Motorregelstrecke.

Belege: [US-Übergabe](../analysis/evidence/US/functions/01005560.c), [DE-Übergabe](../analysis/evidence/DE/functions/01005444.c), [EU-Übergabe](../analysis/evidence/EU/functions/0100555c.c), [US-Regler](../analysis/evidence/US/functions/0100515c.c), [DE-Regler](../analysis/evidence/DE/functions/01005040.c), [EU-Regler](../analysis/evidence/EU/functions/01005158.c).

## Geschwindigkeitsausgabe

US `0x01003834`, EU `0x01003830` beziehungsweise DE `0x01003730` legt zusätzlich eine um drei Bits nach rechts geschobene Darstellung des gefilterten Geschwindigkeitssignals ab. Die Ausgaberoutinen US/EU `0x010041E8` und DE `0x010040C4` multiplizieren diese mit `32064 = 0x7D40`, schieben um 16 Bits nach rechts und schreiben zwei Big-Endian-Bytes.

Für positive Werte, wenn der gemessene Wert dem Sollwert entspricht:

```text
Ausgabe in 0,1 km/h = ((Sollwert >> 3) * 32064) >> 16
US: (6288 >> 3) = 786; (786 * 32064) >> 16 = 384 → 38,4 km/h
DE: (3560 >> 3) = 445; (445 * 32064) >> 16 = 217 → 21,7 km/h
EU: (4160 >> 3) = 520; (520 * 32064) >> 16 = 254 → 25,4 km/h
```

Die Geschwindigkeitsskala wird zusätzlich durch den nominellen US-Parameter 380 und die berichteten Fahrwerte gestützt. Dashboard-Rundung, tatsächliche GPS-Geschwindigkeit, Last, Akkustand und Überschwingen wurden nicht gemessen. Eine Regelvorgabe ist keine absolute physikalische Obergrenze für jede Fahrsituation.

Belege: [US-Messwertverarbeitung](../analysis/evidence/US/functions/01003834.c), [DE-Messwertverarbeitung](../analysis/evidence/DE/functions/01003730.c), [EU-Messwertverarbeitung](../analysis/evidence/EU/functions/01003830.c), [US-Ausgabe](../analysis/evidence/US/functions/010041e8.c), [DE-Ausgabe](../analysis/evidence/DE/functions/010040c4.c), [EU-Ausgabe](../analysis/evidence/EU/functions/010041e8.c).

## Einstellbare Geschwindigkeit im Custom Pfad

Die benutzerdefinierte Geschwindigkeit besitzt eine weitere regionale Aufbereitung:

| Parameteraufbereitung | DE | EU | US |
|---|---|---|---|
| Funktion | `0x010040C4` | `0x010041E8` | `0x010041E8` |
| Nomineller Eingabebereich | `50..200` = 5,0..20,0 km/h | `50..250` = 5,0..25,0 km/h | `50..380` = 5,0..38,0 km/h |
| Obergrenze im Code | `200 = 0xC8` | `250 = 0xFA` | `255 + 125 = 380` |
| Dateioffsets der Obergrenze | `0x0045E2` bis `0x0045E8` | `0x004706` bis `0x00470C` | `0x004704` bis `0x00470E` |
| Regionale Skalierung | `floor(Wert × 35/32)` bei `0x004602` bis `0x00460A` | keine entsprechende Skalierung | keine entsprechende Skalierung |
| Oberer Wert nach Skalierung | `floor(200 × 35/32) = 218` | 250 | 380 |
| Folgende Ganzzahldivision durch zehn | 21 | 25 | 38 |
| RAM-Parameter / Kennlinienfaktor | `0x200000BE` / `0x200000C0` | `0x200000C4` / `0x200000C6` | `0x200000C4` / `0x200000C6` |

Die vollständige Emulation der weiteren Umrechnung ergibt:

| Test an der regionalen Obergrenze | DE | EU | US |
|---|---:|---:|---:|
| Aufbereiteter RAM-Parameter | 218 | 250 | 380 |
| Interner Kennlinienfaktor | 2191 | 2617 | 3986 |
| Sollwert bei voller Gasgriffvorgabe | 3497 | 4160 | 6288 |
| Ausgabewert am Sollwert | 213 = 21,3 km/h | 254 = 25,4 km/h | 384 = 38,4 km/h |

US-Eingaben 380, 500 und 9999 liefern dieselbe obere Vorgabe. Bei EU gilt das für 250, 251, 320, 380, 500 und 9999, bei DE für 200, 210, 250, 320, 380, 500 und 9999. DE besitzt somit im Custom-Pfad eine etwas niedrigere wirksame Vorgabe als im normalen schnellen Fahrmodus. EU und US erreichen in beiden geprüften Pfaden jeweils dieselbe regionale Obergrenze.

## Einordnung

Die regionalen Begrenzungen liegen in ausführbarem Code und erreichen den Regler. Etwa **38 km/h US**, nominell **25 km/h EU** und etwa **21 km/h DE** sind mit diesen Pfaden vereinbar. Eine US-Grenze von 32 km/h bestätigt sich hier nicht. Die nominelle DE-Grenze ist **20,0 km/h plus Korrektur und Umrechnung**, nicht eine unmittelbar maßgebliche Konstante 210. Die [EU-Detailanalyse](eu-speed-limits.md) enthält die vollständige Ergänzung; der [Drei-Regionen-Bericht](../analysis/results/regional-speed-comparison.json) wird aus der Emulation erzeugt.

Tempomat, Beleuchtung und sämtliche weiteren Schutzgrenzen sind damit nicht vollständig untersucht. Vollständige Testfälle: [emulated-speed-limits.json](../analysis/results/emulated-speed-limits.json). Reproduktion: [Methodik](reproduce.md).
