
void FUN_01001e66(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  while (param_2 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
    param_2 = param_2 - 1 & 0xff;
  }
  return;
}
