
void FUN_01001998(int param_1)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;

  iVar2 = DAT_01001b54;
  uVar3 = (ushort)param_1;
  *(ushort *)(DAT_01001b54 + 10) = uVar3;
  uVar4 = uVar3;
  if (param_1 < 1) {
    uVar4 = -uVar3;
  }
  uVar8 = (uint)uVar4;
  *(int *)(DAT_01001b54 + -0x24) = *(int *)(DAT_01001b54 + -0x24) + param_1;
  iVar6 = DAT_01001b54;
  uVar5 = *DAT_01001b58;
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(char *)(iVar2 + 0xc) == '\0') {
      iVar6 = (*(int *)(DAT_01001b54 + -0x24) + param_1 * (5 - (uint)*(byte *)(iVar2 + 0x10))) *
              0x6d;
    }
    else {
      iVar6 = (*(int *)(DAT_01001b54 + -0x24) + param_1 * (3 - (uint)*(byte *)(iVar2 + 0x10))) *
              0x6d;
    }
  }
  else {
    *(int *)(DAT_01001b54 + -0x24) =
         *(int *)(DAT_01001b54 + -0x24) -
         (int)*(short *)((uint)*(byte *)(iVar2 + 0x10) * 2 + DAT_01001b54 + -4);
    if (DAT_01001b5c < uVar5) {
      iVar6 = *(int *)(iVar6 + -0x24) << 4;
    }
    else if (uVar5 < DAT_01001b60) {
      iVar6 = *(int *)(iVar6 + -0x24) >> 2;
    }
    else {
      iVar6 = (int)((uVar5 + DAT_01001b64) * *(int *)(iVar6 + -0x24)) >> 10;
    }
    if (DAT_01001b68 < uVar5) {
      iVar6 = iVar6 * 5;
    }
    else {
      iVar6 = param_1 * 4 + iVar6;
    }
  }
  if (DAT_01001b6c < uVar8) {
    iVar6 = param_1 * 99 + iVar6;
    if (DAT_01001b70 < uVar8) {
      iVar6 = param_1 * 0x16e + iVar6;
    }
  }
  else {
    if (DAT_01001b74 < uVar8) {
      if (*(short *)(DAT_01001b54 + -6) < 1) {
        iVar9 = -(int)*(short *)(DAT_01001b54 + -6);
      }
      else {
        iVar9 = (int)*(short *)(DAT_01001b54 + -6);
      }
      if (iVar9 < 0x5b0) {
        bVar7 = *(char *)(iVar2 + 0x13) + 1;
        *(byte *)(iVar2 + 0x13) = bVar7;
        if (1 < bVar7) {
          iVar6 = param_1 * 99 + iVar6;
        }
        goto LAB_01001a8e;
      }
    }
    *(undefined1 *)(iVar2 + 0x13) = 0;
  }
LAB_01001a8e:
  bVar7 = *(byte *)(iVar2 + 0x10);
  *(byte *)(iVar2 + 0x10) = bVar7 + 1;
  iVar9 = DAT_01001b54;
  *(ushort *)((uint)bVar7 * 2 + DAT_01001b54 + -4) = uVar3;
  if (*(char *)(iVar2 + 0xc) == '\0') {
    bVar7 = 6;
  }
  else {
    bVar7 = 4;
  }
  if (bVar7 <= *(byte *)(iVar2 + 0x10)) {
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
  }
  FUN_01002c70(iVar6 + 0x460000);
  cVar1 = *(char *)(DAT_01001b78 + 0xb);
  uVar5 = DAT_01001b80;
  if (cVar1 == *(char *)(iVar2 + 0x16)) {
    uVar5 = DAT_01001b7c;
  }
  uVar8 = *DAT_01001b58;
  if (uVar8 < uVar5) {
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)(iVar2 + 0x1d) = 0;
  }
  if (DAT_01001b84 < uVar8) {
    *(undefined2 *)(iVar9 + -10) = 0x3b;
  }
  else {
    *(short *)(iVar9 + -10) = (short)((uVar8 & 0x3ffffff) >> 10);
  }
  *(short *)(iVar9 + -8) = (short)((uVar8 & 0x7fffff) >> 7);
  if (*(char *)(iVar2 + 0x1e) == '\0') {
    uVar3 = 4000;
  }
  else {
    uVar3 = 8000;
  }
  if (uVar3 < *(ushort *)(iVar9 + -8)) {
    *(ushort *)(iVar9 + -8) = uVar3;
  }
  *(short *)(iVar9 + -0xc) = *(short *)(iVar9 + -6) << 3;
  if (cVar1 == *(char *)(iVar2 + 0x16)) {
    if (DAT_01001b88 < *(ushort *)(iVar9 + -0xc)) {
      *(short *)(iVar9 + -0xc) = (short)DAT_01001b88;
    }
    else if (*(ushort *)(iVar9 + -0xc) < 0x5b0) {
      *(undefined2 *)(iVar9 + -0xc) = 0x5b0;
      return;
    }
    return;
  }
  *(short *)(iVar9 + -8) = (short)((uint)*(ushort *)(iVar9 + -8) * 0xd2 >> 8);
  if (2000 < *(ushort *)(iVar9 + -8)) {
    *(undefined2 *)(iVar9 + -8) = 2000;
  }
  return;
}
