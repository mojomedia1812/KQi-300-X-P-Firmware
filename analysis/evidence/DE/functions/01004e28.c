
void FUN_01004e28(void)

{
  if ((*DAT_01004e44 & 1) == 0) {
    if ((int)(*DAT_01004e44 << 0x1d) < 0) {
      FUN_01006524();
      return;
    }
  }
  else {
    FUN_01001d24(0);
  }
  return;
}
