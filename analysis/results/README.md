# Maschinenlesbare Analyseergebnisse

| Datei | Inhalt |
|---|---|
| [comparison.json](comparison.json) | Originaldateien, Hashes, Entropie, Byteverteilungen, Zeichenfolgen, zusammenhängende Unterschiede und Blockstatistik |
| [byte-differences.csv](byte-differences.csv) | Alle 28.208 abweichenden Positionen mit Offset und US-/DE-Bytewert; Semikolon als Trenner |
| [normalized-comparison.json](normalized-comparison.json) | Normalisierung, Rückwegprüfung, Vektoren und Versionsstrings für DE/EU/US sowie ausgerichtete US-/DE-Differenzbereiche |
| [emulated-speed-limits.json](emulated-speed-limits.json) | DE-/EU-/US-Originalbefehle mit synthetischen Gasgriff- und Custom-Eingaben, Reglerargumente und Geschwindigkeitsausgabe |
| [regional-speed-comparison.json](regional-speed-comparison.json) | Kompakter Vergleich der drei Regionen, direkt aus den Emulationsergebnissen erzeugt |

Die Eingabedateien und Toolversionen sind im [Manifest](../manifest.json) identifiziert. Die fachliche Einordnung steht im [Firmwarevergleich](../../docs/firmware-comparison.md) und in der [Begrenzungsanalyse](../../docs/speed-limits.md). Reproduktionsschritte: [Methodik](../../docs/reproduce.md).
