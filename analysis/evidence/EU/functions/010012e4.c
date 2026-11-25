
void FUN_010012e4(void)

{
  ushort *puVar1;
  ushort *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  pcVar3 = DAT_01001370;
  puVar2 = DAT_0100136c;
  puVar1 = DAT_01001368;
  uVar8 = 0;
  uVar9 = 0;
  uVar6 = 0;
  do {
    uVar8 = uVar8 + *puVar1;
    uVar9 = uVar9 + *puVar2;
    *pcVar3 = '\0';
    puVar4 = DAT_01001374;
    do {
    } while (*pcVar3 == '\0');
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x100);
  uVar6 = (uVar8 & 0xffffff) >> 8;
  DAT_01001374[1] = (short)((uVar8 & 0xffffff) >> 8);
  uVar8 = (uVar9 & 0xffffff) >> 8;
  *puVar4 = (short)((uVar9 & 0xffffff) >> 8);
  puVar5 = DAT_01001378;
  if ((int)(*DAT_01001378 << 0x1c) < 0) {
    iVar7 = 0x7a;
  }
  else {
    iVar7 = 0x170;
  }
  if ((((iVar7 + DAT_0100137c < uVar8) || (uVar8 + iVar7 < DAT_0100137c)) ||
      (iVar7 + DAT_0100137c < uVar6)) || (uVar6 + iVar7 < DAT_0100137c)) {
    *DAT_01001380 = *DAT_01001380 & 0xfffffff3 | ((*DAT_01001380 & 0xf) >> 2 | 1) << 2;
  }
  else {
    *DAT_01001378 = *DAT_01001378 | 1;
  }
  *puVar5 = *puVar5 | 0x80;
  return;
}
