
void FUN_01003e70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  undefined4 in_r3;
  int iVar13;

  iVar3 = DAT_01003f88;
  iVar2 = DAT_01003f84;
  uVar12 = (uint)*(byte *)(DAT_01003f84 + 0x18) +
           (uint)*(byte *)(DAT_01003f84 + 0x17) * 0x100 +
           (uint)*(byte *)(DAT_01003f84 + 0x16) * 0x10000 +
           (uint)*(byte *)(DAT_01003f84 + 0x15) * 0x1000000;
  iVar13 = *(int *)(DAT_01003f88 + 0x3c);
  if ((iVar13 + 10U < uVar12) && ((int)(*DAT_01003f8c << 0xf) < 0)) {
    iVar8 = *DAT_01003f90 + 1;
    *DAT_01003f90 = (ushort)iVar8;
    pcVar4 = DAT_01003f94;
    *DAT_01003f94 = (char)((uint)iVar8 >> 8);
    pcVar4[1] = (char)iVar8;
    uVar9 = *(undefined4 *)(iVar3 + 0x40);
    pcVar4[8] = (char)((uint)uVar9 >> 0x18);
    pcVar4[9] = (char)((uint)uVar9 >> 0x10);
    pcVar4[10] = (char)((uint)uVar9 >> 8);
    pcVar4[0xb] = (char)uVar9;
    uVar9 = FUN_0100017c(uVar12,10,uVar12,in_r3,in_r3);
    pcVar4[0x10] = (char)((uint)uVar9 >> 0x18);
    pcVar4[0x11] = (char)((uint)uVar9 >> 0x10);
    pcVar4[0x12] = (char)((uint)uVar9 >> 8);
    pcVar4[0x13] = (char)uVar9;
    uVar9 = FUN_0100017c(iVar13,10);
    pcVar4[0xc] = (char)((uint)uVar9 >> 0x18);
    pcVar4[0xd] = (char)((uint)uVar9 >> 0x10);
    pcVar4[0xe] = (char)((uint)uVar9 >> 8);
    pcVar4[0xf] = (char)uVar9;
    iVar13 = DAT_01003f98;
    iVar8 = (uint)*(ushort *)(DAT_01003f98 + 6) * 10;
    pcVar4[0x16] = (char)((uint)iVar8 >> 8);
    pcVar4[0x17] = (char)iVar8;
    iVar13 = (uint)*(ushort *)(iVar13 + 4) * 10;
    pcVar4[0x18] = (char)((uint)iVar13 >> 8);
    pcVar4[0x19] = (char)iVar13;
    pcVar4[0x1a] = *(char *)(iVar2 + 0x1f);
    pcVar4[0x1b] = *(char *)(iVar2 + 0x20);
    pcVar4[0x1c] = *(char *)(iVar2 + 0x1d);
    pcVar4[0x1d] = *(char *)(iVar2 + 0x1e);
    cVar11 = 'i';
    bVar6 = 0;
    pcVar10 = pcVar4;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar11 = cVar1 + cVar11;
      bVar6 = bVar6 + 1;
    } while (bVar6 < 0x1e);
    pcVar4[0x1e] = cVar11;
    pcVar4[0x1f] = '\x16';
    puVar5 = DAT_01003f9c;
    FUN_01002cac(DAT_01003f9c,0x20,DAT_01003f94);
    uVar7 = *puVar5 * 0x100 + (*puVar5 >> 8);
    if (DAT_01003f90[1] + 1 < (uint)uVar7) {
      DAT_01003f90[1] = uVar7 - 1;
    }
    *(uint *)(iVar3 + 0x3c) =
         (uint)*(byte *)(iVar2 + 0x18) +
         (uint)*(byte *)(iVar2 + 0x17) * 0x100 +
         (uint)*(byte *)(iVar2 + 0x16) * 0x10000 + (uint)*(byte *)(iVar2 + 0x15) * 0x1000000;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *DAT_01003f8c = *DAT_01003f8c & 0xfffcffff;
  }
  return;
}
