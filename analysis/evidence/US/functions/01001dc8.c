
undefined4 FUN_01001dc8(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;

  puVar1 = DAT_01001e18;
  disableIRQinterrupts();
  if ((DAT_01001e18[2] & 1) != 0) {
    *DAT_01001e18 = DAT_01001e1c;
    *puVar1 = DAT_01001e20;
  }
  puVar1[2] = puVar1[2] | 0x200;
  puVar1[3] = param_1;
  puVar1[2] = puVar1[2] | 0x10000;
  uVar2 = DAT_01001e24;
  for (uVar3 = 0; ((puVar1[4] & 1) != 0 && (uVar3 < DAT_01001e24)); uVar3 = uVar3 + 1) {
  }
  puVar1[2] = puVar1[2] & 0xfffffdff;
  enableIRQinterrupts();
  if (uVar3 < uVar2) {
    return 1;
  }
  return 0;
}
