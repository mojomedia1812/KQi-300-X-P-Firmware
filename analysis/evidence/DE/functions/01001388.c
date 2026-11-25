
void FUN_01001388(void)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  puVar2 = DAT_01001604;
  uVar9 = *DAT_01001604;
  uVar10 = uVar9 & 0xfffffeff;
  *DAT_01001604 = uVar10;
  *(undefined2 *)(DAT_01001608 + 6) = 0;
  iVar5 = DAT_01001614;
  puVar3 = DAT_01001604;
  uVar7 = puVar2[1];
  uVar11 = puVar2[-1];
  uVar8 = *DAT_01001610;
  if (*(int *)(DAT_0100160c + 0x10) * 0x2000000 < 0) {
    if ((int)(uVar7 << 0x12) < 0) {
      DAT_01001604[1] = uVar7 & 0xffffdfff;
      *(undefined2 *)(puVar3 + -9) = 0;
    }
    uVar7 = (uint)(ushort)DAT_01001604[-9];
    if (uVar7 < 0x1f5) {
      if (uVar7 - 5 < 0x87) {
        *(byte *)((int)DAT_01001604 + -0x2a) = *(byte *)((int)DAT_01001604 + -0x2a) + 1;
      }
    }
    else {
      *(byte *)((int)DAT_01001604 + -0x2a) = 0;
    }
    if ((uVar7 - 0x8c < 0x1cc) && (*(byte *)(DAT_01001620 + 0xc) < 2)) {
      *(byte *)((int)DAT_01001604 + -0x2a) = 0;
      *DAT_01001610 = uVar8 | 2;
    }
    else if (*(byte *)((int)DAT_01001604 + -0x29) < 0x1e) {
      *(byte *)((int)DAT_01001604 + -0x29) = *(byte *)((int)DAT_01001604 + -0x29) + 1;
    }
    else {
      if (((uVar9 & 1) == 0) || ((int)(uVar11 << 0x13) < 0)) {
        if ((-1 < (int)(uVar8 << 10)) && (-1 < (int)(uVar8 << 0x1d))) {
          *(undefined1 *)(iVar5 + 0xc) = 0;
          *puVar2 = uVar9 & 0xfffffefd;
        }
      }
      else {
        bVar1 = *(byte *)((int)DAT_01001604 + -0x2a);
        if ((bVar1 == 1) && (-1 < (int)(uVar8 << 0x1d))) {
          if ((int)(uVar9 << 0x1e) < 0) {
            *puVar2 = uVar9 & 0xfffffefd;
          }
          else if ((*(char *)(iVar5 + 8) == '\x01') && ((int)(uVar11 << 0x11) < 0)) {
            *(undefined1 *)(iVar5 + 8) = 2;
          }
          else if ((*(char *)(iVar5 + 8) == '\x02') && ((int)(uVar11 << 0xe) < 0)) {
            *(undefined1 *)(iVar5 + 8) = 10;
          }
          else {
            *(undefined1 *)(iVar5 + 8) = 1;
          }
          if ((int)(*puVar2 << 0x17) < 0) {
            *puVar2 = *puVar2 & 0xfffffeff;
          }
        }
        else if (bVar1 == 2) {
          if (*(char *)(iVar5 + 0xc) == '\0') {
            *(undefined1 *)(iVar5 + 0xc) = 0x20;
          }
          else {
            *(undefined1 *)(iVar5 + 0xc) = 0;
          }
        }
        else if ((bVar1 == 3) && (-1 < (int)(uVar8 << 0x1d))) {
          DAT_01001604[-1] = uVar11 ^ 1;
        }
        else if ((((bVar1 == 5) && (-1 < (int)(uVar8 << 0x1d))) && (DAT_01001604[1] == 0)) &&
                ((-1 < (int)(uVar8 << 0x1c) && (-1 < (int)(uVar9 << 0x1e))))) {
          *puVar2 = uVar10 | 2;
        }
      }
      *(byte *)((int)DAT_01001604 + -0x2a) = 0;
    }
    uVar7 = *puVar2;
    if ((uVar7 & 1) == 0) {
      *(undefined1 *)(iVar5 + 0xc) = 0;
      *(undefined2 *)(DAT_01001604 + -9) = 600;
      *DAT_01001624 = 0;
    }
    else {
      *(undefined2 *)(DAT_01001604 + -9) = 0;
    }
    *puVar2 = uVar7 & 0xfffdffff;
  }
  else {
    if (-1 < (int)(uVar8 << 0x1b)) {
      if ((ushort)puVar2[-9] < DAT_01001618) {
        *(ushort *)(puVar2 + -9) = (ushort)puVar2[-9] + 1;
      }
      puVar3 = DAT_01001604;
      if (((int)(uVar11 << 0xf) < 0) && ((short)DAT_01001604[-9] == 500)) {
        DAT_01001604[-1] = uVar11 | 0x1000;
        *puVar2 = uVar10 | 1;
        *DAT_01001610 = uVar8 | 0x200000;
        *(undefined1 *)(iVar5 + 0xc) = 0;
        ((byte *)((int)puVar3 + -0x26))[0] = 1;
        iVar6 = DAT_01001614;
        ((byte *)((int)puVar3 + -0x26))[1] = 0;
        *(undefined1 *)(DAT_01001614 + 0x2f) = 0;
        *(undefined1 *)(iVar6 + 0x30) = 1;
      }
      puVar3 = DAT_01001604;
      if ((((*(short *)(DAT_0100161c + 4) != 0) && ((*puVar2 & 1) != 0)) &&
          ((ushort)DAT_01001604[-9] != 600)) && (0x82 < (ushort)DAT_01001604[-9])) {
        *(undefined2 *)(DAT_01001604 + -9) = 0x82;
        puVar3[1] = uVar7 | 0x2000;
      }
      if ((short)DAT_01001604[-9] == 0x8c) {
        *puVar2 = *puVar2 & 0xfffffffe;
      }
    }
    puVar3 = DAT_01001604;
    if ((short)DAT_01001604[-9] == 600) {
      *puVar2 = *puVar2 | 1;
      puVar4 = DAT_01001610;
      uVar7 = *DAT_01001610;
      *(undefined2 *)(puVar3 + -10) = 0;
      *puVar4 = uVar7 & 0xffffffec | 0x10000000;
      if (puVar3[2] < 0xe10) {
        puVar3[4] = 0;
        *puVar4 = uVar7 & 0xfffcffec | 0x10000000;
      }
    }
    *(byte *)((int)puVar3 + -0x29) = 0;
    uVar7 = *puVar2;
    *puVar2 = uVar7 | 0x20000;
    *(char *)(iVar5 + 0x19) = (char)((uVar7 | 0x20000) >> 0x10);
  }
  return;
}
