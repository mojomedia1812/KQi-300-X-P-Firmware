
void FUN_01004594(void)

{
  int iVar1;

  *(uint *)(DAT_010045c4 + 0x30) = *(uint *)(DAT_010045c4 + 0x30) | 0x66;
  iVar1 = DAT_010045c8;
  *(uint *)(DAT_010045c8 + 0x34) = *(uint *)(DAT_010045c8 + 0x34) | DAT_010045cc;
  *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | DAT_010045d0;
  *DAT_010045d4 = 0xb;
  *DAT_010045d8 = 0xb;
  *DAT_010045dc = 0xb;
  *DAT_010045e0 = 0xb;
  return;
}
