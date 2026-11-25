
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01000680(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;

  puVar1 = DAT_01000740;
  *DAT_01000740 = DAT_0100073c;
  *puVar1 = DAT_01000744;
  puVar1[2] = 6;
  puVar3 = DAT_0100074c;
  puVar2 = DAT_01000748;
  do {
  } while ((DAT_01000748[4] & 1) == 0);
  *DAT_0100074c = 0;
  *puVar3 = (*puVar3 & 0xffffe0ff) + 0x1600;
  *puVar3 = (*puVar3 & 0xffffffcf) + 0x10;
  *puVar3 = *puVar3 | 1;
  do {
  } while ((int)(puVar2[4] << 0x1d) < 0);
  do {
  } while (-1 < (int)(puVar2[4] << 0x1d));
  *puVar2 = 0;
  *puVar2 = *puVar2 & 0xfffffff0;
  puVar1[2] = puVar1[2] | 0x4000;
  DAT_01000748[-8] = DAT_01000748[-8] | 1;
  puVar3 = DAT_0100074c;
  DAT_0100074c[-0x18] = 0;
  puVar3[-0x18] = puVar3[-0x18] | 0x31;
  iVar4 = DAT_01000754;
  *(undefined4 *)(DAT_01000754 + 0x14) = DAT_01000750;
  *(uint *)(DAT_01000758 + 0x1c) = *(uint *)(DAT_01000758 + 0x1c) & 0xffffff | iVar4 << 0x11;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 4;
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 3;
  *puVar2 = (*puVar2 & 0xffff00ff) + 0x6300;
  *puVar1 = 0;
  _DAT_50000000 = 0;
  return;
}
