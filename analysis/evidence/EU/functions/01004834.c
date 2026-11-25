
void FUN_01004834(void)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;

  puVar1 = DAT_010048f4;
  if (*(int *)(DAT_010048f0 + 4) != 0) {
    uVar5 = *DAT_010048f4;
    *DAT_010048f4 = uVar5 | 0x20;
    iVar2 = DAT_010048f8;
    *(undefined4 *)(DAT_010048f8 + 0x10) = 0x3f;
    pcVar3 = DAT_010048fc;
    DAT_010048fc[1] = '\0';
    do {
    } while (pcVar3[1] == '\0');
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x3f;
    bVar4 = 0;
    do {
      if (bVar4 == 0) {
        *(undefined4 *)(iVar2 + 0x38) = 0x2b;
      }
      else if (bVar4 == 1) {
        *(undefined4 *)(iVar2 + 0x38) = 0x2e;
      }
      else if (bVar4 == 2) {
        *(undefined4 *)(iVar2 + 0x38) = 0x3a;
      }
      *pcVar3 = '\0';
      do {
      } while (*pcVar3 == '\0');
      *pcVar3 = '\0';
      do {
      } while (*pcVar3 == '\0');
      if (0x578 < (int)(short)(*DAT_01004908 - (short)((uint)(DAT_01004904 * *DAT_01004900) >> 0xc))
                  + 700U) {
        *DAT_0100490c = *DAT_0100490c | 0x1000;
        break;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 3);
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    bVar4 = 0;
    do {
      *pcVar3 = '\0';
      do {
      } while (*pcVar3 == '\0');
      bVar4 = bVar4 + 1;
    } while (bVar4 < 3);
    *puVar1 = uVar5 & 0xffffffdf;
  }
  return;
}
