
void FUN_010068cc(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_010068f0;
  *DAT_010068f0 = 0x55;
  puVar1[1] = 0x700;
  puVar1[1] = puVar1[1] | DAT_010068f4;
  *puVar1 = 0x66;
  *(uint *)(DAT_010068f8 + 4) = *(uint *)(DAT_010068f8 + 4) | 0x40;
  return;
}
