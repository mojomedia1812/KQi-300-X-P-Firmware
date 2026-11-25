
void FUN_01004f44(void)

{
  if ((*DAT_01004f60 & 1) == 0) {
    if ((int)(*DAT_01004f60 << 0x1d) < 0) {
      FUN_01006640();
      return;
    }
  }
  else {
    FUN_01001e28(0);
  }
  return;
}
