
void FUN_010067a0(int param_1,int param_2,short *param_3)

{
  short sVar1;

  sVar1 = *param_3;
  param_1 = sVar1 + param_1;
  if (param_2 < param_1) {
    if (sVar1 < param_2) {
      *param_3 = sVar1 + 1;
      return;
    }
  }
  else {
    *param_3 = (short)param_1;
  }
  return;
}
