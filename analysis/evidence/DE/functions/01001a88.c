
void Vector_24(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 uVar7;
  uint uVar8;
  uint *puVar9;

  *(uint *)(DAT_01001bb0 + 4) = *(uint *)(DAT_01001bb0 + 4) | 1;
  *(uint *)(DAT_01001bb4 + 4) = *(uint *)(DAT_01001bb4 + 4) | 1;
  *(uint *)(DAT_01001bb8 + 0x20) = *(uint *)(DAT_01001bb8 + 0x20) | 1;
  iVar3 = DAT_01001bc4;
  iVar2 = DAT_01001bc0;
  uVar8 = *(uint *)(DAT_01001bbc + 0x10);
  if (*(char *)(DAT_01001bc0 + 0xd) == '\0') {
    *(byte *)(DAT_01001bc4 + 0x11) = (byte)uVar8;
  }
  else {
    *(byte *)(DAT_01001bc4 + 0x11) = (byte)uVar8 & 2;
    if ((uVar8 & 1) != 0) {
      *(byte *)(iVar3 + 0x11) = *(byte *)(iVar3 + 0x11) | 4;
    }
    if ((int)(uVar8 << 0x1d) < 0) {
      *(byte *)(iVar3 + 0x11) = *(byte *)(iVar3 + 0x11) | 1;
    }
  }
  if (*(char *)(iVar2 + 0xc) == '\0') {
    *(byte *)(iVar3 + 0x11) = *(byte *)(iVar3 + 0x11) ^ 2;
  }
  FUN_01003278();
  *(short *)(DAT_01001bc8 + 0xe) =
       *(short *)(DAT_01001bc4 + -0x1c) + *(short *)(iVar2 + 6) + *(short *)(iVar3 + 8);
  pbVar4 = DAT_01001bcc;
  iVar2 = DAT_01001bb0;
  *(short *)(DAT_01001bcc + 6) = (short)*(undefined4 *)(DAT_01001bb0 + 0x44);
  iVar3 = DAT_01001bb4;
  puVar9 = (uint *)(DAT_01001bb4 + 0x40);
  *(short *)(pbVar4 + 8) = (short)*(undefined4 *)(DAT_01001bb4 + 0x44);
  *(short *)(pbVar4 + 10) = (short)*(undefined4 *)(iVar3 + 0x48);
  *(short *)(pbVar4 + 0xc) = (short)*(undefined4 *)(iVar2 + 0x4c);
  *(short *)(pbVar4 + 2) = (short)*(undefined4 *)(iVar2 + 0x48);
  *(short *)(pbVar4 + 4) = (short)*(undefined4 *)(iVar3 + 0x4c);
  iVar2 = DAT_01001bd4;
  *(short *)(DAT_01001bd4 + 8) = *(short *)(pbVar4 + 4) - *DAT_01001bd0;
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 + 1;
  uVar7 = FUN_0100091c(DAT_01001bd8,(int)*(short *)(pbVar4 + 2),bVar1 & 7);
  *DAT_01001bdc = uVar7;
  (**(code **)(pbVar4 + (uint)*(byte *)(iVar2 + 0xc) * 4 + 0x10))();
  FUN_010062a4();
  uVar5 = DAT_01001be4;
  uVar8 = DAT_01001be0;
  if ((DAT_01001be0 < *puVar9) || (*puVar9 < DAT_01001be4)) {
    if (pbVar4[1] == 0) {
      pbVar4[1] = 1;
    }
    else {
      if (1 < *(byte *)(iVar2 + 0xc)) {
        *(uint *)(DAT_01001bb8 + 0xc) = *(uint *)(DAT_01001bb8 + 0xc) & 0xffffffc0;
        *(undefined1 *)(iVar2 + 0xc) = 1;
      }
      puVar6 = DAT_01001be8;
      if ((-1 < (int)(*DAT_01001be8 << 0x1b)) && (uVar8 < *puVar9)) {
        *DAT_01001be8 = *DAT_01001be8 | 0x10;
      }
      if ((-1 < (int)(*puVar6 << 0x1a)) && (*puVar9 < uVar5)) {
        *puVar6 = *puVar6 | 0x20;
      }
    }
  }
  else {
    pbVar4[1] = 0;
  }
  *DAT_01001bec = 1;
  return;
}
