
void FUN_0100305c(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  byte bVar5;

  puVar1 = DAT_01003104;
  if (DAT_01003104[1] != 0) {
    *DAT_01003104 = DAT_01003108;
    iVar2 = DAT_0100310c;
    *(uint *)(DAT_0100310c + 0xc) = *(uint *)(DAT_0100310c + 0xc) & 0xffffffc0;
    puVar3 = DAT_01003110;
    *DAT_01003110 = *DAT_01003110 & 0xffffffbf;
    pcVar4 = DAT_01003114;
    DAT_01003114[1] = '\0';
    do {
    } while (pcVar4[1] == '\0');
    *pcVar4 = '\0';
    do {
    } while (*pcVar4 == '\0');
    *(undefined4 *)(iVar2 + 0x10) = 0x3f;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    bVar5 = 0;
    do {
      if ((int)(*puVar3 << 0x19) < 0) {
        *puVar3 = (*puVar3 & 0xfffffffc) + 1;
        break;
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < 99);
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    if ((*puVar3 & 3) == 0) {
      *(undefined4 *)(iVar2 + 0x38) = 0x3f;
      *pcVar4 = '\0';
      do {
      } while (*pcVar4 == '\0');
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x3f;
      bVar5 = 0;
      do {
        if ((int)(*puVar3 << 0x19) < 0) {
          *puVar3 = (*puVar3 & 0xfffffffc) + 2;
          break;
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 99);
    }
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *puVar1 = DAT_01003118;
    *puVar3 = *puVar3 & 0xffffffbf;
  }
  return;
}
