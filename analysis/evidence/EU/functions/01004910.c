
void FUN_01004910(void)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = DAT_0100493c;
  *(uint *)(DAT_0100493c + 0x30) = *(uint *)(DAT_0100493c + 0x30) | 0xbb000000;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0xb;
  puVar2 = DAT_01004940;
  *DAT_01004940 = 0xf0000;
  puVar2[2] = 0x5b00;
  puVar2[2] = puVar2[2] | 0x23;
  return;
}
