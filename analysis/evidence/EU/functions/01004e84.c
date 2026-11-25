
void FUN_01004e84(int *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;

  iVar2 = *param_1;
  *param_1 = iVar2 + param_2;
  if ((short)param_1[1] < param_2) {
    *(short *)(param_1 + 1) = (short)param_2;
  }
  else if (param_2 < (short)param_1[2]) {
    *(short *)(param_1 + 2) = (short)param_2;
  }
  uVar1 = FUN_01000190(iVar2 + param_2,param_3);
  *(undefined2 *)((int)param_1 + 6) = uVar1;
  return;
}
