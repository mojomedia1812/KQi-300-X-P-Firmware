
void FUN_0100471c(void)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;

  puVar1 = DAT_010047dc;
  if (*(int *)(DAT_010047d8 + 4) != 0) {
    uVar5 = *DAT_010047dc;
    *DAT_010047dc = uVar5 | 0x20;
    iVar2 = DAT_010047e0;
    *(undefined4 *)(DAT_010047e0 + 0x10) = 0x3f;
    pcVar3 = DAT_010047e4;
    DAT_010047e4[1] = '\0';
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
      if (0x578 < (int)(short)(*DAT_010047f0 - (short)((uint)(DAT_010047ec * *DAT_010047e8) >> 0xc))
                  + 700U) {
        *DAT_010047f4 = *DAT_010047f4 | 0x1000;
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
