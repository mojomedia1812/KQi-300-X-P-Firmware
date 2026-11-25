
void FUN_010067dc(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;

  iVar1 = DAT_0100687c;
  *(undefined1 *)(DAT_0100687c + 0x13) = 6;
  *(undefined1 *)(iVar1 + 0x14) = 0x40;
  *(undefined1 *)(iVar1 + 0x17) = 1;
  *DAT_01006880 = *(undefined1 *)(iVar1 + 0x16);
  *(undefined1 *)(iVar1 + 0x28) = 1;
  *(undefined1 *)(iVar1 + 0x29) = 4;
  *(undefined1 *)(iVar1 + 0x18) = 1;
  *(undefined1 *)(iVar1 + 0x19) = 0xe0;
  *(undefined1 *)(iVar1 + 0x25) = 0x14;
  *(undefined1 *)(iVar1 + -0x60) = 7;
  iVar2 = DAT_01006884;
  uVar4 = 0;
  do {
    ((undefined1 *)(iVar1 + -0x60))[uVar4 + 1] = *(undefined1 *)(iVar2 + uVar4);
    puVar3 = DAT_01006888;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  *DAT_01006888 = *DAT_01006888 & 0xfffffffe;
  puVar3[-2] = puVar3[-2] | 0x8080;
  *(undefined1 *)(iVar1 + 0x2a) = 0;
  *(undefined1 *)(iVar1 + 0x2b) = 0xfa;
  *(undefined1 *)(iVar1 + 0x1c) = 0x39;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x1e) = 0xd;
  *(undefined1 *)(iVar1 + 7) = 0x30;
  *(undefined1 *)(iVar1 + 8) = 0x27;
  *(undefined1 *)(iVar1 + 9) = 0x3c;
  *(undefined1 *)(iVar1 + 0xb) = 0x29;
  *DAT_0100688c = *DAT_0100688c & 0xfffeffff;
  puVar3 = DAT_01006888;
  *(undefined2 *)((int)DAT_01006888 + -0x22) = 0;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(undefined1 *)(DAT_01006890 + 0xc) = 1;
  return;
}
