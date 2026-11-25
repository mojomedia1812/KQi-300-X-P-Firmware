
void FUN_01003938(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  puVar2 = PTR_DAT_010039f0;
  uVar6 = 0;
  uVar5 = 0x10;
  do {
    if ((uint)*(ushort *)(PTR_DAT_010039f4 + 10) <
        (uint)*(ushort *)(PTR_DAT_010039f0 + (uVar6 + uVar5) * 2)) {
      uVar6 = uVar6 + uVar5 & 0xffff;
    }
  } while ((uVar6 < 0x18) && (uVar5 = uVar5 >> 1, uVar5 != 0));
  pcVar7 = PTR_DAT_010039f0 + -0x40;
  if (uVar6 < 0x17) {
    if (uVar6 == 0) {
      *(undefined2 *)(PTR_DAT_010039f0 + -0x2e) = 0;
    }
    else {
      sVar4 = FUN_01000190(((uint)*(ushort *)(PTR_DAT_010039f0 + uVar6 * 2) -
                            (uint)*(ushort *)(PTR_DAT_010039f4 + 10) & 0xffff) * 100,
                           (uint)*(ushort *)(PTR_DAT_010039f0 + uVar6 * 2) -
                           (uint)*(ushort *)(PTR_DAT_010039f0 + (uVar6 + 1) * 2));
      *(short *)(puVar2 + -0x2e) = (short)uVar6 * 100 + sVar4;
    }
  }
  else {
    *(short *)(PTR_DAT_010039f0 + -0x2e) = (short)DAT_010039f8;
  }
  puVar3 = PTR_DAT_01003a00;
  uVar5 = (uint)*(ushort *)(puVar2 + -0x2e);
  bVar1 = PTR_DAT_010039f0[-0x40];
  if (uVar5 < DAT_010039fc) {
    if (uVar5 < 0x3e9) {
      if (bVar1 == 0) {
        if (*(short *)(PTR_DAT_01003a04 + 4) == 0) {
          *(uint *)PTR_DAT_01003a00 = *(uint *)PTR_DAT_01003a00 & 0xfffffdff;
        }
      }
      else {
        *pcVar7 = bVar1 - 1;
      }
    }
  }
  else if (bVar1 < 8) {
    *pcVar7 = bVar1 + 1;
  }
  else {
    *(uint *)PTR_DAT_01003a00 = *(uint *)PTR_DAT_01003a00 | 0x200;
  }
  *(uint *)(PTR_DAT_010039f0 + -0x10) =
       *(uint *)(PTR_DAT_010039f0 + -0x10) & 0xfffffff7 | ((*(uint *)puVar3 & 0x3ff) >> 9) << 3;
  return;
}
