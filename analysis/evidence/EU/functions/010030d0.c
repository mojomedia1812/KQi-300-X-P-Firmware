
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010030d0(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_01003140;
  disableIRQinterrupts();
  _DAT_50000000 = 0x12;
  *DAT_01003140 = DAT_0100313c;
  puVar1[4] = DAT_01003144;
  FUN_010027c8();
  *(uint *)(DAT_01003148 + 0x20) = *(uint *)(DAT_01003148 + 0x20) | 4;
  FUN_01004590();
  FUN_01000808();
  FUN_01000828();
  FUN_01001d30();
  FUN_01004910();
  FUN_010059a4();
  FUN_010065f0();
  *DAT_0100314c = 0;
  *DAT_01003150 = 0;
  *DAT_01003154 = 0;
  FUN_0100495c();
  FUN_01002d30();
  _DAT_50000000 = 0;
  FUN_01003b08();
  *(undefined1 *)(DAT_01003158 + 0xc) = 0;
  FUN_01002e14();
  enableIRQinterrupts();
  return;
}
