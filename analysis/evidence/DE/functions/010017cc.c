
void FUN_010017cc(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort local_410 [512];

  puVar4 = local_410;
  puVar3 = param_1;
  while( true ) {
    uVar1 = *puVar3;
    if ((uVar1 == DAT_0100182c) || (param_2 < ((uint)uVar1 * 0x100 + (uint)(uVar1 >> 8) & 0xffff)))
    break;
    puVar3 = (ushort *)((param_3 & 0xfffffffe) + (int)puVar3);
  }
  uVar2 = 0;
  do {
    (local_410 + uVar2 * 2)[0] = 0xffff;
    (local_410 + uVar2 * 2)[1] = 0xffff;
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 0x100);
  for (; puVar3 < param_1 + 0x200; puVar3 = puVar3 + 1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  FUN_01001e74(param_1,0x100);
  return;
}
