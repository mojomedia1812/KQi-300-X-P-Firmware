
void FUN_01002ab4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = DAT_01002b50;
  if (*(char *)(DAT_01002b50 + 0xc) == '\a') {
    *(uint *)(DAT_01002b54 + 0xc) = *(uint *)(DAT_01002b54 + 0xc) & 0xffffffc0;
    *(undefined1 *)(iVar1 + 0xc) = 1;
  }
  iVar1 = DAT_01002b58;
  *(undefined1 *)(DAT_01002b58 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + -0x1a) = 0;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  *(undefined4 *)(iVar1 + -0x24) = 0;
  *(undefined2 *)(iVar1 + -10) = 0;
  *(undefined2 *)(iVar1 + -6) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  iVar2 = DAT_01002b5c;
  if (*(char *)(DAT_01002b5c + 0xe) != *(char *)(iVar1 + 0x11)) {
    *(undefined1 *)(DAT_01002b5c + 0xe) = *(undefined1 *)(iVar1 + 0x11);
    *DAT_01002b60 = (uint)*(ushort *)(iVar1 + -0x20) * 0x1a4;
    *(undefined2 *)(iVar1 + -0x20) = 0;
  }
  if (param_1 == 0) {
    if (-1 < (int)(*DAT_01002b68 << 0x18)) {
      *DAT_01002b68 = *DAT_01002b68 | 0x80;
    }
  }
  else {
    *(short *)(iVar1 + -0x1e) = (short)DAT_01002b64 * ((short)param_1 + -1);
    *(undefined2 *)(iVar1 + -0x1c) = *(undefined2 *)(iVar1 + -0x1e);
    *(char *)(iVar1 + 0x17) = (char)param_1;
  }
  if (*(char *)(iVar1 + 0x16) < '\x01') {
    iVar3 = -(int)*(char *)(iVar1 + 0x16);
  }
  else {
    iVar3 = (int)*(char *)(iVar1 + 0x16);
  }
  if (iVar3 != 1) {
    *(undefined1 *)(iVar1 + 0x16) = *(undefined1 *)(iVar2 + 0xb);
  }
  return;
}
