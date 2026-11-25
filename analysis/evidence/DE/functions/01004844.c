
void FUN_01004844(void)

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

  thunk_FUN_01001e66(DAT_01004b68,0xf,&local_60);
  puVar6 = DAT_01004b6c;
  *DAT_01004b6c = (short)local_60;
  puVar6[1] = (short)local_5c;
  puVar6[2] = (short)local_58;
  puVar6[3] = (short)local_54;
  puVar6[4] = (short)local_50;
  psVar7 = DAT_01004b70;
  *DAT_01004b70 = (short)local_4c;
  sVar4 = (short)local_48;
  psVar7[1] = sVar4;
  puVar8 = DAT_01004b78;
  local_18 = (int)sVar4;
  if (local_3c == DAT_01004b74) {
    *DAT_01004b7c = *DAT_01004b7c | 1;
    *puVar8 = *puVar8 | 1;
  }
  uVar5 = DAT_01004b84;
  uVar16 = DAT_01004b80;
  uVar3 = (undefined2)DAT_01004b84;
  if ((DAT_01004b80 < (local_60 & 0xffff)) || ((local_60 & 0xffff) + 0x170 < DAT_01004b84)) {
    *DAT_01004b6c = uVar3;
  }
  puVar6 = DAT_01004b6c;
  if ((uVar16 < (local_5c & 0xffff)) || ((local_5c & 0xffff) + 0x170 < uVar5)) {
    DAT_01004b6c[1] = uVar3;
  }
  uVar5 = DAT_01004b8c;
  uVar16 = DAT_01004b88;
  uVar3 = (undefined2)DAT_01004b8c;
  if ((DAT_01004b88 < (local_58 & 0xffff)) || ((local_58 & 0xffff) + 0x170 < DAT_01004b8c)) {
    puVar6[2] = uVar3;
  }
  if ((uVar16 < (local_54 & 0xffff)) || ((local_54 & 0xffff) + 0x170 < uVar5)) {
    puVar6[3] = uVar3;
  }
  if ((uVar16 < (local_50 & 0xffff)) || ((local_50 & 0xffff) + 0x170 < uVar5)) {
    puVar6[4] = uVar3;
  }
  iVar9 = DAT_01004b90;
  psVar7 = DAT_01004b70;
  uVar16 = DAT_01004b88 + 0x21;
  if (uVar16 <= (uint)((short)local_4c + DAT_01004b90)) {
    *DAT_01004b70 = 0x1000;
  }
  if (uVar16 <= (uint)(sVar4 + iVar9)) {
    psVar7[1] = 0x1000;
  }
  iVar9 = DAT_01004b94;
  puVar17 = DAT_01004b98;
  if ((local_38 != 0xffffffff) && (local_34 != 0xffffffff)) {
    puVar17 = &local_38;
  }
  uVar16 = 0;
  do {
    uVar5 = *puVar17;
    puVar17 = (uint *)((int)puVar17 + 1);
    *(char *)(iVar9 + uVar16 + 9) = (char)uVar5;
    puVar11 = DAT_01004b98;
    iVar10 = DAT_01004b94;
    uVar16 = uVar16 + 1 & 0xffff;
  } while (uVar16 < 8);
  *(undefined1 *)(DAT_01004b94 + 0xc) = *(undefined1 *)((int)DAT_01004b98 + 3);
  *(char *)(iVar10 + 0xd) = (char)puVar11[1];
  local_30._0_2_ = local_30._1_2_;
  thunk_FUN_01001e66(DAT_01004b9c,0x11,&local_60);
  puVar6 = DAT_01004b6c;
  puVar14 = DAT_01004b6c + 5;
  *(undefined1 *)(DAT_01004b6c + 0xd) = 0;
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
  if (DAT_01004ba0 <= (local_54 & 0xffff) - 500) {
    *puVar14 = 0x354;
  }
  *(undefined1 *)((int)puVar6 + 0x19) = 0x28;
  if (local_50 == 0xffffffff) {
    *DAT_01004ba4 = 0;
  }
  else {
    *DAT_01004ba4 = (short)local_50;
  }
  if (local_4c == -1) {
    *DAT_01004ba8 = 0;
  }
  else {
    *DAT_01004ba8 = local_4c;
  }
  iVar9 = DAT_01004b94;
  puVar15 = (undefined1 *)(DAT_01004b94 + 0x20);
  if (local_48 == 0xffffffff) {
    *(undefined1 *)(DAT_01004b94 + 0x72) = 1;
    *(undefined1 *)(iVar9 + 0x7b) = 1;
    *(undefined1 *)(iVar9 + 0x28) = 1;
    *(undefined1 *)(iVar9 + 0x7a) = 1;
  }
  else {
    uVar16 = local_48 & 0xf;
    *(char *)(DAT_01004b94 + 0x28) = (char)uVar16;
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
  puVar17 = DAT_01004bac;
  if (local_44 == 0xffffffff) {
    *DAT_01004bac = DAT_01004bb8;
  }
  else {
    *DAT_01004bac = local_44;
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
  puVar12 = DAT_01004bb0;
  DAT_01004bb0[2] = (ushort)local_38;
  puVar12[3] = (ushort)(local_38 >> 0x10);
  *puVar12 = (ushort)local_34;
  puVar12[1] = (ushort)(local_34 >> 0x10);
  if ((local_38 & 0xffff) == DAT_01004bb4) {
    puVar12[2] = 0;
  }
  if (local_38 >> 0x10 == DAT_01004bb4) {
    puVar12[3] = 0;
  }
  uVar1 = puVar12[2];
  if ((uint)uVar1 < (uint)puVar12[3]) {
    puVar12[3] = uVar1;
  }
  uVar16 = DAT_01004bb4;
  if ((local_34 & 0xffff) == DAT_01004bb4) {
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
  iVar9 = DAT_01004b94;
  *(char *)(DAT_01004b94 + 0x11) = (char)local_30._4_4_;
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
  uVar13 = *DAT_01004bbc * 0x100 + (*DAT_01004bbc >> 8);
  if ((uVar13 != uVar16) && ((uint)uVar2 < (uint)uVar13)) {
    puVar12[3] = uVar13 - 1;
  }
  uVar13 = *DAT_01004bc0 * 0x100 + (*DAT_01004bc0 >> 8);
  if ((uVar13 != uVar16) && ((uint)uVar1 < (uint)uVar13)) {
    puVar12[1] = uVar13 - 1;
  }
  iVar9 = DAT_01004b94;
  *(char *)(DAT_01004b94 + 0x8d) = (char)local_30._0_2_;
  *(char *)(iVar9 + 0x8c) = SUB21(local_30._0_2_,1);
  return;
}
