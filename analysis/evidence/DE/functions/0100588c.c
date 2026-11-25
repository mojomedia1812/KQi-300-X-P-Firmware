
void FUN_0100588c(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_010058c8 + 0x34) = *(uint *)(DAT_010058c8 + 0x34) | 0xaa0;
  puVar1 = DAT_010058cc;
  DAT_010058cc[6] = 0x96;
  *puVar1 = DAT_010058d0;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_010058d8;
  *(undefined4 *)(DAT_010058d8 + 0x20) = DAT_010058d4;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_010058dc;
  *(undefined4 **)(iVar2 + 0x30) = DAT_010058cc + 7;
  *(uint *)(DAT_010058d8 + -0xa8) = *(uint *)(DAT_010058d8 + -0xa8) | 0x40;
  return;
}
