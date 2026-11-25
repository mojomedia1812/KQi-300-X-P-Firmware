
void FUN_010051c4(undefined2 param_1)

{
  int iVar1;

  iVar1 = DAT_01005224;
  *(undefined1 *)(DAT_01005224 + 0x18) = 1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  if (*(char *)(DAT_01005228 + 0xb) == *(char *)(iVar1 + 0x16)) {
    *(undefined1 *)(iVar1 + 0x1d) = 1;
    *(undefined2 *)(iVar1 + -6) = 0x14;
  }
  else {
    *(undefined1 *)(iVar1 + 0x1d) = 0;
    *(undefined2 *)(iVar1 + -6) = 0xb;
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    *(undefined2 *)(iVar1 + -0x1c) = param_1;
  }
  if (*(ushort *)(iVar1 + -0x20) < DAT_0100522c) {
    *(undefined2 *)(iVar1 + -10) = 10;
  }
  else {
    *(undefined2 *)(iVar1 + -10) = 0x1e;
  }
  iVar1 = DAT_01005230;
  *(uint *)(DAT_01005230 + 8) = *(uint *)(DAT_01005230 + 8) | 4;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x1000000;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffb;
  return;
}
