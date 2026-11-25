
uint FUN_01004e08(uint *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 - (uint)*(ushort *)((int)param_1 + param_3 * 2 + 4);
  *(short *)((int)param_1 + param_3 * 2 + 4) = (short)param_2;
  return (*param_1 & 0x7ffff) >> 3;
}
