
void FUN_01003ba4(void)

{
  uint *puVar1;

  puVar1 = DAT_01003bd0;
  if (((*DAT_01003bd0 & 1) == 0) && (*(short *)(DAT_01003bd4 + 4) == 0)) {
    *DAT_01003bd0 = *DAT_01003bd0 | 1;
    FUN_01003e70();
    FUN_01006640();
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  return;
}
