
void FUN_010059a4(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_010059e0 + 0x34) = *(uint *)(DAT_010059e0 + 0x34) | 0xaa0;
  puVar1 = DAT_010059e4;
  DAT_010059e4[6] = 0x96;
  *puVar1 = DAT_010059e8;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_010059f0;
  *(undefined4 *)(DAT_010059f0 + 0x20) = DAT_010059ec;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_010059f4;
  *(undefined4 **)(iVar2 + 0x30) = DAT_010059e4 + 7;
  *(uint *)(DAT_010059f0 + -0xa8) = *(uint *)(DAT_010059f0 + -0xa8) | 0x40;
  return;
}
