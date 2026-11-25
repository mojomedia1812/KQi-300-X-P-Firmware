
void FUN_01005570(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = DAT_010055e0;
  iVar3 = 0x28;
  if (*(int *)(DAT_010055dc + 0x10) * 0x2000000 < 0) {
    iVar1 = DAT_010055ec;
    if ((int)((uint)*DAT_010055e4 << 0x13) < 0) {
      *DAT_010055e0 = *DAT_010055e0 | 1;
      *DAT_010055e8 = *DAT_010055e8 | 0x10;
      iVar1 = DAT_010055ec;
    }
  }
  else {
    *DAT_010055e0 = *DAT_010055e0 | 1;
    iVar1 = DAT_010055ec;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)(iVar1 + 2) = 0;
    do {
    } while (*(byte *)(iVar1 + 2) < 10);
    FUN_01002c78();
  }
  if ((*puVar2 & 1) == 0) {
    *DAT_010055f0 = *DAT_010055f0 | 0x100;
  }
  FUN_010007d4();
  FUN_01001db4();
  FUN_010066c4();
  FUN_010067b8();
  return;
}
