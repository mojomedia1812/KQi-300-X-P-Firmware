// Set up the normalized Cortex firmware for static analysis.
//@category NIU
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.mem.MemoryBlock;
import java.math.BigInteger;

public class PrepareFirmware extends GhidraScript {
    public void run() throws Exception {
        MemoryBlock ram = currentProgram.getMemory().createUninitializedBlock("RAM", toAddr(0x20000000L), 0x10000, false);
        ram.setRead(true); ram.setWrite(true); ram.setExecute(false);
        MemoryBlock io = currentProgram.getMemory().createUninitializedBlock("IO", toAddr(0x40000000L), 0x200000, false);
        io.setRead(true); io.setWrite(true); io.setExecute(false); io.setVolatile(true);
        Address base = toAddr(0x01000000L);
        currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"), base, toAddr(0x01007000L), BigInteger.ONE);
        for (int i = 0; i < 48; i++) {
            Address slot = base.add(i * 4);
            long target = getInt(slot) & 0xffffffffL;
            createData(slot, new DWordDataType());
            if (i > 0 && target >= 0x01000000L && target < 0x01007000L && (target & 1) != 0) {
                Address entry = toAddr(target & ~1L);
                addEntryPoint(entry);
                disassemble(entry);
                if (getFunctionAt(entry) == null) createFunction(entry, i == 1 ? "Reset_Handler" : "Vector_" + i);
            }
        }
        // Seed the conventional startup routine as well as the reset handler.
        disassemble(base.add(0xc0));
        if (getFunctionAt(base.add(0xc0)) == null) createFunction(base.add(0xc0), "C_Runtime_Startup");
    }
}
