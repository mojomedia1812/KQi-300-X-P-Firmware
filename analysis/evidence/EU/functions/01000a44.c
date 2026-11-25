
void FUN_01000a44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  undefined4 local_18;

  puVar6 = PTR_DAT_01000c68;
  puVar5 = PTR_DAT_01000c64;
  uVar11 = *(uint *)PTR_DAT_01000c64;
  local_18 = param_4;
  if ((int)((uint)*(ushort *)PTR_DAT_01000c60 * 0x40000) < 0) {
    *(undefined2 *)(PTR_DAT_01000c68 + 0xe) = 0;
    *(uint *)PTR_DAT_01000c6c = *(uint *)PTR_DAT_01000c6c & 0xfffffffe;
    puVar7 = PTR_DAT_01000c70;
    cVar1 = PTR_DAT_01000c70[4];
    if ((int)(uVar11 << 0x10) < 0) {
      iVar9 = FUN_01004f60(PTR_DAT_01000c70 + 5,*(short *)PTR_DAT_01000c70,cVar1,PTR_DAT_01000c70[2]
                           ,0);
      if (iVar9 == 0) {
        *(uint *)puVar5 = *(uint *)puVar5 | 0x400000;
        puVar8 = PTR_DAT_01000c74;
        PTR_DAT_01000c74[4] = puVar7[4];
        uVar10 = *(ushort *)puVar7;
        *(ushort *)puVar8 = uVar10;
        puVar8[2] = puVar7[2];
        for (uVar11 = 0; uVar11 < uVar10; uVar11 = uVar11 + 1 & 0xffff) {
          puVar8[uVar11 + 5] = puVar7[uVar11 + 5];
        }
      }
      else {
        *(uint *)puVar5 = *(uint *)puVar5 & 0xffff7fff;
      }
    }
    else if ((int)(uVar11 << 0x11) < 0) {
      bVar2 = PTR_DAT_01000c70[6];
      bVar3 = PTR_DAT_01000c70[7];
      cVar4 = PTR_DAT_01000c70[5];
      if (cVar1 == -0x7e) {
        PTR_DAT_01000c78[-0x61] = cVar4;
        if ((int)(uVar11 << 0xe) < 0) {
          PTR_DAT_01000c78[0x13] = cVar4;
        }
        else {
          PTR_DAT_01000c78[0x12] = cVar4;
          *(uint *)puVar5 = uVar11 | 0x20000;
        }
        *(ushort *)PTR_DAT_01000c7c = (ushort)bVar3 + (ushort)bVar2 * 0x100;
      }
      else if ((((cVar1 == -0x7a) && (cVar4 == '\x03')) && (bVar2 == 99)) &&
              ((bVar3 == 6 && (*(short *)PTR_DAT_01000c70 == 9)))) {
        if ((int)(uVar11 * 0x8000) < 0) {
          thunk_FUN_0100494e(PTR_DAT_01000c70 + 8,PTR_DAT_01000c68 + 0x1e,6,uVar11,param_3);
        }
        else {
          thunk_FUN_0100494e(PTR_DAT_01000c70 + 8,PTR_DAT_01000c78,6,uVar11,param_3);
          *(uint *)puVar5 = *(uint *)puVar5 | 0x10000;
        }
      }
      *(uint *)puVar5 = *(uint *)puVar5 & 0xffffbfff;
    }
    *(uint *)PTR_DAT_01000c60 = *(uint *)PTR_DAT_01000c60 & 0xffffdfff;
  }
  else {
    if ((int)(uVar11 << 0xb) < 0) {
      *(undefined2 *)(PTR_DAT_01000c68 + 0x10) = 0;
    }
    if (((int)(uVar11 * 0x1000) < 0) && (-1 < (int)(uVar11 << 0x11))) {
      iVar9 = FUN_01004f60(PTR_DAT_01000c74 + 5,*(undefined2 *)PTR_DAT_01000c74,PTR_DAT_01000c74[4],
                           PTR_DAT_01000c74[2],2);
      if (iVar9 != 0) {
        *(uint *)puVar5 = *(uint *)puVar5 & 0xfff7ffff | 0x8000;
        *(undefined2 *)(puVar6 + 0x1a) = 0;
      }
    }
    else if ((-1 < (int)(uVar11 << 0x10)) && (-1 < (int)(uVar11 << 0x11))) {
      if (*(ushort *)(puVar6 + 0x10) < 0xfa) {
        uVar10 = *(ushort *)(puVar6 + 0x10) + 1;
        *(ushort *)(puVar6 + 0x10) = uVar10;
        if ((~uVar10 & 0x3f) == 0) {
          local_18 = CONCAT22((short)((uint)param_4 >> 0x10),0x333);
          iVar9 = FUN_01004f60(&local_18,2,2,0x31,2);
          if (iVar9 != 0) {
            *(uint *)puVar5 = *(uint *)puVar5 | 0x4000;
            *(undefined2 *)(puVar6 + 0x1c) = 0;
          }
        }
      }
      else {
        *(undefined2 *)(puVar6 + 0x10) = 0;
        local_18 = CONCAT13((char)((uint)param_4 >> 0x18),0x66303);
        iVar9 = FUN_01004f60(&local_18,3,6,0x31,2);
        if (iVar9 != 0) {
          *(uint *)puVar5 = *(uint *)puVar5 | 0x4000;
          *(undefined2 *)(puVar6 + 0x1c) = 0;
        }
      }
    }
  }
  if (*(ushort *)(puVar6 + 0x14) < DAT_01000c80) {
    *(ushort *)(puVar6 + 0x14) = *(ushort *)(puVar6 + 0x14) + 1;
  }
  else if ((int)(*(uint *)puVar5 << 0xb) < 0) {
    *(uint *)puVar5 = *(uint *)puVar5 & 0xffefffff;
  }
  if (*(ushort *)(puVar6 + 0x1a) < 500) {
    *(ushort *)(puVar6 + 0x1a) = *(ushort *)(puVar6 + 0x1a) + 1;
  }
  else if ((int)(*(uint *)puVar5 << 0x10) < 0) {
    *(uint *)puVar5 = *(uint *)puVar5 & 0xffff7fff;
  }
  if (*(ushort *)(puVar6 + 0x1c) < 500) {
    *(ushort *)(puVar6 + 0x1c) = *(ushort *)(puVar6 + 0x1c) + 1;
  }
  else if ((int)(*(uint *)puVar5 << 0x11) < 0) {
    *(uint *)puVar5 = *(uint *)puVar5 & 0xffffbfff;
  }
  if (DAT_01000c84 <= *(ushort *)(puVar6 + 0xe)) {
    *(uint *)PTR_DAT_01000c6c = *(uint *)PTR_DAT_01000c6c | 1;
    *(uint *)puVar5 = *(uint *)puVar5 & 0xfffffffb;
    return;
  }
  *(ushort *)(puVar6 + 0xe) = *(ushort *)(puVar6 + 0xe) + 1;
  return;
}
