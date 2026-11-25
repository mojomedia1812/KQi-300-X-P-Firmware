
void FUN_01000828(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;

  *(uint *)(DAT_010008f0 + 0x30) = *(uint *)(DAT_010008f0 + 0x30) | 0x20;
  uVar1 = DAT_010008f8;
  *(uint *)(DAT_010008f4 + 0x30) = *(uint *)(DAT_010008f4 + 0x30) | DAT_010008f8;
  puVar2 = DAT_010008fc;
  *DAT_010008fc = 0xf;
  puVar2[9] = uVar1 << 1;
  puVar2[10] = 0x4000;
  uVar3 = DAT_01000900;
  puVar2[1] = DAT_01000900;
  puVar2[0xb] = 5;
  puVar2[1] = puVar2[1] | 0x400;
  puVar2[2] = DAT_01000904;
  puVar2[0xd] = DAT_01000908;
  iVar4 = DAT_0100090c;
  *(undefined4 *)(DAT_0100090c + 0x24) = 0x70;
  *(undefined4 *)(iVar4 + 0x28) = DAT_01000910;
  *(undefined4 *)(iVar4 + 4) = uVar3;
  *(undefined4 *)(iVar4 + 0x2c) = 1;
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 0x400;
  *(undefined4 *)(iVar4 + 8) = DAT_01000914;
  *(undefined4 *)(iVar4 + 0x34) = DAT_01000918;
  puVar2[5] = 0;
  return;
}
