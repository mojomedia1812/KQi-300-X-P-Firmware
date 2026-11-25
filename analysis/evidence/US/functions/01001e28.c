
void FUN_01001e28(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined1 local_18 [12];

  local_48 = (uint)*DAT_01001ea0;
  local_44 = (uint)DAT_01001ea0[1];
  local_40 = (uint)DAT_01001ea0[2];
  local_3c = (uint)DAT_01001ea0[3];
  local_38 = (uint)DAT_01001ea0[4];
  local_34 = (int)*DAT_01001ea4;
  local_30 = (int)DAT_01001ea4[1];
  local_28 = 0xffffffff;
  if (param_1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = DAT_01001ea8;
  }
  puVar4 = local_20;
  puVar3 = local_18;
  uVar1 = 0;
  do {
    *puVar4 = *(undefined1 *)(DAT_01001eac + uVar1 + 9);
    puVar4 = puVar4 + 1;
    *puVar3 = *(undefined1 *)(DAT_01001eac + uVar1 + 1);
    puVar3 = puVar3 + 1;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  iVar2 = FUN_01001f78(DAT_01001eb0,0xf,&local_48);
  if (iVar2 == 0) {
    *DAT_01001eb4 = *DAT_01001eb4 & 0xfffffffe;
  }
  return;
}
