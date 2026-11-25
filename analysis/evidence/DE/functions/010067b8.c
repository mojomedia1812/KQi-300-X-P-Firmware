
void FUN_010067b8(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_010067dc;
  *DAT_010067dc = 0x55;
  puVar1[1] = 0x700;
  puVar1[1] = puVar1[1] | DAT_010067e0;
  *puVar1 = 0x66;
  *(uint *)(DAT_010067e4 + 4) = *(uint *)(DAT_010067e4 + 4) | 0x40;
  return;
}
