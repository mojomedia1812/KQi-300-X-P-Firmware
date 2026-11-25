
void FUN_010045e0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;

  puVar1 = DAT_010046e0;
  if (*(int *)(DAT_010046dc + 4) != 0) {
    *DAT_010046e0 = *DAT_010046e0 & 0xfffffbff;
    iVar2 = DAT_010046e4;
    *(undefined4 *)(DAT_010046e4 + 0x10) = 0x3f;
    iVar3 = DAT_010046e8;
    *(undefined1 *)(DAT_010046e8 + 1) = 0;
    uVar4 = DAT_010046ec;
    do {
    } while (*(char *)(iVar3 + 1) == '\0');
    bVar5 = 0;
    do {
      if (bVar5 == 0) {
        *(undefined4 *)(iVar2 + 0x38) = 0x28;
      }
      else if (bVar5 == 1) {
        *(undefined4 *)(iVar2 + 0x38) = 0x22;
      }
      else if (bVar5 == 2) {
        *(undefined4 *)(iVar2 + 0x38) = 10;
      }
      do {
      } while (*(char *)(iVar3 + 1) == '\0');
      *(undefined1 *)(iVar3 + 1) = 0;
      do {
      } while (*(char *)(iVar3 + 1) == '\0');
      if (((uVar4 < *DAT_010046f0) || (uVar4 < *DAT_010046f4)) || (uVar4 < *DAT_010046f8)) {
        *puVar1 = *puVar1 | 0x400;
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < 3);
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    if (-1 < (int)(*puVar1 << 0x15)) {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x3f;
      bVar5 = 0;
      do {
        if (bVar5 == 0) {
          *(undefined4 *)(iVar2 + 0x38) = 0x2b;
        }
        else if (bVar5 == 1) {
          *(undefined4 *)(iVar2 + 0x38) = 0x2e;
        }
        else if (bVar5 == 2) {
          *(undefined4 *)(iVar2 + 0x38) = 0x3a;
        }
        do {
        } while (*(char *)(iVar3 + 1) == '\0');
        *(undefined1 *)(iVar3 + 1) = 0;
        do {
        } while (*(char *)(iVar3 + 1) == '\0');
        if (800 < (int)(short)(*DAT_01004704 - (short)((uint)(DAT_01004700 * *DAT_010046fc) >> 0xc))
                  + 400U) {
          *puVar1 = *puVar1 | 0x400;
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 3);
    }
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  return;
}
