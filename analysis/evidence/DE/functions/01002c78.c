
void FUN_01002c78(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;

  bVar5 = *(byte *)(DAT_01002cec + 1);
  *(byte *)(DAT_01002cec + 1) = bVar5 + 1;
  bVar5 = bVar5 & 7;
  iVar4 = FUN_0100091c(DAT_01002cf4,(int)(short)*DAT_01002cf0,bVar5);
  *(short *)(DAT_01002cf8 + 2) = (short)iVar4;
  puVar1 = DAT_01002d00;
  *DAT_01002d00 = (short)((*(short *)(DAT_01002cfc + 2) * iVar4 & 0xfffffffU) >> 0xc);
  puVar1[2] = (ushort)*(byte *)(DAT_01002d04 + 2) * 0x100 + (ushort)*(byte *)(DAT_01002d04 + 3);
  puVar2 = DAT_01002d08;
  uVar3 = FUN_0100091c(DAT_01002cf4 + 0x48,(int)(short)*DAT_01002d08,bVar5);
  puVar1[5] = uVar3;
  uVar3 = FUN_0100091c(DAT_01002cf4 + 0x36,(int)*(short *)(DAT_01002d0c + 6),bVar5);
  puVar1[3] = uVar3;
  uVar3 = FUN_0100091c(DAT_01002cf4 + 0x5a,(int)(short)puVar2[4],bVar5);
  *(undefined2 *)(DAT_01002d10 + 0xe) = uVar3;
  return;
}
