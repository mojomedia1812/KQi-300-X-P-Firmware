
void FUN_01000778(uint param_1)

{
  if (-1 < (int)param_1) {
    *DAT_0100078c = 1 << (param_1 & 0x1f);
  }
  return;
}
