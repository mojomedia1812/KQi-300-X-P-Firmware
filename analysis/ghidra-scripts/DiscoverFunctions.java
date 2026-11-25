//@category NIU
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import java.math.BigInteger;
public class DiscoverFunctions extends GhidraScript {
    public void run() throws Exception {
        int added = 0;
        for (long value=0x010000c0L; value<0x01006900L; value+=2) {
            Address entry=toAddr(value);
            if ((getByte(entry.add(1)) & 255) != 0xb5 || (getByte(entry) & 255) == 0) continue;
            if (getFunctionContaining(entry) != null) continue;
            clearListing(entry, entry.add(1));
            currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"), entry, entry, BigInteger.ONE);
            if (disassemble(entry) && createFunction(entry,null) != null) { added++; println("NIU_SEED " + entry); }
        }
        println("NIU_ADDED " + added);
        analyzeAll(currentProgram);
    }
}
