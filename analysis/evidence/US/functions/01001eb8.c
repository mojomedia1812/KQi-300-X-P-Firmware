
void FUN_01001eb8(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  FUN_01003160();
  puVar2 = DAT_01001f40;
  puVar1 = DAT_01001f3c;
  if (*DAT_01001f34 < DAT_01001f38) {
    *DAT_01001f3c = *DAT_01001f3c | 8;
    if ((*puVar2 & 3) == 0) {
      FUN_010045e4();
    }
  }
  if (((((int)((uint)(byte)*puVar1 << 0x1c) < 0) || (*(char *)(DAT_01001f44 + 0x18) == '\0')) &&
      ((*puVar2 & 3) == 0)) && (*DAT_01001f48 < 0x32)) {
    FUN_0100470c();
    FUN_010012e8();
  }
  iVar3 = DAT_01001f4c;
  *(undefined2 *)(DAT_01001f4c + 10) = 0;
  *(undefined2 *)(iVar3 + 2) = 0x1fa;
  *(short *)(iVar3 + 0xe) = (short)DAT_01001f50;
  *(short *)(iVar3 + 8) = (short)DAT_01001f54;
  *DAT_01001f58 = 0;
  if ((*puVar2 & 3) == 0) {
    uVar4 = *DAT_01001f60 & ~DAT_01001f5c;
  }
  else {
    uVar4 = *DAT_01001f60 | DAT_01001f5c;
  }
  *DAT_01001f60 = uVar4;
  return;
}
