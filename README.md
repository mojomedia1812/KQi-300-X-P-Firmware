# NIU KQi 300X Firmware und Codeanalyse

Regionale FOC-Firmwaredateien für den Motorcontroller des **NIU KQi 300X**, die angepasste **NIU Patch APK**, passende Update-Beschreibungen und eine reproduzierbare Analyse der **DE-, EU- und US-Version**. Alle Firmware-, APK- und Update-Links verweisen auf **[dieses Repository](https://github.com/mojomedia1812/KQi-300-X-P-Firmware)**.

## NIU Patch APK parallel zur offiziellen NIU App

> [!IMPORTANT]
> **NIU Patch kann gleichzeitig neben der offiziellen NIU-App installiert werden.**
> **Die offizielle NIU-App bleibt installiert.** Beide Apps besitzen getrennte Paketkennungen und lokale App-Daten. Offizielle NIU-Updates ersetzen NIU Patch deshalb nicht.

**[NIU Patch APK herunterladen](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v4.8.12-r1/NIU_Patch.apk)** · [Release und Prüfsummen](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/tag/niu-patch-v4.8.12-r1) · [Installation und Details](docs/niu-patch.md)

**[Ausführliche Schritt-für-Schritt-Anleitung für den KQi 300X](docs/niu-patch-anleitung.md)** — mit Kontrollpunkten, DE-/EU-/US-Links, Schlüsselsicherung und Fehlerhilfe. Der [Quellenabgleich](docs/niu-patch-quellen.md) trennt am APK-Code geprüfte Abläufe, externe Berichte und ungetestete Fahrzeugfunktionen.

Basis ist die angepasste NIU-Version **4.8.12**. Die App erscheint als **NIU Patch** und verwendet `com.niu.lxckb9p`; die offizielle App verwendet `com.niu.manager`. Wer bereits **NIU Parallel** aus diesem Projekt installiert hat, kann diese APK als Update darüber installieren. Paketkennung und Signaturschlüssel bleiben gleich, sodass die vorhandenen lokalen App-Daten erhalten bleiben.

## Firmware Analyse im Überblick

Im normalen schnellen Fahrmodus beträgt der maximale interne Geschwindigkeitssollwert **3560 für DE, 4160 für EU und 6288 für US**. Die eigene Telemetrieumrechnung bildet diese auf **21,7 / 25,4 / 38,4 km/h** ab. Die nominellen Custom-Grenzen sind **20,0 / 25,0 / 38,0 km/h**; DE verwendet eine zusätzliche Korrektur. Ein Nutzer berichtete etwa 21 km/h DE und 38 km/h US. Unabhängige Fahr- oder GPS-Messprotokolle, insbesondere für EU, liegen nicht vor.

## Firmware und Update Links

| Region | Firmware | Version laut Update-Beschreibung | Größe | Geschwindigkeitsangabe und Nachweis |
|---|---|---|---:|---|
| DE | [KBE38M02.bin](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/DE/KBE38M02.bin) | `KBE38D05` | 29.696 Byte | etwa 21 km/h berichtet; 21,7 km/h in der analysierten Telemetrieskala |
| EU | [KBE01M02.bin](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/raw/refs/heads/main/300X/EU/KBE01M02.bin) | `KBE01D03` | 29.696 Byte | 25,0 km/h nominell; 25,4 km/h in der analysierten Telemetrieskala, im Emulator verifiziert |
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
| EU-Codeanalyse und Vergleich mit DE und US | [EU-Firmware](docs/eu-speed-limits.md) |
| Analyse und Ghidra-Projekte erneut erzeugen | [Methodik und Reproduktion](docs/reproduce.md) |
| Herkunft, Prüfsummen und Nachweisstatus | [Quellen](docs/provenance.md) |
| JSON-Berichte und vollständiger Bytevergleich | [Analyseergebnisse](analysis/results/) |
| Disassemblierung, Decompilate und Referenzen | [Codebelege](analysis/evidence/) |

Die Rohdateien von **US und DE** unterscheiden sich an 94,99 % der Positionen. Nach Rückgängigmachen ihrer additiven Kodierung und Ausrichtung verschobener Abschnitte lassen sich **26.907 gleiche Bytes** zuordnen: 94,20 % der US- und 95,10 % der DE-Nutzdaten. Das beschreibt Bytefolgen, nicht den Anteil funktional identischer Software.

Die einstellbare Geschwindigkeit besitzt zusätzliche Grenzen: US **38,0 km/h**, EU **25,0 km/h**, DE **20,0 km/h mit anschließender Korrektur um den Faktor 35/32**. Die Unterschiede zwischen normalem und Custom-Fahrmodus erläutert die [Detailanalyse](docs/speed-limits.md). Der [maschinenlesbare Drei-Regionen-Vergleich](analysis/results/regional-speed-comparison.json) wird aus der Emulation erzeugt.

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

