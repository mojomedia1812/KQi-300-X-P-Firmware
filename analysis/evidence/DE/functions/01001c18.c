
uint FUN_01001c18(uint param_1)

{
  uint uVar1;

  uVar1 = DAT_01001c2c;
  if (((int)param_1 <= (int)DAT_01001c2c) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  return uVar1 & 0xffff;
}
