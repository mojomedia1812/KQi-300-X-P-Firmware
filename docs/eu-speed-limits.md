# EU Firmware KBE01M02

Die EU-Firmware begrenzt den internen Geschwindigkeitssollwert im normalen schnellen Fahrmodus auf **4160 = 0x1040**. Ihre eigene Geschwindigkeitsausgabe bildet diesen auf **254 Zehntel-km/h = 25,4 km/h** ab. Der einstellbare Parameter wird auf **250 Zehntel-km/h = 25,0 km/h nominell** begrenzt. Beide Pfade wurden mit den originalen Thumb-Befehlen im Emulator geprüft. Eine reale EU-Fahrt wurde dabei nicht gemessen.

## Vergleich mit DE und US

| Merkmal | DE | EU | US |
|---|---:|---:|---:|
| Versionskennungen | `KBE38D05` / `KBE38M02` | `KBE01D03` / `KBE01M02` | `KBE13D03` / `KBE13M02` |
| Nominelle Custom-Obergrenze | 20,0 km/h | **25,0 km/h** | 38,0 km/h |
| Zusätzliche regionale Skalierung | 35/32 | **keine entsprechende Skalierung** | keine entsprechende Skalierung |
| Maximaler Sollwert im normalen schnellen Fahrmodus | 3560 | **4160** | 6288 |
| Geschwindigkeitsausgabe am normalen Sollwert | 21,7 km/h | **25,4 km/h** | 38,4 km/h |
| Maximaler Custom-Sollwert | 3497 | **4160** | 6288 |
| Geschwindigkeitsausgabe am Custom-Sollwert | 21,3 km/h | **25,4 km/h** | 38,4 km/h |
| An den Geschwindigkeitsregler übergebenes R0 | 3560 | **4160** | 6288 |

Die EU-Logik entspricht in diesen Pfaden weitgehend dem US-Aufbau, verwendet aber andere regionale Kennlinien- und Maximalwerte. Die zusätzliche DE-Skalierung fehlt. Teilweise abweichende Funktionsadressen zeigen, weshalb US-Offsets nicht ungeprüft auf EU übertragen werden dürfen.

## Datei und Normalisierung

Eingabe: [300X/EU/KBE01M02.bin](../300X/EU/KBE01M02.bin). Die ursprüngliche BIN-Datei bleibt unverändert.

| Merkmal | EU |
|---|---|
| Größe | 29.696 Byte |
| MD5 | `86288174560d2190d75251707ee3996c` |
| SHA-256 | `9e91ea7dab2050556fcdb967e5573e8b932d9ef2be30d9b55b3aa9cb0de2ad1e` |
| Additive Kodierungskonstante | `0x0007154A` |
| Nutzdaten vor FF-Endauffüllung | 28.560 Byte |
| FF-Endauffüllung | 112 Byte |
| Versionsfolge nach Dekodierung | `KBE01D03KBE01M02` bei Dateioffset `0x006DDA` |
| SHA-256 der normalisierten Analysefassung | `6060413fccc29d8f655c340401bef002d8b3b3a516aa6a0d44f9c67e76601593` |

Wie bei DE und US gilt ab Dateioffset `0x400` für ausgerichtete Little-Endian-32-Bit-Wörter: `P = (C - K) modulo 2^32`. Vektortabelle, Reset-Code, Versionsstrings und exakte Rückkodierung werden geprüft. Die Bedeutung des ersten 1.024-Byte-Vorspanns wird dadurch nicht bestimmt.

## EU Begrenzungsstellen

Dateioffsets beziehen sich auf die Originaldatei; Befehle werden nach Normalisierung interpretiert. Es gilt `Dateioffset = Prozessoradresse - 0x01000000 + 0x400`.

| Aufgabe | Prozessoradresse oder Datenwert | Dateioffset |
|---|---|---|
| Gasgriffkennlinie und Sollwertgrenze | Funktion `0x0100293C` | `0x002D3C` |
| Normale Kennliniensteigung | `167488 = 0x28E40` | Konstante bei `0x002F90` |
| Bildung des Maximalwerts | `65 << 6 = 4160` | `0x002DB0` / `0x002DB2` |
| Vergleich und Begrenzung | `cmp` / bedingter Sprung / `strh` | `0x002DB4` bis `0x002DB8` |
| Parameteraufbereitung und Geschwindigkeitsausgabe | Funktion `0x010041E8` | `0x0045E8` |
| Nominelles Custom-Maximum 250 | Vergleich / Laden / Speichern | `0x004706` bis `0x00470C` |
| Weitergabe des Sollwerts | Funktion `0x0100555C` | `0x00595C` |
| Geschwindigkeitsregler | Funktion `0x01005158` | `0x005558` |

Für den normalen Pfad bei gültigem Gasgriffsignal oberhalb der Einschaltschwelle:

```c
u = min(ADC - 1023, 1597);
EU_Sollwert = min(((167488 * u) >> 16) + 80, 4160);
```

Die unbeschnittene Kennlinie ergibt bei voller Vorgabe 4161; der nachfolgende Vergleich reduziert den Wert auf **4160**. Bei ADC 2620 und 3000 liefert die Originalroutine denselben Maximalwert. Der Sollwert steht im RAM bei `0x200001C2`, wird nach `0x200001C0` kopiert und erreicht den Regler als **R0 = 4160**. Der Regler vergleicht ihn mit dem gemessenen Geschwindigkeitssignal bei `0x20000218`.

Belege: [Gasgriff und Grenze](../analysis/evidence/EU/functions/0100293c.c), [Übergabe](../analysis/evidence/EU/functions/0100555c.c), [Regler](../analysis/evidence/EU/functions/01005158.c).

## Geschwindigkeitsausgabe und Custom Pfad

EU `0x01003830` legt eine um drei Bits nach rechts geschobene Darstellung des Geschwindigkeitssignals ab. Die Ausgaberoutine multipliziert diese mit `32064 = 0x7D40` und schiebt um 16 Bits nach rechts. Für positive Werte am Sollwert:

```text
(4160 >> 3) = 520
(520 * 32064) >> 16 = 254 → 25,4 km/h in der Firmware-Telemetrieskala
```

Im Custom-Pfad wird die Eingabe zunächst auf `50..250` begrenzt und durch zehn geteilt. Der anschließende Kennlinienfaktor beträgt am Maximum **2617** und liegt im RAM bei `0x200000C6`; der nominelle Parameter 250 liegt bei `0x200000C4`. Eine Multiplikation mit 35/32 wie bei DE findet hier nicht statt.

Die Originalbefehle liefern für die Eingaben 250, 251, 320, 380, 500 und 9999 stets denselben oberen Custom-Sollwert **4160** und dieselbe Ausgabe **254**. Der zusätzliche Grenztest mit 249 übernimmt noch den Parameter 249 und liefert eine niedrigere Vorgabe. Ein höherer übergebener Eingabewert hebt die geprüfte regionale Begrenzung daher nicht auf.

Der Test zeigt außerdem die Ganzzahlauflösung der folgenden Umrechnung:

| Eingabe in 0,1 km/h | Übernommener Parameter | Nach Ganzzahldivision durch zehn | Interner Sollwert | Telemetrie am Sollwert |
|---|---:|---:|---:|---:|
| 249 | 249 | 24 | 3992 | 244 = 24,4 km/h |
| 250 | 250 | 25 | 4160 | 254 = 25,4 km/h |
| 251 | 250 | 25 | 4160 | 254 = 25,4 km/h |

Die Eingabe ist somit nicht über den gesamten Pfad stufenlos in Zehntel-km/h wirksam. Die Ganzzahldivision erzeugt in diesem Beispiel einen Sprung zwischen der 24er- und der 25er-Stufe.

Belege: [Parameter und Ausgabe](../analysis/evidence/EU/functions/010041e8.c), [Messwertverarbeitung](../analysis/evidence/EU/functions/01003830.c), [vollständige Testfälle](../analysis/results/emulated-speed-limits.json), [regionaler Vergleich](../analysis/results/regional-speed-comparison.json).

## Reproduktion und Reichweite

Die vorhandenen Skripte normalisieren, disassemblieren und emulieren jetzt alle drei Regionen; die bisherigen DE- und US-Ergebnisse bleiben unverändert. Siehe [Methodik](reproduce.md) und [Nachweisstatus](provenance.md).

25,0 km/h nomineller Parameter, 25,4 km/h Telemetrie am Sollwert und eine tatsächlich gefahrene GPS-Geschwindigkeit sind unterschiedliche Größen. Dashboard-Rundung und EU-Fahrverhalten wurden nicht gemessen. Tempomat, Beleuchtung und andere Schutzgrenzen sind nicht Gegenstand dieses EU-Nachweises.
