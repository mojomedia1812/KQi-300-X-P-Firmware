
uint FUN_01001d00(uint param_1)

{
  if (DAT_01001d18 < (int)param_1) {
    param_1 = DAT_01001d18 + 0x49;
  }
  else if ((int)param_1 < 0) {
    param_1 = 0;
  }
  return param_1 & 0xffff;
}
