
void FUN_010012e8(void)

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

  pcVar3 = DAT_01001374;
  puVar2 = DAT_01001370;
  puVar1 = DAT_0100136c;
  uVar8 = 0;
  uVar9 = 0;
  uVar6 = 0;
  do {
    uVar8 = uVar8 + *puVar1;
    uVar9 = uVar9 + *puVar2;
    *pcVar3 = '\0';
    puVar4 = DAT_01001378;
    do {
    } while (*pcVar3 == '\0');
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x100);
  uVar6 = (uVar8 & 0xffffff) >> 8;
  DAT_01001378[1] = (short)((uVar8 & 0xffffff) >> 8);
  uVar8 = (uVar9 & 0xffffff) >> 8;
  *puVar4 = (short)((uVar9 & 0xffffff) >> 8);
  puVar5 = DAT_0100137c;
  if ((int)(*DAT_0100137c << 0x1c) < 0) {
    iVar7 = 0x7a;
  }
  else {
    iVar7 = 0x170;
  }
  if ((((iVar7 + DAT_01001380 < uVar8) || (uVar8 + iVar7 < DAT_01001380)) ||
      (iVar7 + DAT_01001380 < uVar6)) || (uVar6 + iVar7 < DAT_01001380)) {
    *DAT_01001384 = *DAT_01001384 & 0xfffffff3 | ((*DAT_01001384 & 0xf) >> 2 | 1) << 2;
  }
  else {
    *DAT_0100137c = *DAT_0100137c | 1;
  }
  *puVar5 = *puVar5 | 0x80;
  return;
}
