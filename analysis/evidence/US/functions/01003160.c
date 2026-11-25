
void FUN_01003160(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  byte bVar5;

  puVar1 = DAT_01003208;
  if (DAT_01003208[1] != 0) {
    *DAT_01003208 = DAT_0100320c;
    iVar2 = DAT_01003210;
    *(uint *)(DAT_01003210 + 0xc) = *(uint *)(DAT_01003210 + 0xc) & 0xffffffc0;
    puVar3 = DAT_01003214;
    *DAT_01003214 = *DAT_01003214 & 0xffffffbf;
    pcVar4 = DAT_01003218;
    DAT_01003218[1] = '\0';
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
    *puVar1 = DAT_0100321c;
    *puVar3 = *puVar3 & 0xffffffbf;
  }
  return;
}
