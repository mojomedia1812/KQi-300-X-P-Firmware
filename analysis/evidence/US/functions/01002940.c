
void FUN_01002940(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  puVar4 = PTR_DAT_01002b78;
  puVar3 = PTR_DAT_01002b74;
  puVar2 = PTR_DAT_01002b70;
  puVar1 = PTR_DAT_01002b68;
  uVar8 = *(uint *)PTR_DAT_01002b68;
  uVar5 = (uint)*(ushort *)(DAT_01002b60 + 4);
  uVar9 = *(uint *)PTR_DAT_01002b6c;
  if (DAT_01002b64 < uVar5) {
    *(uint *)PTR_DAT_01002b68 = uVar8 | 0x10;
    PTR_DAT_01002b78[2] = 0;
    *(uint *)PTR_DAT_01002b6c = uVar9 & 0xffffffef;
  }
  else {
    uVar7 = *DAT_01002b80;
    if (DAT_01002b7c < uVar5) {
      uVar8 = DAT_01002b88;
      if (uVar5 <= DAT_01002b84) {
        uVar8 = uVar5 - DAT_01002b7c & 0xffff;
      }
      iVar6 = *DAT_01002b8c;
      if ((int)(uVar7 << 0x1c) < 0) {
        *(short *)(PTR_DAT_01002b70 + 4) = (short)(DAT_01002b9c * uVar8 >> 0x10);
      }
      else {
        if ((iVar6 << 0x14 < 0) || (PTR_DAT_01002b74[8] == '\n')) {
          *(short *)(PTR_DAT_01002b70 + 4) =
               (short)((*DAT_01002b98 * uVar8 & 0x3ffffff) >> 10) + 0x50;
        }
        else if (PTR_DAT_01002b74[8] == '\x01') {
          uVar5 = (uVar8 * 0x17400 >> 0x10) + 0x50;
          *(short *)(PTR_DAT_01002b70 + 4) = (short)uVar5;
          if (0x960 < (uVar5 & 0xffff)) {
            *(undefined2 *)(puVar2 + 4) = 0x960;
          }
        }
        else {
          *(short *)(PTR_DAT_01002b70 + 4) = (short)(DAT_01002b90 * uVar8 >> 0x10) + 0x50;
        }
        if (DAT_01002b94 < *(ushort *)(puVar2 + 4)) {
          *(short *)(puVar2 + 4) = (short)DAT_01002b94;
        }
      }
      puVar4 = PTR_DAT_01002b78;
      PTR_DAT_01002b78[2] = 0;
      if ((((iVar6 << 0x1e < 0) && (-1 < (int)(uVar7 << 0x1c))) &&
          (*(byte *)(DAT_01002b60 + 0xc) < 2)) &&
         (((ushort)((ushort)(byte)puVar3[0xe] + (ushort)(byte)puVar3[0xd] * 0x100) <
           (ushort)(byte)puVar4[0x14] || (PTR_DAT_01002ba0[0xb] != PTR_DAT_01002ba4[0x16])))) {
        *(undefined2 *)(puVar2 + 4) = 0;
      }
      if ((byte)puVar4[3] < 5) {
        puVar4[3] = puVar4[3] + 1;
      }
      else {
        *(uint *)PTR_DAT_01002b6c = uVar9 | 0x10;
      }
    }
    else if (uVar5 < DAT_01002b7c - 0x29) {
      PTR_DAT_01002b78[3] = 0;
      if (uVar5 < 0x147) {
        if (5 < (byte)*puVar4) {
          *(uint *)puVar1 = uVar8 | 0x10;
        }
      }
      else if ((int)(uVar8 << 0x1b) < 0) {
        if ((byte)puVar4[2] < 0x14) {
          puVar4[2] = puVar4[2] + 1;
        }
        else {
          *(uint *)puVar1 = uVar8 & 0xffffffef;
        }
      }
      *DAT_01002b80 = uVar7 & 0xffdfffff;
      *(undefined2 *)(puVar2 + 4) = 0;
      if ((((*(int *)PTR_DAT_01002ba8 << 0x19 < 0) &&
           ((int)*(short *)(PTR_DAT_01002ba0 + 4) + 0x31U < 99)) &&
          (*(byte *)(DAT_01002b60 + 0xc) < 2)) && ((*(uint *)PTR_DAT_01002ba8 & 3) == 0)) {
        FUN_01003160();
      }
      if (((*(int *)PTR_DAT_01002ba8 << 0x18 < 0) && (PTR_DAT_01002ba0[0xe] != '\0')) &&
         ((PTR_DAT_01002ba0[0xe] != '\a' && ((int)*(short *)(PTR_DAT_01002ba0 + 4) + 9U < 0x13)))) {
        *(uint *)PTR_DAT_01002ba8 = *(uint *)PTR_DAT_01002ba8 & 0xffffff7f;
      }
      *(uint *)PTR_DAT_01002b6c = *(uint *)PTR_DAT_01002b6c & 0xffffffef;
    }
  }
  puVar4 = PTR_DAT_01002bb4;
  if (((int)((uint)(byte)*puVar1 << 0x1b) < 0) || ((int)(*DAT_01002b80 << 10) < 0)) {
    *(undefined2 *)(puVar2 + 4) = 0;
    return;
  }
  uVar5 = *(ushort *)PTR_DAT_01002bac - 0x96 & 0xffff;
  if (uVar5 < *(ushort *)PTR_DAT_01002bb0) {
    uVar5 = (uint)*(ushort *)PTR_DAT_01002bb0;
  }
  if (DAT_01002b7c - 0x49 < uVar5) {
    *(short *)(PTR_DAT_01002bb4 + 2) =
         0x1fa - (short)((uVar5 - (DAT_01002b7c - 0x49) & 0xffff) * 0x14000 >> 0x10);
  }
  else {
    *(undefined2 *)(PTR_DAT_01002bb4 + 2) = 0x1fa;
  }
  if (puVar3[8] == '\n') {
    if ((byte)PTR_DAT_01002b74[0x52] < 2) {
      iVar6 = 0xca;
    }
    else {
      iVar6 = (uint)(byte)PTR_DAT_01002b74[0x52] * 0x65;
    }
    if (iVar6 < *(short *)(puVar4 + 2)) {
      *(short *)(puVar4 + 2) = (short)iVar6;
      return;
    }
  }
  else {
    if (puVar3[8] != '\x01') {
      return;
    }
    if (*(short *)(puVar4 + 2) < 0x130) {
      return;
    }
    *(undefined2 *)(puVar4 + 2) = 0x12f;
  }
  return;
}
