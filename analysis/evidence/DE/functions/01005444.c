
void FUN_01005444(void)

{
  short *psVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;

  puVar3 = PTR_DAT_010054b4;
  psVar1 = (short *)(PTR_DAT_010054b4 + 4);
  *(short *)(PTR_DAT_010054b4 + 2) = *psVar1;
  puVar4 = PTR_DAT_010054b8;
  if (*psVar1 != 0) {
    uVar7 = *(uint *)PTR_DAT_010054b8;
    if ((int)(uVar7 << 0x1e) < 0) {
      *(undefined2 *)(puVar3 + 2) = 0x410;
      *(uint *)puVar4 = uVar7 & 0xfffffeff;
    }
  }
  if ((int)((uint)*(ushort *)puVar4 << 0x17) < 0) {
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar3 + 6);
  }
  puVar6 = PTR_DAT_010054c4;
  puVar5 = PTR_DAT_010054c0;
  puVar4 = PTR_DAT_010054bc;
  if (*(short *)(puVar3 + 2) != 0) {
    if (*(short *)(PTR_DAT_010054c4 + 0xc) < 0) {
      *(undefined2 *)PTR_DAT_010054c4 = *(undefined2 *)(PTR_DAT_010054bc + 2);
      sVar2 = *(short *)(puVar6 + 6);
      *(short *)(puVar3 + 10) = sVar2;
      *(int *)(puVar5 + 0x38) = (int)sVar2 << 10;
      return;
    }
    FUN_01005040();
    return;
  }
  FUN_01006784(0x2d,0,PTR_DAT_010054b4 + 10);
  *(undefined2 *)puVar6 = *(undefined2 *)(puVar4 + 2);
  *(int *)(puVar5 + 0x38) = (int)*(short *)(puVar6 + 6) << 10;
  return;
}
