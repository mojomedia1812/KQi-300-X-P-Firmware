
void FUN_01002d58(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;

  if ((int)((uint)*DAT_01002dc8 * 0x20000000) < 0) {
    if ((*(char *)(DAT_01002dcc + 0x1e) == '\0') && (*(char *)(DAT_01002dcc + 0xc) != '\0')) {
      cVar2 = *(char *)(DAT_01002dcc + 0x16) << 1;
    }
    else {
      cVar2 = *(char *)(DAT_01002dcc + 0x16);
    }
    cVar1 = *DAT_01002dd0;
    if (0 < (int)cVar1 * (int)*(char *)(DAT_01002dcc + 0x16)) {
      if ((int)cVar1 + 99U < 199) {
        *DAT_01002dd0 = cVar1 + cVar2;
      }
      return;
    }
    *DAT_01002dd0 = cVar2 * '\x04' + cVar1;
  }
  else {
    bVar3 = *(byte *)(DAT_01002dd4 + 0xe) ^ *(byte *)(DAT_01002dcc + 0x11);
    if (bVar3 == 1) {
      *DAT_01002dd8 = 0;
      return;
    }
    if (bVar3 == 2) {
      DAT_01002dd8[1] = 0;
      return;
    }
    if (bVar3 == 4) {
      DAT_01002dd8[2] = 0;
      return;
    }
  }
  return;
}
