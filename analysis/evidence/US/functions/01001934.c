
undefined4 FUN_01001934(int param_1)

{
  if (*(byte *)(DAT_0100195c + 0xc) < 2) {
    return 0;
  }
  if ((*(ushort *)(DAT_01001960 + 0x20) < 0x65) && (*(char *)(DAT_01001964 + 0xb) != param_1)) {
    return 0x32;
  }
  return 0xf;
}
