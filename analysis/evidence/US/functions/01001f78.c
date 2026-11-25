
uint FUN_01001f78(int *param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  uint local_18;

  iVar3 = FUN_01001dc8(param_1);
  puVar1 = DAT_01001ffc;
  if (iVar3 == 0) {
    local_1c = 1;
  }
  else {
    disableIRQinterrupts();
    DAT_01001ffc[2] = DAT_01001ffc[2] | 0x100;
    uVar2 = DAT_01002000;
    for (local_18 = 0; local_1c = 0, local_18 < param_2; local_18 = local_18 + 1) {
      iVar3 = *param_3;
      *param_1 = iVar3;
      for (; ((puVar1[4] & 1) != 0 && (local_1c < uVar2)); local_1c = local_1c + 1) {
      }
      if (uVar2 <= local_1c) {
        local_1c = 2;
        break;
      }
      if (iVar3 != *param_3) {
        local_1c = 3;
        break;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    puVar1[2] = puVar1[2] & 0xfffffeff;
  }
  *puVar1 = 0;
  enableIRQinterrupts();
  return local_1c;
}
