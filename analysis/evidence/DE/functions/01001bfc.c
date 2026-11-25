
uint FUN_01001bfc(uint param_1)

{
  if (DAT_01001c14 < (int)param_1) {
    param_1 = DAT_01001c14 + 0x49;
  }
  else if ((int)param_1 < 0) {
    param_1 = 0;
  }
  return param_1 & 0xffff;
}
