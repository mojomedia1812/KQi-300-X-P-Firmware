
void FUN_01005040(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  *(short *)PTR_DAT_0100518c = (short)DAT_01005188;
  if ((int)((uint)*(ushort *)PTR_DAT_01005190 << 0x14) < 0) {
    FUN_01006784(1,0x50,PTR_DAT_01005194);
  }
  else {
    FUN_010067a0(0x28,(int)(short)param_1,PTR_DAT_01005194);
  }
  if (2 < *(short *)(PTR_DAT_01005198 + 2)) {
    FUN_01006784(0x2d,(int)(short)param_1,PTR_DAT_01005194);
  }
  sVar1 = *(short *)PTR_DAT_01005194;
  iVar7 = (int)sVar1 - (int)*(short *)(PTR_DAT_0100519c + 2);
  iVar8 = iVar7 * 0xfa;
  iVar5 = DAT_010051a0;
  if ((iVar8 - DAT_010051a0 == 0 || iVar8 < DAT_010051a0) && (iVar5 = iVar8, iVar8 < -DAT_010051a0))
  {
    iVar5 = -DAT_010051a0;
  }
  iVar9 = *(int *)(DAT_010051a4 + 0x38);
  iVar3 = iVar9 + iVar5 >> 10;
  iVar4 = (int)*(short *)(PTR_DAT_01005198 + 2);
  iVar8 = iVar4;
  if (iVar4 < 0x14) {
    iVar8 = 0x14;
  }
  iVar6 = *(short *)(PTR_DAT_01005194 + 6) + 0x19;
  if ((iVar3 <= iVar6) &&
     (iVar8 = *(short *)(PTR_DAT_01005194 + 6) - iVar8, iVar6 = iVar3, iVar3 < iVar8)) {
    iVar6 = iVar8;
  }
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  iVar10 = (int)(short)iVar6;
  *(short *)(PTR_DAT_0100518c + 10) = (short)iVar6;
  iVar8 = FUN_0100017c(DAT_010051a8,*(undefined2 *)PTR_DAT_01005198);
  iVar3 = FUN_0100017c(iVar8 * param_1,*(undefined2 *)PTR_DAT_0100519c);
  iVar8 = DAT_010051a4;
  if (iVar4 < 0x3c) {
LAB_01005116:
    if (iVar10 < iVar3 >> 3) {
      iVar3 = iVar7;
      if (iVar7 < 1) {
        iVar3 = -iVar7;
      }
      if (0x28 < iVar3) {
        *(int *)(DAT_010051a4 + 0x38) = iVar7 * 10 + iVar9;
        goto LAB_0100515a;
      }
    }
  }
  else {
    iVar4 = iVar7;
    if (iVar7 < 1) {
      iVar4 = -iVar7;
    }
    if (0x1e0 < iVar4) goto LAB_01005116;
  }
  if (sVar1 < 0x17c1) {
    bVar2 = *(char *)(DAT_010051a4 + 4) + 1;
    *(byte *)(DAT_010051a4 + 4) = bVar2;
    if ((bVar2 & 1) != 0) {
      *(int *)(iVar8 + 0x38) = iVar9 + iVar7;
    }
  }
  else {
    *(int *)(DAT_010051a4 + 0x38) = iVar7 * 0x14 + iVar9;
  }
LAB_0100515a:
  iVar7 = DAT_010051a4;
  iVar8 = (iVar10 + 0x19) * 0x400;
  if (iVar8 < *(int *)(DAT_010051a4 + 0x38)) {
    *(int *)(DAT_010051a4 + 0x38) = iVar8;
  }
  else {
    iVar5 = (iVar10 + -0x23) * 0x400 - iVar5;
    if (*(int *)(DAT_010051a4 + 0x38) < iVar5) {
      *(int *)(DAT_010051a4 + 0x38) = iVar5;
    }
  }
  if (*(int *)(iVar7 + 0x38) < 0x400) {
    *(undefined4 *)(iVar7 + 0x38) = 0x400;
  }
  return;
}
