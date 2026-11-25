# NIU Patch 5.12.2 APK

**NIU Patch lässt sich parallel zur offiziellen NIU-App installieren.** Die offizielle App bleibt auf dem Gerät. Dieses inoffiziell angepasste Release basiert auf **NIU 5.12.2**, heißt **NIU Patch** und aktualisiert die bisherige NIU Patch / NIU Parallel aus diesem Projekt.

> [!IMPORTANT]
> **Parallel zur Original-App, als Update über die bisherige Patch-App.** NIU verwendet `com.niu.manager`, NIU Patch verwendet `com.niu.lxckb9p`. Die getrennten Paketkennungen verhindern, dass offizielle NIU-App-Updates NIU Patch ersetzen. Die bisherige Patch-App vor dem Update **nicht deinstallieren**, damit ihre Android-Appdaten erhalten bleiben.

## Download und Voraussetzungen

**[NIU Patch 5.12.2 APK herunterladen](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v5.12.2-r1/NIU_Patch.apk)**

- [Release niu-patch-v5.12.2-r1](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/tag/niu-patch-v5.12.2-r1)
- [SHA256SUMS.txt](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v5.12.2-r1/SHA256SUMS.txt)
- [Öffentlicher Prüfbericht im Release](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v5.12.2-r1/NIU_Patch_verification.json)
- [Prüfbericht im Repository](../apps/niu-patch/verification-5.12.2-r1.json) und [maschinenlesbare Release-Daten](../apps/niu-patch/release.json)
- [Aktuelle Schritt-für-Schritt-Anleitung](niu-patch-anleitung.md)

Erforderlich sind **Android 8 / API 26 oder neuer** und ein **ARM64-Gerät**. Die APK enthält die benötigten ARM64-Bibliotheken; sie ist kein x86- oder reines 32-Bit-Paket.

## Installieren und die bisherige App aktualisieren

1. Die originale **NIU-App installiert lassen** und `NIU_Patch.apk` aus dem aktuellen Release herunterladen.
2. Eine bisherige **NIU Patch / NIU Parallel** dieses Projekts mit `com.niu.lxckb9p` ebenfalls installiert lassen.
3. Die APK auf dem Android-Gerät öffnen und **Aktualisieren / Installieren** wählen. Paketkennung und Signatur sind unverändert, der Versionscode steigt von `50040812` auf `51051202`.
4. **NIU Patch** öffnen. Bei einer Neuinstallation ist eine eigene Anmeldung erforderlich. Beim geprüften Update blieben die bisherigen Appdaten und die Anmeldung erhalten; falls die App erneut zur Anmeldung auffordert, das bestehende Konto verwenden.
5. **Profil/Ich → Einstellungen → Über** öffnen und die neue Menüseite **NIU Patch**, Version **5.12.2**, kontrollieren.

| Eigenschaft | Offizielle NIU-App | NIU Patch |
|---|---|---|
| Android-Paketkennung | `com.niu.manager` | `com.niu.lxckb9p` |
| Sichtbarer App-Name | NIU | NIU Patch |
| Lokale Daten und Anmeldung | eigener Android-App-Speicher | eigener Android-App-Speicher |
| App-Updates | offizieller NIU-Signaturschlüssel | gleicher eigener Schlüssel wie die bisherige Patch-App |

Die vorläufig separat installierte **NIU Patch 5** mit `com.niu.patchv5` ist nicht das Zielpaket dieses Releases. Wer sie noch verwendet, installiert und prüft zuerst die neue **NIU Patch** und entfernt anschließend nur die separate Test-App. Ihre eigenen Daten und ihre Anmeldung werden nicht zwischen Paketen übertragen. Auf dem Testhandy ist diese Umstellung bereits erfolgt.

## Neues Menü für die manuelle Firmwarequelle

1. **Profil/Ich → Einstellungen → Über → NIU Patch** öffnen.
2. **DE**, **EU** oder **US** wählen. Das füllt die Adresse der vorgesehenen `update.json` aus diesem Repository ein und deaktiviert eine vorherige manuelle Quelle.
3. **Quelle prüfen und aktivieren** wählen. Die App prüft Descriptor-Felder, FOC-Zielversion, Download-Adresse, BIN-Größe und MD5. Nur bei erfolgreicher Prüfung wird die vorbereitete Antwort aktiviert.
4. Den Status **Aktiv: …** und die richtige Zielversion kontrollieren. Dies allein schreibt keine Firmware auf den Roller.
5. Optional **Interner Test – ohne Roller** wählen. Der enthaltene NIU-Parser muss die vorbereitete FOC-Antwort akzeptieren; ein Fahrzeug- oder Bluetooth-Test findet dabei nicht statt.
6. Den weiteren Fahrzeugablauf nur nach der [vollständigen Anleitung](niu-patch-anleitung.md) durchführen. Nach beendetem Vorgang **Manuelle Quelle deaktivieren** und **Manuelle Quelle: aus** kontrollieren.

Der neue Injektionspfad greift nur bei einer passenden NIU-OTA-Abfrage mit erkannter KBE-FOC-Version. Das ist eine Firmwarefamilienprüfung, kein unabhängiger Modellnachweis. Die vorgesehenen Quellen enthalten ausschließlich 300X-FOC-Updates. Nicht passende Anfragen verwenden den ursprünglichen HTTP-Aufruf. Die an das Repository gerichtete Quellenprüfung verwendet keine NIU-Kontoheader oder echten OTA-Anfragedaten.

**Änderungen gegenüber 4.8.12:** Die alten Knöpfe **Update**, **Copy to clipboard** und **Back to main app** sowie das bewusste Leeren des Link-Felds gelten nicht mehr. Die **BT-Secrets-Kopierfunktion wurde nicht übernommen**. Das Deaktivieren der manuellen Quelle setzt keine Roller-Firmware zurück.

## Release-Identität

| Merkmal | Wert |
|---|---|
| Release-Tag | `niu-patch-v5.12.2-r1` |
| Datei | `NIU_Patch.apk` |
| Basis-App-Version / Android versionCode | `5.12.2` / `51051202` |
| Dateigröße | 96.503.576 Byte |
| SHA-256 der APK | `fee47a901ec2dbbee9817afbc964266bf218412caf0a2658c99c51bb1e114a2d` |
| SHA-256 des Signaturzertifikats | `93b7b25c99cbbdd71d97bb4f73edaa70572d5a7c88a111c0ea9199345b6f2cd3` |
| Geprüfte APK-Signaturen | v2 und v3 |
| ZIP-Ausrichtung | `zipalign -c -P 16 4` bestanden |
| Plattform | Android 8 oder neuer, ARM64 |

Die zusammengeführte APK wurde an Manifest, Ressourcen sowie `classes2.dex` und `classes5.dex` angepasst. Die 31 nativen Bibliotheken entsprechen inhaltlich den ursprünglichen 5.12.2-Splits. Dies ist eine neue App-Basis mit neuem Injektionspfad, keine bloße Umbenennung der alten 4.8.12.

## Was wurde geprüft?

Am **25. November 2026** wurde das Release auf dem Samsung **SM-N981B**, Android **13**, als normales Update über NIU Patch 4.8.12 installiert. Android-App-ID und ursprünglicher Installationszeitpunkt blieben erhalten; Appdaten wurden nicht gelöscht. Die App startete ohne erneute Anmeldung. Die installierte APK stimmt per SHA-256 mit der veröffentlichten Datei überein. Die Original-App bleibt parallel installiert; das zusätzliche vorläufige Testpaket wurde entfernt.

Zusätzlich bestanden ZIP-Integrität, alle sieben DEX-Prüfsummen, APK-Signatur und Ausrichtung, 302 Methoden-/Feldreferenzen und 51 Host-Prüfungen der Injektionslogik. Am Handy wurden Menü, US-JSON/BIN-Prüfsumme und ein interner Test mit dem tatsächlichen NIU-Parser geprüft. Die manuelle Quelle wurde danach deaktiviert. Der vorherige Gerätetest der vorläufigen 5.12.2-Variante umfasste außerdem Anmeldung und den vom Nutzer bestätigten Menüweg über **Über**.

**Nicht geprüft:** Bluetooth-Verbindung, tatsächlich am verbundenen KQi 300X angezeigtes Angebot und Firmwareübertragung mit diesem Release. Der Roller war nicht verfügbar. Der interne Test ist kein erfolgreicher Flash und keine Garantie für jeden Hardware-/Firmwarestand.

Die Release-Assets enthalten APK, Prüfsummen, eine Kurzanleitung und den öffentlichen Prüfbericht. Private Signaturschlüssel, Zugangsdaten, Bluetooth-Schlüssel und private Geräteaufnahmen gehören nicht zur Veröffentlichung.

## Historische Version

Das [Release 4.8.12 r1](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/tag/niu-patch-v4.8.12-r1) bleibt unverändert erhalten. Seine [bebilderte Anleitung](niu-patch-anleitung-4.8.12.md) und die [Bildherkunft](assets/niu-patch/README.md) dokumentieren die damalige Oberfläche. Die [Quellenübersicht](niu-patch-quellen.md) trennt diese ältere Recherche vom aktuellen 5.12.2-Prüfstand.
