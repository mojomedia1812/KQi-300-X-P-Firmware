
void FUN_01002cac(int param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_414 [256];

  puVar5 = local_414;
  puVar4 = local_414;
  for (uVar2 = 0; (uVar2 < 0x400 - param_2 && (*(ushort *)(param_1 + uVar2) != DAT_01002d2c));
      uVar2 = uVar2 + param_2) {
  }
  uVar3 = 0;
  do {
    local_414[uVar3] = 0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x100);
  uVar3 = param_2;
  if (uVar2 < 0x400 - param_2) {
    for (uVar3 = 0; puVar5 = puVar4, uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + uVar3);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  else {
    for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)(param_1 + uVar3);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *(undefined1 *)puVar5 = uVar1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    uVar3 = uVar3 + 1;
  }
  FUN_01001f74(param_1,uVar3 >> 2 & 0xffff,local_414);
  return;
}
