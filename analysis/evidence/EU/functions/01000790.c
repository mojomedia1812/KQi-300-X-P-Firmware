
void FUN_01000790(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar4 = (param_1 & 3) << 3;
  uVar3 = 0xff << iVar4;
  uVar2 = ((param_2 & 3) << 6) << iVar4;
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((param_1 & 0xfffffffc) + DAT_010007cc);
    *puVar1 = *puVar1 & ~uVar3 | uVar2;
    return;
  }
  iVar4 = ((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_010007d0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & ~uVar3 | uVar2;
  return;
}
