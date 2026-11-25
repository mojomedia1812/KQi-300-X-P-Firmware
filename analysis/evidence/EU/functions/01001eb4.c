
void FUN_01001eb4(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  FUN_0100315c();
  puVar2 = DAT_01001f3c;
  puVar1 = DAT_01001f38;
  if (*DAT_01001f30 < DAT_01001f34) {
    *DAT_01001f38 = *DAT_01001f38 | 8;
    if ((*puVar2 & 3) == 0) {
      FUN_010045e0();
    }
  }
  if (((((int)((uint)(byte)*puVar1 << 0x1c) < 0) || (*(char *)(DAT_01001f40 + 0x18) == '\0')) &&
      ((*puVar2 & 3) == 0)) && (*DAT_01001f44 < 0x32)) {
    FUN_01004708();
    FUN_010012e4();
  }
  iVar3 = DAT_01001f48;
  *(undefined2 *)(DAT_01001f48 + 10) = 0;
  *(undefined2 *)(iVar3 + 2) = 0x1fa;
  *(short *)(iVar3 + 0xe) = (short)DAT_01001f4c;
  *(short *)(iVar3 + 8) = (short)DAT_01001f50;
  *DAT_01001f54 = 0;
  if ((*puVar2 & 3) == 0) {
    uVar4 = *DAT_01001f5c & ~DAT_01001f58;
  }
  else {
    uVar4 = *DAT_01001f5c | DAT_01001f58;
  }
  *DAT_01001f5c = uVar4;
  return;
}
