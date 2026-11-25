
void FUN_010028d4(short param_1,short param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_01002938;
  if (0 < (short)((short)*(char *)(DAT_01002938 + 0x56) *
                 (*(short *)(DAT_01002938 + 0x24) - param_1))) {
    *(short *)(DAT_01002938 + 0x24) =
         *(short *)(DAT_01002938 + 0x24) + *(short *)(DAT_01002938 + 0x3a) * -2;
    if (4000 < *(ushort *)(iVar1 + 0x20)) {
      *(short *)(iVar1 + 0x24) = *(short *)(iVar1 + 0x24) + *(short *)(iVar1 + 0x3a) * -2;
    }
    return;
  }
  iVar2 = (int)(short)((short)*(char *)(DAT_01002938 + 0x56) *
                      (*(short *)(DAT_01002938 + 0x24) - param_2));
  if (iVar2 < DAT_0100293c) {
    *(short *)(DAT_01002938 + 0x24) = param_2;
    *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) >> 1;
  }
  else if (iVar2 < 0) {
    *(short *)(DAT_01002938 + 0x24) =
         *(short *)(DAT_01002938 + 0x24) + *(short *)(DAT_01002938 + 0x3a);
    return;
  }
  return;
}
