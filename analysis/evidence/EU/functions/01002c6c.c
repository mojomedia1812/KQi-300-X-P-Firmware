
void FUN_01002c6c(uint param_1,uint param_2)

{
  uint *puVar1;

  puVar1 = DAT_01002c90;
  DAT_01002c90[9] = param_2;
  puVar1[8] = param_1;
  *puVar1 = *puVar1 | 1;
  do {
  } while ((puVar1[4] & 1) == 0);
  puVar1[5] = puVar1[5] | 1;
  *(short *)(DAT_01002c94 + 0x3a) = (short)puVar1[10];
  return;
}
