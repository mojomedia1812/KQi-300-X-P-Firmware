
uint FUN_010003c4(undefined4 param_1,uint param_2)

{
  byte in_Q;

  if (-1 < (int)(param_2 << 0xb)) {
    return 0;
  }
  if ((param_2 & 0x7ffff) >> 0x10 != 0) {
    return ~(param_2 << 0xf) << 1;
  }
  return (in_Q & 1) << 0x1b | 0x30000000;
}
