
void FUN_0100093c(void)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  puVar3 = PTR_DAT_01000a2c;
  puVar2 = PTR_DAT_01000a28;
  uVar5 = (uint)*DAT_01000a20;
  sVar1 = *(short *)(PTR_DAT_01000a28 + 0x18);
  if (DAT_01000a24 < uVar5) {
    if (sVar1 < 10) {
      *(short *)(PTR_DAT_01000a28 + 0x18) = sVar1 + 1;
    }
    else if (-1 < *(int *)PTR_DAT_01000a2c << 0x1b) {
      *(uint *)PTR_DAT_01000a2c = *(uint *)PTR_DAT_01000a2c | 0x10;
      return;
    }
    return;
  }
  if ((uVar5 < DAT_01000a24 - 0x72) && (*(int *)PTR_DAT_01000a2c << 0x1b < 0)) {
    if (sVar1 < -99) {
      if (-1 < (int)((uint)(byte)*PTR_DAT_01000a30 << 0x19)) {
        *(uint *)PTR_DAT_01000a2c = *(uint *)PTR_DAT_01000a2c & 0xffffffef;
      }
    }
    else {
      *(short *)(PTR_DAT_01000a28 + 0x18) = sVar1 + -1;
    }
  }
  else {
    *(undefined2 *)(PTR_DAT_01000a28 + 0x18) = 0;
  }
  puVar4 = PTR_DAT_01000a34;
  uVar6 = *(uint *)PTR_DAT_01000a34;
  uVar7 = DAT_01000a38;
  if (-1 < (int)(uVar6 << 0x1c)) {
    uVar7 = DAT_01000a38 + 0x55;
  }
  if (uVar5 < uVar7) {
    *(uint *)PTR_DAT_01000a34 = uVar6 | 0x800;
  }
  else {
    *(uint *)PTR_DAT_01000a34 = uVar6 & 0xfffff7ff;
  }
  sVar1 = *(short *)(PTR_DAT_01000a28 + 0x1a);
  if (*(ushort *)(DAT_01000a3c + 8) <= uVar5) {
    if ((*(int *)puVar3 << 0x1a < 0) && (*(ushort *)(DAT_01000a3c + 8) + 0x72 < uVar5)) {
      if (sVar1 < -0x31) {
        if (DAT_01000a20[2] < DAT_01000a40) {
          *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffdf;
          return;
        }
      }
      else {
        *(short *)(puVar2 + 0x1a) = sVar1 + -1;
      }
      return;
    }
    *(undefined2 *)(puVar2 + 0x1a) = 0;
    return;
  }
  if (sVar1 < 500) {
    *(short *)(puVar2 + 0x1a) = sVar1 + 1;
  }
  else if (-1 < *(int *)puVar3 << 0x1a) {
    *(uint *)puVar3 = *(uint *)puVar3 | 0x20;
  }
  *(uint *)puVar4 = *(uint *)puVar4 | 0x40000;
  return;
}
