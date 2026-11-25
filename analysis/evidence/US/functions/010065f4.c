
void FUN_010065f4(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_01006628 + 0x34) = *(uint *)(DAT_01006628 + 0x34) | 0xaa;
  puVar1 = DAT_0100662c;
  DAT_0100662c[6] = 0x96;
  *puVar1 = DAT_01006630;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_01006638;
  *(undefined4 *)(DAT_01006638 + 0x20) = DAT_01006634;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_0100663c;
  *(undefined4 **)(iVar2 + 0x30) = DAT_0100662c + 7;
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 1;
  return;
}
