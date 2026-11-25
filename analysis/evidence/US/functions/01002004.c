
void FUN_01002004(void)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  short *psVar5;
  byte *pbVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  undefined8 uVar22;
  short local_34;
  short local_32;
  undefined4 local_30;
  undefined4 local_2c;
  short local_28;
  short sStack_26;
  short local_24;
  short local_20;
  short local_1e;

  psVar5 = DAT_01002410;
  psVar4 = DAT_01002408;
  bVar3 = true;
  if (*DAT_01002404 < 0x10) {
    DAT_01002408[2] = 0;
    psVar4[3] = 0;
  }
  else {
    cVar21 = *(char *)((int)DAT_01002408 + 0x15);
    sVar8 = *(short *)(DAT_0100240c + 6);
    sVar9 = *(short *)(DAT_0100240c + 8);
    if (cVar21 == '\x01') {
      sVar2 = (short)(DAT_01002408[4] * 99 >> 10);
      local_1e = (sVar8 - *DAT_01002410) + sVar2;
      DAT_01002408[5] = local_1e;
      sVar2 = (sVar9 - *DAT_01002420) + sVar2;
      psVar4[6] = sVar2;
      local_20 = -(sVar2 + local_1e);
      psVar4[4] = local_20;
    }
    else {
      sVar2 = *(short *)(DAT_0100240c + 4);
      if (cVar21 == '\x02') {
        sVar8 = (short)(DAT_01002408[5] * 99 >> 10);
        local_20 = (sVar2 - *DAT_0100241c) + sVar8;
        DAT_01002408[4] = local_20;
        sVar8 = (sVar9 - *DAT_01002420) + sVar8;
        psVar4[6] = sVar8;
        local_1e = -(local_20 + sVar8);
        psVar4[5] = local_1e;
      }
      else if (cVar21 == '\x03') {
        sVar9 = (short)(DAT_01002408[6] * 99 >> 10);
        local_20 = (sVar2 - *DAT_0100241c) + sVar9;
        DAT_01002408[4] = local_20;
        local_1e = (sVar8 - *psVar5) + sVar9;
        psVar4[5] = local_1e;
        psVar4[6] = -(local_20 + local_1e);
      }
      else if (cVar21 == '\x04') {
        local_20 = sVar2 - *DAT_0100241c;
        iVar11 = (int)local_20;
        DAT_01002408[4] = local_20;
        local_1e = sVar8 - *psVar5;
        iVar16 = (int)local_1e;
        psVar4[5] = local_1e;
        sVar9 = sVar9 - *DAT_01002420;
        iVar13 = (int)sVar9;
        psVar4[6] = sVar9;
        iVar20 = iVar11;
        if (iVar11 < 1) {
          iVar20 = -iVar11;
        }
        iVar19 = iVar16;
        if (iVar16 < 1) {
          iVar19 = -iVar16;
        }
        if (iVar19 < iVar20) {
          if (iVar11 < 1) {
            iVar11 = -iVar11;
          }
          if (iVar13 < 1) {
            iVar13 = -iVar13;
          }
          if (iVar13 < iVar11) {
            local_20 = -(local_1e + sVar9);
          }
        }
        else {
          if (iVar16 < 1) {
            iVar16 = -iVar16;
          }
          if (iVar13 < 1) {
            iVar13 = -iVar13;
          }
          if (iVar13 < iVar16) {
            local_1e = -(local_20 + sVar9);
          }
        }
      }
      else {
        bVar3 = false;
      }
    }
    *(char *)((int)psVar4 + 0x15) = (char)psVar4[10];
    psVar5 = DAT_01002408;
    if (bVar3) {
      iVar11 = DAT_01002414 * (short)(local_20 + local_1e * 2) >> 0x10;
      sVar8 = psVar4[9];
      sVar9 = psVar4[8];
      uVar15 = (uint)*DAT_01002418;
      DAT_01002408[uVar15 * 2 + 0x14] = (short)((int)sVar8 * (int)local_20 + sVar9 * iVar11 >> 0xf);
      psVar5[uVar15 * 2 + 0x15] = (short)(sVar8 * iVar11 - (int)sVar9 * (int)local_20 >> 0xf);
      pbVar6 = DAT_01002418;
      *DAT_01002418 = (byte)(uVar15 + 1);
      if (3 < (uVar15 + 1 & 0xff)) {
        *pbVar6 = 0;
      }
      local_34 = DAT_01002408[0x14];
      local_32 = DAT_01002408[0x15];
      local_30 = *(undefined4 *)(DAT_01002408 + 0x14);
      uVar15 = 1;
      local_2c = local_30;
      do {
        sVar8 = psVar5[uVar15 * 2 + 0x14];
        sVar2 = (short)local_2c + sVar8;
        sVar9 = psVar5[uVar15 * 2 + 0x15];
        local_2c._2_2_ = local_2c._2_2_ + sVar9;
        local_2c = CONCAT22(local_2c._2_2_,sVar2);
        if (local_30._2_2_ < sVar9) {
          local_30 = CONCAT22(sVar9,(short)local_30);
        }
        else if (sVar9 < local_32) {
          local_32 = sVar9;
        }
        if ((short)local_30 < sVar8) {
          local_30 = CONCAT22(local_30._2_2_,sVar8);
        }
        else if (sVar8 < local_34) {
          local_34 = sVar8;
        }
        uVar15 = uVar15 + 1 & 0xff;
      } while (uVar15 < 4);
      psVar4[2] = (short)(sVar2 - (local_34 + (short)local_30)) >> 1;
      psVar4[3] = (short)(local_2c._2_2_ - (local_32 + local_30._2_2_)) >> 1;
    }
  }
  sVar8 = *(short *)(DAT_01002428 + DAT_0100242c);
  iVar13 = (int)sVar8;
  sVar9 = *(short *)(DAT_01002428 + DAT_01002430);
  iVar11 = (int)sVar9;
  if ((int)((uint)*DAT_01002424 << 0x1d) < 0) {
    *psVar4 = 0;
    iVar16 = (int)psVar4[4];
    if (iVar16 < 1) {
      iVar16 = -iVar16;
    }
    sVar8 = DAT_01002408[1];
    iVar20 = (int)sVar8;
    if (iVar16 <= iVar13) {
      iVar16 = (int)psVar4[5];
      if (iVar16 < 1) {
        iVar16 = -iVar16;
      }
      if (iVar16 <= iVar13) {
        iVar16 = (int)psVar4[6];
        if (iVar16 < 1) {
          iVar16 = -iVar16;
        }
        if (iVar16 <= iVar13) {
          if (iVar20 < iVar11) {
            psVar4[1] = sVar8 + 1;
          }
          else if (iVar11 < iVar20) {
            psVar4[1] = sVar8 + -1;
          }
          goto LAB_010023da;
        }
      }
    }
    if (iVar20 < 1) {
      if (iVar20 < 0) {
        psVar4[1] = sVar8 + 1;
      }
    }
    else {
      psVar4[1] = sVar8 + -1;
    }
  }
  else if (*(short *)(DAT_01002434 + 0x20) != 0) {
    iVar16 = (int)(short)(*(short *)(DAT_01002428 + 10) - psVar4[2]);
    iVar20 = iVar16 * DAT_01002408[0x10];
    iVar13 = 0xb4000;
    if ((iVar20 < 0xb4001) && (iVar13 = iVar20, iVar20 < DAT_01002438)) {
      iVar13 = DAT_01002438;
    }
    iVar20 = *(int *)(DAT_01002408 + 0xc);
    sVar2 = (short)(iVar20 + iVar13 >> 0xc);
    *psVar4 = sVar2;
    if (DAT_0100243c < sVar2) {
      *psVar4 = (short)DAT_0100243c;
    }
    else if ((int)sVar2 < -DAT_0100243c) {
      *psVar4 = (short)-DAT_0100243c;
    }
    psVar5 = DAT_01002408;
    piVar17 = (int *)(DAT_01002408 + 0xc);
    iVar20 = iVar20 + iVar16 * DAT_01002408[0x11];
    *piVar17 = iVar20;
    if (DAT_01002440 < iVar20) {
      *piVar17 = DAT_01002440;
    }
    else if (iVar20 < -DAT_01002440) {
      *piVar17 = -DAT_01002440;
    }
    iVar16 = (int)(short)(sVar8 - psVar4[3]);
    iVar20 = iVar16 * psVar5[0x12];
    iVar13 = 0xb4000;
    if ((iVar20 < 0xb4001) && (iVar13 = iVar20, iVar20 < DAT_01002438)) {
      iVar13 = DAT_01002438;
    }
    iVar20 = *(int *)(DAT_01002408 + 0xe);
    sVar2 = (short)(iVar20 + iVar13 >> 0xc);
    psVar4[1] = sVar2;
    sVar8 = *(short *)(DAT_01002428 + 0x10);
    if (iVar11 < sVar2) {
      psVar4[1] = sVar9;
    }
    else if ((int)sVar2 < (int)sVar8) {
      psVar4[1] = sVar8;
    }
    psVar5 = DAT_01002408;
    iVar20 = iVar20 + iVar16 * DAT_01002408[0x13];
    *(int *)(DAT_01002408 + 0xe) = iVar20;
    if (iVar11 * 0x1000 < iVar20) {
      *(int *)(psVar5 + 0xe) = iVar11 * 0x1000;
    }
    else {
      iVar11 = sVar8 * 0x1000;
      if (iVar20 < iVar11) {
        *(int *)(psVar5 + 0xe) = iVar11;
      }
    }
    uVar15 = (int)*psVar4 * (int)*psVar4;
    uVar14 = (int)psVar4[1] * (int)psVar4[1];
    cVar21 = CARRY4(uVar15,uVar14);
    iVar11 = uVar15 + uVar14;
    uVar22 = FUN_0100031e(iVar11);
    FUN_010068fc((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_01002444,DAT_01002448);
    if ((cVar21 == '\0') && (sVar8 = (short)(iVar11 >> 0xf), 0x175 < sVar8)) {
      iVar13 = (int)(short)(sVar8 + -0x176);
      iVar11 = DAT_01002450;
      if (iVar13 < 100) {
        iVar11 = (int)*(short *)(DAT_0100244c + iVar13 * 2);
      }
      *psVar4 = (short)(iVar11 * *psVar4 >> 0xf);
      psVar4[1] = (short)(iVar11 * psVar4[1] >> 0xf);
    }
  }
LAB_010023da:
  iVar11 = DAT_01002454;
  uVar7 = psVar4[7] + *(short *)(DAT_01002434 + 0x3a);
  uVar14 = (uint)uVar7;
  uVar7 = uVar7 >> 5;
  uVar15 = (uint)uVar7;
  if ((uVar7 & 0x600) == 0) {
    psVar4[8] = *(short *)(DAT_01002454 + uVar15 * 2);
    psVar4[9] = *(short *)(iVar11 + (0x200 - uVar15) * 2);
  }
  else if ((uVar15 & 0x600) == 0x200) {
    psVar4[8] = *(short *)(DAT_01002454 + (DAT_01002458 - uVar15) * 2);
    psVar4[9] = -*(short *)(iVar11 + (uVar15 - 0x200) * 2);
  }
  else if ((uVar15 & 0x600) == 0x400) {
    psVar4[8] = -*(short *)(DAT_01002454 + (uVar15 - DAT_01002458) * 2);
    psVar4[9] = -*(short *)(iVar11 + (0x600 - uVar15) * 2);
  }
  else {
    psVar4[8] = -*(short *)(DAT_01002454 + (DAT_01002458 * 2 - uVar15) * 2);
    psVar4[9] = *(short *)(iVar11 + (uVar15 - 0x600) * 2);
  }
  iVar11 = (int)(short)((int)psVar4[9] * (int)*psVar4 - (int)psVar4[8] * (int)psVar4[1] >> 0xf);
  sVar9 = ((short)((int)psVar4[9] * (int)psVar4[1] + (int)psVar4[8] * (int)*psVar4 >> 0xf) >> 1) -
          (short)(iVar11 * DAT_01002784 >> 0xf);
  sVar8 = (short)((uint)(DAT_01002788 * iVar11) >> 0x10);
  iVar16 = (int)sVar8;
  iVar13 = (int)sVar9;
  iVar11 = iVar16;
  if (iVar13 < iVar16) {
    iVar11 = iVar13;
    iVar13 = iVar16;
  }
  iVar20 = (int)(short)-(sVar8 + sVar9);
  iVar16 = iVar20;
  if ((iVar20 <= iVar13) && (iVar16 = iVar13, iVar20 < iVar11)) {
    iVar11 = iVar20;
  }
  local_24 = (short)(iVar16 + iVar11 + DAT_0100278c >> 1);
  local_28 = sVar8 - local_24;
  sStack_26 = sVar9 - local_24;
  local_24 = -(sVar8 + sVar9) - local_24;
  sVar8 = local_24;
  if (-1 < (int)((uint)*DAT_01002790 << 0x1d)) {
    if (uVar14 < 0x8001) {
      if (local_28 != 0) {
        local_28 = local_28 + -0x2e;
      }
    }
    else {
      local_28 = local_28 + 0x2e;
    }
    if (uVar14 + DAT_01002794 < DAT_01002798) {
      if (sStack_26 != 0) {
        sStack_26 = sStack_26 + -0x2e;
      }
    }
    else {
      sStack_26 = sStack_26 + 0x2e;
    }
    if (uVar14 + DAT_0100279c < DAT_0100279c >> 0x11) {
      local_24 = local_24 + 0x2e;
    }
    else if (local_24 != 0) {
      local_24 = local_24 + -0x2e;
    }
    iVar11 = -DAT_0100278c;
    sVar8 = (short)iVar11;
    sVar9 = sVar8;
    if ((local_28 <= iVar11) && (sVar9 = local_28, local_28 < 0)) {
      local_28 = 0;
      sVar9 = local_28;
    }
    local_28 = sVar9;
    sVar9 = sVar8;
    if ((sStack_26 <= iVar11) && (sVar9 = sStack_26, sStack_26 < 0)) {
      sStack_26 = 0;
      sVar9 = sStack_26;
    }
    sStack_26 = sVar9;
    if ((local_24 <= iVar11) && (sVar8 = local_24, local_24 < 0)) {
      local_24 = 0;
      sVar8 = local_24;
    }
  }
  local_24 = sVar8;
  uVar10 = FUN_01001d00((int)local_28);
  *(undefined4 *)(DAT_010027a0 + 0x28) = uVar10;
  uVar10 = FUN_01001d00((int)sStack_26);
  *(undefined4 *)(DAT_010027a0 + 0x38) = uVar10;
  uVar10 = FUN_01001d00();
  *(undefined4 *)(DAT_010027a0 + 0x48) = uVar10;
  local_1e = FUN_01001d1c((int)local_28);
  sVar8 = FUN_01001d1c((int)sStack_26);
  sVar9 = FUN_01001d1c((int)local_24);
  iVar13 = (int)sVar9;
  *(int *)(DAT_010027a0 + 0x30) = (int)local_1e;
  iVar11 = DAT_010027a0;
  *(int *)(DAT_010027a0 + 0x40) = (int)sVar8;
  *(int *)(iVar11 + 0x50) = iVar13;
  bVar1 = *DAT_010027a4;
  if (bVar1 < 0x10) {
    *DAT_010027a4 = bVar1 + 1;
    iVar11 = DAT_010027a0;
    if (bVar1 == 0xf) {
      *(undefined4 *)(DAT_010027a0 + -0x30) = 0;
      *(uint *)(iVar11 + -0x34) = *(uint *)(iVar11 + -0x34) | 0x3f;
      iVar11 = DAT_010027b0;
      uVar15 = 0;
      do {
        puVar12 = (undefined2 *)(uVar15 * 4 + iVar11);
        *puVar12 = 0;
        puVar12[1] = 0;
        uVar15 = uVar15 + 1 & 0xff;
      } while (uVar15 < 4);
      *DAT_010027b4 = 0;
    }
    *(undefined1 *)(psVar4 + 10) = 0;
    *(undefined1 *)((int)psVar4 + 0x15) = 0;
    iVar11 = DAT_010027bc;
    sVar8 = *(short *)(DAT_010027b8 + 10);
    *(short *)(DAT_010027bc + 6) = sVar8;
    iVar13 = DAT_010027c0;
    *(short *)(DAT_010027c0 + 0xc) = sVar8;
    *DAT_010027c4 = (int)sVar8 << 10;
    puVar18 = (undefined4 *)(DAT_010027b0 + -0x10);
    *(int *)(DAT_010027b0 + -0xc) = (int)sVar8 << 0xc;
    *puVar18 = 0;
    psVar4[1] = sVar8;
    *psVar4 = 0;
    if ((int)((uint)*DAT_010027c8 << 0x19) < 0) {
      *(undefined2 *)(iVar11 + 0xc) = 0xfff6;
      *(undefined2 *)(DAT_010027b4 + 2) = 0xffa4;
    }
    else {
      *(undefined2 *)(DAT_010027b4 + 2) = 0x5c;
      *(undefined2 *)(iVar11 + 0xc) = 0x550;
      if (*(short *)(iVar13 + 2) != 0) {
        *(short *)(iVar13 + 10) = sVar8;
      }
    }
  }
  else {
    if ((int)sVar8 < (int)local_1e) {
      *(undefined1 *)(psVar4 + 10) = 1;
      local_20 = local_1e;
      local_1e = sVar8;
    }
    else {
      *(undefined1 *)(psVar4 + 10) = 2;
      local_20 = sVar8;
    }
    if (local_20 < iVar13) {
      local_1e = local_20;
      *(undefined1 *)(psVar4 + 10) = 3;
      local_20 = sVar9;
    }
    else if (local_1e < iVar13) {
      local_1e = sVar9;
    }
    iVar11 = (int)local_20;
    if (iVar11 + 0x1cc < -DAT_0100278c) {
      *(undefined4 *)(DAT_010027a0 + 0x1c) = DAT_010027a8;
      *(undefined1 *)(psVar4 + 10) = 4;
    }
    else if (local_1e + 0x1cc < iVar11) {
      *(int *)(DAT_010027a0 + 0x1c) = iVar11 + -0x8a;
    }
    else {
      *(undefined1 *)(psVar4 + 10) = 0;
      *(undefined4 *)(DAT_010027a0 + 0x1c) = DAT_010027ac;
    }
  }
  return;
}
