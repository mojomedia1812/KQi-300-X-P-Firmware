
void FUN_010068f8(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0x100000;
  uVar1 = param_4 | param_2;
  if ((int)uVar1 < 0) {
    if (-1 < (int)(uVar1 + 0x100000)) {
      uVar2 = 0x200000;
      if ((param_4 << 1 < 0xffe00000) && (param_2 << 1 < 0xffe00000)) {
        return;
      }
      goto LAB_0100694a;
    }
    if ((int)(uVar1 - 0x100000) < 0) {
      if (param_2 != param_4) {
        return;
      }
      return;
    }
  }
  else {
    if ((int)(uVar1 + 0x100000) < 0) {
      if ((-1 < (int)(param_4 + 0x100000)) && (-1 < (int)(param_2 + 0x100000))) {
        return;
      }
LAB_0100694a:
      FUN_01000334(param_3,param_4,param_1,param_2,DAT_0100695c,uVar2);
      return;
    }
    if (-1 < (int)(uVar1 - 0x100000)) {
      if (param_4 != param_2) {
        return;
      }
      return;
    }
  }
  return;
}
