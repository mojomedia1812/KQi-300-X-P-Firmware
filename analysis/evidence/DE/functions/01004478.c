
void FUN_01004478(void)

{
  int iVar1;

  *(uint *)(DAT_010044a8 + 0x30) = *(uint *)(DAT_010044a8 + 0x30) | 0x66;
  iVar1 = DAT_010044ac;
  *(uint *)(DAT_010044ac + 0x34) = *(uint *)(DAT_010044ac + 0x34) | DAT_010044b0;
  *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | DAT_010044b4;
  *DAT_010044b8 = 0xb;
  *DAT_010044bc = 0xb;
  *DAT_010044c0 = 0xb;
  *DAT_010044c4 = 0xb;
  return;
}
