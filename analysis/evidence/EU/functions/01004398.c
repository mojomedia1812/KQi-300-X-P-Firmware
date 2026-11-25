
void FUN_01004398(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort *puVar8;
  undefined *puVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  char cVar16;
  undefined4 in_r3;
  int iVar17;

  puVar4 = PTR_DAT_01004564;
  puVar3 = PTR_DAT_01004560;
  uVar2 = *(undefined2 *)(PTR_DAT_01004560 + 0x1a);
  PTR_DAT_01004564[1] = (char)((ushort)uVar2 >> 8);
  puVar4[2] = (char)uVar2;
  uVar2 = *(undefined2 *)(puVar3 + 0x18);
  puVar4[3] = (char)((ushort)uVar2 >> 8);
  puVar4[4] = (char)uVar2;
  puVar9 = PTR_DAT_0100458c;
  puVar7 = PTR_DAT_01004580;
  puVar6 = PTR_DAT_01004578;
  puVar4 = PTR_DAT_01004574;
  uVar5 = DAT_0100456c;
  uVar14 = (uint)*(ushort *)(puVar3 + 0x12);
  uVar12 = (uint)((int)(uVar14 << 0x14) < 0);
  if ((int)(uVar14 * 0x400000) < 0) {
    uVar12 = uVar12 | 4;
  }
  if ((int)(uVar14 << 0x17) < 0) {
    uVar12 = uVar12 | 8;
  }
  if ((int)(uVar14 << 0x18) < 0) {
    uVar12 = uVar12 | 0x10;
  }
  if ((int)(uVar14 << 0x19) < 0) {
    uVar12 = uVar12 | 0x20;
  }
  if ((int)(uVar14 << 0x1d) < 0) {
    uVar12 = uVar12 | 0x240;
  }
  if ((int)(uVar14 << 0x1b) < 0) {
    uVar12 = uVar12 | 0x80;
  }
  if ((int)(uVar14 << 0x1a) < 0) {
    uVar12 = uVar12 | 0x100;
  }
  if ((int)(uVar14 << 0x1c) < 0) {
    uVar12 = uVar12 | 0x400;
  }
  uVar14 = *(uint *)(PTR_DAT_01004560 + 0x34);
  if ((uVar14 & 1) != 0) {
    uVar12 = uVar12 | 0x800;
  }
  if ((*(uint *)PTR_DAT_01004568 & 3) != 0) {
    uVar12 = uVar12 | 0x1000;
  }
  if ((int)(uVar14 << 0x1a) < 0) {
    uVar12 = uVar12 | 0x2000;
  }
  if ((int)(uVar14 << 0x1b) < 0) {
    uVar12 = uVar12 | 0x4000;
  }
  if ((int)(uVar14 << 0x16) < 0) {
    uVar12 = uVar12 | 0x8000;
  }
  if ((int)(uVar14 << 0x1d) < 0) {
    uVar12 = uVar12 | 0x10000;
  }
  if ((*(int *)(PTR_DAT_01004560 + 0x30) << 0x16 < 0) ||
     (*(int *)(PTR_DAT_01004560 + 0x30) << 0x15 < 0)) {
    uVar12 = uVar12 | DAT_0100456c;
  }
  if (*(int *)PTR_DAT_01004568 << 0x11 < 0) {
    uVar12 = uVar12 | 0x80000;
  }
  if ((int)(uVar14 << 0x15) < 0) {
    uVar12 = uVar12 | 0x100000;
  }
  if ((int)(uVar14 << 0x13) < 0) {
    uVar12 = uVar12 | 0x200000;
  }
  if ((int)(uVar14 << 0x14) < 0) {
    uVar12 = uVar12 | 0x400000;
  }
  if ((int)(uVar14 << 0x1c) < 0) {
    uVar12 = uVar12 | 0x800000;
  }
  uVar14 = *(uint *)PTR_DAT_01004574;
  if ((((byte)PTR_DAT_01004570[0xc] < 2) && (*(short *)(PTR_DAT_0100457c + 4) == 0)) &&
     (iVar17 = uVar14 << 0xd, iVar17 < 0)) {
    iVar13 = *(ushort *)(PTR_DAT_01004580 + 4) + 1;
    *(short *)(PTR_DAT_01004580 + 4) = (short)iVar13;
    *puVar6 = (char)((uint)iVar13 >> 8);
    puVar6[1] = (char)iVar13;
    puVar8 = DAT_01004584;
    FUN_01002cac(DAT_01004584,0x18,puVar6,iVar17,in_r3);
    uVar11 = *puVar8 * 0x100 + (*puVar8 >> 8);
    if (*(ushort *)(puVar7 + 6) + 1 < (uint)uVar11) {
      *(ushort *)(puVar7 + 6) = uVar11 - 1;
    }
    *(uint *)PTR_DAT_01004574 = *(uint *)PTR_DAT_01004574 & ~uVar5;
    *(uint *)PTR_DAT_01004588 = *(uint *)PTR_DAT_01004588 | 4;
  }
  else {
    cVar16 = *PTR_DAT_0100458c;
    if (((cVar16 != '\0') && (uVar12 != 0)) && ((*(uint *)(PTR_DAT_01004560 + 0x28) & ~uVar12) != 0)
       ) {
      *(uint *)(PTR_DAT_01004560 + 0x28) = uVar12;
      *(uint *)puVar4 = uVar14 | uVar5;
      puVar6[2] = cVar16;
      puVar6[3] = puVar9[1];
      puVar6[4] = puVar9[2];
      puVar6[5] = puVar9[3];
      puVar6[6] = puVar9[4];
      puVar6[7] = puVar9[5];
      puVar6[8] = (char)(uVar12 >> 0x18);
      puVar6[9] = (char)(uVar12 >> 0x10);
      puVar6[10] = (char)(uVar12 >> 8);
      puVar6[0xb] = (char)uVar12;
      puVar3 = PTR_DAT_01004564;
      puVar6[0x10] = PTR_DAT_01004564[-0x33];
      puVar6[0x11] = puVar3[-0x32];
      puVar6[0x12] = puVar3[-0x30];
      puVar6[0x13] = puVar3[-0x2f];
      puVar6[0x14] = puVar3[-0x31];
      cVar16 = 'k';
      bVar10 = 0;
      pcVar15 = PTR_DAT_01004578;
      do {
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        cVar16 = cVar1 + cVar16;
        bVar10 = bVar10 + 1;
      } while (bVar10 < 0x16);
      puVar6[0x16] = cVar16;
      puVar6[0x17] = 0x16;
      return;
    }
  }
  return;
}
