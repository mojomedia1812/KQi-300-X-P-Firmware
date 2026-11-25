
void FUN_01005688(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = DAT_010056f8;
  iVar3 = 0x28;
  if (*(int *)(DAT_010056f4 + 0x10) * 0x2000000 < 0) {
    iVar1 = DAT_01005704;
    if ((int)((uint)*DAT_010056fc << 0x13) < 0) {
      *DAT_010056f8 = *DAT_010056f8 | 1;
      *DAT_01005700 = *DAT_01005700 | 0x10;
      iVar1 = DAT_01005704;
    }
  }
  else {
    *DAT_010056f8 = *DAT_010056f8 | 1;
    iVar1 = DAT_01005704;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)(iVar1 + 2) = 0;
    do {
    } while (*(byte *)(iVar1 + 2) < 10);
    FUN_01002d78();
  }
  if ((*puVar2 & 1) == 0) {
    *DAT_01005708 = *DAT_01005708 | 0x100;
  }
  FUN_010007d4();
  FUN_01001eb4();
  FUN_010067dc();
  FUN_010068c8();
  return;
}
