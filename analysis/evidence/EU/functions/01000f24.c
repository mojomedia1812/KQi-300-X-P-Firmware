
void FUN_01000f24(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;

  puVar4 = DAT_01000fcc;
  iVar3 = DAT_01000fc8;
  iVar2 = DAT_01000fc4;
  if (5 < *(byte *)(DAT_01000fc0 + 0xc)) {
    if (((int)((uint)*DAT_01000fcc << 0x14) < 0) ||
       (*(short *)(DAT_01000fc8 + 0xe) < *(short *)(DAT_01000fc0 + 6))) {
      if (*(short *)(DAT_01000fc0 + 2) < 0x32) {
        *(undefined2 *)(DAT_01000fc8 + 4) = 0x32;
      }
      else {
        iVar5 = *(short *)(DAT_01000fc0 + 2) + 0x14;
        if (iVar5 < *(short *)(DAT_01000fc8 + 4)) {
          *(short *)(DAT_01000fc8 + 4) = (short)iVar5;
        }
      }
      FUN_01006894(1,0x32,iVar3 + 4);
    }
    else {
      FUN_01006894(1,(int)*(short *)(DAT_01000fc8 + 2),DAT_01000fc8 + 4);
      FUN_010068b0(1,(int)*(short *)(iVar3 + 2),iVar3 + 4);
    }
    if ((*(int *)puVar4 << 0xc < 0) &&
       (((cVar1 = *(char *)(iVar2 + 0x28), cVar1 == '\n' && (*(char *)(iVar2 + 0x72) == '\x01')) ||
        (cVar1 == '\x01')))) {
      *(undefined2 *)(iVar3 + 4) = 0x65;
    }
    return;
  }
  if (((*(char *)(DAT_01000fc4 + 0x28) != '\n') || (*(char *)(DAT_01000fc4 + 0x72) != '\x01')) &&
     (*(char *)(DAT_01000fc4 + 0x28) != '\x01')) {
    *(short *)(DAT_01000fc8 + 4) = *(short *)(DAT_01000fc8 + 2);
    return;
  }
  *(undefined2 *)(DAT_01000fc8 + 4) = 0x65;
  return;
}
