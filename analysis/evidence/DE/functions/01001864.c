
uint FUN_01001864(uint param_1,uint param_2)

{
  uint *puVar1;

  puVar1 = DAT_01001884;
  DAT_01001884[9] = param_2;
  puVar1[8] = param_1;
  *puVar1 = *puVar1 | 1;
  do {
  } while ((puVar1[4] & 1) == 0);
  puVar1[5] = puVar1[5] | 1;
  return puVar1[10];
}
