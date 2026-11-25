
void Vector_20(void)

{
  int iVar1;

  *(uint *)(DAT_0100065c + 0x34) = *(uint *)(DAT_0100065c + 0x34) | 1;
  *(uint *)(DAT_01000660 + 0x18) = *(uint *)(DAT_01000660 + 0x18) | 1;
  iVar1 = DAT_0100065c;
  *(undefined4 *)(DAT_0100065c + -0x70) = 0;
  *(uint *)(iVar1 + -0x74) = *(uint *)(iVar1 + -0x74) & 0xffffffc0;
  if (5 < *(byte *)(DAT_01000664 + 0xc)) {
    *(undefined1 *)(DAT_01000664 + 0xc) = 1;
  }
  *DAT_01000668 = *DAT_01000668 | 0x40;
  return;
}
