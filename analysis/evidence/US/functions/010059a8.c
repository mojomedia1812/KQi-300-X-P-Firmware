
void FUN_010059a8(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_010059e4 + 0x34) = *(uint *)(DAT_010059e4 + 0x34) | 0xaa0;
  puVar1 = DAT_010059e8;
  DAT_010059e8[6] = 0x96;
  *puVar1 = DAT_010059ec;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_010059f4;
  *(undefined4 *)(DAT_010059f4 + 0x20) = DAT_010059f0;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_010059f8;
  *(undefined4 **)(iVar2 + 0x30) = DAT_010059e8 + 7;
  *(uint *)(DAT_010059f4 + -0xa8) = *(uint *)(DAT_010059f4 + -0xa8) | 0x40;
  return;
}
