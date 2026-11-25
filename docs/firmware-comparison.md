# Vergleich der US und DE Firmware

Untersucht wurden `300X/US/KBE13M02.bin` und `300X/DE/KBE38M02.bin` aus dem Ausgangsstand [`dbe234e74df30c9ce4bdb943d7380210917987f5`](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/commit/dbe234e74df30c9ce4bdb943d7380210917987f5). Beide besitzen eine gemeinsame Codebasis, aber unterschiedliche Kodierung, Programmabschnitte und regionale Parameter.

## Aufbau und Kennungen

| Merkmal | US | DE |
|---|---:|---:|
| Gesamtgröße | 29.696 Byte | 29.696 Byte |
| Kennungen nach Dekodierung | `KBE13D03` / `KBE13M02` | `KBE38D05` / `KBE38M02` |
| Dateioffset der Kennungsfolge | `0x006DDE` | `0x006CCA` |
| Vorspann | 1.024 Byte | 1.024 Byte |
| Nutzdaten bis vor FF-Endauffüllung | 28.564 Byte | 28.292 Byte |
| FF-Endauffüllung | 108 Byte | 380 Byte |
| Kodierungskonstante | `0x000C2F3F` | `0x0002FC23` |
| Stack-Anfangswert | `0x20001F78` | `0x20001F70` |
| Reset-Handler | `0x01000149` | `0x01000149` |

Die US-Nutzdaten sind 272 Byte länger. Unterschiedliche Auffüllung sorgt für gleich große Dateien. Die Zahl `38` in der DE-Kennung ist kein Geschwindigkeitswert.

## Kodierung

Ab Dateioffset `0x400` lässt sich jedes ausgerichtete Little-Endian-32-Bit-Wort `C` normalisieren:

```text
P = (C - K) modulo 2^32
US: K = 0x000C2F3F
DE: K = 0x0002FC23
```

Die Konstanten wurden aus wiederholten Vektortabelleneinträgen abgeleitet. Plausibler ARM-Thumb-Startcode, eine konsistente Vektortabelle und die Versionskennungen stützen die Normalisierung. Erneutes Addieren stellt jedes analysierte Nutzdatenbyte exakt wieder her. Die genaue Funktion des Vorspanns und ein mögliches Signaturformat wurden damit nicht bestimmt.

Beispiel: Das Wort bei Dateioffset `0x410` ist in US `0x000C2F3F`, in DE `0x0002FC23`. Nach der jeweiligen Subtraktion ergeben beide null.

## Bytevergleich

| Vergleich | Ergebnis |
|---|---:|
| Unterschiedliche Rohbytes an derselben Position | 28.208 von 29.696; 94,9892 % |
| Identische Rohbytes an derselben Position | 1.488 |
| Erste / letzte Rohabweichung | `0x000008` / `0x007393` |
| Zusammenhängende Roh-Differenzbereiche | 1.371 |
| Identische Bytes nach Normalisierung und Sequenzausrichtung | 26.907 |
| Anteil an US- / DE-Nutzdaten | 94,20 % / 95,10 % |
| Bei dieser Ausrichtung ungepaarte US- / DE-Bytes | 1.657 / 1.385 |

`difflib.SequenceMatcher(autojunk=False)` gleicht verschobene Teilsequenzen ab. Diese Anteile sind kein semantischer Funktionsvergleich. Geänderte Sprungziele und RAM-Adressen können ebenfalls unterschiedliche Bytes bei funktional gleichen Operationen erzeugen.

## Veränderte Zustandslogik

Ein wesentlich veränderter Abschnitt beginnt in beiden Dateien bei `0x001788`. Einschließlich des anschließenden Literalpools reicht er bei US bis vor `0x001B2C`, bei DE bis vor `0x001A28`: **932 gegenüber 672 Byte**. Die nächste Routine verschiebt sich um 260 Byte.

DE löscht zu Beginn das Zustandsbit `0x100`. US enthält zusätzliche Bedingungen für stabile Werte, einen Zähler und das Setzen beziehungsweise Löschen desselben Bits. Das ist mit einer Tempomat-Zustandslogik vereinbar. Eine abschließende Zuordnung des Produktmerkmals erfordert jedoch weitere Signalanalyse und einen Funktionstest.

Belege: [US-Routine](../analysis/evidence/US/functions/01001388.c), [DE-Routine](../analysis/evidence/DE/functions/01001388.c). Die genauer nachverfolgten regionalen Geschwindigkeitsgrenzen stehen unter [Geschwindigkeitsbegrenzung](speed-limits.md). Strom-, Temperatur- und Bremsgrenzen wurden nicht vollständig zugeordnet.

## Vollständige Daten

- [Rohvergleich mit Hashes, Zeichenfolgen und Differenzbereichen](../analysis/results/comparison.json)
- [Jede abweichende Byteposition als CSV](../analysis/results/byte-differences.csv)
- [Normalisierung und ausgerichtete Unterschiede](../analysis/results/normalized-comparison.json)
- [US-Codebelege](../analysis/evidence/US/) und [DE-Codebelege](../analysis/evidence/DE/)
- [Quellen und Prüfsummen](provenance.md)
