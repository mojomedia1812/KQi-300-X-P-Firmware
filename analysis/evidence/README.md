# Codebelege zur Firmwareanalyse

Diese Dateien wurden aus den unveränderten, anschließend normalisierten US- und DE-BIN-Dateien abgeleitet. Die Adresskonvention und die Beweisführung stehen unter [Geschwindigkeitsbegrenzung](../../docs/speed-limits.md).

Je Region enthalten die Ordner:

- `disassembly.txt`: lineare ARM-Thumb-Disassemblierung mit Prozessoradresse und Offset im Originalfile. Sie enthält auch Datenbereiche und ist kein vollständiger Code-Daten-Nachweis.
- `all-functions.c`: zusammengefasste Ghidra-Decompilate.
- `functions/`: dieselben Funktionen einzeln, für direkte Belegverweise.
- `references.tsv`: von Ghidra ermittelte Instruktionsreferenzen.

Die wichtigsten Routinen:

| Aufgabe | US | DE |
|---|---|---|
| Gasgriffkennlinie und Sollwertgrenze | [01002940](US/functions/01002940.c) | [0100283c](DE/functions/0100283c.c) |
| Custom-Parameter und Geschwindigkeitsausgabe | [010041e8](US/functions/010041e8.c) | [010040c4](DE/functions/010040c4.c) |
| Übergabe des Geschwindigkeitssollwerts | [01005560](US/functions/01005560.c) | [01005444](DE/functions/01005444.c) |
| Geschwindigkeitsregler | [0100515c](US/functions/0100515c.c) | [01005040](DE/functions/01005040.c) |
| Verarbeitung der gemessenen Geschwindigkeit | [01003834](US/functions/01003834.c) | [01003730](DE/functions/01003730.c) |
| Unterschiedliche Zustandslogik | [01001388](US/functions/01001388.c) | [01001388](DE/functions/01001388.c) |

Die Exporte stammen aus Ghidra 12.1.4 und Capstone 5.0.9. Automatisch erkannte Funktionen, Typen und Referenzen können unvollständig sein. Nur die im Bericht nachverfolgten Pfade wurden zusätzlich emuliert. Reproduktion: [Methodik](../../docs/reproduce.md).
