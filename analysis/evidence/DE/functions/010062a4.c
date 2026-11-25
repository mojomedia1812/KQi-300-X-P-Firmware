
/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x010062cc) */
/* WARNING (jumptable): Removing unreachable block (ram,0x010063b2) */
/* WARNING: Removing unreachable block (ram,0x010062cc) */
/* WARNING: Removing unreachable block (ram,0x010063b2) */

void FUN_010062a4(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;

  pbVar1 = DAT_010064bc;
  if (*(int *)(DAT_010064b8 + 4) * 0x40000000 < 0) {
    uVar2 = *(uint *)(DAT_010064b8 + 0x20);
    if (-1 < *DAT_010064c0 << 0x12) {
      uVar3 = (uint)*DAT_010064bc;
      *DAT_010064bc = *DAT_010064bc + 1;
                    /* WARNING: Could not recover jumptable at 0x010062cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010062d0 <= uVar3) {
        uVar3 = (uint)DAT_010062d0;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10062d1) * 2 + 0x10062d1))(uVar2 & 0xff);
      return;
    }
  }
  else if (DAT_010064bc[1] < 0xfa) {
    DAT_010064bc[1] = DAT_010064bc[1] + 1;
  }
  else {
    *DAT_010064bc = 0;
  }
  if (*(int *)(DAT_010064cc + 4) << 0x1e < 0) {
    uVar2 = *(uint *)(DAT_010064cc + 0x20);
    if (-1 < *DAT_010064d0 << 0x13) {
      uVar3 = (uint)pbVar1[2];
      pbVar1[2] = pbVar1[2] + 1;
                    /* WARNING: Could not recover jumptable at 0x010063b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010063b6 <= uVar3) {
        uVar3 = (uint)DAT_010063b6;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10063b7) * 2 + 0x10063b7))(uVar2 & 0xff);
      return;
    }
    return;
  }
  if (pbVar1[3] < 0xfa) {
    pbVar1[3] = pbVar1[3] + 1;
    return;
  }
  pbVar1[2] = 0;
  return;
}
