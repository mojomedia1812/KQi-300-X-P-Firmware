
longlong FUN_01000190(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;

  if ((int)(param_1 | param_2) < 0) {
    iVar3 = (int)param_2 >> 0x1f;
    if (-iVar3 != 0) {
      param_2 = -param_2;
    }
    uVar5 = (int)param_1 >> 0x20;
    if (((int)param_1 >> 0x1f & 1U) != 0) {
      param_1 = -param_1;
    }
    uVar5 = uVar5 ^ -iVar3;
    iVar3 = 0;
    if (param_1 >> 4 < param_2) goto LAB_01000284;
    uVar1 = param_2;
    if (param_1 >> 8 < param_2) goto LAB_01000254;
LAB_0100022e:
    param_2 = uVar1 << 6;
    iVar3 = -0x4000000;
    uVar4 = param_1 >> 8;
    if (param_2 <= uVar4) {
      param_2 = uVar1 << 0xc;
      iVar3 = -0x100000;
      if (param_2 <= uVar4) {
        param_2 = uVar1 << 0x12;
        iVar3 = -0x4000;
        if (param_2 <= uVar4) {
          param_2 = uVar1 << 0x18;
          if (param_2 == 0) {
            if ((uVar5 & 1) != 0) {
              param_1 = -param_1;
            }
            return (ulonglong)param_1 << 0x20;
          }
          iVar3 = -0x100;
        }
      }
    }
LAB_01000254:
    while( true ) {
      bVar7 = param_2 <= param_1 >> 7;
      uVar1 = param_1;
      if (bVar7) {
        uVar1 = param_1 + param_2 * -0x80;
      }
      bVar6 = param_2 * 0x80 <= param_1;
      bVar8 = param_2 <= uVar1 >> 6;
      uVar4 = uVar1;
      if (bVar8) {
        uVar4 = uVar1 + param_2 * -0x40;
      }
      bVar9 = param_2 <= uVar4 >> 5;
      uVar2 = uVar4;
      if (bVar9) {
        uVar2 = uVar4 + param_2 * -0x20;
      }
      bVar10 = param_2 <= uVar2 >> 4;
      param_1 = uVar2;
      if (bVar10) {
        param_1 = uVar2 + param_2 * -0x10;
      }
      iVar3 = (((iVar3 * 2 + (uint)(bVar7 && bVar6)) * 2 + (uint)(bVar8 && param_2 * 0x40 <= uVar1))
               * 2 + (uint)(bVar9 && param_2 * 0x20 <= uVar4)) * 2 +
              (uint)(bVar10 && param_2 * 0x10 <= uVar2);
LAB_01000284:
      bVar7 = param_2 <= param_1 >> 3;
      uVar1 = param_1;
      if (bVar7) {
        uVar1 = param_1 + param_2 * -8;
      }
      uVar4 = iVar3 * 2 + (uint)(bVar7 && param_2 * 8 <= param_1);
      bVar7 = param_2 <= uVar1 >> 2;
      param_1 = uVar1;
      if (bVar7) {
        param_1 = uVar1 + param_2 * -4;
      }
      bVar7 = bVar7 && param_2 * 4 <= uVar1;
      iVar3 = uVar4 * 2 + (uint)bVar7;
      if (!CARRY4(uVar4,uVar4) && !CARRY4(uVar4 * 2,(uint)bVar7)) break;
      param_2 = param_2 >> 6;
    }
    bVar7 = param_2 <= param_1 >> 1;
    uVar1 = param_1;
    if (bVar7) {
      uVar1 = param_1 + param_2 * -2;
    }
    uVar4 = uVar1 - param_2;
    if (param_2 > uVar1) {
      uVar4 = uVar1;
    }
    iVar3 = (iVar3 * 2 + (uint)(bVar7 && param_2 * 2 <= param_1)) * 2 + (uint)(param_2 <= uVar1);
    if ((uVar5 & 1) != 0) {
      iVar3 = -iVar3;
    }
    if ((int)uVar5 >> 1 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar4,iVar3);
  }
  iVar3 = 0;
  if (param_1 >> 1 < param_2) goto LAB_01000202;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      uVar5 = 0;
      uVar1 = param_2;
      goto LAB_0100022e;
    }
    bVar7 = param_2 <= param_1 >> 7;
    uVar5 = param_1;
    if (bVar7) {
      uVar5 = param_1 + param_2 * -0x80;
    }
    bVar6 = param_2 * 0x80 <= param_1;
    bVar8 = param_2 <= uVar5 >> 6;
    uVar1 = uVar5;
    if (bVar8) {
      uVar1 = uVar5 + param_2 * -0x40;
    }
    bVar9 = param_2 <= uVar1 >> 5;
    uVar4 = uVar1;
    if (bVar9) {
      uVar4 = uVar1 + param_2 * -0x20;
    }
    bVar10 = param_2 <= uVar4 >> 4;
    param_1 = uVar4;
    if (bVar10) {
      param_1 = uVar4 + param_2 * -0x10;
    }
    iVar3 = (((uint)(bVar7 && bVar6) * 2 + (uint)(bVar8 && param_2 * 0x40 <= uVar5)) * 2 +
            (uint)(bVar9 && param_2 * 0x20 <= uVar1)) * 2 +
            (uint)(bVar10 && param_2 * 0x10 <= uVar4);
  }
  bVar7 = param_2 <= param_1 >> 3;
  uVar5 = param_1;
  if (bVar7) {
    uVar5 = param_1 + param_2 * -8;
  }
  bVar6 = param_2 * 8 <= param_1;
  bVar8 = param_2 <= uVar5 >> 2;
  uVar1 = uVar5;
  if (bVar8) {
    uVar1 = uVar5 + param_2 * -4;
  }
  bVar9 = param_2 <= uVar1 >> 1;
  param_1 = uVar1;
  if (bVar9) {
    param_1 = uVar1 + param_2 * -2;
  }
  iVar3 = ((iVar3 * 2 + (uint)(bVar7 && bVar6)) * 2 + (uint)(bVar8 && param_2 * 4 <= uVar5)) * 2 +
          (uint)(bVar9 && param_2 * 2 <= uVar1);
LAB_01000202:
  uVar5 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar5 = param_1;
  }
  return CONCAT44(uVar5,iVar3 * 2 + (uint)(param_2 <= param_1));
}
