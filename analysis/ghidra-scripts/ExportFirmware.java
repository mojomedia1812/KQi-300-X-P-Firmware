// Export decompiled functions and data references for reproducible inspection.
//@category NIU
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;

public class ExportFirmware extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File folder = new File(args[0]); folder.mkdirs();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        try (PrintWriter all = new PrintWriter(new File(folder,"all-functions.c"), "UTF-8");
             PrintWriter refs = new PrintWriter(new File(folder,"references.tsv"), "UTF-8")) {
            refs.println("from\tto\ttype\tfunction");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                DecompileResults result = decomp.decompileFunction(f, 30, monitor);
                all.println("\n// ENTRY " + f.getEntryPoint() + " SIZE " + f.getBody().getNumAddresses());
                String c = result.decompileCompleted() ? result.getDecompiledFunction().getC() : "// ERROR " + result.getErrorMessage();
                all.println(c);
                try (PrintWriter one = new PrintWriter(new File(folder, f.getEntryPoint()+".c"),"UTF-8")) { one.println(c); }
                InstructionIterator ins = currentProgram.getListing().getInstructions(f.getBody(),true);
                while(ins.hasNext()) {
                    Instruction instruction = ins.next();
                    for (Reference ref : instruction.getReferencesFrom()) {
                        refs.println(instruction.getAddress()+"\t"+ref.getToAddress()+"\t"+ref.getReferenceType()+"\t"+f.getEntryPoint());
                    }
                }
            }
        }
        decomp.dispose();
        println("NIU_EXPORT " + folder.getAbsolutePath() + " functions=" + currentProgram.getFunctionManager().getFunctionCount());
    }
}
