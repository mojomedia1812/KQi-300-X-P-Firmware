
undefined4 FUN_01001830(int param_1)

{
  if (*(byte *)(DAT_01001858 + 0xc) < 2) {
    return 0;
  }
  if ((*(ushort *)(DAT_0100185c + 0x20) < 0x65) && (*(char *)(DAT_01001860 + 0xb) != param_1)) {
    return 0x32;
  }
  return 0xf;
}
