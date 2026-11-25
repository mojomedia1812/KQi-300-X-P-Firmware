
undefined8 FUN_0100031e(uint param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = param_1 & 0x80000000;
  if (uVar1 != 0) {
    param_1 = -param_1;
  }
  iVar2 = 0x1f;
  if (param_1 >> 0x10 == 0) {
    iVar2 = 0xf;
    param_1 = param_1 << 0x10;
    if (param_1 == 0) {
      return 0;
    }
  }
  if (param_1 >> 0x18 == 0) {
    param_1 = param_1 << 8;
    iVar2 = iVar2 + -8;
  }
  if (param_1 >> 0x1c == 0) {
    param_1 = param_1 << 4;
    iVar2 = iVar2 + -4;
  }
  if (param_1 >> 0x1e == 0) {
    param_1 = param_1 << 2;
    iVar2 = iVar2 + -2;
  }
  if (-1 < (int)param_1) {
    param_1 = param_1 << 1;
    iVar2 = iVar2 + -1;
  }
  return CONCAT44(((int)param_1 >> 0xb) + iVar2 * 0x100000 + (uVar1 | 0x40000000),param_1 << 0x15);
}
