# Geschwindigkeitsbegrenzung im Motorcontroller

Die US-Firmware begrenzt den internen Geschwindigkeitssollwert im normalen schnellen Fahrmodus auf **6288**, DE auf **3560**. Die eigene Geschwindigkeitsausgabe bildet diese auf **38,4 beziehungsweise 21,7 km/h** ab. Ein Nutzer berichtete etwa 38 beziehungsweise 21 km/h; die Emulation ist keine unabhängige Fahr- oder GPS-Messung.

Die Begrenzung ist durch den Datenfluss bis zum Regler und durch Ausführung der Originalbefehle im Emulator belegt. Die Funktionsnamen stammen aus Ghidra, nicht aus Herstellersymbolen.

## Adresskonvention

Alle **Dateioffsets** beziehen sich auf die unveränderten BIN-Dateien einschließlich ihres 1.024-Byte-Vorspanns. Befehle und Datenwerte werden nach Rückgängigmachen der additiven Kodierung interpretiert:

```text
Dateioffset = Prozessoradresse - 0x01000000 + 0x400
```

Die erzeugten Analysefassungen beginnen direkt mit den Nutzdaten. Ihr Offset ist somit jeweils 0x400 kleiner als der hier angegebene Dateioffset.

## Normaler schneller Fahrmodus

| Stelle | US | DE |
|---|---|---|
| Zuständige Funktion | `0x01002940` | `0x0100283C` |
| Beginn im Originalfile | `0x002D40` | `0x002C3C` |
| Steigung der normalen Gasgriffkennlinie | `254784 = 0x3E340` | `142848 = 0x22E00` |
| Dateioffset dieser Konstante | `0x002F90` | `0x002E90` |
| Maximaler interner Sollwert | **6288 = 0x1890** | **3560 = 0x0DE8** |
| Herkunft des Maximalwerts | Konstante bei `0x002F94` | `3357 + 203`; 3357 steht bei `0x002E64` |
| Vergleich und Begrenzung | `0x002DB4` bis `0x002DBA` | `0x002CAE` bis `0x002CB8` |
| Sollwert im RAM | `0x200001C2` | `0x200001BE` |

Bei gültigem Gasgriffsignal oberhalb der Einschaltschwelle und freigegebenem Antrieb gilt für diesen Pfad vereinfacht:

```c
u = min(ADC - 1023, 1597);
US_Sollwert = min(((254784 * u) >> 16) + 80, 6288);
DE_Sollwert = min(((142848 * u) >> 16) + 80, 3560);
```

Die Emulation liefert bei ADC 2620 und 3000 jeweils dieselben Obergrenzen. Für ADC 1023 liefert der getestete Anfangszustand null. Fehlerzustände, andere Fahrmodi und zusätzliche Abregelungen können niedrigere Vorgaben erzwingen.

Belege: [US-Funktion](../analysis/evidence/US/functions/01002940.c), [DE-Funktion](../analysis/evidence/DE/functions/0100283c.c), [Emulationsprotokoll](../analysis/results/emulated-speed-limits.json).

## Übergabe an den Regler

| Datenfluss | US | DE |
|---|---|---|
| Routine für die Antriebsvorgabe | `0x01005560` | `0x01005444` |
| Sollwertkopie | `0x200001C2 → 0x200001C0` | `0x200001BE → 0x200001BC` |
| Geschwindigkeitsregler | `0x0100515C` | `0x01005040` |
| Erfasstes Argument R0 bei voller Vorgabe | **6288** | **3560** |
| Gemessenes Geschwindigkeitssignal | `0x20000218` | `0x20000214` |

Der Regler bildet den Fehler zwischen Vorgabe und gemessener Motorgeschwindigkeit. Die Emulation erfasst die Übergabe am Reglereintritt; sie simuliert keine vollständige Motorregelstrecke.

Belege: [US-Übergabe](../analysis/evidence/US/functions/01005560.c), [DE-Übergabe](../analysis/evidence/DE/functions/01005444.c), [US-Regler](../analysis/evidence/US/functions/0100515c.c), [DE-Regler](../analysis/evidence/DE/functions/01005040.c).

## Geschwindigkeitsausgabe

US `0x01003834` beziehungsweise DE `0x01003730` legt zusätzlich eine um drei Bits nach rechts geschobene Darstellung des gefilterten Geschwindigkeitssignals ab. US `0x010041E8` beziehungsweise DE `0x010040C4` multipliziert diese mit `32064 = 0x7D40`, schiebt um 16 Bits nach rechts und schreibt zwei Big-Endian-Bytes.

Für positive Werte, wenn der gemessene Wert dem Sollwert entspricht:

```text
Ausgabe in 0,1 km/h = ((Sollwert >> 3) * 32064) >> 16
US: (6288 >> 3) = 786; (786 * 32064) >> 16 = 384 → 38,4 km/h
DE: (3560 >> 3) = 445; (445 * 32064) >> 16 = 217 → 21,7 km/h
```

Die Geschwindigkeitsskala wird zusätzlich durch den nominellen US-Parameter 380 und die berichteten Fahrwerte gestützt. Dashboard-Rundung, tatsächliche GPS-Geschwindigkeit, Last, Akkustand und Überschwingen wurden nicht gemessen. Eine Regelvorgabe ist keine absolute physikalische Obergrenze für jede Fahrsituation.

Belege: [US-Messwertverarbeitung](../analysis/evidence/US/functions/01003834.c), [DE-Messwertverarbeitung](../analysis/evidence/DE/functions/01003730.c), [US-Ausgabe](../analysis/evidence/US/functions/010041e8.c), [DE-Ausgabe](../analysis/evidence/DE/functions/010040c4.c).

## Einstellbare Geschwindigkeit im Custom Pfad

Die benutzerdefinierte Geschwindigkeit besitzt eine weitere regionale Aufbereitung:

| Parameteraufbereitung | US | DE |
|---|---|---|
| Funktion | `0x010041E8` | `0x010040C4` |
| Nomineller Eingabebereich | `50..380` = 5,0..38,0 km/h | `50..200` = 5,0..20,0 km/h |
| Obergrenze im Code | `255 + 125 = 380` | `200 = 0xC8` |
| Dateioffsets der Obergrenze | `0x004704` bis `0x00470E` | `0x0045E2` bis `0x0045E8` |
| Regionale Skalierung | keine entsprechende Skalierung | `floor(Wert × 35/32)` bei `0x004602` bis `0x00460A` |
| Oberer Wert nach Skalierung | 380 | `floor(200 × 35/32) = 218` |
| Folgende Ganzzahldivision durch zehn | 38 | 21 |
| RAM-Parameter / Kennlinienfaktor | `0x200000C4` / `0x200000C6` | `0x200000BE` / `0x200000C0` |

Die vollständige Emulation der weiteren Umrechnung ergibt:

| Test an der regionalen Obergrenze | US | DE |
|---|---:|---:|
| Aufbereiteter RAM-Parameter | 380 | 218 |
| Interner Kennlinienfaktor | 3986 | 2191 |
| Sollwert bei voller Gasgriffvorgabe | 6288 | 3497 |
| Ausgabewert am Sollwert | 384 = 38,4 km/h | 213 = 21,3 km/h |

US-Eingaben 380, 500 und 9999 liefern dieselbe obere Vorgabe. Bei DE gilt das für 200, 210, 250, 320, 380, 500 und 9999. DE besitzt somit im Custom-Pfad eine etwas niedrigere wirksame Vorgabe als im normalen schnellen Fahrmodus.

## Einordnung

Die regionalen Begrenzungen liegen in ausführbarem Code und erreichen den Regler. Etwa **38 km/h US** und **21 km/h DE** sind mit diesen Pfaden vereinbar. Eine US-Grenze von 32 km/h bestätigt sich hier nicht. Die nominelle DE-Grenze ist **20,0 km/h plus Korrektur und Umrechnung**, nicht eine unmittelbar maßgebliche Konstante 210.

Tempomat, Beleuchtung und sämtliche weiteren Schutzgrenzen sind damit nicht vollständig untersucht. Vollständige Testfälle: [emulated-speed-limits.json](../analysis/results/emulated-speed-limits.json). Reproduktion: [Methodik](reproduce.md).
