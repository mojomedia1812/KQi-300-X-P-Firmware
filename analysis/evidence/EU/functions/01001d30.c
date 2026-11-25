
void FUN_01001d30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;

  puVar1 = DAT_01001da4;
  DAT_01001da4[10] = 0x2a000000;
  *(undefined4 *)(DAT_01001dac + 0x30) = DAT_01001da8;
  puVar1[10] = puVar1[10] | 0x5000;
  puVar1[0xb] = 1;
  puVar1[0xd] = 3;
  puVar2 = DAT_01001da4;
  puVar5 = DAT_01001da4 + -0x20;
  DAT_01001da4[-0x15] = DAT_01001db0;
  puVar3 = DAT_01001da4;
  DAT_01001da4[-6] = 0;
  puVar3[-4] = 0;
  puVar3[-2] = 0;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar3[-9] = DAT_01001db4;
  uVar4 = DAT_01001db8;
  puVar3[-0xe] = DAT_01001db8;
  puVar3[-0xd] = uVar4;
  puVar3[-0xc] = uVar4;
  *puVar5 = 0x22000;
  puVar2[-0x12] = 0x2a;
  puVar2[-0x1c] = 0;
  puVar2[-0x16] = 0x400;
  puVar2[-0x1d] = DAT_01001dbc;
  puVar2[-0x1d] = puVar2[-0x1d] | DAT_01001dc0;
  puVar2[-0x1a] = 1;
  puVar2[-0x18] = puVar2[-0x18] | 1;
  *puVar5 = *puVar5 | 1;
  return;
}
