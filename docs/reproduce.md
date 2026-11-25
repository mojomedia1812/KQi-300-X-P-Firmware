# Methodik und Reproduktion

Die Analyse verwendet die lokalen BIN-Dateien des Repositories. Für Vergleich, Normalisierung und Emulation werden weder ein Fahrzeug noch ein NIU-Konto oder ein Netzwerkzugriff benötigt. Der Nachweisstand ist unter [Quellen](provenance.md) beschrieben.

## Voraussetzungen

- Python 3.12 oder neuer.
- Für Disassemblierung: Capstone 5.0.9.
- Für Ausführung der Originalbefehle: Unicorn 2.1.4.
- Optional zur erneuten Decompilierung: Ghidra 12.1.4 mit passendem JDK. Die veröffentlichten C-Dateien wurden mit dieser Version erzeugt.

Abhängigkeiten installieren:

```sh
python -m venv .venv
# Linux/macOS: source .venv/bin/activate
# PowerShell: .\.venv\Scripts\Activate.ps1
python -m pip install -r analysis/requirements.txt
```

## Dateianalyse und Emulation

Aus dem Wurzelverzeichnis des Repositories:

```sh
python analysis/scripts/validate_repository.py
python analysis/scripts/analyze.py
python analysis/scripts/decode_compare.py
python analysis/scripts/emulate_limits.py
python analysis/scripts/export_disassembly.py
git diff --exit-code -- analysis/results analysis/evidence/US/disassembly.txt analysis/evidence/DE/disassembly.txt
```

| Schritt | Ergebnis |
|---|---|
| `validate_repository.py` | Größen, MD5, SHA-256, Git-Blob-Hashes, regionale Download-URLs und Dokumentationslinks |
| `analyze.py` | Rohvergleich, Entropie, lesbare Zeichenfolgen, Differenzbereiche und vollständige Byte-CSV |
| `decode_compare.py` | Additive Normalisierung, Versionsstrings, Vektortabelle, Rückwegprüfung und Sequenzausrichtung |
| `emulate_limits.py` | Synthetischer Gasgriff-Sweep, regionale Custom-Grenzen, Reglerargumente und Geschwindigkeitsausgabe |
| `export_disassembly.py` | Vollständige lineare Thumb-Disassemblierung der normalisierten Nutzdaten |

Berichte liegen unter [analysis/results](../analysis/results/), die Disassemblierungen unter [analysis/evidence](../analysis/evidence/). Die dekodierten Arbeitsdateien entstehen in `analysis/generated/`; sie sind Analysefassungen ohne Vorspann und keine installierbaren Update-Dateien.

Die Emulation verwendet die Originalbefehle der normalisierten Firmware. ROM, RAM und benötigte Adressbereiche sind isoliert abgebildet. Am Reglereintritt wird der übergebene Sollwert protokolliert; die komplette elektromechanische Regelstrecke wird nicht simuliert. Die Testfälle prüfen insbesondere US 6288, DE 3560, die Ausgabewerte 384/217 und die abweichenden Custom-Ergebnisse 384/213.

## Ghidra Analyse erneut erzeugen

Die [Java-Skripte](../analysis/ghidra-scripts/) konfigurieren Cortex/Thumb, legen RAM- und IO-Bereiche an, verwenden die Vektortabelle und exportieren Funktionen und Referenzen. Eine ergänzende Suche nach `push ... lr`-Prologen erschließt weitere Routinen. Diese Suche ist heuristisch; nicht jede automatisch erkannte Funktion ist damit semantisch validiert. Die relevanten Begrenzungspfade wurden zusätzlich mit Originalbefehlen geprüft.

Beispiel für Bash, nachdem `decode_compare.py` ausgeführt wurde. `GHIDRA_HOME` bezeichnet die entpackte Ghidra-Installation:

```sh
mkdir -p analysis/ghidra-projects
for region in US DE; do
  "$GHIDRA_HOME/support/analyzeHeadless" \
    "$PWD/analysis/ghidra-projects" "${region}_Firmware" \
    -import "$PWD/analysis/generated/${region}_normalized.analysis.dat" \
    -loader BinaryLoader -loader-baseAddr 0x01000000 \
    -processor ARM:LE:32:Cortex -cspec default \
    -scriptPath "$PWD/analysis/ghidra-scripts" \
    -preScript PrepareFirmware.java \
    -postScript ExportFirmware.java "$PWD/analysis/generated/ghidra-$region" \
    -max-cpu 4

  "$GHIDRA_HOME/support/analyzeHeadless" \
    "$PWD/analysis/ghidra-projects" "${region}_Firmware" \
    -process "${region}_normalized.analysis.dat" \
    -scriptPath "$PWD/analysis/ghidra-scripts" \
    -preScript DiscoverFunctions.java \
    -postScript ExportFirmware.java "$PWD/analysis/generated/ghidra-$region" \
    -max-cpu 4
done
```

Unter Windows heißt der Launcher `support/analyzeHeadless.bat`; die Argumente sind entsprechend als PowerShell-Argumente zu übergeben. Ein bestehendes Projekt kann beim zweiten Lauf mit `-process` erneut exportiert werden.

Die vollständigen Exporte stehen bereits unter `analysis/evidence/US/` und `analysis/evidence/DE/`. Einzelne Funktionen liegen in `functions/`. C-Ausgaben sind Decompilate ohne originale Symbole, kein veröffentlichter Herstellerquellcode. Die lineare Capstone-Ausgabe enthält auch als Befehle interpretierte Datenbereiche; nicht jede Zeile ist ausführbarer Code.

## Kontinuierliche Prüfung

Der Workflow [Firmware analysis](../.github/workflows/analysis.yml) prüft alle regionalen Update-Beschreibungen, reproduziert die Ergebnisse und vergleicht die erzeugten Berichte und Disassemblierungen mit dem eingecheckten Stand. Ghidra selbst wird in diesem Workflow nicht erneut ausgeführt.
