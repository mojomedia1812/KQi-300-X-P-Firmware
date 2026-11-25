
void FUN_01000fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *puVar11;

  puVar11 = DAT_010012bc;
  uVar2 = (ushort)((int)(short)(*DAT_010012b0 - *(short *)(DAT_010012b4 + 2)) * (int)*DAT_010012b8
                  >> 0xc);
  DAT_010012bc[1] = uVar2;
  iVar4 = DAT_010012cc;
  puVar3 = DAT_010012c8;
  iVar6 = DAT_010012c4;
  if ((int)((uint)*DAT_010012c0 << 0x1d) < 0) {
    if ((char)puVar11[6] == '\a') {
      if ((short)uVar2 < 0xcb) {
        FUN_01006784(1,(int)(short)DAT_010012c8[5],DAT_010012c4 + 6,param_4,param_3,param_4);
        FUN_010067a0(1,(int)(short)puVar3[5],iVar6 + 6);
        return;
      }
      FUN_01006784(1,0,DAT_010012c4 + 6,param_4,param_3,param_4);
      FUN_010067a0(1,0,iVar6 + 6);
    }
    return;
  }
  if ((byte)DAT_010012bc[6] < 6) {
    *(undefined4 *)(DAT_010012cc + 0x30) = 0;
    return;
  }
  iVar5 = DAT_010012c4 + 0x10;
  if (*(short *)(DAT_010012c4 + 0xc) < 1) {
    sVar1 = *(short *)(DAT_010012d0 + 2);
    iVar8 = sVar1 + -300;
    if (*(short *)(DAT_010012c4 + 0x10) < iVar8) {
      *(short *)(DAT_010012c4 + 0x10) = (short)iVar8;
    }
    sVar7 = *(short *)(DAT_010012d0 + 2) + 200;
    if ((int)((uint)*DAT_010012d4 * 0x40000000) < 0) {
      iVar8 = *(int *)(iVar4 + 0x34) + 1;
      *(int *)(iVar4 + 0x34) = iVar8;
      uVar10 = DAT_010012d8;
      if (iVar8 < 0x97) {
        uVar10 = 0;
      }
      *(short *)(iVar6 + 6) = sVar7;
      if (0 < *(short *)(iVar6 + 0x10)) {
        *(undefined2 *)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = 0;
      *(short *)(iVar6 + 6) = sVar7;
    }
    if ((short)uVar2 < 1) {
      uVar9 = 0x107;
      if (((short)uVar2 < -0x107) || (uVar9 = DAT_010012dc, DAT_010012dc < *DAT_010012bc)) {
        if (*(short *)(iVar6 + 0x10) + 10 < (int)sVar1) {
          *(short *)(iVar6 + 0x10) = sVar1;
        }
        FUN_010067a0(0x14,(int)*(short *)(iVar6 + 6),iVar5,uVar9,param_3);
      }
      else if (((short)uVar2 < -0x78) || (DAT_010012dc - 0xab <= (uint)*DAT_010012bc)) {
        FUN_01006784(0xf,uVar10,iVar5);
        FUN_010067a0(0xf,uVar10,iVar5);
      }
      else {
        FUN_01006784(0x19,uVar10,iVar5);
        FUN_010067a0(0x19,uVar10,iVar5);
      }
    }
    else {
      sVar1 = uVar2 - 10;
      if ((sVar1 < 1) || (-1 < *(short *)(iVar6 + 0x10))) {
        if (puVar3[1] != 0) {
          FUN_01006784(5,uVar10,iVar5);
          FUN_010067a0(5,uVar10,iVar5);
        }
      }
      else {
        sVar7 = 5;
        if (sVar1 < 0x3d) {
          if (0x14 < sVar1) {
            sVar7 = 8;
          }
        }
        else {
          sVar7 = 0xb;
        }
        *(short *)(iVar6 + 0x10) = *(short *)(iVar6 + 0x10) + sVar7;
      }
    }
    puVar3[6] = *(ushort *)(iVar6 + 6);
    *(undefined4 *)(iVar4 + 0x30) = 0;
    return;
  }
  *(undefined4 *)(DAT_010012cc + 0x34) = 0;
  FUN_010067a0(0x19,0,iVar5,param_4,param_3);
  FUN_01006784(0x19,0,iVar5);
  iVar5 = *(short *)(DAT_010012d0 + 2) + 100;
  if (iVar5 < *(short *)(iVar6 + 6)) {
    *(short *)(iVar6 + 6) = (short)iVar5;
  }
  if ((short)DAT_010012bc[1] <= *(short *)(iVar6 + 4) >> 1) {
    if (((int)*(short *)(iVar6 + 6) < (int)(uint)*puVar3) && (puVar3[1] != 0)) {
      FUN_010067a0(8,(int)(short)puVar3[5],iVar6 + 6);
    }
    if ((short)DAT_010012bc[1] < 0) {
      if (*(char *)(iVar4 + 6) < '\0') {
        *(undefined1 *)(iVar4 + 6) = 0;
        FUN_010067a0(1,(int)(short)*puVar3,iVar6 + 6);
      }
      else {
        *(char *)(iVar4 + 6) = *(char *)(iVar4 + 6) + -1;
      }
    }
    if (((short)DAT_010012bc[1] < 0x51) || (*(short *)(iVar6 + 10) != 0)) {
      if (0 < (short)DAT_010012bc[1]) {
        if (*(char *)(iVar4 + 6) < '\x03') {
          *(char *)(iVar4 + 6) = *(char *)(iVar4 + 6) + '\x01';
        }
        else {
          *(undefined1 *)(iVar4 + 6) = 0;
          FUN_01006784(1,(int)(short)puVar3[5],iVar6 + 6);
        }
      }
    }
    else {
      FUN_01006784(1,(int)(short)puVar3[5],iVar6 + 6);
    }
    puVar3[6] = *(ushort *)(iVar6 + 6);
    *(undefined4 *)(iVar4 + 0x30) = 0;
    return;
  }
  iVar5 = (int)(short)(*(short *)(iVar6 + 4) - DAT_010012bc[1]);
  iVar4 = DAT_010012e0 * iVar5;
  iVar6 = 0x2d000;
  if ((iVar4 < 0x2d001) && (iVar6 = iVar4, iVar4 < DAT_010012e4)) {
    iVar6 = DAT_010012e4;
  }
  iVar6 = iVar6 + *(int *)(DAT_010012cc + 0x30) >> 10;
  puVar11 = DAT_010012c8 + 6;
  if (((-1 < iVar6) && (iVar6 = 0, puVar3[1] != 0)) && ((int)(short)puVar3[6] < (int)(uint)*puVar3))
  {
    FUN_010067a0(6,(int)(short)puVar3[5],puVar11);
  }
  FUN_01006784(5,(int)(short)puVar3[5],puVar11);
  uVar2 = puVar3[6];
  iVar6 = (short)uVar2 + iVar6;
  if (iVar6 < 1) {
    *(undefined2 *)(DAT_010012c4 + 6) = 1;
  }
  else {
    *(short *)(DAT_010012c4 + 6) = (short)iVar6;
  }
  iVar4 = DAT_010012cc;
  iVar5 = iVar5 * 0x28 + *(int *)(DAT_010012cc + 0x30);
  *(int *)(DAT_010012cc + 0x30) = iVar5;
  iVar6 = (short)uVar2 * -0x400;
  if (iVar5 < 1) {
    if (iVar5 < iVar6) {
      *(int *)(iVar4 + 0x30) = iVar6;
      return;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x30) = 0;
  }
  return;
}
