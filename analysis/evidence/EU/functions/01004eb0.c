
void FUN_01004eb0(void)

{
  int iVar1;

  iVar1 = DAT_01004f10;
  *(undefined1 *)(DAT_01004f10 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(short *)(iVar1 + -0x1c) = *(short *)(iVar1 + -0x1c) + *(short *)(iVar1 + -6);
  if (*(ushort *)(iVar1 + -8) < *(ushort *)(iVar1 + -0x20)) {
    *(undefined1 *)(iVar1 + 0x1d) = 0;
  }
  if (*(char *)(DAT_01004f14 + 0xc) == '\a') {
    if (((*(char *)(iVar1 + 0xc) != '\0') &&
        (*(char *)(DAT_01004f1c + 0xb) != *(char *)(iVar1 + 0x16))) &&
       (2000 < *(ushort *)(iVar1 + -0x20))) {
      *(short *)(iVar1 + -0x20) = *(short *)(iVar1 + -0x20) + 5;
      return;
    }
  }
  else if (DAT_01004f18 < *(ushort *)(iVar1 + -0x20)) {
    *(short *)(iVar1 + -0x20) = *(short *)(iVar1 + -0x20) + 3;
  }
  return;
}
