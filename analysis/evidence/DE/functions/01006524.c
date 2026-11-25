
void FUN_01006524(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint local_50 [13];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;

  puVar1 = DAT_010066ac;
  if ((int)((uint)(byte)*DAT_010066ac * 0x10000000) < 0) {
    uVar2 = 0;
    do {
      local_50[uVar2] = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xd);
  }
  else {
    local_50[0] = (uint)(byte)DAT_010066b4[8];
    local_50[1] = (uint)(*(char *)((int)DAT_010066b4 + 0xb) == '\x01');
    local_50[2] = (uint)(short)DAT_010066b4[4];
    local_50[3] = (uint)*DAT_010066b4;
    local_50[4] = (uint)DAT_010066b0[0x33] * 0x100 + (uint)DAT_010066b0[0x34];
    local_50[5] = (uint)DAT_010066b0[0x35] * 0x1000000 + (uint)DAT_010066b0[0x36] * 0x10000 +
                  (uint)DAT_010066b0[0x37] * 0x100 + (uint)DAT_010066b0[0x38];
    local_50[6] = (uint)DAT_010066b0[8];
    if (DAT_010066b0[0x5a] != 0) {
      local_50[6] = (uint)CONCAT11(DAT_010066b0[0x5b],DAT_010066b0[8]);
    }
    local_50[6] = local_50[6] | (uint)DAT_010066b0[0x52] << 0x10;
    local_50[7] = *DAT_010066b8;
    local_50[8] = (uint)DAT_010066b0[0x56] + (uint)DAT_010066b0[0x55] * 0x100;
    local_50[10] = (uint)DAT_010066bc[2] + (uint)DAT_010066bc[3] * 0x10000;
    local_50[0xb] = (uint)*DAT_010066bc + (uint)DAT_010066bc[1] * 0x10000;
    local_50[0xc] = (uint)DAT_010066b0[0x6d] + (uint)DAT_010066b0[0x6c] * 0x100;
  }
  local_1c = (uint)DAT_010066b0[-0xf] + (uint)DAT_010066b0[-0xe] * 0x100 +
             (uint)DAT_010066b0[-0xd] * 0x10000 + (uint)DAT_010066b0[-0xc] * 0x1000000;
  local_18 = (uint)DAT_010066b0[-0xb] + (uint)DAT_010066b0[-10] * 0x100 +
             (uint)DAT_010066b0[-9] * 0x10000 + (uint)DAT_010066b0[-8] * 0x1000000;
  local_14 = (uint)DAT_010066b0[-7] + (uint)DAT_010066b0[-6] * 0x100 +
             (uint)DAT_010066b0[-5] * 0x10000 + (uint)DAT_010066b0[-4] * 0x1000000;
  local_10 = (uint)DAT_010066b0[-3] + (uint)DAT_010066b0[-2] * 0x100 +
             (uint)DAT_010066b0[-1] * 0x10000 + (uint)*DAT_010066b0 * 0x1000000;
  iVar3 = FUN_01001e74(DAT_010066c0,0x11,local_50);
  if (iVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  return;
}
