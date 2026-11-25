
void FUN_010064d8(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_0100650c + 0x34) = *(uint *)(DAT_0100650c + 0x34) | 0xaa;
  puVar1 = DAT_01006510;
  DAT_01006510[6] = 0x96;
  *puVar1 = DAT_01006514;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_0100651c;
  *(undefined4 *)(DAT_0100651c + 0x20) = DAT_01006518;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_01006520;
  *(undefined4 **)(iVar2 + 0x30) = DAT_01006510 + 7;
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 1;
  return;
}
