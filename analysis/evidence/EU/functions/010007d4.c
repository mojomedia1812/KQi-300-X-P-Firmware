
void FUN_010007d4(void)

{
  if ((int)(*DAT_010007fc << 0x14) < 0) {
    if (*(int *)(DAT_01000804 + 4) != 0) {
      *DAT_010007fc = *DAT_010007fc & ~DAT_01000800;
    }
  }
  else if (*(int *)(DAT_01000804 + 4) == 0) {
    *DAT_010007fc = *DAT_010007fc | DAT_01000800;
    return;
  }
  return;
}
