
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01002fd0(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_01003040;
  disableIRQinterrupts();
  _DAT_50000000 = 0x12;
  *DAT_01003040 = DAT_0100303c;
  puVar1[4] = DAT_01003044;
  FUN_010026c8();
  *(uint *)(DAT_01003048 + 0x20) = *(uint *)(DAT_01003048 + 0x20) | 4;
  FUN_01004478();
  FUN_01000808();
  FUN_01000828();
  FUN_01001c30();
  FUN_010047f8();
  FUN_0100588c();
  FUN_010064d8();
  *DAT_0100304c = 0;
  *DAT_01003050 = 0;
  *DAT_01003054 = 0;
  FUN_01004844();
  FUN_01002c30();
  _DAT_50000000 = 0;
  FUN_01003a08();
  *(undefined1 *)(DAT_01003058 + 0xc) = 0;
  FUN_01002d14();
  enableIRQinterrupts();
  return;
}
