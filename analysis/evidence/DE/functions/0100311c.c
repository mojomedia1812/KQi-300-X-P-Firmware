
/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0100317a) */
/* WARNING: Removing unreachable block (ram,0x0100317a) */

void FUN_0100311c(void)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;

  puVar4 = DAT_01003260;
  iVar3 = DAT_0100325c;
  psVar2 = DAT_01003258;
  iVar1 = DAT_01003254;
  if ((((*(char *)(DAT_01003254 + 0xc) == '\a') && (-1 < (int)((uint)*DAT_01003264 << 0x1d))) &&
      (-1 < (int)(*DAT_01003260 << 0x17))) && (-1 < (int)((uint)*DAT_01003268 << 0x19))) {
    uVar6 = (uint)*(short *)(DAT_0100326c + 6);
    if ((int)uVar6 < 1) {
      uVar6 = -uVar6;
    }
    uVar6 = (uVar6 & 0x7fff) >> 7;
    sVar5 = (short)uVar6;
    if (uVar6 < 0x15) {
      if (uVar6 == 0) {
        sVar5 = 1;
      }
    }
    else {
      sVar5 = 0x14;
    }
    *DAT_01003258 = *DAT_01003258 + sVar5;
    psVar2[1] = psVar2[1] + sVar5;
    psVar2[2] = psVar2[2] + sVar5;
    uVar6 = (uint)*(byte *)(DAT_01003270 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0100317a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (DAT_0100317e <= uVar6) {
      uVar6 = (uint)DAT_0100317e;
    }
    (*(code *)((uint)*(byte *)(uVar6 + 0x100317f) * 2 + 0x100317f))();
    return;
  }
  *DAT_01003258 = 0;
  psVar2[1] = 0;
  psVar2[2] = 0;
  *(undefined2 *)(iVar3 + 0x28) = 0;
  if ((*(byte *)(iVar1 + 0xc) < 2) && ((uint)*(ushort *)(iVar1 + 4) < DAT_01003274 - 0x11U)) {
    if ((int)(*puVar4 << 0x17) < 0) {
      *puVar4 = *puVar4 & 0xfffffeff;
    }
    else if ((int)(*puVar4 << 0x12) < 0) {
      *puVar4 = *puVar4 & 0xffffdfff;
    }
  }
  return;
}
