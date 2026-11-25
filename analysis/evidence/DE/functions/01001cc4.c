
undefined4 FUN_01001cc4(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;

  puVar1 = DAT_01001d14;
  disableIRQinterrupts();
  if ((DAT_01001d14[2] & 1) != 0) {
    *DAT_01001d14 = DAT_01001d18;
    *puVar1 = DAT_01001d1c;
  }
  puVar1[2] = puVar1[2] | 0x200;
  puVar1[3] = param_1;
  puVar1[2] = puVar1[2] | 0x10000;
  uVar2 = DAT_01001d20;
  for (uVar3 = 0; ((puVar1[4] & 1) != 0 && (uVar3 < DAT_01001d20)); uVar3 = uVar3 + 1) {
  }
  puVar1[2] = puVar1[2] & 0xfffffdff;
  enableIRQinterrupts();
  if (uVar3 < uVar2) {
    return 1;
  }
  return 0;
}
