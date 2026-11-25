
void FUN_01003834(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;

  puVar6 = PTR_DAT_01003a00;
  puVar5 = PTR_DAT_010039fc;
  PTR_DAT_01003a00[10] = PTR_DAT_010039fc[0x16];
  if (puVar5[0x18] == '\0') {
    param_2 = 0;
  }
  else if (*(int *)PTR_DAT_01003a04 != 0) {
    uVar8 = FUN_0100017c(DAT_01003a08,*(int *)PTR_DAT_01003a04,param_3,param_4,param_4);
    param_2 = (uint)uVar8;
  }
  puVar7 = PTR_DAT_01003a0c;
  bVar1 = PTR_DAT_01003a0c[9];
  PTR_DAT_01003a0c[9] = bVar1 + 1;
  sVar9 = FUN_01004f24(PTR_DAT_01003a10,param_2,bVar1 & 7);
  *(short *)(puVar6 + 2) = sVar9;
  cVar2 = puVar6[0xb];
  if (cVar2 != puVar5[0x16]) {
    *(short *)(puVar6 + 2) = -sVar9;
  }
  iVar12 = (int)*(short *)(PTR_DAT_01003a00 + 2) >> 3;
  sVar9 = (short)iVar12;
  *(short *)(PTR_DAT_01003a00 + 4) = sVar9;
  puVar5 = PTR_DAT_01003a14;
  uVar11 = *(uint *)PTR_DAT_01003a14;
  if ((int)(uVar11 << 4) < 0) {
    if (iVar12 < DAT_01003a1c) {
      if ((char)puVar7[0xd] < -99) {
        *(uint *)PTR_DAT_01003a14 = uVar11 & ~DAT_01003a18;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
    }
  }
  else if (0x358 < iVar12) {
    if ((char)puVar7[0xd] < 'e') {
      *(uint *)PTR_DAT_01003a14 = uVar11 | DAT_01003a18;
    }
    else {
      puVar7[0xd] = puVar7[0xd] + '\x01';
    }
  }
  puVar6 = PTR_DAT_01003a20;
  uVar11 = *(uint *)PTR_DAT_01003a20;
  if (((((int)(uVar11 << 0x10) < 0) || (PTR_DAT_01003a24[0xc] != '\a')) || (iVar12 + 0x6cU < 0xd9))
     || ((((int)((uint)(byte)*PTR_DAT_01003a28 << 0x1d) < 0 ||
          ((int)((uint)(byte)*puVar5 << 0x19) < 0)) ||
         (cVar3 = PTR_DAT_01003a00[10], cVar3 != puVar7[0xc])))) {
    puVar7[8] = 0;
  }
  else if ((byte)puVar7[8] < 0xfa) {
    puVar7[8] = puVar7[8] + 1;
  }
  else {
    *(uint *)PTR_DAT_01003a20 = uVar11 | 0x8000;
    if (cVar3 != cVar2) {
      PTR_DAT_01003a00[0xb] = cVar3;
      *(uint *)puVar6 = uVar11 | 0x8004;
    }
  }
  uVar11 = *(uint *)PTR_DAT_01003a20;
  if (-1 < (int)(uVar11 << 0xf)) {
    sVar4 = *(short *)(PTR_DAT_01003a2c + 2);
    uVar8 = *(short *)(puVar7 + 0x1c) - sVar4;
    *(ushort *)(puVar7 + 0x1c) = uVar8;
    if ((short)uVar8 < 1) {
      uVar8 = -uVar8;
    }
    sVar10 = *(short *)(puVar7 + 0x1e) - sVar9;
    *(short *)(puVar7 + 0x1e) = sVar10;
    if (sVar10 < 1) {
      sVar10 = -sVar10;
    }
    *(short *)(puVar7 + 0x1e) = sVar10;
    if ((((byte)PTR_DAT_01003a24[0xc] < 6) || (sVar4 < 0x509)) ||
       ((0x4f < *(short *)(PTR_DAT_01003a24 + 2) ||
        (((9 < uVar8 || (9 < sVar10)) || ((int)((uint)(byte)*puVar5 << 0x19) < 0)))))) {
      puVar7[10] = 0;
      if (*(short *)(PTR_DAT_01003a24 + 2) < 0x3c) {
        puVar7[0xb] = 0;
      }
      else if ((byte)puVar7[0xb] < 0xfa) {
        puVar7[0xb] = puVar7[0xb] + 1;
      }
      else {
        *(uint *)PTR_DAT_01003a20 = uVar11 | 0x10000;
      }
    }
    else if ((byte)puVar7[10] < 0x32) {
      puVar7[10] = puVar7[10] + 1;
    }
    else {
      uVar8 = FUN_01000190(DAT_01003a30 * iVar12,*(undefined2 *)PTR_DAT_01003a24);
      uVar8 = FUN_01000190(DAT_01003a34 * (uint)uVar8,(int)sVar4);
      *(uint *)PTR_DAT_01003a20 = uVar11 | 0x10000;
      if (uVar8 - 0x1f5 < DAT_01003a1c + 0xe9U) {
        *(ushort *)PTR_DAT_01003a00 = uVar8;
      }
    }
    *(short *)(puVar7 + 0x1e) = sVar9;
    *(short *)(puVar7 + 0x1c) = sVar4;
  }
  puVar7[0xc] = PTR_DAT_01003a00[10];
  return;
}
