
void FUN_01002d78(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;

  bVar5 = *(byte *)(DAT_01002dec + 1);
  *(byte *)(DAT_01002dec + 1) = bVar5 + 1;
  bVar5 = bVar5 & 7;
  iVar4 = FUN_0100091c(DAT_01002df4,(int)(short)*DAT_01002df0,bVar5);
  *(short *)(DAT_01002df8 + 2) = (short)iVar4;
  puVar1 = DAT_01002e00;
  *DAT_01002e00 = (short)((*(short *)(DAT_01002dfc + 2) * iVar4 & 0xfffffffU) >> 0xc);
  puVar1[2] = (ushort)*(byte *)(DAT_01002e04 + 2) * 0x100 + (ushort)*(byte *)(DAT_01002e04 + 3);
  puVar2 = DAT_01002e08;
  uVar3 = FUN_0100091c(DAT_01002df4 + 0x48,(int)(short)*DAT_01002e08,bVar5);
  puVar1[5] = uVar3;
  uVar3 = FUN_0100091c(DAT_01002df4 + 0x36,(int)*(short *)(DAT_01002e0c + 6),bVar5);
  puVar1[3] = uVar3;
  uVar3 = FUN_0100091c(DAT_01002df4 + 0x5a,(int)(short)puVar2[4],bVar5);
  *(undefined2 *)(DAT_01002e10 + 0xe) = uVar3;
  return;
}
