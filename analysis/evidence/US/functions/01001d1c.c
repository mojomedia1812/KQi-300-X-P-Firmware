
uint FUN_01001d1c(uint param_1)

{
  uint uVar1;

  uVar1 = DAT_01001d30;
  if (((int)param_1 <= (int)DAT_01001d30) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  return uVar1 & 0xffff;
}
