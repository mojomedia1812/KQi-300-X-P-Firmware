
int FUN_0100091c(short *param_1,short param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 - param_1[param_3 + 1];
  param_1[param_3 + 1] = param_2;
  return (int)*param_1 >> 3;
}
