
/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x010063e4) */
/* WARNING (jumptable): Removing unreachable block (ram,0x010064ca) */
/* WARNING: Removing unreachable block (ram,0x010063e4) */
/* WARNING: Removing unreachable block (ram,0x010064ca) */

void FUN_010063bc(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;

  pbVar1 = DAT_010065d4;
  if (*(int *)(DAT_010065d0 + 4) * 0x40000000 < 0) {
    uVar2 = *(uint *)(DAT_010065d0 + 0x20);
    if (-1 < *DAT_010065d8 << 0x12) {
      uVar3 = (uint)*DAT_010065d4;
      *DAT_010065d4 = *DAT_010065d4 + 1;
                    /* WARNING: Could not recover jumptable at 0x010063e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010063e8 <= uVar3) {
        uVar3 = (uint)DAT_010063e8;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10063e9) * 2 + 0x10063e9))(uVar2 & 0xff);
      return;
    }
  }
  else if (DAT_010065d4[1] < 0xfa) {
    DAT_010065d4[1] = DAT_010065d4[1] + 1;
  }
  else {
    *DAT_010065d4 = 0;
  }
  if (*(int *)(DAT_010065e4 + 4) << 0x1e < 0) {
    uVar2 = *(uint *)(DAT_010065e4 + 0x20);
    if (-1 < *DAT_010065e8 << 0x13) {
      uVar3 = (uint)pbVar1[2];
      pbVar1[2] = pbVar1[2] + 1;
                    /* WARNING: Could not recover jumptable at 0x010064ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010064ce <= uVar3) {
        uVar3 = (uint)DAT_010064ce;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10064cf) * 2 + 0x10064cf))(uVar2 & 0xff);
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
