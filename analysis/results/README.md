# Maschinenlesbare Analyseergebnisse

| Datei | Inhalt |
|---|---|
| [comparison.json](comparison.json) | Originaldateien, Hashes, Entropie, Byteverteilungen, Zeichenfolgen, zusammenhängende Unterschiede und Blockstatistik |
| [byte-differences.csv](byte-differences.csv) | Alle 28.208 abweichenden Positionen mit Offset und US-/DE-Bytewert; Semikolon als Trenner |
| [normalized-comparison.json](normalized-comparison.json) | Normalisierung, Rückwegprüfung, Vektoren, Versionsstrings und ausgerichtete Differenzbereiche |
| [emulated-speed-limits.json](emulated-speed-limits.json) | Originalbefehle mit synthetischen Gasgriff- und Custom-Eingaben, Reglerargumente und Geschwindigkeitsausgabe |

Die Eingabedateien und Toolversionen sind im [Manifest](../manifest.json) identifiziert. Die fachliche Einordnung steht im [Firmwarevergleich](../../docs/firmware-comparison.md) und in der [Begrenzungsanalyse](../../docs/speed-limits.md). Reproduktionsschritte: [Methodik](../../docs/reproduce.md).
