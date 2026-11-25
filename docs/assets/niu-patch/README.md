# Herkunft der NIU-Patch-Bildfolge

Aufnahmen vom **25. November 2026**, Samsung **SM-N981B**, Android **13**, NIU Patch **4.8.12 r1**, deutsche Sprache mit englischen Fallback-Beschriftungen. Die auf dem Handy installierte APK wurde per SHA-256 mit dem veröffentlichten Release abgeglichen: `c2fcef9bd1d2b23cf47e9213cefc907b760f94266b49c39d3a3b574aa32471b2`.

Die Anmeldung im bestehenden Konto und das Öffnen der abgebildeten Menüs funktionierten. Die offizielle NIU-App blieb daneben installiert. Der Roller war bei diesen Aufnahmen nicht erreichbar. Eine Eingabe im JSON-Feld diente nur dem Bild; **Update wurde dabei nicht gedrückt**. Es wurde keine manuelle Update-Quelle gespeichert, keine Firmwareübertragung gestartet und keine Schlüsselsicherung in die Veröffentlichung kopiert.

## Bearbeitung und Datenschutz

- Die PNGs von Android-App-Info, Fahrzeugansicht, Einstellungen und den zwei Zuständen der Manual-Update-Seite sind unveränderte Geräteaufnahmen per `adb shell screencap -p`.
- **Profil und Fahrzeugverwaltung wurden mit dem eingebauten imagegen-Werkzeug anonymisiert.** Kontoname sowie Werte von S/N, VIN und Akku-Nr. wurden geschwärzt. Die Bearbeitung änderte auch Auflösung und Bilddarstellung; diese zwei PNGs sind **nicht pixelidentisch** mit der Geräteaufnahme. Die relevanten Knöpfe, Menütexte und Positionen wurden visuell mit den privaten Originalaufnahmen abgeglichen. Sie sind als anonymisiert beschriftet.
- Es werden ausschließlich die anonymisierten Fassungen dieser beiden Ansichten veröffentlicht. Die privaten Rohaufnahmen und UI-Dumps mit Kontodaten oder Fahrzeugkennungen gehören nicht in dieses Repository. Schwärzungen sind Bestandteil der veröffentlichten PNGs, keine entfernbaren SVG-Abdeckungen über privaten Originaldaten.
- Die Markierungen selbst sind SVG-Rahmen, Pfeile und Zahlen. Der Pfeil endet innerhalb des jeweiligen Tippbereichs. Das SVG enthält eine unveränderte Kopie des **jeweils zur Veröffentlichung geprüften** PNGs; bei den beiden anonymisierten Bildern also dessen bearbeitete Fassung. Keine Update-Angebote, Fahrzeugversionen oder Erfolgsmeldungen wurden erfunden.
- Der dunkle Modus und die gemischtsprachigen Texte entsprechen dem vorhandenen Gerät. Eine Geräteanzeige ohne Verbindung darf nicht als aktueller Fahrzeugstatus gelesen werden.

Die Referenzkoordinaten der Tippbereiche stammen aus den am Gerät erfassten Bedienelementen. Die Pfeilziele der anonymisierten Fassungen wurden zusätzlich visuell geprüft. Die SVGs werden in einer Referenzfläche von 1080 × 2400 dargestellt und besitzen eine kompakte Anzeigegröße für GitHub.

## Dateien und Reproduktion

[manifest.json](manifest.json) enthält öffentliche Bildprüfsummen, Auflösungen, Release-Identität und den Aufnahmezustand. [redaction-prompts.json](redaction-prompts.json) dokumentiert die beiden verwendeten Bildbearbeitungs-Prompts. Die Bilddateien liegen in [screens](screens/). Die Rohdaten der privaten Originale werden dafür nicht benötigt oder bereitgestellt.

Die Markierungen lassen sich ohne zusätzliche Python-Pakete aus dem Repository-Verzeichnis erneut erzeugen:

```sh
python analysis/scripts/build_screenshot_overlays.py
```

Das Skript prüft die öffentlichen PNG-Hashes und ergänzt ausschließlich Vektorelemente. Es erzeugt die Anonymisierung nicht erneut. Die SVG-Bilder enthalten ihre PNGs als eingebettete Daten, damit sie beim Anzeigen keine externen Ressourcen nachladen.

## Grenze der Bildfolge

**Nicht aufgenommen:** ein neu angebotenes FOC-Update, ein Bestätigungsdialog zum Flash, Fortschrittsanzeige und Erfolgsmeldung. Dafür ist ein erreichbarer passender Roller erforderlich. Die Aufnahme der Fahrzeugverwaltung belegt den Einstieg und den nicht verbundenen Zustand, keinen erfolgreichen Flash. Der spätere Knopf **Jetzt aktualisieren** ist deshalb in diesen Bildern nicht dargestellt und nicht mit Markierung 10 zu verwechseln.

Zurück zur [vollständigen Anleitung](../../niu-patch-anleitung.md).
