
void FUN_0100663c(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint local_50 [13];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;

  puVar1 = DAT_010067c4;
  if ((int)((uint)(byte)*DAT_010067c4 * 0x10000000) < 0) {
    uVar2 = 0;
    do {
      local_50[uVar2] = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xd);
  }
  else {
    local_50[0] = (uint)(byte)DAT_010067cc[8];
    local_50[1] = (uint)(*(char *)((int)DAT_010067cc + 0xb) == '\x01');
    local_50[2] = (uint)(short)DAT_010067cc[4];
    local_50[3] = (uint)*DAT_010067cc;
    local_50[4] = (uint)DAT_010067c8[0x33] * 0x100 + (uint)DAT_010067c8[0x34];
    local_50[5] = (uint)DAT_010067c8[0x35] * 0x1000000 + (uint)DAT_010067c8[0x36] * 0x10000 +
                  (uint)DAT_010067c8[0x37] * 0x100 + (uint)DAT_010067c8[0x38];
    local_50[6] = (uint)DAT_010067c8[8];
    if (DAT_010067c8[0x5a] != 0) {
      local_50[6] = (uint)CONCAT11(DAT_010067c8[0x5b],DAT_010067c8[8]);
    }
    local_50[6] = local_50[6] | (uint)DAT_010067c8[0x52] << 0x10;
    local_50[7] = *DAT_010067d0;
    local_50[8] = (uint)DAT_010067c8[0x56] + (uint)DAT_010067c8[0x55] * 0x100;
    local_50[10] = (uint)DAT_010067d4[2] + (uint)DAT_010067d4[3] * 0x10000;
    local_50[0xb] = (uint)*DAT_010067d4 + (uint)DAT_010067d4[1] * 0x10000;
    local_50[0xc] = (uint)DAT_010067c8[0x6d] + (uint)DAT_010067c8[0x6c] * 0x100;
  }
  local_1c = (uint)DAT_010067c8[-0xf] + (uint)DAT_010067c8[-0xe] * 0x100 +
             (uint)DAT_010067c8[-0xd] * 0x10000 + (uint)DAT_010067c8[-0xc] * 0x1000000;
  local_18 = (uint)DAT_010067c8[-0xb] + (uint)DAT_010067c8[-10] * 0x100 +
             (uint)DAT_010067c8[-9] * 0x10000 + (uint)DAT_010067c8[-8] * 0x1000000;
  local_14 = (uint)DAT_010067c8[-7] + (uint)DAT_010067c8[-6] * 0x100 +
             (uint)DAT_010067c8[-5] * 0x10000 + (uint)DAT_010067c8[-4] * 0x1000000;
  local_10 = (uint)DAT_010067c8[-3] + (uint)DAT_010067c8[-2] * 0x100 +
             (uint)DAT_010067c8[-1] * 0x10000 + (uint)*DAT_010067c8 * 0x1000000;
  iVar3 = FUN_01001f74(DAT_010067d8,0x11,local_50);
  if (iVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  return;
}
