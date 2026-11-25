
void FUN_01002c70(uint param_1,uint param_2)

{
  uint *puVar1;

  puVar1 = DAT_01002c94;
  DAT_01002c94[9] = param_2;
  puVar1[8] = param_1;
  *puVar1 = *puVar1 | 1;
  do {
  } while ((puVar1[4] & 1) == 0);
  puVar1[5] = puVar1[5] | 1;
  *(short *)(DAT_01002c98 + 0x3a) = (short)puVar1[10];
  return;
}
