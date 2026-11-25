
void FUN_01004914(void)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = DAT_01004940;
  *(uint *)(DAT_01004940 + 0x30) = *(uint *)(DAT_01004940 + 0x30) | 0xbb000000;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0xb;
  puVar2 = DAT_01004944;
  *DAT_01004944 = 0xf0000;
  puVar2[2] = 0x5b00;
  puVar2[2] = puVar2[2] | 0x23;
  return;
}
