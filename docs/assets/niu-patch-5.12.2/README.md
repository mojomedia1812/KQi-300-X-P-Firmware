# Aktuelle Bildfolge: NIU Patch 5.12.2 r1

Geräteaufnahmen vom **25. November 2026**, Samsung **SM-N981B**, Android **13**, angemeldete **NIU Patch 5.12.2**, Paket `com.niu.lxckb9p`. Der SHA-256-Wert der auf dem Gerät installierten APK stimmt mit dem [Release](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/tag/niu-patch-v5.12.2-r1) überein:

```text
fee47a901ec2dbbee9817afbc964266bf218412caf0a2658c99c51bb1e114a2d
```

Die [aktuelle Anleitung](../../niu-patch-anleitung.md) verwendet zwölf Abbildungen aus elf öffentlichen Quell-PNGs. Das Profil wird zweimal verwendet, jeweils in einem **eigenen Export mit einer einzigen Aktion**: einmal Einstellungen, später Fahrzeugauswahl. Die Aufnahme der Fahrzeugverwaltung zeigt 5.12.2, keine wiederverwendete 4.8.12-Ansicht.

## Aufnahmezustand und tatsächliche Bedienung

- **Kein Roller verbunden, kein Flash gestartet.** Die Fahrzeugansicht zeigt Offline und gespeicherte Werte. Auch die Versions-/Konfigurationsangaben sind kein aktuelles Auslesen des nicht erreichbaren Rollers.
- Der Weg **Ich → Einstellungen → Über** wurde in der veröffentlichten App geöffnet. Die Menüseite zeigt 5.12.2.
- Für die Aufnahmen wurde **US** als Beispiel ausgewählt und **Quelle prüfen und aktivieren** tatsächlich ausgeführt. Die App bestätigte JSON und BIN-Prüfsumme für `KBE13D03`, 29.696 Byte.
- **Interner Test – ohne Roller** wurde ausgeführt. Die abgebildete Erfolgsmeldung stammt vom tatsächlichen NIU-Parser-Test mit synthetischen Daten; sie ist keine Fahrzeug-Erfolgsmeldung.
- Der Knopf **Zurück zur NIU-App** wurde nach leichtem Scrollen aufgenommen. Vom Über-Menü führt er zunächst zu den Einstellungen zurück; der Zurück-Pfeil führt zum Profil.
- **Mein Gerät → KQi 300X → Verwalten → Firmwareaktualisierung** wurde auch in 5.12.2 geprüft. Ohne Verbindung zeigte die App die Aufforderung zur Bluetooth-Verbindung. Eine Ansicht mit echtem Update-Angebot wurde nicht erreicht.
- Nach den Aufnahmen wurde **Manuelle Quelle deaktivieren** gewählt und **Manuelle Quelle: aus** kontrolliert. Das ist im letzten Bild belegt. Die Original-App bleibt parallel installiert.

## Anonymisierung

Die öffentlichen Dateien `screens/02-profile-anonymized.png` und `screens/10-manage-anonymized.png` wurden mit dem integrierten **imagegen-Bildwerkzeug** anonymisiert. Der Kontoname im Profil und die Werte für **S/N und VIN** in der Fahrzeugverwaltung sind durch feste schwarze Flächen ersetzt. Die betreffenden Zeichen sind nicht nur durch darübergelegte SVG-Elemente versteckt.

Die Bildbearbeitung änderte auch Auflösung und Darstellung dieser beiden PNGs. Sie sind **nicht pixelidentisch** mit der ursprünglichen Geräteaufnahme. Relevante Beschriftungen, Anordnung und Pfeilziele wurden visuell mit den privaten Originalen abgeglichen. Sie dokumentieren die echten Ansichten mit offengelegter Anonymisierung, keine unveränderten Rohaufnahmen. Die [Bearbeitungsanweisungen](redaction-prompts.json) nennen ausschließlich die zu schwärzenden Bereiche und enthalten keine Kennungen.

Alle anderen Quell-PNGs unter `screens/` sind unveränderte Geräteaufnahmen per ADB. Private Originale von Profil und Fahrzeugverwaltung, UI-Dumps mit persönlichen Daten, Zugangsdaten und Bluetooth-Schlüssel werden **nicht veröffentlicht**.

## Markierungen, Koordinaten und Prüfung

**Orange** bedeutet tippen: Die Pfeilspitze liegt im betreffenden Bedienelement; die Zahl steht auf einer zusätzlichen weißen Leiste rechts außerhalb der App-Aufnahme. **Grün** bedeutet Status lesen, ohne Tippaktion. Es gibt zehn Tippaktionen und zwei reine Statusbilder.

Die unveränderten öffentlichen PNG-Dateien werden in SVG eingebettet; hinzu kommen ausschließlich Rahmen, Pfeile und Zahlen. Die ursprüngliche Gerätefläche und Markierungsreferenz sind **1080 × 2400** Pixel; anonymisierte Quellen werden auf diese Fläche skaliert. Die zusätzliche Nummernleiste ist 180 Pixel breit. PNG-Exporte haben **1260 × 2400** Pixel und werden in der Anleitung 504 Pixel breit angezeigt. Die Pfeile überdecken keine zu lesenden Knopftexte.

[manifest.json](manifest.json) dokumentiert Release, Aufnahmezustand, öffentliche Quell- und Export-Prüfsummen, Bildgrößen, Pfeilziele und beobachtete Tippbereiche. Es enthält keine privaten UI-Dumps. Die Repository-Prüfung kontrolliert PNG-Identitäten und Linkziele; der SVG-Generator kontrolliert zusätzlich die Pfeilspitzen gegen die dokumentierten Tippbereiche.

SVG-Markierungen aus den bereits geprüften öffentlichen Quellen erneut erzeugen:

```sh
python analysis/scripts/build_modern_screenshot_overlays.py
python analysis/scripts/validate_repository.py
```

Die SVG-Dateien sind die bearbeitbaren Markierungsquellen. Die PNG-Exporte wurden mit lokalem Chrome im Headless-Modus aus diesen SVGs gerendert; dabei wurden keine externen Inhalte geladen. Der SVG-Generator reproduziert weder die Anonymisierung noch automatisch die PNG-Exporte. Ein geänderter Marker benötigt einen neuen PNG-Export samt aktualisierter Prüfsumme.

## Weiterhin fehlende Fahrzeugbilder

Es gibt keine Aufnahme eines tatsächlich angebotenen neuen FOC-Updates, einer Flash-Bestätigung, eines Übertragungsfortschritts oder einer Fahrzeug-Erfolgsmeldung. Für diese Bilder wird ein erreichbarer passender Roller benötigt. Die vorhandene Aufnahme der Fahrzeugverwaltung markiert nur den **Einstieg** zur Firmwareprüfung, keinen Startknopf für die Übertragung.
