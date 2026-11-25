
void FUN_01003ad8(void)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_r3;
  uint uVar11;
  uint uVar12;
  uint *puVar13;

  puVar3 = PTR_DAT_01003d48;
  iVar10 = *(int *)(PTR_DAT_01003d48 + 0x18);
  *(int *)(PTR_DAT_01003d48 + 0x18) = iVar10 + 1;
  puVar5 = PTR_DAT_01003d4c;
  FUN_01004d6c(PTR_DAT_01003d54,DAT_01003d50 * *(short *)(PTR_DAT_01003d4c + 2) >> 0xc,iVar10 + 1,
               in_r3,in_r3);
  puVar4 = PTR_DAT_01003d58;
  uVar1 = *(undefined2 *)(puVar3 + 10);
  PTR_DAT_01003d58[0x11] = (char)((ushort)uVar1 >> 8);
  puVar4[0x12] = (char)uVar1;
  puVar13 = (uint *)(puVar3 + 0x2c);
  if ((byte)puVar5[0xc] < 2) {
    *puVar13 = *puVar13 & 0xfffffff7;
  }
  else {
    *puVar13 = *puVar13 | 8;
  }
  puVar3 = PTR_DAT_01003d60;
  uVar9 = *(uint *)PTR_DAT_01003d5c;
  if ((int)(uVar9 << 0x1c) < 0) {
    uVar6 = (uVar9 & 0xfff) >> 0xb;
  }
  else {
    uVar6 = (*(uint *)PTR_DAT_01003d60 & 0x3f) >> 5;
  }
  uVar7 = *puVar13;
  uVar11 = ((*(uint *)PTR_DAT_01003d60 & 0x1f) >> 4) << 10;
  uVar8 = uVar7 & 0xfffff9ff | uVar6 << 9 | uVar11;
  *puVar13 = uVar8;
  if (((*(uint *)puVar3 & 0xf) >> 2 == 0) && (-1 < *(int *)puVar3 << 0x14)) {
    uVar12 = *(uint *)(PTR_DAT_01003d48 + 0x30) & 0xffffff7f;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_01003d48 + 0x30) | 0x80;
  }
  *(uint *)(PTR_DAT_01003d48 + 0x30) =
       uVar12 & 0xfffff1ff | ((*(uint *)PTR_DAT_01003d60 & 0x7f) >> 6) << 9 |
       ((*(uint *)PTR_DAT_01003d60 & 0x1ff) >> 8) << 10 |
       ((*(uint *)PTR_DAT_01003d60 & 0xff) >> 7) << 0xb;
  puVar5 = PTR_DAT_01003d64;
  puVar3 = PTR_DAT_01003d58;
  uVar12 = *(uint *)PTR_DAT_01003d64;
  if ((int)(uVar12 * 0x20000000) < 0) {
    if ((byte)PTR_DAT_01003d58[-0x11] < 100) {
      *(undefined2 *)(PTR_DAT_01003d48 + 4) = 0;
      *(uint *)puVar5 = uVar12 & 0xfffffffc;
    }
    if ((-1 < (int)((uint)(byte)PTR_DAT_01003d48[0xc] << 0x1e)) &&
       (uVar9 = *(uint *)puVar5, *(uint *)puVar5 = uVar9 & 0xfffffffb,
       -1 < (int)((uVar9 & 0xfffffffb) << 3))) {
      *puVar13 = uVar7 & 0xfffff9fe | uVar6 << 9 | uVar11;
    }
  }
  else if (((int)((uint)(byte)PTR_DAT_01003d48[0xc] << 0x1e) < 0) && (-1 < (int)(uVar9 << 0xc))) {
    PTR_DAT_01003d58[-0x14] = 0;
    *puVar13 = uVar8 | 1;
    *(uint *)puVar5 = uVar12 & 0xfffffffc | 4;
    *(undefined2 *)(PTR_DAT_01003d48 + 4) = 0;
    if ((*(short *)(PTR_DAT_01003d68 + 4) < 0x19) && ((byte)PTR_DAT_01003d4c[0xc] < 2)) {
      FUN_01003d70();
    }
  }
  puVar4 = PTR_DAT_01003d48;
  uVar2 = *(ushort *)(PTR_DAT_01003d48 + 0xc);
  if ((uVar2 & 0xa20) == 0) {
    uVar9 = *(uint *)puVar5 & 0xfffffff7;
  }
  else {
    uVar9 = *(uint *)puVar5 | 8;
  }
  *(uint *)puVar5 = uVar9;
  uVar6 = DAT_01003d6c;
  if ((uVar2 & 0x1c8) == 0) {
    uVar9 = uVar9 & ~DAT_01003d6c;
  }
  else {
    uVar9 = uVar9 | DAT_01003d6c;
  }
  *(uint *)puVar5 = uVar9;
  if ((PTR_DAT_01003d48[0x30] & 1) != 0) {
    *(uint *)puVar5 = uVar9 | uVar6;
  }
  uVar9 = *(uint *)puVar5;
  if ((int)(uVar9 << 0xb) < 0) {
    *(undefined2 *)(puVar4 + 4) = 0;
    *(uint *)PTR_DAT_01003d60 = *(uint *)PTR_DAT_01003d60 & 0xffffefff;
    *(uint *)puVar5 = uVar9 & 0xfffffffc;
  }
  if (PTR_DAT_01003d58[0x37] == '\0') {
    *(undefined2 *)(puVar4 + 4) = 0;
  }
  if ((byte)PTR_DAT_01003d4c[0xc] < 2) {
    if (*(int *)PTR_DAT_01003d60 << 0x13 < 0) {
      *puVar13 = *puVar13 & 0xfffffffe;
    }
    uVar9 = *(uint *)puVar5;
    if (((int)(uVar9 << 0x1d) < 0) && (puVar3[-0x11] == 'd')) {
      if (*(ushort *)(puVar4 + 4) < 600) {
        *(ushort *)(puVar4 + 4) = *(ushort *)(puVar4 + 4) + 1;
      }
      else if ((*puVar13 & 1) != 0) {
        *puVar13 = *puVar13 & 0xfffffffe;
      }
    }
    else {
      if ((int)((uint)*(ushort *)(PTR_DAT_01003d48 + 0x28) << 0x13) < 0) {
        if ((-1 < (int)(*puVar13 << 0x1d)) && ((int)(uVar9 << 0x1b) < 0)) {
          if (*(ushort *)(puVar4 + 4) < 0x5a) {
            *(ushort *)(puVar4 + 4) = *(ushort *)(puVar4 + 4) + 1;
          }
          else {
            *puVar13 = *puVar13 & 0xfffffffe;
            *(uint *)puVar5 = uVar9 | 2;
          }
          goto LAB_01003d34;
        }
      }
      if (*(short *)(PTR_DAT_01003d68 + 4) == 0) {
        if (*(ushort *)(puVar4 + 4) < 0x12c0) {
          *(ushort *)(puVar4 + 4) = *(ushort *)(puVar4 + 4) + 1;
        }
        else {
          *puVar13 = *puVar13 & 0xfffffffe;
          *(uint *)puVar5 = uVar9 | 2;
        }
        if (((*puVar13 & 1) == 0) && (-1 < (int)((uint)(byte)*puVar5 << 0x1d))) {
          *(short *)(puVar4 + 4) = *(short *)(puVar4 + 4) + 0x50;
        }
      }
      else {
        *(undefined2 *)(puVar4 + 4) = 0;
      }
    }
  }
  else {
    *(undefined2 *)(puVar4 + 4) = 0;
  }
LAB_01003d34:
  if ((*(int *)puVar5 << 0x1e < 0) && (-1 < *(int *)puVar5 << 0x1d)) {
    *(undefined2 *)(puVar4 + 4) = 0;
    FUN_01003aa4();
  }
  return;
}
