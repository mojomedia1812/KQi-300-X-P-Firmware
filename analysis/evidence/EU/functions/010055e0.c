
void FUN_010055e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;

  puVar1 = PTR_DAT_01005674;
  *(short *)PTR_DAT_01005674 = (short)DAT_01005670;
  uVar3 = *(ushort *)(puVar1 + 4);
  *(ushort *)(puVar1 + 2) = uVar3;
  puVar2 = PTR_DAT_01005678;
  if ((int)*(short *)(puVar1 + 10) < (int)(uint)uVar3) {
    if ((int)((uint)*(ushort *)PTR_DAT_01005678 << 0x14) < 0) {
      uVar3 = 0;
    }
    else if ((PTR_DAT_0100567c[0xb] == PTR_DAT_01005680[0x16]) ||
            (*(short *)(PTR_DAT_0100567c + 4) < 0x15)) {
      uVar3 = (uVar3 >> 7) + 1 & 0xff;
      if (0x1e < uVar3) {
        uVar3 = 0x1e;
      }
    }
    else {
      uVar3 = 3;
    }
    FUN_010068b0(uVar3,(int)*(short *)(puVar1 + 2));
    uVar4 = *(uint *)puVar2;
    if (((int)(uVar4 << 0x15) < 0) && (*(short *)(puVar1 + 10) < *(short *)(PTR_DAT_01005684 + 6)))
    {
      *(short *)(puVar1 + 10) = *(short *)(PTR_DAT_01005684 + 6);
    }
    *(uint *)puVar2 = uVar4 & 0xfffffbff;
  }
  else if ((int)(uint)uVar3 < (int)*(short *)(puVar1 + 10)) {
    FUN_01006894(0x2d,(int)*(short *)(puVar1 + 2),puVar1 + 10);
    *(uint *)puVar2 = *(uint *)puVar2 | 0x400;
    return;
  }
  return;
}
