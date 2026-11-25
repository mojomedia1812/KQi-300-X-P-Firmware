
void FUN_0100576c(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_r3;
  uint uVar13;
  uint uVar14;

  puVar5 = PTR_DAT_010058dc;
  uVar3 = *(ushort *)PTR_DAT_010058d8;
  uVar10 = ((uint)(uVar3 >> 9) | (uint)uVar3 << 0x17) + 0x10000000;
  uVar14 = (uint)(uVar3 >> 9) << 9;
  *(ushort *)PTR_DAT_010058d8 = (ushort)(uVar10 >> 0x17) | (ushort)uVar14;
  iVar8 = DAT_01005908;
  puVar7 = PTR_DAT_010058e4;
  puVar6 = PTR_DAT_010058e0;
  uVar13 = *(uint *)puVar5;
  uVar12 = uVar10 >> 0x1c;
  uVar11 = *(uint *)PTR_DAT_010058e0;
  if (uVar12 < 10) {
    if (uVar12 == 2) {
      FUN_010041e8();
    }
    else if (uVar12 == 3) {
      FUN_01003fa0();
    }
    else if (uVar12 == 4) {
      FUN_01003bd8();
    }
    else if (uVar12 == 5) {
      if ((uVar11 & 1) == 0) {
        PTR_DAT_010058e4[1] = 0;
      }
      else {
        if ((byte)PTR_DAT_010058e4[1] < 0x1e) {
          PTR_DAT_010058e4[1] = PTR_DAT_010058e4[1] + 1;
        }
        else if (*(short *)(PTR_DAT_010058ec + 4) == 0) {
          *(uint *)(DAT_01005904 + 0x24) = *(uint *)(DAT_01005904 + 0x24) | 4;
        }
        if ((int)(uVar13 << 0x1d) < 0) {
          *(uint *)puVar5 = uVar13 | 1;
          *(uint *)puVar6 = uVar11 & 0xfffffffc | 0x10;
        }
      }
    }
    else if (uVar12 == 6) {
      if ((int)(uVar11 << 10) < 0) {
        bVar2 = PTR_DAT_010058e4[2];
        if (bVar2 < 2) {
          *(undefined1 *)(DAT_01005908 + 0xc) = 0;
        }
        else if (bVar2 < 8) {
          *(undefined1 *)(DAT_01005908 + 0xc) = 0x20;
        }
        else {
          *(uint *)PTR_DAT_010058e0 = uVar11 & 0xffdfffff;
          *(undefined1 *)(iVar8 + 0xc) = 0;
          *(uint *)puVar5 = uVar13 & 0xfffffffe;
        }
        puVar7[2] = bVar2 + 1;
      }
      else {
        PTR_DAT_010058e4[2] = 0;
      }
    }
  }
  else {
    uVar14 = ((uint)(uVar3 >> 0xd) | (uVar10 >> 0x17 & 0xfffffe1f | uVar14) << 0x13) + 0x10000000;
    uVar4 = (uVar3 >> 0xd) << 0xd;
    uVar3 = (ushort)(uVar14 >> 0x13);
    *(ushort *)PTR_DAT_010058d8 = uVar3 | uVar4;
    uVar14 = uVar14 >> 0x1c;
    if (uVar14 < 10) {
      if (uVar14 == 1) {
        FUN_01003a38();
      }
      else if (uVar14 == 3) {
        FUN_01004398();
      }
      else if (uVar14 == 4) {
        uVar9 = FUN_0100017c((uint)*(ushort *)PTR_DAT_010058f0 * (uint)*(ushort *)PTR_DAT_010058ec,
                             DAT_010058f4,puVar7,0,in_r3);
        *DAT_010058f8 = uVar9;
      }
      else if (uVar14 == 5) {
        *DAT_010058fc = 0xaa;
        FUN_01000520();
      }
      else if (uVar14 == 6) {
        if (*DAT_01005900 << 0x11 < 0) {
          cVar1 = *puVar7;
          *puVar7 = cVar1 + 1U;
          if (0x3c < (byte)(cVar1 + 1U)) {
            *(uint *)puVar5 = uVar13 & 0xfffffffe;
            *(uint *)puVar6 = uVar11 | 2;
          }
        }
        else {
          *puVar7 = 0;
        }
      }
    }
    else {
      *(ushort *)PTR_DAT_010058d8 = uVar3 & 0xe1ff | uVar4;
      *(int *)PTR_DAT_010058e8 = *(int *)PTR_DAT_010058e8 + 1;
    }
  }
  FUN_01001384();
  return;
}
