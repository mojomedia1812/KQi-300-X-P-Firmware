
void thunk_FUN_01004952(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;

  while (param_3 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1 & 0xff;
  }
  return;
}
