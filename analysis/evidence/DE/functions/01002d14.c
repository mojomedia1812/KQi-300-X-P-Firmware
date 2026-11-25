
void FUN_01002d14(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;

  puVar3 = DAT_01002d54 + 9;
  puVar7 = DAT_01002d54 + 0x12;
  puVar4 = DAT_01002d54 + 0x1b;
  puVar5 = DAT_01002d54 + 0x24;
  puVar6 = DAT_01002d54 + 0x2d;
  bVar1 = 0;
  puVar2 = DAT_01002d54;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
    bVar1 = bVar1 + 1;
  } while (bVar1 < 9);
  return;
}
