
void FUN_01000c88(void)

{
  disableIRQinterrupts();
  *DAT_01000cbc = DAT_01000cb8;
  *DAT_01000cbc = DAT_01000cc0;
  DAT_01000cbc[2] = (DAT_01000cbc[2] & 0xfffffff9) + 4;
  *(undefined4 *)(DAT_01000cc4 + 4) = *(undefined4 *)(DAT_01000cc4 + 4);
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_01000ccc + 0xc) = DAT_01000cc8;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}
