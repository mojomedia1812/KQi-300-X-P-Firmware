
void FUN_0100568c(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = DAT_010056fc;
  iVar3 = 0x28;
  if (*(int *)(DAT_010056f8 + 0x10) * 0x2000000 < 0) {
    iVar1 = DAT_01005708;
    if ((int)((uint)*DAT_01005700 << 0x13) < 0) {
      *DAT_010056fc = *DAT_010056fc | 1;
      *DAT_01005704 = *DAT_01005704 | 0x10;
      iVar1 = DAT_01005708;
    }
  }
  else {
    *DAT_010056fc = *DAT_010056fc | 1;
    iVar1 = DAT_01005708;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)(iVar1 + 2) = 0;
    do {
    } while (*(byte *)(iVar1 + 2) < 10);
    FUN_01002d7c();
  }
  if ((*puVar2 & 1) == 0) {
    *DAT_0100570c = *DAT_0100570c | 0x100;
  }
  FUN_010007d4();
  FUN_01001eb8();
  FUN_010067e0();
  FUN_010068cc();
  return;
}
