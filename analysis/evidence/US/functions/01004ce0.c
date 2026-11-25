
void FUN_01004ce0(void)

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

  puVar4 = PTR_DAT_01004e20;
  puVar3 = PTR_DAT_01004e1c;
  puVar2 = PTR_DAT_01004e18;
  puVar1 = PTR_DAT_01004e14;
  if (*PTR_DAT_01004e10 != 0) {
    puVar11 = PTR_DAT_01004e10;
    if (9 < (byte)*PTR_DAT_01004e10) {
      iVar9 = (int)*(short *)(PTR_DAT_01004e14 + 4);
      if (iVar9 < 1) {
        iVar9 = -iVar9;
      }
      uVar7 = FUN_01001968(DAT_01004e24 * iVar9,*(undefined2 *)PTR_DAT_01004e14,DAT_01004e24,
                           PTR_DAT_01004e10,in_r3);
      uVar7 = FUN_01001968(DAT_01004e28 * (uint)uVar7,(uint)*(ushort *)puVar3 * 3);
      uVar10 = DAT_01004e2c * (uVar7 - 0x59);
      *(short *)(puVar2 + 6) = (short)(uVar10 >> 0x10);
      sVar8 = FUN_01001968(uVar10 >> 0x10,3);
      *(short *)(puVar2 + 2) = sVar8;
      *(short *)puVar2 = sVar8 << 1;
      *(short *)(puVar2 + 8) = sVar8;
      puVar11 = extraout_r3;
    }
    puVar5 = DAT_01004e34;
    DAT_01004e34[7] = DAT_01004e30;
    puVar6 = DAT_01004e34;
    DAT_01004e34[-0xd] = (DAT_01004e34[-0xd] & 0xffff9fff) + 0x2000;
    puVar6[-2] = 0x2a;
    puVar6[-0xd] = puVar6[-0xd] & 0xffffffc0;
    puVar6[-0xc] = 0;
    puVar6[-6] = 0x400;
    *puVar5 = 0;
    *(undefined4 *)(DAT_01004e38 + 0x14) = 0;
    *puVar5 = 0;
    *puVar11 = 0;
    *puVar4 = 0;
    iVar9 = DAT_01004e3c;
    *(undefined2 *)(DAT_01004e3c + 6) = 0;
    *(undefined2 *)(iVar9 + 4) = 0;
    puVar1 = PTR_DAT_01004e40;
    *(undefined2 *)(PTR_DAT_01004e40 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 0x10) = 0;
    *(undefined2 *)(iVar9 + 2) = 0;
    return;
  }
  FUN_010007d4();
  if (-1 < (int)((uint)(byte)*PTR_DAT_01004e44 << 0x1a)) {
    FUN_01003b1c();
  }
  if (((*(int *)PTR_DAT_01004e48 == 0) && (*(short *)(PTR_DAT_01004e4c + 10) != 0)) &&
     (0x37 < (byte)*puVar4)) {
    if ((int)((uint)(byte)*PTR_DAT_01004e50 << 0x1d) < 0) {
      sVar8 = 0;
    }
    else if (((*(ushort *)(PTR_DAT_01004e54 + 0x20) < DAT_01004e58) && (*(short *)puVar3 != 0)) &&
            (puVar1[0xb] == PTR_DAT_01004e54[0x56])) {
      uVar10 = (uint)*(ushort *)(puVar2 + 6) * (DAT_01004e58 - 10) >> 10;
      if (0x59 < *(ushort *)(puVar2 + 6)) {
        uVar10 = uVar10 + 0x59 & 0xffff;
      }
      sVar8 = FUN_01001968((DAT_01004e24 + -0x20) * uVar10);
    }
    else {
      sVar8 = 0;
    }
    *(short *)(puVar2 + 10) = sVar8;
    *DAT_01004e5c = (int)sVar8 << 10;
    puVar3[0xc] = 7;
  }
  else if ((byte)*puVar4 < 0xfa) {
    *puVar4 = *puVar4 + 1;
    return;
  }
  return;
}
