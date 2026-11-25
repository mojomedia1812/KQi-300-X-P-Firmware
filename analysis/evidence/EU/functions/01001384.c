
void FUN_01001384(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;

  puVar5 = DAT_010016fc;
  uVar10 = *DAT_010016fc;
  sVar3 = *(short *)(DAT_01001700 + 4);
  uVar9 = (uint)*(ushort *)(DAT_01001704 + 4);
  uVar8 = *DAT_01001708;
  uVar11 = DAT_010016fc[1];
  if ((int)(uVar10 * 0x20000000) < 0) {
    if ((*(byte *)(DAT_0100170c + 0xc) < 2) || ((int)(uVar11 << 0x17) < 0)) {
      *(undefined2 *)((int)DAT_010016fc + -0x22) = 0;
    }
    else {
      uVar4 = *(undefined2 *)(DAT_01001704 + 4);
      if ((((uVar9 < 0x141) ||
           (0x9e < (int)(short)(*(short *)(DAT_01001704 + 6) - *(ushort *)(DAT_01001704 + 4)) +
                   0x4fU)) || (0x3a < (int)(short)((short)DAT_010016fc[-8] - sVar3) + 0x1dU)) ||
         (((int)(uVar8 << 0x19) < 0 || ((int)(uVar11 << 0x1e) < 0)))) {
        *(undefined2 *)(DAT_01001704 + 6) = uVar4;
        puVar5 = DAT_010016fc;
        *(undefined2 *)(DAT_010016fc + -8) = *(undefined2 *)(DAT_01001700 + 4);
        *(undefined2 *)((int)puVar5 + -0x22) = 0;
      }
      else if (*(ushort *)((int)DAT_010016fc + -0x22) < 0x1c2) {
        *(ushort *)((int)DAT_010016fc + -0x22) = *(ushort *)((int)DAT_010016fc + -0x22) + 1;
      }
      else {
        DAT_010016fc[1] = uVar11 | 0x100;
        *(undefined1 *)((int)puVar5 + -0x2a) = 0;
        if ((int)*(short *)(DAT_01001700 + 2) < (int)uVar9) {
          *(short *)(DAT_01001704 + 6) = *(short *)(DAT_01001700 + 2);
        }
        else {
          *(undefined2 *)(DAT_01001704 + 6) = uVar4;
        }
      }
    }
  }
  else {
    DAT_010016fc[1] = uVar11 & 0xfffffeff;
    *(undefined2 *)((int)puVar5 + -0x22) = 0;
  }
  puVar5 = DAT_010016fc;
  uVar13 = DAT_010016fc[1];
  uVar11 = *DAT_01001710;
  if ((int)(uVar13 << 0x17) < 0) {
    bVar1 = *(byte *)((int)DAT_010016fc + -0x2a);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (uVar9 == 0) {
          *(undefined1 *)((int)DAT_010016fc + -0x2a) = 1;
        }
      }
      else if (uVar9 != 0) {
        *(byte *)((int)DAT_010016fc + -0x2a) = bVar1 + 1;
      }
    }
    if ((((int)(uVar11 << 0x1b) < 0) || ((int)((uint)*DAT_01001714 << 0x1c) < 0)) ||
       (((int)(uVar13 << 0x1e) < 0 ||
        (((1 < *(byte *)((int)puVar5 + -0x2a) || (*(byte *)(DAT_0100170c + 0xc) < 2)) ||
         ((int)(uVar8 << 0x19) < 0)))))) {
      DAT_010016fc[1] = uVar13 & 0xfffffeff;
      *(undefined2 *)(DAT_01001704 + 6) = 0;
      *(undefined2 *)((int)puVar5 + -0x22) = 0;
    }
  }
  iVar6 = DAT_0100171c;
  puVar5 = DAT_01001710;
  if (*(int *)(DAT_01001718 + 0x10) * 0x2000000 < 0) {
    if ((int)(uVar11 << 0x12) < 0) {
      *DAT_01001710 = uVar11 & 0xffffdfff;
      *(undefined2 *)((int)puVar5 + -0x26) = 0;
    }
    puVar5 = DAT_010016fc;
    uVar9 = (uint)*(ushort *)((int)DAT_010016fc + -0x1e);
    if (uVar9 < 0x1f5) {
      if (uVar9 - 5 < 0x87) {
        *(char *)((int)DAT_010016fc + -0x29) = *(char *)((int)DAT_010016fc + -0x29) + '\x01';
      }
    }
    else {
      *(undefined1 *)((int)DAT_010016fc + -0x29) = 0;
    }
    if ((uVar9 - 0x8c < 0x1cc) && (*(byte *)(DAT_0100170c + 0xc) < 2)) {
      *(undefined1 *)((int)puVar5 + -0x29) = 0;
      *DAT_01001708 = uVar8 | 2;
    }
    else if ((byte)puVar5[-10] < 0x1e) {
      *(byte *)(puVar5 + -10) = (byte)puVar5[-10] + 1;
    }
    else {
      uVar9 = DAT_010016fc[1];
      if (((uVar9 & 1) == 0) || ((int)(uVar10 << 0x13) < 0)) {
        if ((-1 < (int)(uVar8 << 10)) && (-1 < (int)(uVar8 << 0x1d))) {
          *(undefined1 *)(iVar6 + 0xc) = 0;
          DAT_010016fc[1] = uVar9 & 0xfffffffd;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar5 + -0x29);
        if ((cVar2 == '\x01') && (-1 < (int)(uVar8 << 0x1d))) {
          puVar12 = DAT_010016fc + 1;
          if ((int)(uVar9 << 0x1e) < 0) {
            *puVar12 = uVar9 & 0xfffffffd;
          }
          else if ((*(char *)(iVar6 + 8) == '\x01') && ((int)(uVar10 << 0x11) < 0)) {
            *(undefined1 *)(iVar6 + 8) = 2;
          }
          else if ((*(char *)(iVar6 + 8) == '\x02') && ((int)(uVar10 << 0xe) < 0)) {
            *(undefined1 *)(iVar6 + 8) = 10;
          }
          else {
            *(undefined1 *)(iVar6 + 8) = 1;
          }
          if ((int)(*puVar12 << 0x17) < 0) {
            *puVar12 = *puVar12 & 0xfffffeff;
          }
        }
        else if (cVar2 == '\x02') {
          if (*(char *)(iVar6 + 0xc) == '\0') {
            *(undefined1 *)(iVar6 + 0xc) = 0x20;
          }
          else {
            *(undefined1 *)(iVar6 + 0xc) = 0;
          }
        }
        else if ((cVar2 == '\x03') && (-1 < (int)(uVar8 << 0x1d))) {
          *DAT_010016fc = uVar10 ^ 1;
        }
        else if ((((cVar2 == '\x05') && (-1 < (int)(uVar8 << 0x1d))) && (*DAT_01001710 == 0)) &&
                ((-1 < (int)(uVar8 << 0x1c) && (-1 < (int)(uVar9 << 0x1e))))) {
          DAT_010016fc[1] = uVar9 | 2;
        }
      }
      *(undefined1 *)((int)puVar5 + -0x29) = 0;
    }
    puVar12 = DAT_010016fc + 1;
    uVar8 = *puVar12;
    if ((uVar8 & 1) == 0) {
      *(undefined1 *)(iVar6 + 0xc) = 0;
      *(undefined2 *)((int)puVar5 + -0x1e) = 600;
      *DAT_01001724 = 0;
    }
    else {
      *(undefined2 *)((int)puVar5 + -0x1e) = 0;
    }
    *puVar12 = uVar8 & 0xfffdffff;
  }
  else {
    if (-1 < (int)(uVar8 << 0x1b)) {
      if (*(ushort *)((int)DAT_010016fc + -0x1e) < DAT_01001720) {
        *(ushort *)((int)DAT_010016fc + -0x1e) = *(ushort *)((int)DAT_010016fc + -0x1e) + 1;
      }
      puVar5 = DAT_010016fc;
      if (((int)(uVar10 << 0xf) < 0) && (*(short *)((int)DAT_010016fc + -0x1e) == 500)) {
        *DAT_010016fc = uVar10 | 0x1000;
        puVar5[1] = puVar5[1] | 1;
        *DAT_01001708 = uVar8 | 0x200000;
        *(undefined1 *)(iVar6 + 0xc) = 0;
        *(undefined2 *)(DAT_010016fc + -9) = 1;
        iVar7 = DAT_0100171c;
        *(undefined1 *)(DAT_0100171c + 0x2f) = 0;
        *(undefined1 *)(iVar7 + 0x30) = 1;
      }
      if (((sVar3 != 0) && ((DAT_010016fc[1] & 1) != 0)) &&
         ((*(ushort *)((int)DAT_010016fc + -0x1e) != 600 &&
          (0x82 < *(ushort *)((int)DAT_010016fc + -0x1e))))) {
        *(undefined2 *)((int)DAT_010016fc + -0x1e) = 0x82;
        *DAT_01001710 = uVar11 | 0x2000;
      }
      if (*(short *)((int)DAT_010016fc + -0x1e) == 0x8c) {
        DAT_010016fc[1] = DAT_010016fc[1] & 0xfffffffe;
      }
    }
    puVar5 = DAT_010016fc;
    if (*(short *)((int)DAT_010016fc + -0x1e) == 600) {
      DAT_010016fc[1] = DAT_010016fc[1] | 1;
      puVar12 = DAT_01001708;
      uVar8 = *DAT_01001708;
      *(undefined2 *)((int)puVar5 + -0x26) = 0;
      *puVar12 = uVar8 & 0xffffffec | 0x10000000;
      if (puVar5[3] < 0xe10) {
        puVar5[5] = 0;
        *puVar12 = uVar8 & 0xfffcffec | 0x10000000;
      }
    }
    *(undefined1 *)(puVar5 + -10) = 0;
    uVar8 = DAT_010016fc[1] | 0x20000;
    DAT_010016fc[1] = uVar8;
    *(char *)(iVar6 + 0x19) = (char)(uVar8 >> 0x10);
  }
  return;
}
