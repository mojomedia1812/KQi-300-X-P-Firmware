
void FUN_01004708(void)

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

  pcVar2 = DAT_01004810;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  if ((*(int *)(DAT_01004808 + 4) != 0) && (uVar6 = *DAT_0100480c, -1 < (int)(uVar6 << 0x17))) {
    *DAT_01004810 = '\0';
    iVar5 = DAT_01004814;
    do {
    } while (*pcVar2 == '\0');
    *(uint *)(DAT_01004814 + 0xc) = *(uint *)(DAT_01004814 + 0xc) & 0xffffffc0;
    *DAT_01004818 = *DAT_01004818 & 0xffffffbf;
    *(undefined4 *)(iVar5 + 0x10) = 0x3f;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    iVar5 = DAT_0100481c;
    uVar4 = 0;
    do {
      pcVar2 = DAT_01004810;
      DAT_01004810[1] = '\0';
      iVar3 = DAT_01004814;
      do {
      } while (pcVar2[1] == '\0');
      uVar7 = uVar7 + *DAT_01004820;
      uVar8 = uVar8 + *DAT_01004824;
      uVar9 = uVar9 + *DAT_01004828;
    } while (((*(char *)(iVar5 + 0x18) == '\0') && (-1 < (int)(*DAT_01004818 << 0x19))) &&
            (uVar4 = uVar4 + 1, uVar4 < 0x100));
    *(undefined4 *)(DAT_01004814 + 0x38) = 0x2a;
    *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    iVar5 = DAT_0100482c;
    if (0xff < uVar4) {
      uVar4 = (uVar7 & 0xffffff) >> 8;
      *(short *)(DAT_0100482c + 4) = (short)((uVar7 & 0xffffff) >> 8);
      uVar7 = (uVar8 & 0xffffff) >> 8;
      *(short *)(iVar5 + 6) = (short)((uVar8 & 0xffffff) >> 8);
      uVar8 = (uVar9 & 0xffffff) >> 8;
      *(short *)(iVar5 + 8) = (short)((uVar9 & 0xffffff) >> 8);
      puVar1 = DAT_0100480c;
      if ((int)(uVar6 << 0x1c) < 0) {
        iVar5 = 0x7a;
      }
      else {
        iVar5 = 0x170;
      }
      uVar9 = iVar5 + DAT_01004830;
      if ((((uVar9 < uVar4) || (uVar4 + iVar5 < DAT_01004830)) ||
          ((uVar9 < uVar7 || ((uVar7 + iVar5 < DAT_01004830 || (uVar9 < uVar8)))))) ||
         (uVar8 + iVar5 < DAT_01004830)) {
        *DAT_01004818 = *DAT_01004818 & 0xfffffff3 | ((*DAT_01004818 & 0xf) >> 2 | 2) << 2;
      }
      else {
        *DAT_0100480c = uVar6 | 1;
      }
      *puVar1 = *puVar1 | 0x100;
    }
  }
  return;
}
