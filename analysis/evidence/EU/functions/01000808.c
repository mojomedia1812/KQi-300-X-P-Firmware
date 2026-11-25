
void FUN_01000808(void)

{
  *(uint *)(DAT_0100081c + 0x30) = *(uint *)(DAT_0100081c + 0x30) | 5;
  *DAT_01000824 = DAT_01000820;
  return;
}
