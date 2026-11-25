# Quellen und Nachweisstatus

Analyse vom **25. November 2026**. Die untersuchten Firmwaredateien stammen aus diesem Repository, Ausgangsstand [`dbe234e74df30c9ce4bdb943d7380210917987f5`](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/commit/dbe234e74df30c9ce4bdb943d7380210917987f5). Dieser Commit identifiziert die Eingabedateien; er enthält noch nicht die später hinzugefügten Analyseberichte.

## Dateien und Prüfsummen

Alle drei Dateien sind 29.696 Byte groß. Die Update-Beschreibungen und Downloads liegen unter [300X](../300X/).

| Region | Datei | MD5 laut Bestand und eigener Berechnung |
|---|---|---|
| DE | [KBE38M02.bin](../300X/DE/KBE38M02.bin) | `f356c2e4fb9a128c1ddf17f7166e57cb` |
| EU | [KBE01M02.bin](../300X/EU/KBE01M02.bin) | `86288174560d2190d75251707ee3996c` |
| US | [KBE13M02.bin](../300X/US/KBE13M02.bin) | `125b01730f8b095d88adca2e800c1426` |

SHA-256:

```text
DE 48533095b473f9ba6ce4e64d9be3ae994ec9f7bc2861b98427f272ade94a525c
EU 9e91ea7dab2050556fcdb967e5573e8b932d9ef2be30d9b55b3aa9cb0de2ad1e
US fbc1390c7f0befbd4e66958a36454cec045d4a0e0517e8dca006b6cf9f169f3e
```

Die Git-Blob-Hashes stimmen mit dem Ausgangscommit überein. Das belegt die Identität der Repository-Dateien, keine Authentifizierung durch den Hersteller. Der Bestand enthält keine für diese Analyse verifizierte Herstellersignatur oder Herstellerfreigabe.

Maschinenlesbare Herkunft, Toolversionen und Prüfsummen: [analysis/manifest.json](../analysis/manifest.json).

## Nachweise und Grenzen

| Aussage | Grundlage |
|---|---|
| Dateigrößen, Hashes, Rohunterschiede, Kennungen | Direkte Dateianalyse |
| Additive Normalisierung der DE-, EU- und US-Nutzdaten | Konsistente Vektortabelle, Thumb-Code, Versionsstrings und exakter Rückweg zu den Originalbytes |
| Begrenzung auf interne Sollwerte 3560 DE, 4160 EU und 6288 US | Codefluss und Originalbefehle im Emulator |
| Übergabe an den Geschwindigkeitsregler | Erfasste Argumente am Reglereintritt |
| Ausgabewerte 217 DE, 254 EU und 384 US | Originale Ausgaberoutine mit synthetischem Istwert am jeweiligen Sollwert |
| Interpretation als 21,7 / 25,4 / 38,4 km/h | Gemeinsame Parameterskala, nominelle Grenzen und dazu passende DE-/US-Nutzerangaben |
| Tatsächliche Fahrt mit etwa 38 US und 21 DE | Nutzerangabe ohne unabhängiges Messprotokoll |
| EU nominell 25,0 km/h, Ausgabe 25,4 km/h am Sollwert | Eigene EU-Codeanalyse und Originalbefehle im Emulator; kein unabhängiger EU-Fahrtest |
| Tempomat und Halo-Tagfahrlicht | Frühere README-Angaben; für diese Dateien nicht vollständig durch Funktionstests verifiziert |
| Einsatz auf KQi 300P | Nicht nachgewiesen; keine eigenständige 300P-Firmware im Bestand |

Insbesondere sind Geschwindigkeitsregler-Vorgaben, Telemetrie, Dashboard-Anzeige und GPS-Messung unterschiedliche Nachweise. Die Emulation bestimmt keine reale Höchstgeschwindigkeit für jede Last, jeden Akkuzustand oder jede Fahrsituation.

## Repository Verweise

Alle aktiven Firmware- und `update.json`-Verweise wurden auf **mojomedia1812/KQi-300-X-P-Firmware** umgestellt, einschließlich EU. Historische Download- und Videoempfehlungen wurden aus der Startseite entfernt; sie sind keine Voraussetzung für die Reproduktion dieser Dateianalyse. Frühere Inhalte bleiben über die Git-Historie dieses Repositories nachvollziehbar.

Die `version`-, `date`-, `size`- und `md5`-Felder der Update-Beschreibungen bleiben erhalten. Nur die Download-URLs wurden geändert. Insbesondere wurden die unterschiedlich skalierten Datumswerte nicht vereinheitlicht oder in neue Veröffentlichungsbehauptungen umgedeutet.
