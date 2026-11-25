
void FUN_0100375c(void)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;

  iVar5 = DAT_0100381c;
  iVar4 = DAT_01003818;
  puVar3 = DAT_01003814;
  if ((int)(*DAT_01003814 * 0x1000000) < 0) {
    uVar7 = *(short *)(DAT_0100381c + 0x2a) + 1;
    *(ushort *)(DAT_0100381c + 0x2a) = uVar7;
    if (0x14 < uVar7) {
      bVar2 = *(byte *)(iVar5 + 0x11) | *(byte *)(iVar4 + 0x11) ^ *(byte *)(iVar5 + 0x12);
      *(byte *)(iVar5 + 0x11) = bVar2;
      if (bVar2 == 7) {
        *puVar3 = *puVar3 & 0xffffff7f;
      }
      if (DAT_01003820 < uVar7) {
        *(undefined2 *)(iVar5 + 0x2a) = 0;
        *(undefined1 *)(iVar5 + 0x11) = 0;
      }
    }
  }
  else {
    *(undefined2 *)(DAT_0100381c + 0x2a) = 0;
    *(undefined1 *)(iVar5 + 0x11) = 0;
  }
  *(undefined1 *)(iVar5 + 0x12) = *(undefined1 *)(DAT_01003824 + 0xe);
  iVar6 = DAT_0100382c;
  cVar1 = *(char *)(DAT_0100381c + 0x15);
  if ((-1 < (int)(*DAT_01003828 * 0x20000000)) && (cVar1 == '\0')) {
    if (((*DAT_01003828 & 1) != 0) && (-1 < (int)((uint)*DAT_01003830 << 0x1d))) {
      *(uint *)(DAT_0100382c + 0x20) = *(uint *)(DAT_0100382c + 0x20) | 0x40;
      return;
    }
    *(uint *)(DAT_0100382c + 0x24) = *(uint *)(DAT_0100382c + 0x24) | 0x40;
    return;
  }
  if (*(ushort *)(iVar5 + 0x2c) < 500) {
    *(ushort *)(iVar5 + 0x2c) = *(ushort *)(iVar5 + 0x2c) + 1;
  }
  else {
    if (cVar1 != '\0') {
      *(char *)(iVar5 + 0x15) = cVar1 + -1;
    }
    *(undefined2 *)(iVar5 + 0x2c) = 0;
    if (*(int *)(iVar6 + 0x14) << 0x19 < 0) {
      *(uint *)(iVar6 + 0x24) = *(uint *)(iVar6 + 0x24) | 0x40;
    }
    else {
      *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 0x40;
    }
  }
  if (*(char *)(iVar4 + 0x18) != '\0') {
    *(undefined1 *)(iVar5 + 0x15) = 0x14;
  }
  return;
}
