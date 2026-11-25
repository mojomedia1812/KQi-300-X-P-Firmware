
void FUN_01003b1c(void)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;

  uVar5 = DAT_01003ba0;
  puVar4 = DAT_01003b98;
  uVar2 = *DAT_01003b98;
  uVar6 = (uint)DAT_01003b98[2];
  puVar1 = DAT_01003b98 + 1;
  uVar3 = DAT_01003b98[2] + 1;
  if ((uint)uVar2 < (uint)*DAT_01003b9c) {
    uVar2 = *DAT_01003b9c;
    *DAT_01003b98 = uVar2;
    if ((uint)*puVar1 * 2 < (uint)uVar2) {
      puVar4[2] = 0;
      puVar4[1] = uVar2 >> 1;
      puVar4[4] = uVar2 >> 1;
    }
    else if (uVar6 < uVar5) {
      puVar4[2] = uVar3;
    }
  }
  else if ((uint)*DAT_01003b9c < (uint)*puVar1) {
    uVar7 = *DAT_01003b9c;
    DAT_01003b98[1] = uVar7;
    uVar7 = uVar7 + 0x1d;
    puVar4[4] = uVar7;
    uVar8 = (uint)uVar7 * 2;
    if (uVar8 < uVar2) {
      puVar4[2] = 0;
      *puVar4 = (ushort)uVar8;
    }
    else if (uVar6 < uVar5) {
      puVar4[2] = uVar3;
    }
  }
  else if (uVar6 < DAT_01003ba0) {
    DAT_01003b98[2] = uVar3;
  }
  if (uVar5 <= puVar4[2]) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  puVar4[3] = *puVar4 + puVar4[4];
  return;
}
