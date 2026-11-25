
void FUN_01004f40(void)

{
  if ((*DAT_01004f5c & 1) == 0) {
    if ((int)(*DAT_01004f5c << 0x1d) < 0) {
      FUN_0100663c();
      return;
    }
  }
  else {
    FUN_01001e24(0);
  }
  return;
}
