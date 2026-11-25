
void FUN_01003aa4(void)

{
  uint *puVar1;

  puVar1 = DAT_01003ad0;
  if (((*DAT_01003ad0 & 1) == 0) && (*(short *)(DAT_01003ad4 + 4) == 0)) {
    *DAT_01003ad0 = *DAT_01003ad0 | 1;
    FUN_01003d70();
    FUN_01006524();
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  return;
}
