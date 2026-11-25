
void FUN_01000520(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  short sVar6;
  uint uVar7;
  undefined4 in_r3;
  int iVar8;
  uint uVar9;

  uVar4 = DAT_010005e0;
  puVar3 = PTR_DAT_010005dc;
  puVar2 = PTR_DAT_010005d8;
  uVar9 = 0;
  uVar7 = 0x10;
  do {
    if ((uint)*(ushort *)(PTR_DAT_010005dc + 0xe) <
        (uint)*(ushort *)(PTR_DAT_010005d8 + (uVar9 + uVar7) * 2)) {
      uVar9 = uVar9 + uVar7 & 0xffff;
    }
  } while ((uVar9 < 0x18) && (uVar7 = uVar7 >> 1, uVar7 != 0));
  if (uVar9 < 0x17) {
    if (uVar9 == 0) {
      *(undefined2 *)(PTR_DAT_010005d8 + -0x5c) = 0x96;
    }
    else {
      iVar8 = (uVar9 + 1) * 2;
      sVar6 = FUN_01000190(((uint)*(ushort *)(PTR_DAT_010005d8 + uVar9 * 2) -
                            (uint)*(ushort *)(PTR_DAT_010005dc + 0xe) & 0xffff) * 0x32,
                           (uint)*(ushort *)(PTR_DAT_010005d8 + uVar9 * 2) -
                           (uint)*(ushort *)(PTR_DAT_010005d8 + iVar8),0x32,iVar8,in_r3);
      *(short *)(puVar2 + -0x5c) = (short)uVar9 * 0x32 + sVar6 + 0x96;
    }
  }
  else {
    *(short *)(PTR_DAT_010005d8 + -0x5c) = (short)DAT_010005e0;
  }
  puVar5 = DAT_010005e4;
  bVar1 = PTR_DAT_010005d8[-0x75];
  if (*(ushort *)(puVar2 + -0x5c) == uVar4) {
    if (bVar1 < 4) {
      puVar2[-0x75] = bVar1 + 1;
    }
    else {
      *DAT_010005e4 = *DAT_010005e4 | 0x8000;
    }
  }
  else if ((uint)*(ushort *)(puVar2 + -0x5c) <= DAT_010005e0 - 0x32) {
    if (bVar1 == 0) {
      if (*(short *)(puVar3 + 4) == 0) {
        *DAT_010005e4 = *DAT_010005e4 & 0xffff7fff;
      }
    }
    else {
      puVar2[-0x75] = bVar1 - 1;
    }
  }
  *(uint *)(PTR_DAT_010005d8 + -0x42) =
       *(uint *)(PTR_DAT_010005d8 + -0x42) & 0xfffffffb | ((*puVar5 & 0xffff) >> 0xf) << 2;
  return;
}
