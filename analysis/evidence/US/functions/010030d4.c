
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010030d4(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_01003144;
  disableIRQinterrupts();
  _DAT_50000000 = 0x12;
  *DAT_01003144 = DAT_01003140;
  puVar1[4] = DAT_01003148;
  FUN_010027cc();
  *(uint *)(DAT_0100314c + 0x20) = *(uint *)(DAT_0100314c + 0x20) | 4;
  FUN_01004594();
  FUN_01000808();
  FUN_01000828();
  FUN_01001d34();
  FUN_01004914();
  FUN_010059a8();
  FUN_010065f4();
  *DAT_01003150 = 0;
  *DAT_01003154 = 0;
  *DAT_01003158 = 0;
  FUN_01004960();
  FUN_01002d34();
  _DAT_50000000 = 0;
  FUN_01003b08();
  *(undefined1 *)(DAT_0100315c + 0xc) = 0;
  FUN_01002e18();
  enableIRQinterrupts();
  return;
}
