
void FUN_01004bc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_r3;
  undefined1 *extraout_r3;
  undefined1 *puVar11;

  puVar4 = PTR_DAT_01004d04;
  puVar3 = PTR_DAT_01004d00;
  puVar2 = PTR_DAT_01004cfc;
  puVar1 = PTR_DAT_01004cf8;
  if (*PTR_DAT_01004cf4 != 0) {
    puVar11 = PTR_DAT_01004cf4;
    if (9 < (byte)*PTR_DAT_01004cf4) {
      iVar9 = (int)*(short *)(PTR_DAT_01004cf8 + 4);
      if (iVar9 < 1) {
        iVar9 = -iVar9;
      }
      uVar7 = FUN_01001864(DAT_01004d08 * iVar9,*(undefined2 *)PTR_DAT_01004cf8,DAT_01004d08,
                           PTR_DAT_01004cf4,in_r3);
      uVar7 = FUN_01001864(DAT_01004d0c * (uint)uVar7,(uint)*(ushort *)puVar3 * 3);
      uVar10 = DAT_01004d10 * (uVar7 - 0x59);
      *(short *)(puVar2 + 6) = (short)(uVar10 >> 0x10);
      sVar8 = FUN_01001864(uVar10 >> 0x10,3);
      *(short *)(puVar2 + 2) = sVar8;
      *(short *)puVar2 = sVar8 << 1;
      *(short *)(puVar2 + 8) = sVar8;
      puVar11 = extraout_r3;
    }
    puVar5 = DAT_01004d18;
    DAT_01004d18[7] = DAT_01004d14;
    puVar6 = DAT_01004d18;
    DAT_01004d18[-0xd] = (DAT_01004d18[-0xd] & 0xffff9fff) + 0x2000;
    puVar6[-2] = 0x2a;
    puVar6[-0xd] = puVar6[-0xd] & 0xffffffc0;
    puVar6[-0xc] = 0;
    puVar6[-6] = 0x400;
    *puVar5 = 0;
    *(undefined4 *)(DAT_01004d1c + 0x14) = 0;
    *puVar5 = 0;
    *puVar11 = 0;
    *puVar4 = 0;
    iVar9 = DAT_01004d20;
    *(undefined2 *)(DAT_01004d20 + 6) = 0;
    *(undefined2 *)(iVar9 + 4) = 0;
    puVar1 = PTR_DAT_01004d24;
    *(undefined2 *)(PTR_DAT_01004d24 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 0x10) = 0;
    *(undefined2 *)(iVar9 + 2) = 0;
    return;
  }
  FUN_010007d4();
  if (-1 < (int)((uint)(byte)*PTR_DAT_01004d28 << 0x1a)) {
    FUN_01003a1c();
  }
  if (((*(int *)PTR_DAT_01004d2c == 0) && (*(short *)(PTR_DAT_01004d30 + 10) != 0)) &&
     (0x37 < (byte)*puVar4)) {
    if ((int)((uint)(byte)*PTR_DAT_01004d34 << 0x1d) < 0) {
      sVar8 = 0;
    }
    else if (((*(ushort *)(PTR_DAT_01004d38 + 0x20) < DAT_01004d3c) && (*(short *)puVar3 != 0)) &&
            (puVar1[0xb] == PTR_DAT_01004d38[0x56])) {
      uVar10 = (uint)*(ushort *)(puVar2 + 6) * (DAT_01004d3c - 10) >> 10;
      if (0x59 < *(ushort *)(puVar2 + 6)) {
        uVar10 = uVar10 + 0x59 & 0xffff;
      }
      sVar8 = FUN_01001864((DAT_01004d08 + -0x20) * uVar10);
    }
    else {
      sVar8 = 0;
    }
    *(short *)(puVar2 + 10) = sVar8;
    *DAT_01004d40 = (int)sVar8 << 10;
    puVar3[0xc] = 7;
  }
  else if ((byte)*puVar4 < 0xfa) {
    *puVar4 = *puVar4 + 1;
    return;
  }
  return;
}
