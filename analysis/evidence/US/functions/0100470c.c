
void FUN_0100470c(void)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  pcVar2 = DAT_01004814;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  if ((*(int *)(DAT_0100480c + 4) != 0) && (uVar6 = *DAT_01004810, -1 < (int)(uVar6 << 0x17))) {
    *DAT_01004814 = '\0';
    iVar5 = DAT_01004818;
    do {
    } while (*pcVar2 == '\0');
    *(uint *)(DAT_01004818 + 0xc) = *(uint *)(DAT_01004818 + 0xc) & 0xffffffc0;
    *DAT_0100481c = *DAT_0100481c & 0xffffffbf;
    *(undefined4 *)(iVar5 + 0x10) = 0x3f;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    iVar5 = DAT_01004820;
    uVar4 = 0;
    do {
      pcVar2 = DAT_01004814;
      DAT_01004814[1] = '\0';
      iVar3 = DAT_01004818;
      do {
      } while (pcVar2[1] == '\0');
      uVar7 = uVar7 + *DAT_01004824;
      uVar8 = uVar8 + *DAT_01004828;
      uVar9 = uVar9 + *DAT_0100482c;
    } while (((*(char *)(iVar5 + 0x18) == '\0') && (-1 < (int)(*DAT_0100481c << 0x19))) &&
            (uVar4 = uVar4 + 1, uVar4 < 0x100));
    *(undefined4 *)(DAT_01004818 + 0x38) = 0x2a;
    *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    iVar5 = DAT_01004830;
    if (0xff < uVar4) {
      uVar4 = (uVar7 & 0xffffff) >> 8;
      *(short *)(DAT_01004830 + 4) = (short)((uVar7 & 0xffffff) >> 8);
      uVar7 = (uVar8 & 0xffffff) >> 8;
      *(short *)(iVar5 + 6) = (short)((uVar8 & 0xffffff) >> 8);
      uVar8 = (uVar9 & 0xffffff) >> 8;
      *(short *)(iVar5 + 8) = (short)((uVar9 & 0xffffff) >> 8);
      puVar1 = DAT_01004810;
      if ((int)(uVar6 << 0x1c) < 0) {
        iVar5 = 0x7a;
      }
      else {
        iVar5 = 0x170;
      }
      uVar9 = iVar5 + DAT_01004834;
      if ((((uVar9 < uVar4) || (uVar4 + iVar5 < DAT_01004834)) ||
          ((uVar9 < uVar7 || ((uVar7 + iVar5 < DAT_01004834 || (uVar9 < uVar8)))))) ||
         (uVar8 + iVar5 < DAT_01004834)) {
        *DAT_0100481c = *DAT_0100481c & 0xfffffff3 | ((*DAT_0100481c & 0xf) >> 2 | 2) << 2;
      }
      else {
        *DAT_01004810 = uVar6 | 1;
      }
      *puVar1 = *puVar1 | 0x100;
    }
  }
  return;
}
