# NIU Patch APK

**NIU Patch lässt sich parallel zur offiziellen NIU-App installieren.** Die offizielle App bleibt auf dem Gerät. NIU Patch ist eine inoffiziell angepasste APK auf Basis der NIU-Version **4.8.12**, mit eigenständiger Android-Paketkennung und dem sichtbaren Namen **NIU Patch**.

> [!IMPORTANT]
> **Beide Apps können gleichzeitig installiert sein.** Ihre unterschiedlichen Paketkennungen verhindern, dass ein Update der offiziellen NIU-App die Patch-App ersetzt. Die lokalen App-Daten und Berechtigungen werden von Android getrennt verwaltet.

## Download

Für den vollständigen Ablauf am KQi 300X: **[Schritt-für-Schritt-Anleitung](niu-patch-anleitung.md)**. Der [Quellenabgleich](niu-patch-quellen.md) erklärt, was direkt an der APK geprüft und was nicht am Fahrzeug getestet wurde.

**[NIU Patch APK herunterladen](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v4.8.12-r1/NIU_Patch.apk)**

- [Release niu-patch-v4.8.12-r1](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/tag/niu-patch-v4.8.12-r1)
- [SHA256SUMS.txt](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v4.8.12-r1/SHA256SUMS.txt)
- [Bereinigter Prüfbericht](https://github.com/mojomedia1812/KQi-300-X-P-Firmware/releases/download/niu-patch-v4.8.12-r1/NIU_Patch_verification.json)
- [Maschinenlesbare Release-Daten](../apps/niu-patch/release.json)

## Installation neben der offiziellen App

1. Die offizielle **NIU-App installiert lassen** und die APK über den Download-Link herunterladen.
2. `NIU_Patch.apk` auf dem Android-Gerät öffnen und installieren.
3. Die zusätzliche App **NIU Patch** starten. Bei einer Neuinstallation erfolgt ihre Anmeldung separat; die offizielle App behält ihre lokalen Daten.

| Eigenschaft | Offizielle NIU App | NIU Patch |
|---|---|---|
| Android-Paketkennung | `com.niu.manager` | `com.niu.lxckb9p` |
| Sichtbarer App-Name | NIU | NIU Patch |
| Lokale Daten | eigener Android-App-Speicher | eigener Android-App-Speicher |
| Update-Zuordnung | offizielle NIU-Paketkennung | eigene Paketkennung und eigener Signaturschlüssel |

Diese Veröffentlichung setzt keine Änderung oder Deinstallation der offiziellen App voraus.

## Update der bisherigen NIU Parallel

Die zuvor als **NIU Parallel** bezeichnete APK verwendet bereits `com.niu.lxckb9p`. Die Veröffentlichung **NIU Patch 4.8.12 r1** behält diese Paketkennung und denselben Signaturschlüssel bei. Sie kann daher als Update über die vorhandene Parallel-App installiert werden; deren lokale App-Daten und Anmeldung bleiben erhalten.

Der sichtbare Name ändert sich auf **NIU Patch**. Gegenüber der vorherigen Parallel-APK wurden innerhalb der App-Inhalte nur das Android-Manifest und die zum erneuten Signieren nötigen Signaturdaten verändert. Programmcode, Ressourcen und native Bibliotheken sind inhaltlich identisch zur bisherigen Parallel-Version.

## Release Identität und Prüfung

| Merkmal | Wert |
|---|---|
| Release-Tag | `niu-patch-v4.8.12-r1` |
| Datei | `NIU_Patch.apk` |
| Basis-App-Version / Android versionCode | `4.8.12` / `50040812` |
| Dateigröße | 72.602.525 Byte |
| SHA-256 der APK | `c2fcef9bd1d2b23cf47e9213cefc907b760f94266b49c39d3a3b574aa32471b2` |
| SHA-256 des Signaturzertifikats | `93b7b25c99cbbdd71d97bb4f73edaa70572d5a7c88a111c0ea9199345b6f2cd3` |
| Geprüfte APK-Signaturen | v1, v2 und v3 |
| ZIP-Ausrichtung | `zipalign -c -P 16 4` bestanden |

Zum Zeitpunkt der Release-Erstellung wurden ZIP-Integrität, DEX-Prüfsummen, Paketkennung, Launcher-Name und konfliktfreie Provider-Namen gegenüber der offiziellen NIU 5.12.2 geprüft. Die Vorgängerversion **NIU Parallel** war neben der offiziellen **NIU 5.12.2** unter Android 13 installiert und beide Apps wurden erfolgreich gestartet. Für die ausschließlich umbenannte APK lag damals kein zusätzlicher Gerätetest vor; ihre Inhaltsidentität außerhalb des Manifests und die unveränderte Signatur wurden geprüft. Anmeldung und Fahrzeugfunktionen wurden in dieser ursprünglichen Prüfung nicht vollständig getestet. Den späteren Gerätetest dokumentiert der Nachtrag unten.

Die Release-Assets enthalten die signierte APK, Prüfsummen und den öffentlichen Prüfbericht. Der private Signaturschlüssel gehört nicht zum Release.

**Nachtrag vom 25. November 2026:** Für die [bebilderte Anleitung](niu-patch-anleitung.md) wurde das veröffentlichte r1-Release anschließend auf dem Samsung SM-N981B mit Android 13 als Update installiert. Der APK-Hash auf dem Gerät stimmt mit dem Release überein. Anmeldung und die gezeigten Bedienseiten funktionierten, die Original-App blieb parallel installiert. Der Roller war dabei nicht erreichbar; es wurde kein Firmware-Flash getestet. Der ältere Release-Prüfbericht beschreibt weiterhin den Stand zum Zeitpunkt seiner Erstellung. [Bildherkunft und Prüfgrenzen](assets/niu-patch/README.md).
