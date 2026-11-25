
void FUN_01001db4(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  FUN_0100305c();
  puVar2 = DAT_01001e3c;
  puVar1 = DAT_01001e38;
  if (*DAT_01001e30 < DAT_01001e34) {
    *DAT_01001e38 = *DAT_01001e38 | 8;
    if ((*puVar2 & 3) == 0) {
      FUN_010044c8();
    }
  }
  if (((((int)((uint)(byte)*puVar1 << 0x1c) < 0) || (*(char *)(DAT_01001e40 + 0x18) == '\0')) &&
      ((*puVar2 & 3) == 0)) && (*DAT_01001e44 < 0x32)) {
    FUN_010045f0();
    FUN_010012e8();
  }
  iVar3 = DAT_01001e48;
  *(undefined2 *)(DAT_01001e48 + 10) = 0;
  *(undefined2 *)(iVar3 + 2) = 0x1fa;
  *(short *)(iVar3 + 0xe) = (short)DAT_01001e4c;
  *(short *)(iVar3 + 8) = (short)DAT_01001e50;
  *DAT_01001e54 = 0;
  if ((*puVar2 & 3) == 0) {
    uVar4 = *DAT_01001e5c & ~DAT_01001e58;
  }
  else {
    uVar4 = *DAT_01001e5c | DAT_01001e58;
  }
  *DAT_01001e5c = uVar4;
  return;
}
