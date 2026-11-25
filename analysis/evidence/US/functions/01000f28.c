
void FUN_01000f28(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;

  puVar4 = DAT_01000fd0;
  iVar3 = DAT_01000fcc;
  iVar2 = DAT_01000fc8;
  if (5 < *(byte *)(DAT_01000fc4 + 0xc)) {
    if (((int)((uint)*DAT_01000fd0 << 0x14) < 0) ||
       (*(short *)(DAT_01000fcc + 0xe) < *(short *)(DAT_01000fc4 + 6))) {
      if (*(short *)(DAT_01000fc4 + 2) < 0x32) {
        *(undefined2 *)(DAT_01000fcc + 4) = 0x32;
      }
      else {
        iVar5 = *(short *)(DAT_01000fc4 + 2) + 0x14;
        if (iVar5 < *(short *)(DAT_01000fcc + 4)) {
          *(short *)(DAT_01000fcc + 4) = (short)iVar5;
        }
      }
      FUN_01006898(1,0x32,iVar3 + 4);
    }
    else {
      FUN_01006898(1,(int)*(short *)(DAT_01000fcc + 2),DAT_01000fcc + 4);
      FUN_010068b4(1,(int)*(short *)(iVar3 + 2),iVar3 + 4);
    }
    if ((*(int *)puVar4 << 0xc < 0) &&
       (((cVar1 = *(char *)(iVar2 + 0x28), cVar1 == '\n' && (*(char *)(iVar2 + 0x72) == '\x01')) ||
        (cVar1 == '\x01')))) {
      *(undefined2 *)(iVar3 + 4) = 0x65;
    }
    return;
  }
  if (((*(char *)(DAT_01000fc8 + 0x28) != '\n') || (*(char *)(DAT_01000fc8 + 0x72) != '\x01')) &&
     (*(char *)(DAT_01000fc8 + 0x28) != '\x01')) {
    *(short *)(DAT_01000fcc + 4) = *(short *)(DAT_01000fcc + 2);
    return;
  }
  *(undefined2 *)(DAT_01000fcc + 4) = 0x65;
  return;
}
