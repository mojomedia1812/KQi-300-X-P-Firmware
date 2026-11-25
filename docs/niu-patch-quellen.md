# Prüfung der Anleitungen für NIU Patch und KQi 300X

Recherche- und Prüfstand: **25. November 2026**. Diese Übersicht dokumentiert die öffentlich gefundenen, zugänglichen Anleitungen und deren Abgleich mit der vorhandenen APK. Sie behauptet keine vollständige Erfassung des Internets oder privater Discord-/Telegram-Inhalte.

Die daraus erstellte [Schritt-für-Schritt-Anleitung](niu-patch-anleitung.md) verwendet ausschließlich die APK- und Firmware-Downloads dieses Repositorys. Externe Links auf dieser Seite sind **Quellenbelege**, keine alternativen Download-Empfehlungen.

## Veröffentlichte Anleitungen und ihre Grenzen

| Quelle | Was wurde geprüft? | Konsequenz für unsere Anleitung |
|---|---|---|
| [hjcday: KQi-300-X-P-Firmware](https://github.com/hjcday/KQi-300-X-P-Firmware) | README, regionale Links, Hinweise zum 300P, verlinkte Videos. | Die Deinstallation der Original-App betrifft die frühere APK. Unsere eigene Paketkennung erlaubt parallele Installation. Die Modellgrenze bleibt wesentlich. |
| [jerridev: 300X-US](https://github.com/jerridev/300X-US) | Kurzer Ablauf über Konto, Einstellungen und About. Das Projekt verweist selbst auf einen Nachfolger. | Bestätigt den grundsätzlichen Menüweg. Die alten Download-Adressen werden nicht als unsere Installationsquelle verwendet. |
| [Laufbursche42: niu-update](https://github.com/Laufbursche42/niu-update) | Manual-Update-Anleitung, Meldungen beim Speichern, FOC-Beschreibung und Hinweis auf lokale Versionsdaten. | Die wesentlichen Aussagen zum Speichern und Versionsabgleich wurden zusätzlich im APK-Code geprüft. Die dortige US-Angabe von 32 km/h für den 300X wird durch unsere Firmwareanalyse nicht gestützt. Das Projekt ist archiviert und verweist auf ein anderes Werkzeug. |
| [Jupoma: KQi 300X US Mode](https://www.jupoma.de/niu-kqi-300x-tuning-us-mode/) | Hauptanleitung und öffentlich sichtbare Kommentare. | Die Seite nennt die drei Regionen und beschreibt den OTA-Ansatz. Aussagen über Zero-Start, Tempomat und Licht sind kein hier erbrachter Funktionsnachweis. Hinweise auf mobile Daten sind Verbindungsversuche; Entbinden und neue Konten werden nicht als normale Fehlerbehebung übernommen. |
| [eScooter-Stammtisch: 300X-/300P-Tuningoptionen](https://www.escooter-stammtisch.de/forum/index.php?thread/2812-niu-kqi-300p-kqi-300x-escooter-schneller-machen-tuning-optionen/=) | Öffentlich sichtbare Schrittfolge und Diskussion. | Die Quelle verwendet die alte APK und nennt die Deinstallation. Das gilt nicht für NIU Patch. Ein Aufruf zum Sichern von Schlüsseln vor dem Empfang passender Daten benötigt einen Erfolgskontrollpunkt. Aussagen für andere Modelle werden nicht auf den 300X übertragen. |
| [eScooter-Stammtisch: kein US-Angebot bei KBE38D05](https://www.escooter-stammtisch.de/forum/index.php?postID=117072&thread%2F3843-niu-kqi-300x-de-us-firmware-ben%C3%B6tige-hilfe%2F=) | Öffentlich sichtbarer Nutzerbericht über ausbleibendes Update trotz Verbindung. | Belegt einen berichteten Problemfall, keine bewiesene Ursache oder Lösung. Insbesondere ist eine Änderung von Zeitstempeln damit nicht gerechtfertigt. |
| [NIU-Support: fehlgeschlagenes KQi-Firmwareupdate](https://niumobility.freshdesk.com/en/support/solutions/articles/43000646166-i-get-the-error-message-scooter-firmware-upgrade-on-the-mobile-app-was-unsuccessful-what-should-i-) | Herstellerhinweis auf Internetverbindung und eingeschalteten Bildschirm. | Diese beiden Bedingungen werden in den Ablauf aufgenommen. Der allgemeine Hinweis garantiert keine Wiederherstellung eines fehlerhaft beschriebenen Controllers. |
| [NIU AU: Produktanleitung KQi 300X](https://support.niu-mobility.com.au/support/solutions/articles/154000233010-niu-kqi300x-product-manual) | Hersteller-/Distributor-Seite gefunden. Der PDF-Abruf scheiterte an der Weiterleitung. | Keine nicht gelesenen PDF-Anweisungen als geprüft ausgegeben. Aus dieser Quelle wird insbesondere keine Akku-Mindestgrenze abgeleitet. |

## Gefundene Videos: keine vorgetäuschte Sichtprüfung

- [Spanisches, in den Firmware-Repos verlinktes Tutorial](https://www.youtube.com/watch?v=40BTCnkcEHg): direkter Seitenabruf nicht erfolgreich; der tatsächliche Bildablauf konnte in dieser Recherche nicht vollständig geprüft werden.
- [Aiden Amur: KQi 300X Scooter Firmware](https://www.youtube.com/watch?v=GPu56XE8uBI): Suchmetadaten beschreiben den Wechsel eines australischen 300X von EU zu US. Direkter Videoabruf nicht erfolgreich; deshalb kein Nachweis sämtlicher Klicks oder einer Funktion mit unserer umbenannten APK.
- [NIU Mobility AU & NZ: Firmwareupdate](https://www.youtube.com/watch?v=FBGTzWx9mfU): Hersteller-Video über reguläre Updates gefunden. Kein Nachweis des Manual-Update-Mods und keine vollständige Sichtprüfung des Videos.

Geschlossene Community-Kanäle wurden nicht betreten. Die Nachfolge-Webseite des archivierten niu-update-Projekts wurde aufgerufen; sie ist ein anderes Werkzeug und bildet nicht den hier angefragten APK-Ablauf ab.

## Eigene Prüfung an der APK

Prüfobjekt ist das [Release niu-patch-v4.8.12-r1](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/tag/niu-patch-v4.8.12-r1). Die [Release-Identität](niu-patch.md) und [Metadaten](../apps/niu-patch/release.json) nennen Hash, Paket und Signatur. Die Basis-APK wurde mit Apktool 3.0.3 in Ressourcen und Smali zerlegt. Die relevanten Programmteile wurden gelesen; sie wurden für diese Recherche nicht verändert. Die angepasste Paketkennung und Manifest-Umbenennung ändern die hier untersuchten Schaltflächen und Methoden nicht.

| Nachweisstelle | Festgestelltes Verhalten | Bedeutung |
|---|---|---|
| `res/layout/settings_activity.xml`, `SettingsActivity.onClick` | Der About-/Über-Eintrag startet `com.example.myapplication.ManualUpdate`. | Richtiger Einstieg sind die App-Einstellungen. |
| `res/layout/activity_manual_update.xml`, `ManualUpdate.onCreate` | Titel und englische Bedienelemente der Manual-Update-Seite sind vorhanden. Das Eingabefeld hat außerdem einen alten KQi3-Beispieltext als Platzhalter. | Diesen Beispieltext nicht mit der gewünschten 300X-Adresse verwechseln. |
| `ManualUpdate.loadManualUpdate`, `saveLink` | Nichtleere Eingabe mit enthaltenem `.json` wird gespeichert. Es erfolgt hier kein Netzwerkaufruf zum Prüfen der Datei und kein Aufruf zum Flashen. | Der erste Update-Knopf speichert lediglich die Adresse. |
| `ManualUpdate.saveLink`, `SharedPref.delete` | Leere bzw. nicht passende Eingabe entfernt die manuelle Quelle. Eine kurze Meldung zeigt die gespeicherte Adresse oder einen Eingabefehler. | Bewusstes Leeren nach Abschluss ist möglich. Der Fehlertext ist dabei erwartet. |
| `ManualUpdate.onCreate` | Keine Wiederbefüllung des Eingabefelds aus der gespeicherten Einstellung. | Das Feld kann trotz gespeicherter Quelle leer aussehen. |
| `ManualUpdate.copyBT`, `copyToClipboard`, `SharedPref.writeBle` | Bereits erfasste BLE-Daten werden kopiert. Ohne gespeicherte Daten wird eine Fehlermeldung angezeigt. Die Erfassung sucht in einer Antwort nach `bleAes`. | Schlüssel erst nach dem Empfang passender Daten sichern und den Inhalt überprüfen. Dies ist keine neu erzeugte Firmware-Sicherung. |
| `com.niu.cloud.k.p.X1`, `com.niu.cloud.p.i0.h.I` | Die manuelle Quelle ersetzt den regulären `v5/ota/checkupdate`-Abruf. Der untersuchte HTTP-Helfer verändert bei gesetzter Quelle außerdem seinen POST-Aufbau. | Vorher anmelden, Quelle nur für den Vorgang setzen und nachher entfernen. Auswirkungen auf sämtliche übrigen API-Funktionen wurden nicht vollständig untersucht. |
| `com.niu.cloud.k.p$a`, `com.niu.cloud.o.e.o` | Ein Vergleich zwischen angebotener Version und einem lokal gespeicherten Wert pro Seriennummer und Komponententyp kann `hasnew` zurücksetzen. | „Kein Update“ ist nicht automatisch ein Beweis der installierten Ziel-Firmware. |
| `SkateOtaActivity`, `res/layout/skate_manager_main_activity.xml`, `res/layout/skate_ota_activity.xml` | Einstieg über Verwalten/Firmwareaktualisierung, eigener Knopf Jetzt aktualisieren, Download- und Updatezustände, Erfolgs- und Fehlertexte. | Speichern und eigentliche Übertragung werden im Ablauf getrennt. |
| `SkateOtaActivity` mit `FOC` und `PN_150` | Die sichtbare Komponente wird als Motor Controller beschriftet, intern FOC. | Nicht verlangen, dass die Benutzeroberfläche zwingend den Text FOC zeigt. |

Die Hinweise zur Nähe des Handys, ungestörtem Ablauf, Ladezustandsreserve, dem Vermeiden paralleler Bluetooth-Verbindungen und der konservativen Erstprüfung sind praktische Arbeitsvorgaben dieser Anleitung. Die Prozent- und Abstandsempfehlungen werden ausdrücklich nicht als aus dem Fahrzeug ausgelesene technische Grenzwerte dargestellt.

## Was damit nicht nachgewiesen ist

### Ergänzung durch Geräteaufnahmen am 25. November 2026

Nach der ursprünglichen Recherche wurde das Samsung SM-N981B mit Android 13 erneut angeschlossen. Die veröffentlichte NIU Patch r1 wurde über die vorherige Parallel-App installiert; die vorhandene Anmeldung blieb dabei erhalten. Der SHA-256-Wert der auf dem Handy installierten APK entspricht dem Release. Die Anmeldung, Profil-/Einstellungsseite, Manual-Update-Seite und Fahrzeugverwaltung wurden geöffnet und aufgenommen. Die Original-App blieb installiert. **Das ist ein zusätzlicher Gerätetest der umbenannten APK**, kein vollständiger Flash-Test.

Die [bebilderte Anleitung](niu-patch-anleitung.md) und die [Bildherkunft](assets/niu-patch/README.md) dokumentieren den Ablauf. Am Gerät war der intern gesetzte Titel **Niu Manual Update** nicht als Überschrift sichtbar; diese frühere Formulierung wurde korrigiert. Der direkte Weg **Ich → Mein Gerät → vorhandener Roller → Verwalten → Firmwareaktualisierung** wurde geprüft. Ohne erreichbaren Roller verhinderte die Bluetooth-Abfrage den Wechsel zur eigentlichen Firmwareseite.

### Weiterhin offen

- Kein vollständiger Flash-Test dieser umbenannten APK am KQi 300X. Bei der ursprünglichen Recherche war kein Android-Gerät über ADB verbunden; bei den späteren Aufnahmen war das Handy verbunden, der Roller jedoch nicht erreichbar.
- Keine Garantie für aktuelle NIU-Serveranmeldung, jede Android-Version, jeden Hardwarestand oder jede bereits installierte Firmware.
- Keine universelle Lösung für ausbleibende Angebote, Kontosperren oder einen unterbrochenen Flash.
- Kein vollständiger Rückweg durch Einspielen der DE-Datei und kein Nachweis eines dadurch vollständig wiederhergestellten Werkszustands.
- Keine eigenen GPS-Fahrmessungen der drei Regionen. Die [Firmwareanalyse](speed-limits.md) und [EU-Auswertung](eu-speed-limits.md) bleiben von Nutzerberichten und Fahrtests unterscheidbar.
