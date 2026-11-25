# NIU KQi 300X Firmware und Codeanalyse

Regionale FOC-Firmwaredateien für den Motorcontroller des **NIU KQi 300X**, passende Update-Beschreibungen und eine reproduzierbare Analyse der US- und DE-Version. Alle Firmware- und Update-Links verweisen auf **[dieses Repository](https://github.com/mojomedia1812/KQi-300-X-P-Firmware)**.

Im normalen schnellen Fahrmodus beträgt der maximale interne Geschwindigkeitssollwert **6288 für US** und **3560 für DE**. Die eigene Telemetrieumrechnung bildet diese auf **38,4 beziehungsweise 21,7 km/h** ab. Ein Nutzer berichtete etwa **38 beziehungsweise 21 km/h**; ein unabhängiges Fahr- oder GPS-Messprotokoll liegt nicht vor.

## Firmware und Update Links

| Region | Firmware | Version laut Update-Beschreibung | Größe | Geschwindigkeitsangabe und Nachweis |
|---|---|---|---:|---|
| DE | [KBE38M02.bin](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/DE/KBE38M02.bin) | `KBE38D05` | 29.696 Byte | etwa 21 km/h berichtet; 21,7 km/h in der analysierten Telemetrieskala |
| EU | [KBE01M02.bin](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/EU/KBE01M02.bin) | `KBE01D03` | 29.696 Byte | bisherige Angabe 25 km/h; nicht durch diese Codeanalyse verifiziert |
| US | [KBE13M02.bin](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/US/KBE13M02.bin) | `KBE13D03` | 29.696 Byte | etwa 38 km/h berichtet; 38,4 km/h in der analysierten Telemetrieskala |

Direkte Update-Beschreibungen:

- **DE:** [300X/DE/update.json](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/DE/update.json)
- **EU:** [300X/EU/update.json](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/EU/update.json)
- **US:** [300X/US/update.json](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/US/update.json)

Die JSON-Dateien beschreiben ausschließlich `FOC`. Dateigrößen und MD5-Werte werden gegen die BIN-Dateien geprüft. Die unterschiedlichen `date`-Felder wurden aus dem Bestand übernommen und nicht als gesicherte Veröffentlichungsdaten interpretiert.

## Ergebnisse und Belege

| Thema | Dokumentation |
|---|---|
| Aufbau, Kodierung, Versionen und Byteunterschiede | [Firmwarevergleich](docs/firmware-comparison.md) |
| Begrenzungsstellen, Dateioffsets und Reglerpfad | [Geschwindigkeitsbegrenzung](docs/speed-limits.md) |
| Analyse und Ghidra-Projekte erneut erzeugen | [Methodik und Reproduktion](docs/reproduce.md) |
| Herkunft, Prüfsummen und Nachweisstatus | [Quellen](docs/provenance.md) |
| JSON-Berichte und vollständiger Bytevergleich | [Analyseergebnisse](analysis/results/) |
| Disassemblierung, Decompilate und Referenzen | [Codebelege](analysis/evidence/) |

Die Rohdateien unterscheiden sich an 94,99 % der Positionen. Nach Rückgängigmachen ihrer additiven Kodierung und Ausrichtung verschobener Abschnitte lassen sich **26.907 gleiche Bytes** zuordnen: 94,20 % der US- und 95,10 % der DE-Nutzdaten. Das beschreibt Bytefolgen, nicht den Anteil funktional identischer Software.

Die einstellbare Geschwindigkeit besitzt zusätzliche Grenzen: US **38,0 km/h nominell**, DE **20,0 km/h nominell mit anschließender Korrektur um den Faktor 35/32**. Die Unterschiede zwischen normalem und Custom-Fahrmodus erläutert die [Detailanalyse](docs/speed-limits.md).

## Umfang und Kompatibilität

- Im Repository liegen **300X-Dateien**. Eine eigenständige 300P-Firmware ist hier nicht vorhanden. Die Kompatibilität der 300X-Dateien mit dem 300P wurde nicht nachgewiesen.
- Die früheren pauschalen Angaben zu Tempomat und Halo-Tagfahrlicht sind für diese konkreten Dateien nicht vollständig verifiziert. Die Analyse zeigt Änderungen an der Zustandslogik, ersetzt aber keinen Funktionstest dieser Merkmale.
- Die Emulation führt Originalbefehle mit synthetischen RAM-Eingaben aus. Fahrzeugmechanik, Akkuzustand, Messgenauigkeit und Straßenverhalten werden damit nicht simuliert.
- Die BIN-Dateien wurden für diese Veröffentlichung **nicht verändert**. Prüfsummen bestätigen die Übereinstimmung mit dem Repository-Bestand, keine Herstellersignatur.

## Prüfung ausführen

Python 3.12 oder neuer, aus dem Repository-Verzeichnis:

```sh
python -m pip install -r analysis/requirements.txt
python analysis/scripts/validate_repository.py
python analysis/scripts/analyze.py
python analysis/scripts/decode_compare.py
python analysis/scripts/emulate_limits.py
```

Die CI führt dieselben Prüfungen aus. Die Skripte analysieren lokale Dateien und schreiben Berichte; sie verbinden sich nicht mit einem Fahrzeug. Weitere Schritte stehen unter [Methodik und Reproduktion](docs/reproduce.md).

