
uint FUN_01000334(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  byte in_Q;

  uVar1 = param_2 * 2;
  if (((DAT_010003c0 <= uVar1 && uVar1 - DAT_010003c0 != 0) ||
      (((uVar1 - DAT_010003c0 == 0 && (param_1 != 0)) ||
       (uVar1 = param_4 * 2, DAT_010003c0 <= uVar1 && uVar1 - DAT_010003c0 != 0)))) ||
     ((uVar1 - DAT_010003c0 == 0 && (param_3 != 0)))) {
    if ((param_5 & 0xd0000) == 0) {
      uVar1 = FUN_010003f4();
      return uVar1;
    }
    uVar1 = FUN_010003c4(0,param_5,param_3,param_4,param_4);
    return uVar1;
  }
  if ((int)(param_2 | param_4) < 0) {
    if (param_4 == param_2) {
      if (param_1 <= param_3) {
        return ((byte)((param_3 == param_1) << 3 | 4U | in_Q) & 0xd) << 0x1b;
      }
      uVar1 = ((byte)((param_3 == param_1) << 3 | in_Q) & 0xd) << 0x1b;
    }
    else {
      uVar1 = ((byte)((param_2 <= param_4) << 2 | in_Q) & 0xd) << 0x1b;
      if (param_2 <= param_4) {
        return uVar1;
      }
    }
    return uVar1 | 0x80000000;
  }
  if (param_2 != param_4) {
    return (uint)(byte)(((int)(param_2 - param_4) < 0) << 4 | (param_4 <= param_2) << 2 |
                        SBORROW4(param_2,param_4) << 1 | in_Q) << 0x1b;
  }
  bVar2 = (int)(param_1 - param_3) < 0;
  if (param_1 == param_3) {
    return (uint)(byte)(bVar2 << 4 | 8U | (param_3 <= param_1) << 2 | SBORROW4(param_1,param_3) << 1
                       | in_Q) << 0x1b;
  }
  return (uint)(byte)(bVar2 << 4 | (param_3 <= param_1) << 2 | SBORROW4(param_1,param_3) << 1 | in_Q
                     ) << 0x1b;
}
