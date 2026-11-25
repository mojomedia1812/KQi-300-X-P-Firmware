
/* WARNING: Removing unreachable block (ram,0x010002c0) */
/* WARNING: Removing unreachable block (ram,0x010002ba) */
/* WARNING: Removing unreachable block (ram,0x010002ca) */

longlong FUN_0100017c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;

  iVar6 = 0;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      uVar5 = param_2 << 6;
      iVar6 = -0x4000000;
      uVar7 = param_1 >> 8;
      if (uVar5 <= uVar7) {
        uVar5 = param_2 << 0xc;
        iVar6 = -0x100000;
        if (uVar5 <= uVar7) {
          uVar5 = param_2 << 0x12;
          iVar6 = -0x4000;
          if (uVar5 <= uVar7) {
            uVar5 = param_2 << 0x18;
            if (uVar5 == 0) {
              return (ulonglong)param_1 << 0x20;
            }
            iVar6 = -0x100;
          }
        }
      }
      while( true ) {
        bVar8 = uVar5 <= param_1 >> 7;
        uVar7 = param_1;
        if (bVar8) {
          uVar7 = param_1 + uVar5 * -0x80;
        }
        bVar9 = uVar5 <= uVar7 >> 6;
        uVar1 = uVar7;
        if (bVar9) {
          uVar1 = uVar7 + uVar5 * -0x40;
        }
        bVar10 = uVar5 <= uVar1 >> 5;
        uVar2 = uVar1;
        if (bVar10) {
          uVar2 = uVar1 + uVar5 * -0x20;
        }
        bVar11 = uVar5 <= uVar2 >> 4;
        uVar3 = uVar2;
        if (bVar11) {
          uVar3 = uVar2 + uVar5 * -0x10;
        }
        bVar12 = uVar5 <= uVar3 >> 3;
        uVar4 = uVar3;
        if (bVar12) {
          uVar4 = uVar3 + uVar5 * -8;
        }
        uVar7 = ((((iVar6 * 2 + (uint)(bVar8 && uVar5 * 0x80 <= param_1)) * 2 +
                  (uint)(bVar9 && uVar5 * 0x40 <= uVar7)) * 2 +
                 (uint)(bVar10 && uVar5 * 0x20 <= uVar1)) * 2 +
                (uint)(bVar11 && uVar5 * 0x10 <= uVar2)) * 2 + (uint)(bVar12 && uVar5 * 8 <= uVar3);
        bVar8 = uVar5 <= uVar4 >> 2;
        param_1 = uVar4;
        if (bVar8) {
          param_1 = uVar4 + uVar5 * -4;
        }
        bVar8 = bVar8 && uVar5 * 4 <= uVar4;
        iVar6 = uVar7 * 2 + (uint)bVar8;
        if (!CARRY4(uVar7,uVar7) && !CARRY4(uVar7 * 2,(uint)bVar8)) break;
        uVar5 = uVar5 >> 6;
      }
      bVar8 = uVar5 <= param_1 >> 1;
      uVar7 = param_1;
      if (bVar8) {
        uVar7 = param_1 + uVar5 * -2;
      }
      uVar1 = uVar7 - uVar5;
      if (uVar5 > uVar7) {
        uVar1 = uVar7;
      }
      return CONCAT44(uVar1,(iVar6 * 2 + (uint)(bVar8 && uVar5 * 2 <= param_1)) * 2 +
                            (uint)(uVar5 <= uVar7));
    }
    bVar8 = param_2 <= param_1 >> 7;
    uVar5 = param_1;
    if (bVar8) {
      uVar5 = param_1 + param_2 * -0x80;
    }
    bVar9 = param_2 * 0x80 <= param_1;
    bVar10 = param_2 <= uVar5 >> 6;
    uVar7 = uVar5;
    if (bVar10) {
      uVar7 = uVar5 + param_2 * -0x40;
    }
    bVar11 = param_2 <= uVar7 >> 5;
    uVar1 = uVar7;
    if (bVar11) {
      uVar1 = uVar7 + param_2 * -0x20;
    }
    bVar12 = param_2 <= uVar1 >> 4;
    param_1 = uVar1;
    if (bVar12) {
      param_1 = uVar1 + param_2 * -0x10;
    }
    iVar6 = (((uint)(bVar8 && bVar9) * 2 + (uint)(bVar10 && param_2 * 0x40 <= uVar5)) * 2 +
            (uint)(bVar11 && param_2 * 0x20 <= uVar7)) * 2 +
            (uint)(bVar12 && param_2 * 0x10 <= uVar1);
  }
  bVar8 = param_2 <= param_1 >> 3;
  uVar5 = param_1;
  if (bVar8) {
    uVar5 = param_1 + param_2 * -8;
  }
  bVar9 = param_2 <= uVar5 >> 2;
  uVar7 = uVar5;
  if (bVar9) {
    uVar7 = uVar5 + param_2 * -4;
  }
  bVar10 = param_2 <= uVar7 >> 1;
  uVar1 = uVar7;
  if (bVar10) {
    uVar1 = uVar7 + param_2 * -2;
  }
  uVar2 = uVar1 - param_2;
  if (param_2 > uVar1) {
    uVar2 = uVar1;
  }
  return CONCAT44(uVar2,(((iVar6 * 2 + (uint)(bVar8 && param_2 * 8 <= param_1)) * 2 +
                         (uint)(bVar9 && param_2 * 4 <= uVar5)) * 2 +
                        (uint)(bVar10 && param_2 * 2 <= uVar7)) * 2 + (uint)(param_2 <= uVar1));
}
