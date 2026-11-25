
/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x010063e8) */
/* WARNING (jumptable): Removing unreachable block (ram,0x010064ce) */
/* WARNING: Removing unreachable block (ram,0x010063e8) */
/* WARNING: Removing unreachable block (ram,0x010064ce) */

void FUN_010063c0(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;

  pbVar1 = DAT_010065d8;
  if (*(int *)(DAT_010065d4 + 4) * 0x40000000 < 0) {
    uVar2 = *(uint *)(DAT_010065d4 + 0x20);
    if (-1 < *DAT_010065dc << 0x12) {
      uVar3 = (uint)*DAT_010065d8;
      *DAT_010065d8 = *DAT_010065d8 + 1;
                    /* WARNING: Could not recover jumptable at 0x010063e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010063ec <= uVar3) {
        uVar3 = (uint)DAT_010063ec;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10063ed) * 2 + 0x10063ed))(uVar2 & 0xff);
      return;
    }
  }
  else if (DAT_010065d8[1] < 0xfa) {
    DAT_010065d8[1] = DAT_010065d8[1] + 1;
  }
  else {
    *DAT_010065d8 = 0;
  }
  if (*(int *)(DAT_010065e8 + 4) << 0x1e < 0) {
    uVar2 = *(uint *)(DAT_010065e8 + 0x20);
    if (-1 < *DAT_010065ec << 0x13) {
      uVar3 = (uint)pbVar1[2];
      pbVar1[2] = pbVar1[2] + 1;
                    /* WARNING: Could not recover jumptable at 0x010064ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010064d2 <= uVar3) {
        uVar3 = (uint)DAT_010064d2;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10064d3) * 2 + 0x10064d3))(uVar2 & 0xff);
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
