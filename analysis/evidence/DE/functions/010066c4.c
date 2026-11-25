
void FUN_010066c4(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;

  iVar1 = DAT_0100676c;
  *(undefined1 *)(DAT_0100676c + 0x13) = 6;
  *(undefined1 *)(iVar1 + 0x14) = 0x40;
  *(undefined1 *)(iVar1 + 0x17) = 1;
  *DAT_01006770 = *(undefined1 *)(iVar1 + 0x16);
  *(undefined1 *)(iVar1 + 0x28) = 1;
  *(undefined1 *)(iVar1 + 0x29) = 4;
  *(undefined1 *)(iVar1 + 0x18) = 1;
  *(undefined1 *)(iVar1 + 0x19) = 0xe0;
  *(undefined1 *)(iVar1 + 0x25) = 0x14;
  *(undefined1 *)(iVar1 + -0x60) = 7;
  uVar3 = 0;
  do {
    ((undefined1 *)(iVar1 + -0x60))[uVar3 + 1] = *(undefined1 *)(DAT_01006774 + uVar3);
    puVar2 = DAT_01006778;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 8);
  *DAT_01006778 = *DAT_01006778 & 0xfffffffe;
  uVar3 = puVar2[-2];
  *(undefined1 *)(iVar1 + 0x2a) = 0;
  *(undefined1 *)(iVar1 + 0x2b) = 200;
  *(undefined1 *)(iVar1 + 0x1c) = 0x39;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x1e) = 0xd;
  *(undefined1 *)(iVar1 + 7) = 0x30;
  *(undefined1 *)(iVar1 + 8) = 0x27;
  *(undefined1 *)(iVar1 + 9) = 0x3c;
  *(undefined1 *)(iVar1 + 0xb) = 0x29;
  *DAT_0100677c = *DAT_0100677c & 0xfffeffff;
  *(undefined2 *)(puVar2 + -9) = 0;
  puVar2[3] = 0;
  puVar2[1] = 0;
  puVar2[-2] = uVar3 & 0xfffffffb | 0x8082;
  *(undefined1 *)(DAT_01006780 + 0xc) = 1;
  return;
}
