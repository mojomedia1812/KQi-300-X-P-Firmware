
uint FUN_01001d18(uint param_1)

{
  uint uVar1;

  uVar1 = DAT_01001d2c;
  if (((int)param_1 <= (int)DAT_01001d2c) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  return uVar1 & 0xffff;
}
