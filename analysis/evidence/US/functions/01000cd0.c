
void FUN_01000cd0(void)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;

  iVar11 = DAT_01000ee8;
  uVar7 = (uint)(ushort)((ushort)*(byte *)(DAT_01000ee8 + 5) +
                        (ushort)*(byte *)(DAT_01000ee8 + 4) * 0x100);
  uVar14 = *DAT_01000eec;
  *DAT_01000eec = uVar14 & 0xfffffffd;
  puVar3 = DAT_01000ef4;
  uVar10 = (uint)(ushort)((ushort)*(byte *)(iVar11 + 7) + (ushort)*(byte *)(iVar11 + 6) * 0x100);
  uVar13 = *DAT_01000ef4 | 0x20;
  bVar1 = *DAT_01000ef8;
  if (DAT_01000ef0 < uVar7) {
    if (DAT_01000efc < uVar7) {
      *DAT_01000ef4 = uVar13;
    }
  }
  else if (uVar7 < 0x148) {
    if (5 < bVar1) {
      *DAT_01000ef4 = uVar13;
    }
  }
  else {
    *DAT_01000ef4 = *DAT_01000ef4 & 0xffffffdf;
  }
  uVar13 = DAT_01000ef0;
  if (DAT_01000ef0 < uVar10) {
    if (DAT_01000efc < uVar10) {
      *puVar3 = *puVar3 | 0x40;
    }
  }
  else if (uVar10 < 0x148) {
    if (5 < bVar1) {
      *puVar3 = *puVar3 | 0x40;
    }
  }
  else {
    *puVar3 = *puVar3 & 0xffffffbf;
  }
  puVar4 = DAT_01000f00;
  uVar12 = *puVar3;
  if ((((-1 < (int)(uVar12 << 0x1a)) || (uVar8 = uVar10, (int)(uVar12 << 0x19) < 0)) &&
      ((uVar8 = uVar7, -1 < (int)(uVar12 << 0x19) || ((int)(uVar12 << 0x1a) < 0)))) &&
     (uVar7 < uVar10)) {
    uVar8 = uVar10;
  }
  iVar11 = (int)*(short *)(DAT_01000f04 + 4);
  uVar7 = *DAT_01000f00;
  if (uVar13 < uVar8) {
    *(uint *)(DAT_01000f08 + 0x20) = *(uint *)(DAT_01000f08 + 0x20) | 0x4000;
    *puVar4 = uVar7 | 0x40;
    if ((DAT_01000f0c < uVar8) && (100 < iVar11)) {
      *DAT_01000eec = uVar14 & 0xfffffffd | 2;
    }
    else {
      uVar8 = uVar8 - DAT_01000ef0 & 0xffff;
    }
    if (iVar11 < 0x2d) {
      *DAT_01000eec = *DAT_01000eec | 0x200000;
    }
  }
  else {
    *(uint *)(DAT_01000f08 + 0x24) = *(uint *)(DAT_01000f08 + 0x24) | 0x4000;
    *puVar4 = uVar7 & 0xffffffbf;
  }
  uVar7 = *puVar4;
  if ((int)(uVar7 << 0x1e) < 0) {
    *(uint *)(DAT_01000f08 + 0x20) = *(uint *)(DAT_01000f08 + 0x20) | 0x4000;
  }
  iVar5 = DAT_01000f18;
  uVar14 = *DAT_01000f10;
  uVar10 = (uint)*DAT_01000f14;
  uVar13 = (uVar10 & 0x3ff) >> 8;
  if ((int)(uVar7 * 0x2000000) < 0) {
    *DAT_01000f10 = uVar14 | 0x40;
    if ((int)((uint)(byte)*DAT_01000eec << 0x1e) < 0) {
      *(short *)(iVar5 + 0x12) = (short)DAT_01000f1c;
    }
    else {
      uVar10 = uVar8 * 0x18e >> 10;
      if (uVar10 < 0x34) {
        sVar6 = 0x34;
      }
      else {
        sVar6 = (short)uVar10;
        if (0x175 < uVar10) {
          sVar6 = 0x175;
        }
      }
      *(short *)(iVar5 + 0x12) = -sVar6;
    }
  }
  else {
    uVar2 = *(ushort *)(DAT_01000f20 + 4);
    uVar12 = DAT_01000ef0 - 0x29;
    if (((((uVar2 < uVar12) && ((uVar10 & 0x3ff) >> 8 != 0)) && (-1 < (int)(uVar7 << 0x17))) &&
        (1 < *(byte *)(DAT_01000f20 + 0xc))) || ((int)(uVar14 << 4) < 0)) {
      *DAT_01000f10 = uVar14 | 0x40;
      if (uVar13 == 1) {
        *(undefined2 *)(iVar5 + 0x12) = 0xff6b;
      }
      else if (uVar13 == 2) {
        *(undefined2 *)(iVar5 + 0x12) = 0xff20;
      }
      else {
        *(short *)(iVar5 + 0x12) = (short)DAT_01000f1c + 0x5a;
      }
      *(uint *)(DAT_01000f08 + 0x20) = *(uint *)(DAT_01000f08 + 0x20) | 0x4000;
      if ((uVar12 <= uVar2) || ((uVar10 & 0x3ff) >> 8 == 0)) {
        iVar9 = iVar11 + DAT_01000f24;
        if (iVar9 < 1) {
          iVar9 = (DAT_01000ef0 - 0xed) - iVar11;
        }
        *(short *)(iVar5 + 0x12) = (short)iVar9 * -0x10;
      }
    }
    else {
      *DAT_01000f10 = uVar14 & 0xffffffbf;
      *(undefined2 *)(iVar5 + 0x12) = 0;
    }
  }
  if (((iVar11 < 0x200) && (-1 < (int)(uVar7 << 0x19))) &&
     ((*(short *)(iVar5 + 0x12) != 0 && (1 < uVar13)))) {
    if (iVar11 < 1) {
      iVar11 = -iVar11;
    }
    sVar6 = (short)(iVar11 * *(short *)(iVar5 + 0x12) >> 9);
    *(short *)(iVar5 + 0x12) = sVar6;
    if (-0x1d < sVar6) {
      *(undefined2 *)(iVar5 + 0x12) = 0xffe3;
    }
  }
  return;
}
