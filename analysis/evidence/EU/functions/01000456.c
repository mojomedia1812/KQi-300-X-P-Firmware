
undefined8 FUN_01000456(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;

  uVar1 = param_3 & 0xf;
  if (uVar1 == 9) {
    uVar2 = FUN_010003c4(8,param_3);
    goto LAB_01000484;
  }
  uVar2 = param_1;
  if (uVar1 == 10) {
    if (-1 < (int)(param_3 << 0x19)) goto LAB_01000484;
  }
  else {
    if (uVar1 != 8) goto LAB_01000484;
    if (-1 < (int)(param_3 << 0x19)) {
      if ((int)(param_3 << 0x1b) < 0) {
        uVar2 = param_1 << 0x1d;
        param_2 = (param_1 & 0xfffffff) >> 3 | param_1 & 0xff000000;
      }
      else {
        uVar2 = param_1 >> 0x1d | (param_2 & 0xffffff) << 3 | param_2 & 0xff000000;
      }
      goto LAB_01000484;
    }
  }
  uVar2 = 0x80000000;
LAB_01000484:
  return CONCAT44(param_2,uVar2);
}
