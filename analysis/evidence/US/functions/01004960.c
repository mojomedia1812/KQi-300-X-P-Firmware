
void FUN_01004960(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined2 *puVar6;
  short *psVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ushort *puVar12;
  ushort uVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30 [24];
  int local_18;

  thunk_FUN_01001f6a(DAT_01004c84,0xf,&local_60);
  puVar6 = DAT_01004c88;
  *DAT_01004c88 = (short)local_60;
  puVar6[1] = (short)local_5c;
  puVar6[2] = (short)local_58;
  puVar6[3] = (short)local_54;
  puVar6[4] = (short)local_50;
  psVar7 = DAT_01004c8c;
  *DAT_01004c8c = (short)local_4c;
  sVar4 = (short)local_48;
  psVar7[1] = sVar4;
  puVar8 = DAT_01004c94;
  local_18 = (int)sVar4;
  if (local_3c == DAT_01004c90) {
    *DAT_01004c98 = *DAT_01004c98 | 1;
    *puVar8 = *puVar8 | 1;
  }
  uVar5 = DAT_01004ca0;
  uVar16 = DAT_01004c9c;
  uVar3 = (undefined2)DAT_01004ca0;
  if ((DAT_01004c9c < (local_60 & 0xffff)) || ((local_60 & 0xffff) + 0x170 < DAT_01004ca0)) {
    *DAT_01004c88 = uVar3;
  }
  puVar6 = DAT_01004c88;
  if ((uVar16 < (local_5c & 0xffff)) || ((local_5c & 0xffff) + 0x170 < uVar5)) {
    DAT_01004c88[1] = uVar3;
  }
  uVar5 = DAT_01004ca8;
  uVar16 = DAT_01004ca4;
  uVar3 = (undefined2)DAT_01004ca8;
  if ((DAT_01004ca4 < (local_58 & 0xffff)) || ((local_58 & 0xffff) + 0x170 < DAT_01004ca8)) {
    puVar6[2] = uVar3;
  }
  if ((uVar16 < (local_54 & 0xffff)) || ((local_54 & 0xffff) + 0x170 < uVar5)) {
    puVar6[3] = uVar3;
  }
  if ((uVar16 < (local_50 & 0xffff)) || ((local_50 & 0xffff) + 0x170 < uVar5)) {
    puVar6[4] = uVar3;
  }
  iVar9 = DAT_01004cac;
  psVar7 = DAT_01004c8c;
  uVar16 = DAT_01004ca4 + 0x21;
  if (uVar16 <= (uint)((short)local_4c + DAT_01004cac)) {
    *DAT_01004c8c = 0x1000;
  }
  if (uVar16 <= (uint)(sVar4 + iVar9)) {
    psVar7[1] = 0x1000;
  }
  iVar9 = DAT_01004cb0;
  puVar17 = DAT_01004cb4;
  if ((local_38 != 0xffffffff) && (local_34 != 0xffffffff)) {
    puVar17 = &local_38;
  }
  uVar16 = 0;
  do {
    uVar5 = *puVar17;
    puVar17 = (uint *)((int)puVar17 + 1);
    *(char *)(iVar9 + uVar16 + 9) = (char)uVar5;
    puVar11 = DAT_01004cb4;
    iVar10 = DAT_01004cb0;
    uVar16 = uVar16 + 1 & 0xffff;
  } while (uVar16 < 8);
  *(undefined1 *)(DAT_01004cb0 + 0xc) = *(undefined1 *)((int)DAT_01004cb4 + 3);
  *(char *)(iVar10 + 0xd) = (char)puVar11[1];
  local_30._0_2_ = local_30._1_2_;
  thunk_FUN_01001f6a(DAT_01004cb8,0x11,&local_60);
  puVar6 = DAT_01004c88;
  puVar14 = DAT_01004c88 + 5;
  *(undefined1 *)(DAT_01004c88 + 0xd) = 0;
  if ((local_5c & 3) == 0) {
    *(undefined1 *)((int)puVar6 + 0x15) = 0xff;
  }
  else if ((local_5c & 3) == 1) {
    *(undefined1 *)((int)puVar6 + 0x15) = 1;
  }
  else {
    *(undefined1 *)((int)puVar6 + 0x15) = 1;
  }
  *(undefined1 *)(puVar6 + 0xb) = 1;
  *(undefined1 *)((int)puVar6 + 0x17) = 0;
  puVar6[8] = 0x8000;
  if (local_58 == 0xffffffff) {
    puVar6[9] = 0;
  }
  else {
    puVar6[9] = (short)local_58;
  }
  *puVar14 = (short)local_54;
  if (DAT_01004cbc <= (local_54 & 0xffff) - 500) {
    *puVar14 = 0x354;
  }
  *(undefined1 *)((int)puVar6 + 0x19) = 0x28;
  if (local_50 == 0xffffffff) {
    *DAT_01004cc0 = 0;
  }
  else {
    *DAT_01004cc0 = (short)local_50;
  }
  if (local_4c == -1) {
    *DAT_01004cc4 = 0;
  }
  else {
    *DAT_01004cc4 = local_4c;
  }
  iVar9 = DAT_01004cb0;
  puVar15 = (undefined1 *)(DAT_01004cb0 + 0x20);
  if (local_48 == 0xffffffff) {
    *(undefined1 *)(DAT_01004cb0 + 0x72) = 1;
    *(undefined1 *)(iVar9 + 0x7b) = 1;
    *(undefined1 *)(iVar9 + 0x28) = 1;
    *(undefined1 *)(iVar9 + 0x7a) = 1;
  }
  else {
    uVar16 = local_48 & 0xf;
    *(char *)(DAT_01004cb0 + 0x28) = (char)uVar16;
    if ((uVar16 != 2) && (uVar16 != 10)) {
      *(undefined1 *)(iVar9 + 0x28) = 1;
    }
    *(char *)(iVar9 + 0x7b) = (char)((local_48 & 0x3ff) >> 8);
    if ((local_48 & 0x3ff) >> 8 != 0) {
      *(undefined1 *)(iVar9 + 0x7a) = 1;
    }
    uVar16 = (local_48 & 0x7ffff) >> 0x10;
    *(char *)(iVar9 + 0x72) = (char)((local_48 & 0x7ffff) >> 0x10);
    if ((5 < uVar16) || (uVar16 == 0)) {
      *(undefined1 *)(iVar9 + 0x72) = 1;
    }
  }
  puVar17 = DAT_01004cc8;
  if (local_44 == 0xffffffff) {
    *DAT_01004cc8 = DAT_01004cd4;
  }
  else {
    *DAT_01004cc8 = local_44;
  }
  *puVar17 = *puVar17 | 0x40000;
  if (local_40 == -1) {
    *(undefined1 *)(iVar9 + 0x76) = 0x28;
    *(undefined1 *)(iVar9 + 0x75) = 0;
  }
  else {
    *(char *)(iVar9 + 0x76) = (char)local_40;
    *(char *)(iVar9 + 0x75) = (char)((uint)local_40 >> 8);
  }
  puVar12 = DAT_01004ccc;
  DAT_01004ccc[2] = (ushort)local_38;
  puVar12[3] = (ushort)(local_38 >> 0x10);
  *puVar12 = (ushort)local_34;
  puVar12[1] = (ushort)(local_34 >> 0x10);
  if ((local_38 & 0xffff) == DAT_01004cd0) {
    puVar12[2] = 0;
  }
  if (local_38 >> 0x10 == DAT_01004cd0) {
    puVar12[3] = 0;
  }
  uVar1 = puVar12[2];
  if ((uint)uVar1 < (uint)puVar12[3]) {
    puVar12[3] = uVar1;
  }
  uVar16 = DAT_01004cd0;
  if ((local_34 & 0xffff) == DAT_01004cd0) {
    *puVar12 = 0;
  }
  if (local_34 >> 0x10 == uVar16) {
    puVar12[1] = 0;
  }
  uVar13 = *puVar12;
  if ((uint)uVar13 < (uint)puVar12[1]) {
    puVar12[1] = uVar13;
  }
  uVar2 = puVar12[3];
  if ((uint)uVar1 == (uint)uVar2) {
    *puVar8 = *puVar8 & 0xffffefff;
  }
  else {
    *puVar8 = *puVar8 | 0x1000;
  }
  uVar1 = puVar12[1];
  if ((uint)uVar13 == (uint)uVar1) {
    *puVar8 = *puVar8 & 0xfffff7ff;
  }
  else {
    *puVar8 = *puVar8 | 0x800;
  }
  iVar9 = DAT_01004cb0;
  *(char *)(DAT_01004cb0 + 0x11) = (char)local_30._4_4_;
  *(char *)(iVar9 + 0x12) = SUB41(local_30._4_4_,1);
  *(char *)(iVar9 + 0x13) = SUB41(local_30._4_4_,2);
  *(char *)(iVar9 + 0x14) = SUB41(local_30._4_4_,3);
  *(char *)(iVar9 + 0x15) = (char)local_30._8_4_;
  *(char *)(iVar9 + 0x16) = SUB41(local_30._8_4_,1);
  *(char *)(iVar9 + 0x17) = SUB41(local_30._8_4_,2);
  *(char *)(iVar9 + 0x18) = SUB41(local_30._8_4_,3);
  *(char *)(iVar9 + 0x19) = (char)local_30._12_4_;
  *(char *)(iVar9 + 0x1a) = SUB41(local_30._12_4_,1);
  *(char *)(iVar9 + 0x1b) = SUB41(local_30._12_4_,2);
  *(char *)(iVar9 + 0x1c) = SUB41(local_30._12_4_,3);
  *(char *)(iVar9 + 0x1d) = (char)local_30._16_4_;
  *(char *)(iVar9 + 0x1e) = SUB41(local_30._16_4_,1);
  *(char *)(iVar9 + 0x1f) = SUB41(local_30._16_4_,2);
  *puVar15 = SUB41(local_30._16_4_,3);
  uVar13 = *DAT_01004cd8 * 0x100 + (*DAT_01004cd8 >> 8);
  if ((uVar13 != uVar16) && ((uint)uVar2 < (uint)uVar13)) {
    puVar12[3] = uVar13 - 1;
  }
  uVar13 = *DAT_01004cdc * 0x100 + (*DAT_01004cdc >> 8);
  if ((uVar13 != uVar16) && ((uint)uVar1 < (uint)uVar13)) {
    puVar12[1] = uVar13 - 1;
  }
  iVar9 = DAT_01004cb0;
  *(char *)(DAT_01004cb0 + 0x8d) = (char)local_30._0_2_;
  *(char *)(iVar9 + 0x8c) = SUB21(local_30._0_2_,1);
  return;
}
