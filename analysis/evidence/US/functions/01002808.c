
void FUN_01002808(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;

  iVar1 = DAT_010028c0;
  *(undefined1 *)(DAT_010028c0 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + -0x1a) = 0;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  *(undefined4 *)(iVar1 + -0x24) = 0;
  *(undefined2 *)(iVar1 + -10) = 10;
  *(undefined2 *)(iVar1 + -0x20) = 0;
  *(undefined2 *)(iVar1 + -0xc) = 0;
  *(char *)(iVar1 + 0x16) = (char)param_1;
  iVar2 = DAT_010028c4;
  *(undefined1 *)(DAT_010028c4 + 0xe) = *(undefined1 *)(iVar1 + 0x11);
  if ((1 < *(byte *)(DAT_010028c8 + 0xc)) && (*(char *)(iVar1 + 0xc) == '\0')) {
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined1 *)(iVar1 + 0x18) = 1;
    iVar3 = DAT_010028cc;
    *(uint *)(DAT_010028cc + 8) = *(uint *)(DAT_010028cc + 8) | 4;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x1000000;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffffb;
    sVar4 = *(short *)(iVar1 + -0x1e) - param_1 * (short)DAT_010028d0;
    if ((short)(param_1 * (*(short *)(iVar1 + -0x1c) - sVar4)) < 0) {
      *(short *)(iVar1 + -0x1c) = sVar4;
      return;
    }
    sVar4 = *(short *)(iVar1 + -0x1c) - *(short *)(iVar1 + -0x1e);
    if (sVar4 < 1) {
      sVar4 = -sVar4;
    }
    FUN_01002c70(sVar4,2000,4,0x1000000,param_4);
    if ((*(char *)(iVar2 + 0xb) == *(char *)(iVar1 + 0x16)) && (*(short *)(iVar1 + -6) < 0x12)) {
      *(undefined2 *)(iVar1 + -6) = 0x12;
    }
    *(short *)(iVar1 + -6) = param_1 * *(short *)(iVar1 + -6);
    return;
  }
  *(undefined2 *)(iVar1 + -6) = 0;
  return;
}
