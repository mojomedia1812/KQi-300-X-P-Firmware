
// ENTRY 010000c0 SIZE 8

void C_Runtime_Startup(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  int iVar3;

  FUN_010000c8();
  FUN_01000128();
  iVar1 = DAT_010000fc;
  puVar2 = (undefined4 *)((int)&DAT_010000fc + DAT_010000fc);
  iVar3 = DAT_010000fc + 0x10000fb;
  if (puVar2 == (undefined4 *)((int)&DAT_010000fc + DAT_01000100)) {
    FUN_01000128();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x1000108);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x010000fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar2,*(undefined4 *)((int)&DAT_01000100 + iVar1),*(undefined4 *)(iVar1 + 0x1000104))
  ;
  return;
}



// ENTRY 010000c8 SIZE 52

void FUN_010000c8(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  int iVar3;

  iVar1 = DAT_010000fc;
  puVar2 = (undefined4 *)((int)&DAT_010000fc + DAT_010000fc);
  iVar3 = DAT_010000fc + 0x10000fb;
  if (puVar2 == (undefined4 *)((int)&DAT_010000fc + DAT_01000100)) {
    FUN_01000128();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x1000108);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x010000fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar2,*(undefined4 *)((int)&DAT_01000100 + iVar1),*(undefined4 *)(iVar1 + 0x1000104))
  ;
  return;
}



// ENTRY 01000120 SIZE 4

undefined8 FUN_01000120(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



// ENTRY 01000124 SIZE 4

void FUN_01000124(void)

{
  return;
}



// ENTRY 01000128 SIZE 18

void FUN_01000128(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;

  uVar1 = FUN_01000408();
  FUN_01000120(uVar1,extraout_r2);
  FUN_0100306c();
  uVar2 = FUN_01000446();
  FUN_01000124();
  FUN_010004bc((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  (*DAT_01000168)();
  (*DAT_0100016c)();
  return;
}



// ENTRY 0100013a SIZE 14

void FUN_0100013a(undefined4 param_1,undefined4 param_2)

{
  FUN_01000124();
  FUN_010004bc(param_1,param_2);
  (*DAT_01000168)();
  (*DAT_0100016c)();
  return;
}



// ENTRY 01000148 SIZE 8

void Reset_Handler(void)

{
  (*DAT_01000168)();
  (*DAT_0100016c)();
  return;
}



// ENTRY 01000150 SIZE 2

void Vector_2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 01000154 SIZE 2

void Vector_11(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 01000156 SIZE 2

void Vector_14(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 0100015a SIZE 2

void Vector_16(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 0100015c SIZE 10

undefined8 FUN_0100015c(void)

{
  return CONCAT44(DAT_01000174,DAT_01000170);
}



// ENTRY 0100017c SIZE 20

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



// ENTRY 01000190 SIZE 324

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



// ENTRY 0100031e SIZE 82

undefined8 FUN_0100031e(uint param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = param_1 & 0x80000000;
  if (uVar1 != 0) {
    param_1 = -param_1;
  }
  iVar2 = 0x1f;
  if (param_1 >> 0x10 == 0) {
    iVar2 = 0xf;
    param_1 = param_1 << 0x10;
    if (param_1 == 0) {
      return 0;
    }
  }
  if (param_1 >> 0x18 == 0) {
    param_1 = param_1 << 8;
    iVar2 = iVar2 + -8;
  }
  if (param_1 >> 0x1c == 0) {
    param_1 = param_1 << 4;
    iVar2 = iVar2 + -4;
  }
  if (param_1 >> 0x1e == 0) {
    param_1 = param_1 << 2;
    iVar2 = iVar2 + -2;
  }
  if (-1 < (int)param_1) {
    param_1 = param_1 << 1;
    iVar2 = iVar2 + -1;
  }
  return CONCAT44(((int)param_1 >> 0xb) + iVar2 * 0x100000 + (uVar1 | 0x40000000),param_1 << 0x15);
}



// ENTRY 01000334 SIZE 140

uint FUN_01000334(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  byte in_Q;

  uVar1 = param_2 * 2;
  if (((DAT_010003c0 <= uVar1 && uVar1 - DAT_010003c0 != 0) ||
      (((uVar1 - DAT_010003c0 == 0 && (param_1 != 0)) ||
       (uVar1 = param_4 * 2, DAT_010003c0 <= uVar1 && uVar1 - DAT_010003c0 != 0)))) ||
     ((uVar1 - DAT_010003c0 == 0 && (param_3 != 0)))) {
    if ((param_5 & 0xd0000) == 0) {
      uVar1 = FUN_010003f4();
      return uVar1;
    }
    uVar1 = FUN_010003c4(0,param_5,param_3,param_4,param_4);
    return uVar1;
  }
  if ((int)(param_2 | param_4) < 0) {
    if (param_4 == param_2) {
      if (param_1 <= param_3) {
        return ((byte)((param_3 == param_1) << 3 | 4U | in_Q) & 0xd) << 0x1b;
      }
      uVar1 = ((byte)((param_3 == param_1) << 3 | in_Q) & 0xd) << 0x1b;
    }
    else {
      uVar1 = ((byte)((param_2 <= param_4) << 2 | in_Q) & 0xd) << 0x1b;
      if (param_2 <= param_4) {
        return uVar1;
      }
    }
    return uVar1 | 0x80000000;
  }
  if (param_2 != param_4) {
    return (uint)(byte)(((int)(param_2 - param_4) < 0) << 4 | (param_4 <= param_2) << 2 |
                        SBORROW4(param_2,param_4) << 1 | in_Q) << 0x1b;
  }
  bVar2 = (int)(param_1 - param_3) < 0;
  if (param_1 == param_3) {
    return (uint)(byte)(bVar2 << 4 | 8U | (param_3 <= param_1) << 2 | SBORROW4(param_1,param_3) << 1
                       | in_Q) << 0x1b;
  }
  return (uint)(byte)(bVar2 << 4 | (param_3 <= param_1) << 2 | SBORROW4(param_1,param_3) << 1 | in_Q
                     ) << 0x1b;
}



// ENTRY 010003c4 SIZE 46

uint FUN_010003c4(undefined4 param_1,uint param_2)

{
  byte in_Q;

  if (-1 < (int)(param_2 << 0xb)) {
    return 0;
  }
  if ((param_2 & 0x7ffff) >> 0x10 != 0) {
    return ~(param_2 << 0xf) << 1;
  }
  return (in_Q & 1) << 0x1b | 0x30000000;
}



// ENTRY 010003f4 SIZE 14

void FUN_010003f4(void)

{
  undefined4 in_stack_00000000;

  FUN_01000456(0,DAT_01000404,in_stack_00000000);
  return;
}



// ENTRY 01000408 SIZE 62

void FUN_01000408(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  uint *puVar3;

  uVar1 = FUN_010004b4();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = unaff_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_0100015c();
  puVar2 = (undefined4 *)*puVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  return;
}



// ENTRY 01000446 SIZE 16

void FUN_01000446(undefined4 param_1)

{
  FUN_0100013a(param_1);
  return;
}



// ENTRY 01000456 SIZE 94

undefined8 FUN_01000456(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;

  uVar1 = param_3 & 0xf;
  if (uVar1 == 9) {
    uVar2 = FUN_010003c4(8,param_3);
    goto LAB_01000484;
  }
  uVar2 = param_1;
  if (uVar1 == 10) {
    if (-1 < (int)(param_3 << 0x19)) goto LAB_01000484;
  }
  else {
    if (uVar1 != 8) goto LAB_01000484;
    if (-1 < (int)(param_3 << 0x19)) {
      if ((int)(param_3 << 0x1b) < 0) {
        uVar2 = param_1 << 0x1d;
        param_2 = (param_1 & 0xfffffff) >> 3 | param_1 & 0xff000000;
      }
      else {
        uVar2 = param_1 >> 0x1d | (param_2 & 0xffffff) << 3 | param_2 & 0xff000000;
      }
      goto LAB_01000484;
    }
  }
  uVar2 = 0x80000000;
LAB_01000484:
  return CONCAT44(param_2,uVar2);
}



// ENTRY 010004b4 SIZE 4

undefined4 FUN_010004b4(void)

{
  return DAT_010004b8;
}



// ENTRY 010004bc SIZE 8

void FUN_010004bc(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 010004ca SIZE 86

undefined4 FUN_010004ca(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;

  pbVar6 = param_2 + param_3;
  do {
    uVar7 = (uint)*param_1;
    uVar4 = uVar7 & 7;
    pbVar5 = param_1 + 1;
    if ((*param_1 & 7) == 0) {
      uVar4 = (uint)param_1[1];
      pbVar5 = param_1 + 2;
    }
    param_1 = pbVar5;
    uVar2 = (int)uVar7 >> 4;
    if (uVar2 == 0) {
      uVar2 = (uint)*param_1;
      param_1 = param_1 + 1;
    }
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = bVar1;
      param_2 = param_2 + 1;
    }
    if ((int)(uVar7 << 0x1c) < 0) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      pbVar5 = param_2 + -(uint)bVar1;
      iVar3 = uVar2 + 2;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *param_2 = *pbVar5;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
      }
    }
    else {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
    }
  } while (param_2 < pbVar6);
  return 0;
}



// ENTRY 01000520 SIZE 182

void FUN_01000520(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  short sVar6;
  uint uVar7;
  undefined4 in_r3;
  int iVar8;
  uint uVar9;

  uVar4 = DAT_010005e0;
  puVar3 = PTR_DAT_010005dc;
  puVar2 = PTR_DAT_010005d8;
  uVar9 = 0;
  uVar7 = 0x10;
  do {
    if ((uint)*(ushort *)(PTR_DAT_010005dc + 0xe) <
        (uint)*(ushort *)(PTR_DAT_010005d8 + (uVar9 + uVar7) * 2)) {
      uVar9 = uVar9 + uVar7 & 0xffff;
    }
  } while ((uVar9 < 0x18) && (uVar7 = uVar7 >> 1, uVar7 != 0));
  if (uVar9 < 0x17) {
    if (uVar9 == 0) {
      *(undefined2 *)(PTR_DAT_010005d8 + -0x5c) = 0x96;
    }
    else {
      iVar8 = (uVar9 + 1) * 2;
      sVar6 = FUN_01000190(((uint)*(ushort *)(PTR_DAT_010005d8 + uVar9 * 2) -
                            (uint)*(ushort *)(PTR_DAT_010005dc + 0xe) & 0xffff) * 0x32,
                           (uint)*(ushort *)(PTR_DAT_010005d8 + uVar9 * 2) -
                           (uint)*(ushort *)(PTR_DAT_010005d8 + iVar8),0x32,iVar8,in_r3);
      *(short *)(puVar2 + -0x5c) = (short)uVar9 * 0x32 + sVar6 + 0x96;
    }
  }
  else {
    *(short *)(PTR_DAT_010005d8 + -0x5c) = (short)DAT_010005e0;
  }
  puVar5 = DAT_010005e4;
  bVar1 = PTR_DAT_010005d8[-0x75];
  if (*(ushort *)(puVar2 + -0x5c) == uVar4) {
    if (bVar1 < 4) {
      puVar2[-0x75] = bVar1 + 1;
    }
    else {
      *DAT_010005e4 = *DAT_010005e4 | 0x8000;
    }
  }
  else if ((uint)*(ushort *)(puVar2 + -0x5c) <= DAT_010005e0 - 0x32) {
    if (bVar1 == 0) {
      if (*(short *)(puVar3 + 4) == 0) {
        *DAT_010005e4 = *DAT_010005e4 & 0xffff7fff;
      }
    }
    else {
      puVar2[-0x75] = bVar1 - 1;
    }
  }
  *(uint *)(PTR_DAT_010005d8 + -0x42) =
       *(uint *)(PTR_DAT_010005d8 + -0x42) & 0xfffffffb | ((*puVar5 & 0xffff) >> 0xf) << 2;
  return;
}



// ENTRY 010005e8 SIZE 44

void Vector_3(void)

{
  *(undefined4 *)(DAT_01000614 + 0x38) = 0x2a;
  *(uint *)(DAT_01000614 + 0xc) = *(uint *)(DAT_01000614 + 0xc) & 0xffffffc0;
  *(undefined4 *)(DAT_01000614 + 0x10) = 0;
  *(int *)(DAT_01000618 + 0x30) = *(int *)(DAT_01000618 + 0x30) + 1;
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_01000620 + 0xc) = DAT_0100061c;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 01000624 SIZE 56

void Vector_20(void)

{
  int iVar1;

  *(uint *)(DAT_0100065c + 0x34) = *(uint *)(DAT_0100065c + 0x34) | 1;
  *(uint *)(DAT_01000660 + 0x18) = *(uint *)(DAT_01000660 + 0x18) | 1;
  iVar1 = DAT_0100065c;
  *(undefined4 *)(DAT_0100065c + -0x70) = 0;
  *(uint *)(iVar1 + -0x74) = *(uint *)(iVar1 + -0x74) & 0xffffffc0;
  if (5 < *(byte *)(DAT_01000664 + 0xc)) {
    *(undefined1 *)(DAT_01000664 + 0xc) = 1;
  }
  *DAT_01000668 = *DAT_01000668 | 0x40;
  return;
}



// ENTRY 0100066c SIZE 14

void Vector_15(void)

{
  int iVar1;

  iVar1 = DAT_0100067c;
  *(undefined1 *)(DAT_0100067c + 1) = 1;
  *(char *)(iVar1 + 2) = *(char *)(iVar1 + 2) + '\x01';
  return;
}



// ENTRY 01000680 SIZE 188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01000680(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;

  puVar1 = DAT_01000740;
  *DAT_01000740 = DAT_0100073c;
  *puVar1 = DAT_01000744;
  puVar1[2] = 6;
  puVar3 = DAT_0100074c;
  puVar2 = DAT_01000748;
  do {
  } while ((DAT_01000748[4] & 1) == 0);
  *DAT_0100074c = 0;
  *puVar3 = (*puVar3 & 0xffffe0ff) + 0x1600;
  *puVar3 = (*puVar3 & 0xffffffcf) + 0x10;
  *puVar3 = *puVar3 | 1;
  do {
  } while ((int)(puVar2[4] << 0x1d) < 0);
  do {
  } while (-1 < (int)(puVar2[4] << 0x1d));
  *puVar2 = 0;
  *puVar2 = *puVar2 & 0xfffffff0;
  puVar1[2] = puVar1[2] | 0x4000;
  DAT_01000748[-8] = DAT_01000748[-8] | 1;
  puVar3 = DAT_0100074c;
  DAT_0100074c[-0x18] = 0;
  puVar3[-0x18] = puVar3[-0x18] | 0x31;
  iVar4 = DAT_01000754;
  *(undefined4 *)(DAT_01000754 + 0x14) = DAT_01000750;
  *(uint *)(DAT_01000758 + 0x1c) = *(uint *)(DAT_01000758 + 0x1c) & 0xffffff | iVar4 << 0x11;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 4;
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 3;
  *puVar2 = (*puVar2 & 0xffff00ff) + 0x6300;
  *puVar1 = 0;
  _DAT_50000000 = 0;
  return;
}



// ENTRY 0100075c SIZE 26

/* WARNING: This is an inlined function */

void __ARM_common_switch8(void)

{
  uint in_r3;
  uint uVar1;
  int unaff_lr;

  uVar1 = (uint)*(byte *)(unaff_lr + -1);
  if (in_r3 < *(byte *)(unaff_lr + -1)) {
    uVar1 = in_r3;
  }
                    /* WARNING: Could not recover jumptable at 0x01000774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_lr + (uint)*(byte *)(unaff_lr + uVar1) * 2))();
  return;
}



// ENTRY 01000778 SIZE 18

void FUN_01000778(uint param_1)

{
  if (-1 < (int)param_1) {
    *DAT_0100078c = 1 << (param_1 & 0x1f);
  }
  return;
}



// ENTRY 01000790 SIZE 60

void FUN_01000790(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar4 = (param_1 & 3) << 3;
  uVar3 = 0xff << iVar4;
  uVar2 = ((param_2 & 3) << 6) << iVar4;
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((param_1 & 0xfffffffc) + DAT_010007cc);
    *puVar1 = *puVar1 & ~uVar3 | uVar2;
    return;
  }
  iVar4 = ((param_1 & 0xf) - 8 & 0xfffffffc) + DAT_010007d0;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & ~uVar3 | uVar2;
  return;
}



// ENTRY 010007d4 SIZE 40

void FUN_010007d4(void)

{
  if ((int)(*DAT_010007fc << 0x14) < 0) {
    if (*(int *)(DAT_01000804 + 4) != 0) {
      *DAT_010007fc = *DAT_010007fc & ~DAT_01000800;
    }
  }
  else if (*(int *)(DAT_01000804 + 4) == 0) {
    *DAT_010007fc = *DAT_010007fc | DAT_01000800;
    return;
  }
  return;
}



// ENTRY 01000808 SIZE 18

void FUN_01000808(void)

{
  *(uint *)(DAT_0100081c + 0x30) = *(uint *)(DAT_0100081c + 0x30) | 5;
  *DAT_01000824 = DAT_01000820;
  return;
}



// ENTRY 01000828 SIZE 200

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



// ENTRY 0100091c SIZE 30

int FUN_0100091c(short *param_1,short param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 - param_1[param_3 + 1];
  param_1[param_3 + 1] = param_2;
  return (int)*param_1 >> 3;
}



// ENTRY 0100093c SIZE 228

void FUN_0100093c(void)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  puVar3 = PTR_DAT_01000a2c;
  puVar2 = PTR_DAT_01000a28;
  uVar5 = (uint)*DAT_01000a20;
  sVar1 = *(short *)(PTR_DAT_01000a28 + 0x18);
  if (DAT_01000a24 < uVar5) {
    if (sVar1 < 10) {
      *(short *)(PTR_DAT_01000a28 + 0x18) = sVar1 + 1;
    }
    else if (-1 < *(int *)PTR_DAT_01000a2c << 0x1b) {
      *(uint *)PTR_DAT_01000a2c = *(uint *)PTR_DAT_01000a2c | 0x10;
      return;
    }
    return;
  }
  if ((uVar5 < DAT_01000a24 - 0x72) && (*(int *)PTR_DAT_01000a2c << 0x1b < 0)) {
    if (sVar1 < -99) {
      if (-1 < (int)((uint)(byte)*PTR_DAT_01000a30 << 0x19)) {
        *(uint *)PTR_DAT_01000a2c = *(uint *)PTR_DAT_01000a2c & 0xffffffef;
      }
    }
    else {
      *(short *)(PTR_DAT_01000a28 + 0x18) = sVar1 + -1;
    }
  }
  else {
    *(undefined2 *)(PTR_DAT_01000a28 + 0x18) = 0;
  }
  puVar4 = PTR_DAT_01000a34;
  uVar6 = *(uint *)PTR_DAT_01000a34;
  uVar7 = DAT_01000a38;
  if (-1 < (int)(uVar6 << 0x1c)) {
    uVar7 = DAT_01000a38 + 0x55;
  }
  if (uVar5 < uVar7) {
    *(uint *)PTR_DAT_01000a34 = uVar6 | 0x800;
  }
  else {
    *(uint *)PTR_DAT_01000a34 = uVar6 & 0xfffff7ff;
  }
  sVar1 = *(short *)(PTR_DAT_01000a28 + 0x1a);
  if (*(ushort *)(DAT_01000a3c + 8) <= uVar5) {
    if ((*(int *)puVar3 << 0x1a < 0) && (*(ushort *)(DAT_01000a3c + 8) + 0x72 < uVar5)) {
      if (sVar1 < -0x31) {
        if (DAT_01000a20[2] < DAT_01000a40) {
          *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffdf;
          return;
        }
      }
      else {
        *(short *)(puVar2 + 0x1a) = sVar1 + -1;
      }
      return;
    }
    *(undefined2 *)(puVar2 + 0x1a) = 0;
    return;
  }
  if (sVar1 < 500) {
    *(short *)(puVar2 + 0x1a) = sVar1 + 1;
  }
  else if (-1 < *(int *)puVar3 << 0x1a) {
    *(uint *)puVar3 = *(uint *)puVar3 | 0x20;
  }
  *(uint *)puVar4 = *(uint *)puVar4 | 0x40000;
  return;
}



// ENTRY 01000a44 SIZE 538

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
      iVar9 = FUN_01004f64(PTR_DAT_01000c70 + 5,*(short *)PTR_DAT_01000c70,cVar1,PTR_DAT_01000c70[2]
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
          thunk_FUN_01004952(PTR_DAT_01000c70 + 8,PTR_DAT_01000c68 + 0x1e,6,uVar11,param_3);
        }
        else {
          thunk_FUN_01004952(PTR_DAT_01000c70 + 8,PTR_DAT_01000c78,6,uVar11,param_3);
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
      iVar9 = FUN_01004f64(PTR_DAT_01000c74 + 5,*(undefined2 *)PTR_DAT_01000c74,PTR_DAT_01000c74[4],
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
          iVar9 = FUN_01004f64(&local_18,2,2,0x31,2);
          if (iVar9 != 0) {
            *(uint *)puVar5 = *(uint *)puVar5 | 0x4000;
            *(undefined2 *)(puVar6 + 0x1c) = 0;
          }
        }
      }
      else {
        *(undefined2 *)(puVar6 + 0x10) = 0;
        local_18 = CONCAT13((char)((uint)param_4 >> 0x18),0x66303);
        iVar9 = FUN_01004f64(&local_18,3,6,0x31,2);
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



// ENTRY 01000c88 SIZE 46

void FUN_01000c88(void)

{
  disableIRQinterrupts();
  *DAT_01000cbc = DAT_01000cb8;
  *DAT_01000cbc = DAT_01000cc0;
  DAT_01000cbc[2] = (DAT_01000cbc[2] & 0xfffffff9) + 4;
  *(undefined4 *)(DAT_01000cc4 + 4) = *(undefined4 *)(DAT_01000cc4 + 4);
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_01000ccc + 0xc) = DAT_01000cc8;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ENTRY 01000cd0 SIZE 536

void FUN_01000cd0(void)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;

  iVar11 = DAT_01000ee8;
  uVar7 = (uint)(ushort)((ushort)*(byte *)(DAT_01000ee8 + 5) +
                        (ushort)*(byte *)(DAT_01000ee8 + 4) * 0x100);
  uVar14 = *DAT_01000eec;
  *DAT_01000eec = uVar14 & 0xfffffffd;
  puVar3 = DAT_01000ef4;
  uVar10 = (uint)(ushort)((ushort)*(byte *)(iVar11 + 7) + (ushort)*(byte *)(iVar11 + 6) * 0x100);
  uVar13 = *DAT_01000ef4 | 0x20;
  bVar1 = *DAT_01000ef8;
  if (DAT_01000ef0 < uVar7) {
    if (DAT_01000efc < uVar7) {
      *DAT_01000ef4 = uVar13;
    }
  }
  else if (uVar7 < 0x148) {
    if (5 < bVar1) {
      *DAT_01000ef4 = uVar13;
    }
  }
  else {
    *DAT_01000ef4 = *DAT_01000ef4 & 0xffffffdf;
  }
  uVar13 = DAT_01000ef0;
  if (DAT_01000ef0 < uVar10) {
    if (DAT_01000efc < uVar10) {
      *puVar3 = *puVar3 | 0x40;
    }
  }
  else if (uVar10 < 0x148) {
    if (5 < bVar1) {
      *puVar3 = *puVar3 | 0x40;
    }
  }
  else {
    *puVar3 = *puVar3 & 0xffffffbf;
  }
  puVar4 = DAT_01000f00;
  uVar12 = *puVar3;
  if ((((-1 < (int)(uVar12 << 0x1a)) || (uVar8 = uVar10, (int)(uVar12 << 0x19) < 0)) &&
      ((uVar8 = uVar7, -1 < (int)(uVar12 << 0x19) || ((int)(uVar12 << 0x1a) < 0)))) &&
     (uVar7 < uVar10)) {
    uVar8 = uVar10;
  }
  iVar11 = (int)*(short *)(DAT_01000f04 + 4);
  uVar7 = *DAT_01000f00;
  if (uVar13 < uVar8) {
    *(uint *)(DAT_01000f08 + 0x20) = *(uint *)(DAT_01000f08 + 0x20) | 0x4000;
    *puVar4 = uVar7 | 0x40;
    if ((DAT_01000f0c < uVar8) && (100 < iVar11)) {
      *DAT_01000eec = uVar14 & 0xfffffffd | 2;
    }
    else {
      uVar8 = uVar8 - DAT_01000ef0 & 0xffff;
    }
    if (iVar11 < 0x2d) {
      *DAT_01000eec = *DAT_01000eec | 0x200000;
    }
  }
  else {
    *(uint *)(DAT_01000f08 + 0x24) = *(uint *)(DAT_01000f08 + 0x24) | 0x4000;
    *puVar4 = uVar7 & 0xffffffbf;
  }
  uVar7 = *puVar4;
  if ((int)(uVar7 << 0x1e) < 0) {
    *(uint *)(DAT_01000f08 + 0x20) = *(uint *)(DAT_01000f08 + 0x20) | 0x4000;
  }
  iVar5 = DAT_01000f18;
  uVar14 = *DAT_01000f10;
  uVar10 = (uint)*DAT_01000f14;
  uVar13 = (uVar10 & 0x3ff) >> 8;
  if ((int)(uVar7 * 0x2000000) < 0) {
    *DAT_01000f10 = uVar14 | 0x40;
    if ((int)((uint)(byte)*DAT_01000eec << 0x1e) < 0) {
      *(short *)(iVar5 + 0x12) = (short)DAT_01000f1c;
    }
    else {
      uVar10 = uVar8 * 0x18e >> 10;
      if (uVar10 < 0x34) {
        sVar6 = 0x34;
      }
      else {
        sVar6 = (short)uVar10;
        if (0x175 < uVar10) {
          sVar6 = 0x175;
        }
      }
      *(short *)(iVar5 + 0x12) = -sVar6;
    }
  }
  else {
    uVar2 = *(ushort *)(DAT_01000f20 + 4);
    uVar12 = DAT_01000ef0 - 0x29;
    if (((((uVar2 < uVar12) && ((uVar10 & 0x3ff) >> 8 != 0)) && (-1 < (int)(uVar7 << 0x17))) &&
        (1 < *(byte *)(DAT_01000f20 + 0xc))) || ((int)(uVar14 << 4) < 0)) {
      *DAT_01000f10 = uVar14 | 0x40;
      if (uVar13 == 1) {
        *(undefined2 *)(iVar5 + 0x12) = 0xff6b;
      }
      else if (uVar13 == 2) {
        *(undefined2 *)(iVar5 + 0x12) = 0xff20;
      }
      else {
        *(short *)(iVar5 + 0x12) = (short)DAT_01000f1c + 0x5a;
      }
      *(uint *)(DAT_01000f08 + 0x20) = *(uint *)(DAT_01000f08 + 0x20) | 0x4000;
      if ((uVar12 <= uVar2) || ((uVar10 & 0x3ff) >> 8 == 0)) {
        iVar9 = iVar11 + DAT_01000f24;
        if (iVar9 < 1) {
          iVar9 = (DAT_01000ef0 - 0xed) - iVar11;
        }
        *(short *)(iVar5 + 0x12) = (short)iVar9 * -0x10;
      }
    }
    else {
      *DAT_01000f10 = uVar14 & 0xffffffbf;
      *(undefined2 *)(iVar5 + 0x12) = 0;
    }
  }
  if (((iVar11 < 0x200) && (-1 < (int)(uVar7 << 0x19))) &&
     ((*(short *)(iVar5 + 0x12) != 0 && (1 < uVar13)))) {
    if (iVar11 < 1) {
      iVar11 = -iVar11;
    }
    sVar6 = (short)(iVar11 * *(short *)(iVar5 + 0x12) >> 9);
    *(short *)(iVar5 + 0x12) = sVar6;
    if (-0x1d < sVar6) {
      *(undefined2 *)(iVar5 + 0x12) = 0xffe3;
    }
  }
  return;
}



// ENTRY 01000f28 SIZE 156

void FUN_01000f28(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;

  puVar4 = DAT_01000fd0;
  iVar3 = DAT_01000fcc;
  iVar2 = DAT_01000fc8;
  if (5 < *(byte *)(DAT_01000fc4 + 0xc)) {
    if (((int)((uint)*DAT_01000fd0 << 0x14) < 0) ||
       (*(short *)(DAT_01000fcc + 0xe) < *(short *)(DAT_01000fc4 + 6))) {
      if (*(short *)(DAT_01000fc4 + 2) < 0x32) {
        *(undefined2 *)(DAT_01000fcc + 4) = 0x32;
      }
      else {
        iVar5 = *(short *)(DAT_01000fc4 + 2) + 0x14;
        if (iVar5 < *(short *)(DAT_01000fcc + 4)) {
          *(short *)(DAT_01000fcc + 4) = (short)iVar5;
        }
      }
      FUN_01006898(1,0x32,iVar3 + 4);
    }
    else {
      FUN_01006898(1,(int)*(short *)(DAT_01000fcc + 2),DAT_01000fcc + 4);
      FUN_010068b4(1,(int)*(short *)(iVar3 + 2),iVar3 + 4);
    }
    if ((*(int *)puVar4 << 0xc < 0) &&
       (((cVar1 = *(char *)(iVar2 + 0x28), cVar1 == '\n' && (*(char *)(iVar2 + 0x72) == '\x01')) ||
        (cVar1 == '\x01')))) {
      *(undefined2 *)(iVar3 + 4) = 0x65;
    }
    return;
  }
  if (((*(char *)(DAT_01000fc8 + 0x28) != '\n') || (*(char *)(DAT_01000fc8 + 0x72) != '\x01')) &&
     (*(char *)(DAT_01000fc8 + 0x28) != '\x01')) {
    *(short *)(DAT_01000fcc + 4) = *(short *)(DAT_01000fcc + 2);
    return;
  }
  *(undefined2 *)(DAT_01000fcc + 4) = 0x65;
  return;
}



// ENTRY 01000fd4 SIZE 730

void FUN_01000fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *puVar11;

  puVar11 = DAT_010012bc;
  uVar2 = (ushort)((int)(short)(*DAT_010012b0 - *(short *)(DAT_010012b4 + 2)) * (int)*DAT_010012b8
                  >> 0xc);
  DAT_010012bc[1] = uVar2;
  iVar4 = DAT_010012cc;
  puVar3 = DAT_010012c8;
  iVar6 = DAT_010012c4;
  if ((int)((uint)*DAT_010012c0 << 0x1d) < 0) {
    if ((char)puVar11[6] == '\a') {
      if ((short)uVar2 < 0xcb) {
        FUN_01006898(1,(int)(short)DAT_010012c8[5],DAT_010012c4 + 6,param_4,param_3,param_4);
        FUN_010068b4(1,(int)(short)puVar3[5],iVar6 + 6);
        return;
      }
      FUN_01006898(1,0,DAT_010012c4 + 6,param_4,param_3,param_4);
      FUN_010068b4(1,0,iVar6 + 6);
    }
    return;
  }
  if ((byte)DAT_010012bc[6] < 6) {
    *(undefined4 *)(DAT_010012cc + 0x30) = 0;
    return;
  }
  iVar5 = DAT_010012c4 + 0x10;
  if (*(short *)(DAT_010012c4 + 0xc) < 1) {
    sVar1 = *(short *)(DAT_010012d0 + 2);
    iVar8 = sVar1 + -300;
    if (*(short *)(DAT_010012c4 + 0x10) < iVar8) {
      *(short *)(DAT_010012c4 + 0x10) = (short)iVar8;
    }
    sVar7 = *(short *)(DAT_010012d0 + 2) + 200;
    if ((int)((uint)*DAT_010012d4 * 0x40000000) < 0) {
      iVar8 = *(int *)(iVar4 + 0x34) + 1;
      *(int *)(iVar4 + 0x34) = iVar8;
      uVar10 = DAT_010012d8;
      if (iVar8 < 0x97) {
        uVar10 = 0;
      }
      *(short *)(iVar6 + 6) = sVar7;
      if (0 < *(short *)(iVar6 + 0x10)) {
        *(undefined2 *)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = 0;
      *(short *)(iVar6 + 6) = sVar7;
    }
    if ((short)uVar2 < 1) {
      uVar9 = 0x107;
      if (((short)uVar2 < -0x107) || (uVar9 = DAT_010012dc, DAT_010012dc < *DAT_010012bc)) {
        if (*(short *)(iVar6 + 0x10) + 10 < (int)sVar1) {
          *(short *)(iVar6 + 0x10) = sVar1;
        }
        FUN_010068b4(0x14,(int)*(short *)(iVar6 + 6),iVar5,uVar9,param_3);
      }
      else if (((short)uVar2 < -0x78) || (DAT_010012dc - 0xab <= (uint)*DAT_010012bc)) {
        FUN_01006898(0xf,uVar10,iVar5);
        FUN_010068b4(0xf,uVar10,iVar5);
      }
      else {
        FUN_01006898(0x19,uVar10,iVar5);
        FUN_010068b4(0x19,uVar10,iVar5);
      }
    }
    else {
      sVar1 = uVar2 - 10;
      if ((sVar1 < 1) || (-1 < *(short *)(iVar6 + 0x10))) {
        if (puVar3[1] != 0) {
          FUN_01006898(5,uVar10,iVar5);
          FUN_010068b4(5,uVar10,iVar5);
        }
      }
      else {
        sVar7 = 5;
        if (sVar1 < 0x3d) {
          if (0x14 < sVar1) {
            sVar7 = 8;
          }
        }
        else {
          sVar7 = 0xb;
        }
        *(short *)(iVar6 + 0x10) = *(short *)(iVar6 + 0x10) + sVar7;
      }
    }
    puVar3[6] = *(ushort *)(iVar6 + 6);
    *(undefined4 *)(iVar4 + 0x30) = 0;
    return;
  }
  *(undefined4 *)(DAT_010012cc + 0x34) = 0;
  FUN_010068b4(0x19,0,iVar5,param_4,param_3);
  FUN_01006898(0x19,0,iVar5);
  iVar5 = *(short *)(DAT_010012d0 + 2) + 100;
  if (iVar5 < *(short *)(iVar6 + 6)) {
    *(short *)(iVar6 + 6) = (short)iVar5;
  }
  if ((short)DAT_010012bc[1] <= *(short *)(iVar6 + 4) >> 1) {
    if (((int)*(short *)(iVar6 + 6) < (int)(uint)*puVar3) && (puVar3[1] != 0)) {
      FUN_010068b4(8,(int)(short)puVar3[5],iVar6 + 6);
    }
    if ((short)DAT_010012bc[1] < 0) {
      if (*(char *)(iVar4 + 6) < '\0') {
        *(undefined1 *)(iVar4 + 6) = 0;
        FUN_010068b4(1,(int)(short)*puVar3,iVar6 + 6);
      }
      else {
        *(char *)(iVar4 + 6) = *(char *)(iVar4 + 6) + -1;
      }
    }
    if (((short)DAT_010012bc[1] < 0x51) || (*(short *)(iVar6 + 10) != 0)) {
      if (0 < (short)DAT_010012bc[1]) {
        if (*(char *)(iVar4 + 6) < '\x03') {
          *(char *)(iVar4 + 6) = *(char *)(iVar4 + 6) + '\x01';
        }
        else {
          *(undefined1 *)(iVar4 + 6) = 0;
          FUN_01006898(1,(int)(short)puVar3[5],iVar6 + 6);
        }
      }
    }
    else {
      FUN_01006898(1,(int)(short)puVar3[5],iVar6 + 6);
    }
    puVar3[6] = *(ushort *)(iVar6 + 6);
    *(undefined4 *)(iVar4 + 0x30) = 0;
    return;
  }
  iVar5 = (int)(short)(*(short *)(iVar6 + 4) - DAT_010012bc[1]);
  iVar4 = DAT_010012e0 * iVar5;
  iVar6 = 0x2d000;
  if ((iVar4 < 0x2d001) && (iVar6 = iVar4, iVar4 < DAT_010012e4)) {
    iVar6 = DAT_010012e4;
  }
  iVar6 = iVar6 + *(int *)(DAT_010012cc + 0x30) >> 10;
  puVar11 = DAT_010012c8 + 6;
  if (((-1 < iVar6) && (iVar6 = 0, puVar3[1] != 0)) && ((int)(short)puVar3[6] < (int)(uint)*puVar3))
  {
    FUN_010068b4(6,(int)(short)puVar3[5],puVar11);
  }
  FUN_01006898(5,(int)(short)puVar3[5],puVar11);
  uVar2 = puVar3[6];
  iVar6 = (short)uVar2 + iVar6;
  if (iVar6 < 1) {
    *(undefined2 *)(DAT_010012c4 + 6) = 1;
  }
  else {
    *(short *)(DAT_010012c4 + 6) = (short)iVar6;
  }
  iVar4 = DAT_010012cc;
  iVar5 = iVar5 * 0x28 + *(int *)(DAT_010012cc + 0x30);
  *(int *)(DAT_010012cc + 0x30) = iVar5;
  iVar6 = (short)uVar2 * -0x400;
  if (iVar5 < 1) {
    if (iVar5 < iVar6) {
      *(int *)(iVar4 + 0x30) = iVar6;
      return;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x30) = 0;
  }
  return;
}



// ENTRY 010012e8 SIZE 132

void FUN_010012e8(void)

{
  ushort *puVar1;
  ushort *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  pcVar3 = DAT_01001374;
  puVar2 = DAT_01001370;
  puVar1 = DAT_0100136c;
  uVar8 = 0;
  uVar9 = 0;
  uVar6 = 0;
  do {
    uVar8 = uVar8 + *puVar1;
    uVar9 = uVar9 + *puVar2;
    *pcVar3 = '\0';
    puVar4 = DAT_01001378;
    do {
    } while (*pcVar3 == '\0');
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x100);
  uVar6 = (uVar8 & 0xffffff) >> 8;
  DAT_01001378[1] = (short)((uVar8 & 0xffffff) >> 8);
  uVar8 = (uVar9 & 0xffffff) >> 8;
  *puVar4 = (short)((uVar9 & 0xffffff) >> 8);
  puVar5 = DAT_0100137c;
  if ((int)(*DAT_0100137c << 0x1c) < 0) {
    iVar7 = 0x7a;
  }
  else {
    iVar7 = 0x170;
  }
  if ((((iVar7 + DAT_01001380 < uVar8) || (uVar8 + iVar7 < DAT_01001380)) ||
      (iVar7 + DAT_01001380 < uVar6)) || (uVar6 + iVar7 < DAT_01001380)) {
    *DAT_01001384 = *DAT_01001384 & 0xfffffff3 | ((*DAT_01001384 & 0xf) >> 2 | 1) << 2;
  }
  else {
    *DAT_0100137c = *DAT_0100137c | 1;
  }
  *puVar5 = *puVar5 | 0x80;
  return;
}



// ENTRY 01001388 SIZE 886

void FUN_01001388(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;

  puVar5 = DAT_01001700;
  uVar10 = *DAT_01001700;
  sVar3 = *(short *)(DAT_01001704 + 4);
  uVar9 = (uint)*(ushort *)(DAT_01001708 + 4);
  uVar8 = *DAT_0100170c;
  uVar11 = DAT_01001700[1];
  if ((int)(uVar10 * 0x20000000) < 0) {
    if ((*(byte *)(DAT_01001710 + 0xc) < 2) || ((int)(uVar11 << 0x17) < 0)) {
      *(undefined2 *)((int)DAT_01001700 + -0x22) = 0;
    }
    else {
      uVar4 = *(undefined2 *)(DAT_01001708 + 4);
      if ((((uVar9 < 0x141) ||
           (0x9e < (int)(short)(*(short *)(DAT_01001708 + 6) - *(ushort *)(DAT_01001708 + 4)) +
                   0x4fU)) || (0x3a < (int)(short)((short)DAT_01001700[-8] - sVar3) + 0x1dU)) ||
         (((int)(uVar8 << 0x19) < 0 || ((int)(uVar11 << 0x1e) < 0)))) {
        *(undefined2 *)(DAT_01001708 + 6) = uVar4;
        puVar5 = DAT_01001700;
        *(undefined2 *)(DAT_01001700 + -8) = *(undefined2 *)(DAT_01001704 + 4);
        *(undefined2 *)((int)puVar5 + -0x22) = 0;
      }
      else if (*(ushort *)((int)DAT_01001700 + -0x22) < 0x1c2) {
        *(ushort *)((int)DAT_01001700 + -0x22) = *(ushort *)((int)DAT_01001700 + -0x22) + 1;
      }
      else {
        DAT_01001700[1] = uVar11 | 0x100;
        *(undefined1 *)((int)puVar5 + -0x2a) = 0;
        if ((int)*(short *)(DAT_01001704 + 2) < (int)uVar9) {
          *(short *)(DAT_01001708 + 6) = *(short *)(DAT_01001704 + 2);
        }
        else {
          *(undefined2 *)(DAT_01001708 + 6) = uVar4;
        }
      }
    }
  }
  else {
    DAT_01001700[1] = uVar11 & 0xfffffeff;
    *(undefined2 *)((int)puVar5 + -0x22) = 0;
  }
  puVar5 = DAT_01001700;
  uVar13 = DAT_01001700[1];
  uVar11 = *DAT_01001714;
  if ((int)(uVar13 << 0x17) < 0) {
    bVar1 = *(byte *)((int)DAT_01001700 + -0x2a);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (uVar9 == 0) {
          *(undefined1 *)((int)DAT_01001700 + -0x2a) = 1;
        }
      }
      else if (uVar9 != 0) {
        *(byte *)((int)DAT_01001700 + -0x2a) = bVar1 + 1;
      }
    }
    if ((((int)(uVar11 << 0x1b) < 0) || ((int)((uint)*DAT_01001718 << 0x1c) < 0)) ||
       (((int)(uVar13 << 0x1e) < 0 ||
        (((1 < *(byte *)((int)puVar5 + -0x2a) || (*(byte *)(DAT_01001710 + 0xc) < 2)) ||
         ((int)(uVar8 << 0x19) < 0)))))) {
      DAT_01001700[1] = uVar13 & 0xfffffeff;
      *(undefined2 *)(DAT_01001708 + 6) = 0;
      *(undefined2 *)((int)puVar5 + -0x22) = 0;
    }
  }
  iVar6 = DAT_01001720;
  puVar5 = DAT_01001714;
  if (*(int *)(DAT_0100171c + 0x10) * 0x2000000 < 0) {
    if ((int)(uVar11 << 0x12) < 0) {
      *DAT_01001714 = uVar11 & 0xffffdfff;
      *(undefined2 *)((int)puVar5 + -0x26) = 0;
    }
    puVar5 = DAT_01001700;
    uVar9 = (uint)*(ushort *)((int)DAT_01001700 + -0x1e);
    if (uVar9 < 0x1f5) {
      if (uVar9 - 5 < 0x87) {
        *(char *)((int)DAT_01001700 + -0x29) = *(char *)((int)DAT_01001700 + -0x29) + '\x01';
      }
    }
    else {
      *(undefined1 *)((int)DAT_01001700 + -0x29) = 0;
    }
    if ((uVar9 - 0x8c < 0x1cc) && (*(byte *)(DAT_01001710 + 0xc) < 2)) {
      *(undefined1 *)((int)puVar5 + -0x29) = 0;
      *DAT_0100170c = uVar8 | 2;
    }
    else if ((byte)puVar5[-10] < 0x1e) {
      *(byte *)(puVar5 + -10) = (byte)puVar5[-10] + 1;
    }
    else {
      uVar9 = DAT_01001700[1];
      if (((uVar9 & 1) == 0) || ((int)(uVar10 << 0x13) < 0)) {
        if ((-1 < (int)(uVar8 << 10)) && (-1 < (int)(uVar8 << 0x1d))) {
          *(undefined1 *)(iVar6 + 0xc) = 0;
          DAT_01001700[1] = uVar9 & 0xfffffffd;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar5 + -0x29);
        if ((cVar2 == '\x01') && (-1 < (int)(uVar8 << 0x1d))) {
          puVar12 = DAT_01001700 + 1;
          if ((int)(uVar9 << 0x1e) < 0) {
            *puVar12 = uVar9 & 0xfffffffd;
          }
          else if ((*(char *)(iVar6 + 8) == '\x01') && ((int)(uVar10 << 0x11) < 0)) {
            *(undefined1 *)(iVar6 + 8) = 2;
          }
          else if ((*(char *)(iVar6 + 8) == '\x02') && ((int)(uVar10 << 0xe) < 0)) {
            *(undefined1 *)(iVar6 + 8) = 10;
          }
          else {
            *(undefined1 *)(iVar6 + 8) = 1;
          }
          if ((int)(*puVar12 << 0x17) < 0) {
            *puVar12 = *puVar12 & 0xfffffeff;
          }
        }
        else if (cVar2 == '\x02') {
          if (*(char *)(iVar6 + 0xc) == '\0') {
            *(undefined1 *)(iVar6 + 0xc) = 0x20;
          }
          else {
            *(undefined1 *)(iVar6 + 0xc) = 0;
          }
        }
        else if ((cVar2 == '\x03') && (-1 < (int)(uVar8 << 0x1d))) {
          *DAT_01001700 = uVar10 ^ 1;
        }
        else if ((((cVar2 == '\x05') && (-1 < (int)(uVar8 << 0x1d))) && (*DAT_01001714 == 0)) &&
                ((-1 < (int)(uVar8 << 0x1c) && (-1 < (int)(uVar9 << 0x1e))))) {
          DAT_01001700[1] = uVar9 | 2;
        }
      }
      *(undefined1 *)((int)puVar5 + -0x29) = 0;
    }
    puVar12 = DAT_01001700 + 1;
    uVar8 = *puVar12;
    if ((uVar8 & 1) == 0) {
      *(undefined1 *)(iVar6 + 0xc) = 0;
      *(undefined2 *)((int)puVar5 + -0x1e) = 600;
      *DAT_01001728 = 0;
    }
    else {
      *(undefined2 *)((int)puVar5 + -0x1e) = 0;
    }
    *puVar12 = uVar8 & 0xfffdffff;
  }
  else {
    if (-1 < (int)(uVar8 << 0x1b)) {
      if (*(ushort *)((int)DAT_01001700 + -0x1e) < DAT_01001724) {
        *(ushort *)((int)DAT_01001700 + -0x1e) = *(ushort *)((int)DAT_01001700 + -0x1e) + 1;
      }
      puVar5 = DAT_01001700;
      if (((int)(uVar10 << 0xf) < 0) && (*(short *)((int)DAT_01001700 + -0x1e) == 500)) {
        *DAT_01001700 = uVar10 | 0x1000;
        puVar5[1] = puVar5[1] | 1;
        *DAT_0100170c = uVar8 | 0x200000;
        *(undefined1 *)(iVar6 + 0xc) = 0;
        *(undefined2 *)(DAT_01001700 + -9) = 1;
        iVar7 = DAT_01001720;
        *(undefined1 *)(DAT_01001720 + 0x2f) = 0;
        *(undefined1 *)(iVar7 + 0x30) = 1;
      }
      if (((sVar3 != 0) && ((DAT_01001700[1] & 1) != 0)) &&
         ((*(ushort *)((int)DAT_01001700 + -0x1e) != 600 &&
          (0x82 < *(ushort *)((int)DAT_01001700 + -0x1e))))) {
        *(undefined2 *)((int)DAT_01001700 + -0x1e) = 0x82;
        *DAT_01001714 = uVar11 | 0x2000;
      }
      if (*(short *)((int)DAT_01001700 + -0x1e) == 0x8c) {
        DAT_01001700[1] = DAT_01001700[1] & 0xfffffffe;
      }
    }
    puVar5 = DAT_01001700;
    if (*(short *)((int)DAT_01001700 + -0x1e) == 600) {
      DAT_01001700[1] = DAT_01001700[1] | 1;
      puVar12 = DAT_0100170c;
      uVar8 = *DAT_0100170c;
      *(undefined2 *)((int)puVar5 + -0x26) = 0;
      *puVar12 = uVar8 & 0xffffffec | 0x10000000;
      if (puVar5[3] < 0xe10) {
        puVar5[5] = 0;
        *puVar12 = uVar8 & 0xfffcffec | 0x10000000;
      }
    }
    *(undefined1 *)(puVar5 + -10) = 0;
    uVar8 = DAT_01001700[1] | 0x20000;
    DAT_01001700[1] = uVar8;
    *(char *)(iVar6 + 0x19) = (char)(uVar8 >> 0x10);
  }
  return;
}



// ENTRY 0100172c SIZE 378

void FUN_0100172c(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  iVar4 = DAT_010018b0;
  iVar3 = DAT_010018ac;
  if (*(char *)(DAT_010018a8 + 0xc) == '\a') {
    if ((int)((uint)*DAT_010018c0 << 0x1d) < 0) {
      *(undefined2 *)(DAT_010018b0 + 0xc) = 0x1c0;
    }
    else {
      cVar1 = *(char *)(DAT_010018ac + 7);
      sVar2 = *(short *)(DAT_010018c8 + 6);
      iVar5 = DAT_010018b0 + 0xc;
      if (*(short *)(DAT_010018c4 + 2) == 0) {
        iVar3 = (int)*(short *)(DAT_010018b0 + 0xc);
        if (cVar1 == '\0') {
          if (iVar3 < 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 1;
          }
          FUN_01006898(0x32,uVar6,iVar5);
          FUN_010068b4(0x32,uVar6,iVar5);
        }
        else {
          if (sVar2 * iVar3 < 1) {
            if (iVar3 < 1) {
              *(undefined2 *)(DAT_010018b0 + 0xc) = 0xffff;
            }
            else {
              *(undefined2 *)(DAT_010018b0 + 0xc) = 1;
            }
          }
          else {
            *(short *)(DAT_010018b0 + 0xc) = sVar2;
          }
          *(undefined1 *)(DAT_010018ac + 7) = 0;
        }
      }
      else if (*(int *)DAT_010018cc << 0xc < 0) {
        if (cVar1 == '\x02') {
          *(short *)(DAT_010018b0 + 0xc) = sVar2;
        }
        FUN_01006898(0x1e,(int)*(short *)(iVar4 + 0x12),iVar5);
        FUN_010068b4(0x1e,(int)*(short *)(iVar4 + 0x12),iVar5);
        if ((int)((uint)*DAT_010018cc << 0x1e) < 0) {
          if ((*(short *)(DAT_010018c8 + 6) < *(short *)(iVar4 + 0xc)) &&
             (*(short *)(iVar4 + 0x12) < *(short *)(iVar4 + 0xc))) {
            *(short *)(iVar4 + 0xc) = *(short *)(DAT_010018c8 + 6);
          }
        }
        *(undefined1 *)(DAT_010018ac + 7) = 1;
      }
      else {
        if (cVar1 == '\x01') {
          *(short *)(DAT_010018b0 + 0xc) = sVar2;
        }
        else {
          FUN_010068b4(10,0x550,iVar5);
          FUN_01006898(10,0x550,iVar5);
        }
        *(undefined1 *)(iVar3 + 7) = 2;
      }
    }
  }
  else {
    *(undefined1 *)(DAT_010018ac + 7) = 0;
  }
  iVar5 = DAT_010018b8;
  iVar3 = (int)*(short *)(DAT_010018b4 + 4);
  if (((iVar3 < 5) || (*(char *)(DAT_010018b4 + 0xb) != *(char *)(DAT_010018bc + 0x16))) &&
     (0 < *(short *)(iVar4 + 0xc))) {
    *(undefined2 *)(DAT_010018b8 + 10) = 0;
    *(undefined2 *)(iVar5 + 8) = 0;
  }
  else {
    if (iVar3 < 1) {
      iVar3 = -iVar3;
    }
    iVar3 = iVar3 >> 1;
    if (0xbc < iVar3) {
      iVar3 = 0xbc;
    }
    iVar4 = DAT_010018b8 + 10;
    FUN_010068b4(10,iVar3);
    FUN_01006898(10,iVar3,iVar4);
    iVar3 = (int)*(short *)(DAT_010018c8 + 2);
    if (iVar3 < 1) {
      iVar3 = -iVar3;
    }
    iVar4 = DAT_010018b8 + 8;
    FUN_01006898(0x14,iVar3 >> 1);
    FUN_010068b4(0x14,iVar3 >> 1,iVar4);
  }
  *(undefined2 *)(iVar5 + 0xe) = 0x42;
  *(undefined2 *)(iVar5 + 0xc) = 0x24c;
  return;
}



// ENTRY 010018d0 SIZE 94

void FUN_010018d0(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort local_410 [512];

  puVar4 = local_410;
  puVar3 = param_1;
  while( true ) {
    uVar1 = *puVar3;
    if ((uVar1 == DAT_01001930) || (param_2 < ((uint)uVar1 * 0x100 + (uint)(uVar1 >> 8) & 0xffff)))
    break;
    puVar3 = (ushort *)((param_3 & 0xfffffffe) + (int)puVar3);
  }
  uVar2 = 0;
  do {
    (local_410 + uVar2 * 2)[0] = 0xffff;
    (local_410 + uVar2 * 2)[1] = 0xffff;
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 0x100);
  for (; puVar3 < param_1 + 0x200; puVar3 = puVar3 + 1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  FUN_01001f78(param_1,0x100);
  return;
}



// ENTRY 01001934 SIZE 38

undefined4 FUN_01001934(int param_1)

{
  if (*(byte *)(DAT_0100195c + 0xc) < 2) {
    return 0;
  }
  if ((*(ushort *)(DAT_01001960 + 0x20) < 0x65) && (*(char *)(DAT_01001964 + 0xb) != param_1)) {
    return 0x32;
  }
  return 0xf;
}



// ENTRY 01001968 SIZE 30

uint FUN_01001968(uint param_1,uint param_2)

{
  uint *puVar1;

  puVar1 = DAT_01001988;
  DAT_01001988[9] = param_2;
  puVar1[8] = param_1;
  *puVar1 = *puVar1 | 1;
  do {
  } while ((puVar1[4] & 1) == 0);
  puVar1[5] = puVar1[5] | 1;
  return puVar1[10];
}



// ENTRY 01001998 SIZE 442

void FUN_01001998(int param_1)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;

  iVar2 = DAT_01001b54;
  uVar3 = (ushort)param_1;
  *(ushort *)(DAT_01001b54 + 10) = uVar3;
  uVar4 = uVar3;
  if (param_1 < 1) {
    uVar4 = -uVar3;
  }
  uVar8 = (uint)uVar4;
  *(int *)(DAT_01001b54 + -0x24) = *(int *)(DAT_01001b54 + -0x24) + param_1;
  iVar6 = DAT_01001b54;
  uVar5 = *DAT_01001b58;
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(char *)(iVar2 + 0xc) == '\0') {
      iVar6 = (*(int *)(DAT_01001b54 + -0x24) + param_1 * (5 - (uint)*(byte *)(iVar2 + 0x10))) *
              0x6d;
    }
    else {
      iVar6 = (*(int *)(DAT_01001b54 + -0x24) + param_1 * (3 - (uint)*(byte *)(iVar2 + 0x10))) *
              0x6d;
    }
  }
  else {
    *(int *)(DAT_01001b54 + -0x24) =
         *(int *)(DAT_01001b54 + -0x24) -
         (int)*(short *)((uint)*(byte *)(iVar2 + 0x10) * 2 + DAT_01001b54 + -4);
    if (DAT_01001b5c < uVar5) {
      iVar6 = *(int *)(iVar6 + -0x24) << 4;
    }
    else if (uVar5 < DAT_01001b60) {
      iVar6 = *(int *)(iVar6 + -0x24) >> 2;
    }
    else {
      iVar6 = (int)((uVar5 + DAT_01001b64) * *(int *)(iVar6 + -0x24)) >> 10;
    }
    if (DAT_01001b68 < uVar5) {
      iVar6 = iVar6 * 5;
    }
    else {
      iVar6 = param_1 * 4 + iVar6;
    }
  }
  if (DAT_01001b6c < uVar8) {
    iVar6 = param_1 * 99 + iVar6;
    if (DAT_01001b70 < uVar8) {
      iVar6 = param_1 * 0x16e + iVar6;
    }
  }
  else {
    if (DAT_01001b74 < uVar8) {
      if (*(short *)(DAT_01001b54 + -6) < 1) {
        iVar9 = -(int)*(short *)(DAT_01001b54 + -6);
      }
      else {
        iVar9 = (int)*(short *)(DAT_01001b54 + -6);
      }
      if (iVar9 < 0x5b0) {
        bVar7 = *(char *)(iVar2 + 0x13) + 1;
        *(byte *)(iVar2 + 0x13) = bVar7;
        if (1 < bVar7) {
          iVar6 = param_1 * 99 + iVar6;
        }
        goto LAB_01001a8e;
      }
    }
    *(undefined1 *)(iVar2 + 0x13) = 0;
  }
LAB_01001a8e:
  bVar7 = *(byte *)(iVar2 + 0x10);
  *(byte *)(iVar2 + 0x10) = bVar7 + 1;
  iVar9 = DAT_01001b54;
  *(ushort *)((uint)bVar7 * 2 + DAT_01001b54 + -4) = uVar3;
  if (*(char *)(iVar2 + 0xc) == '\0') {
    bVar7 = 6;
  }
  else {
    bVar7 = 4;
  }
  if (bVar7 <= *(byte *)(iVar2 + 0x10)) {
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
  }
  FUN_01002c70(iVar6 + 0x460000);
  cVar1 = *(char *)(DAT_01001b78 + 0xb);
  uVar5 = DAT_01001b80;
  if (cVar1 == *(char *)(iVar2 + 0x16)) {
    uVar5 = DAT_01001b7c;
  }
  uVar8 = *DAT_01001b58;
  if (uVar8 < uVar5) {
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)(iVar2 + 0x1d) = 0;
  }
  if (DAT_01001b84 < uVar8) {
    *(undefined2 *)(iVar9 + -10) = 0x3b;
  }
  else {
    *(short *)(iVar9 + -10) = (short)((uVar8 & 0x3ffffff) >> 10);
  }
  *(short *)(iVar9 + -8) = (short)((uVar8 & 0x7fffff) >> 7);
  if (*(char *)(iVar2 + 0x1e) == '\0') {
    uVar3 = 4000;
  }
  else {
    uVar3 = 8000;
  }
  if (uVar3 < *(ushort *)(iVar9 + -8)) {
    *(ushort *)(iVar9 + -8) = uVar3;
  }
  *(short *)(iVar9 + -0xc) = *(short *)(iVar9 + -6) << 3;
  if (cVar1 == *(char *)(iVar2 + 0x16)) {
    if (DAT_01001b88 < *(ushort *)(iVar9 + -0xc)) {
      *(short *)(iVar9 + -0xc) = (short)DAT_01001b88;
    }
    else if (*(ushort *)(iVar9 + -0xc) < 0x5b0) {
      *(undefined2 *)(iVar9 + -0xc) = 0x5b0;
      return;
    }
    return;
  }
  *(short *)(iVar9 + -8) = (short)((uint)*(ushort *)(iVar9 + -8) * 0xd2 >> 8);
  if (2000 < *(ushort *)(iVar9 + -8)) {
    *(undefined2 *)(iVar9 + -8) = 2000;
  }
  return;
}



// ENTRY 01001b8c SIZE 296

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

  *(uint *)(DAT_01001cb4 + 4) = *(uint *)(DAT_01001cb4 + 4) | 1;
  *(uint *)(DAT_01001cb8 + 4) = *(uint *)(DAT_01001cb8 + 4) | 1;
  *(uint *)(DAT_01001cbc + 0x20) = *(uint *)(DAT_01001cbc + 0x20) | 1;
  iVar3 = DAT_01001cc8;
  iVar2 = DAT_01001cc4;
  uVar8 = *(uint *)(DAT_01001cc0 + 0x10);
  if (*(char *)(DAT_01001cc4 + 0xd) == '\0') {
    *(byte *)(DAT_01001cc8 + 0x11) = (byte)uVar8;
  }
  else {
    *(byte *)(DAT_01001cc8 + 0x11) = (byte)uVar8 & 2;
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
  FUN_0100337c();
  *(short *)(DAT_01001ccc + 0xe) =
       *(short *)(DAT_01001cc8 + -0x1c) + *(short *)(iVar2 + 6) + *(short *)(iVar3 + 8);
  pbVar4 = DAT_01001cd0;
  iVar2 = DAT_01001cb4;
  *(short *)(DAT_01001cd0 + 6) = (short)*(undefined4 *)(DAT_01001cb4 + 0x44);
  iVar3 = DAT_01001cb8;
  puVar9 = (uint *)(DAT_01001cb8 + 0x40);
  *(short *)(pbVar4 + 8) = (short)*(undefined4 *)(DAT_01001cb8 + 0x44);
  *(short *)(pbVar4 + 10) = (short)*(undefined4 *)(iVar3 + 0x48);
  *(short *)(pbVar4 + 0xc) = (short)*(undefined4 *)(iVar2 + 0x4c);
  *(short *)(pbVar4 + 2) = (short)*(undefined4 *)(iVar2 + 0x48);
  *(short *)(pbVar4 + 4) = (short)*(undefined4 *)(iVar3 + 0x4c);
  iVar2 = DAT_01001cd8;
  *(short *)(DAT_01001cd8 + 8) = *(short *)(pbVar4 + 4) - *DAT_01001cd4;
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 + 1;
  uVar7 = FUN_0100091c(DAT_01001cdc,(int)*(short *)(pbVar4 + 2),bVar1 & 7);
  *DAT_01001ce0 = uVar7;
  (**(code **)(pbVar4 + (uint)*(byte *)(iVar2 + 0xc) * 4 + 0x10))();
  FUN_010063c0();
  uVar5 = DAT_01001ce8;
  uVar8 = DAT_01001ce4;
  if ((DAT_01001ce4 < *puVar9) || (*puVar9 < DAT_01001ce8)) {
    if (pbVar4[1] == 0) {
      pbVar4[1] = 1;
    }
    else {
      if (1 < *(byte *)(iVar2 + 0xc)) {
        *(uint *)(DAT_01001cbc + 0xc) = *(uint *)(DAT_01001cbc + 0xc) & 0xffffffc0;
        *(undefined1 *)(iVar2 + 0xc) = 1;
      }
      puVar6 = DAT_01001cec;
      if ((-1 < (int)(*DAT_01001cec << 0x1b)) && (uVar8 < *puVar9)) {
        *DAT_01001cec = *DAT_01001cec | 0x10;
      }
      if ((-1 < (int)(*puVar6 << 0x1a)) && (*puVar9 < uVar5)) {
        *puVar6 = *puVar6 | 0x20;
      }
    }
  }
  else {
    pbVar4[1] = 0;
  }
  *DAT_01001cf0 = 1;
  return;
}



// ENTRY 01001d00 SIZE 22

uint FUN_01001d00(uint param_1)

{
  if (DAT_01001d18 < (int)param_1) {
    param_1 = DAT_01001d18 + 0x49;
  }
  else if ((int)param_1 < 0) {
    param_1 = 0;
  }
  return param_1 & 0xffff;
}



// ENTRY 01001d1c SIZE 20

uint FUN_01001d1c(uint param_1)

{
  uint uVar1;

  uVar1 = DAT_01001d30;
  if (((int)param_1 <= (int)DAT_01001d30) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  return uVar1 & 0xffff;
}



// ENTRY 01001d34 SIZE 116

void FUN_01001d34(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;

  puVar1 = DAT_01001da8;
  DAT_01001da8[10] = 0x2a000000;
  *(undefined4 *)(DAT_01001db0 + 0x30) = DAT_01001dac;
  puVar1[10] = puVar1[10] | 0x5000;
  puVar1[0xb] = 1;
  puVar1[0xd] = 3;
  puVar2 = DAT_01001da8;
  puVar5 = DAT_01001da8 + -0x20;
  DAT_01001da8[-0x15] = DAT_01001db4;
  puVar3 = DAT_01001da8;
  DAT_01001da8[-6] = 0;
  puVar3[-4] = 0;
  puVar3[-2] = 0;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar3[-9] = DAT_01001db8;
  uVar4 = DAT_01001dbc;
  puVar3[-0xe] = DAT_01001dbc;
  puVar3[-0xd] = uVar4;
  puVar3[-0xc] = uVar4;
  *puVar5 = 0x22000;
  puVar2[-0x12] = 0x2a;
  puVar2[-0x1c] = 0;
  puVar2[-0x16] = 0x400;
  puVar2[-0x1d] = DAT_01001dc0;
  puVar2[-0x1d] = puVar2[-0x1d] | DAT_01001dc4;
  puVar2[-0x1a] = 1;
  puVar2[-0x18] = puVar2[-0x18] | 1;
  *puVar5 = *puVar5 | 1;
  return;
}



// ENTRY 01001dc8 SIZE 78

undefined4 FUN_01001dc8(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;

  puVar1 = DAT_01001e18;
  disableIRQinterrupts();
  if ((DAT_01001e18[2] & 1) != 0) {
    *DAT_01001e18 = DAT_01001e1c;
    *puVar1 = DAT_01001e20;
  }
  puVar1[2] = puVar1[2] | 0x200;
  puVar1[3] = param_1;
  puVar1[2] = puVar1[2] | 0x10000;
  uVar2 = DAT_01001e24;
  for (uVar3 = 0; ((puVar1[4] & 1) != 0 && (uVar3 < DAT_01001e24)); uVar3 = uVar3 + 1) {
  }
  puVar1[2] = puVar1[2] & 0xfffffdff;
  enableIRQinterrupts();
  if (uVar3 < uVar2) {
    return 1;
  }
  return 0;
}



// ENTRY 01001e28 SIZE 118

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



// ENTRY 01001eb8 SIZE 122

void FUN_01001eb8(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  FUN_01003160();
  puVar2 = DAT_01001f40;
  puVar1 = DAT_01001f3c;
  if (*DAT_01001f34 < DAT_01001f38) {
    *DAT_01001f3c = *DAT_01001f3c | 8;
    if ((*puVar2 & 3) == 0) {
      FUN_010045e4();
    }
  }
  if (((((int)((uint)(byte)*puVar1 << 0x1c) < 0) || (*(char *)(DAT_01001f44 + 0x18) == '\0')) &&
      ((*puVar2 & 3) == 0)) && (*DAT_01001f48 < 0x32)) {
    FUN_0100470c();
    FUN_010012e8();
  }
  iVar3 = DAT_01001f4c;
  *(undefined2 *)(DAT_01001f4c + 10) = 0;
  *(undefined2 *)(iVar3 + 2) = 0x1fa;
  *(short *)(iVar3 + 0xe) = (short)DAT_01001f50;
  *(short *)(iVar3 + 8) = (short)DAT_01001f54;
  *DAT_01001f58 = 0;
  if ((*puVar2 & 3) == 0) {
    uVar4 = *DAT_01001f60 & ~DAT_01001f5c;
  }
  else {
    uVar4 = *DAT_01001f60 | DAT_01001f5c;
  }
  *DAT_01001f60 = uVar4;
  return;
}



// ENTRY 01001f64 SIZE 2

void thunk_FUN_01001f6a(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  while (param_2 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
    param_2 = param_2 - 1 & 0xff;
  }
  return;
}



// ENTRY 01001f6a SIZE 16

void FUN_01001f6a(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  while (param_2 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
    param_2 = param_2 - 1 & 0xff;
  }
  return;
}



// ENTRY 01001f78 SIZE 132

uint FUN_01001f78(int *param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  uint local_18;

  iVar3 = FUN_01001dc8(param_1);
  puVar1 = DAT_01001ffc;
  if (iVar3 == 0) {
    local_1c = 1;
  }
  else {
    disableIRQinterrupts();
    DAT_01001ffc[2] = DAT_01001ffc[2] | 0x100;
    uVar2 = DAT_01002000;
    for (local_18 = 0; local_1c = 0, local_18 < param_2; local_18 = local_18 + 1) {
      iVar3 = *param_3;
      *param_1 = iVar3;
      for (; ((puVar1[4] & 1) != 0 && (local_1c < uVar2)); local_1c = local_1c + 1) {
      }
      if (uVar2 <= local_1c) {
        local_1c = 2;
        break;
      }
      if (iVar3 != *param_3) {
        local_1c = 3;
        break;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    puVar1[2] = puVar1[2] & 0xfffffeff;
  }
  *puVar1 = 0;
  enableIRQinterrupts();
  return local_1c;
}



// ENTRY 01002004 SIZE 1828

void FUN_01002004(void)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  short *psVar5;
  byte *pbVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  undefined8 uVar22;
  short local_34;
  short local_32;
  undefined4 local_30;
  undefined4 local_2c;
  short local_28;
  short sStack_26;
  short local_24;
  short local_20;
  short local_1e;

  psVar5 = DAT_01002410;
  psVar4 = DAT_01002408;
  bVar3 = true;
  if (*DAT_01002404 < 0x10) {
    DAT_01002408[2] = 0;
    psVar4[3] = 0;
  }
  else {
    cVar21 = *(char *)((int)DAT_01002408 + 0x15);
    sVar8 = *(short *)(DAT_0100240c + 6);
    sVar9 = *(short *)(DAT_0100240c + 8);
    if (cVar21 == '\x01') {
      sVar2 = (short)(DAT_01002408[4] * 99 >> 10);
      local_1e = (sVar8 - *DAT_01002410) + sVar2;
      DAT_01002408[5] = local_1e;
      sVar2 = (sVar9 - *DAT_01002420) + sVar2;
      psVar4[6] = sVar2;
      local_20 = -(sVar2 + local_1e);
      psVar4[4] = local_20;
    }
    else {
      sVar2 = *(short *)(DAT_0100240c + 4);
      if (cVar21 == '\x02') {
        sVar8 = (short)(DAT_01002408[5] * 99 >> 10);
        local_20 = (sVar2 - *DAT_0100241c) + sVar8;
        DAT_01002408[4] = local_20;
        sVar8 = (sVar9 - *DAT_01002420) + sVar8;
        psVar4[6] = sVar8;
        local_1e = -(local_20 + sVar8);
        psVar4[5] = local_1e;
      }
      else if (cVar21 == '\x03') {
        sVar9 = (short)(DAT_01002408[6] * 99 >> 10);
        local_20 = (sVar2 - *DAT_0100241c) + sVar9;
        DAT_01002408[4] = local_20;
        local_1e = (sVar8 - *psVar5) + sVar9;
        psVar4[5] = local_1e;
        psVar4[6] = -(local_20 + local_1e);
      }
      else if (cVar21 == '\x04') {
        local_20 = sVar2 - *DAT_0100241c;
        iVar11 = (int)local_20;
        DAT_01002408[4] = local_20;
        local_1e = sVar8 - *psVar5;
        iVar16 = (int)local_1e;
        psVar4[5] = local_1e;
        sVar9 = sVar9 - *DAT_01002420;
        iVar13 = (int)sVar9;
        psVar4[6] = sVar9;
        iVar20 = iVar11;
        if (iVar11 < 1) {
          iVar20 = -iVar11;
        }
        iVar19 = iVar16;
        if (iVar16 < 1) {
          iVar19 = -iVar16;
        }
        if (iVar19 < iVar20) {
          if (iVar11 < 1) {
            iVar11 = -iVar11;
          }
          if (iVar13 < 1) {
            iVar13 = -iVar13;
          }
          if (iVar13 < iVar11) {
            local_20 = -(local_1e + sVar9);
          }
        }
        else {
          if (iVar16 < 1) {
            iVar16 = -iVar16;
          }
          if (iVar13 < 1) {
            iVar13 = -iVar13;
          }
          if (iVar13 < iVar16) {
            local_1e = -(local_20 + sVar9);
          }
        }
      }
      else {
        bVar3 = false;
      }
    }
    *(char *)((int)psVar4 + 0x15) = (char)psVar4[10];
    psVar5 = DAT_01002408;
    if (bVar3) {
      iVar11 = DAT_01002414 * (short)(local_20 + local_1e * 2) >> 0x10;
      sVar8 = psVar4[9];
      sVar9 = psVar4[8];
      uVar15 = (uint)*DAT_01002418;
      DAT_01002408[uVar15 * 2 + 0x14] = (short)((int)sVar8 * (int)local_20 + sVar9 * iVar11 >> 0xf);
      psVar5[uVar15 * 2 + 0x15] = (short)(sVar8 * iVar11 - (int)sVar9 * (int)local_20 >> 0xf);
      pbVar6 = DAT_01002418;
      *DAT_01002418 = (byte)(uVar15 + 1);
      if (3 < (uVar15 + 1 & 0xff)) {
        *pbVar6 = 0;
      }
      local_34 = DAT_01002408[0x14];
      local_32 = DAT_01002408[0x15];
      local_30 = *(undefined4 *)(DAT_01002408 + 0x14);
      uVar15 = 1;
      local_2c = local_30;
      do {
        sVar8 = psVar5[uVar15 * 2 + 0x14];
        sVar2 = (short)local_2c + sVar8;
        sVar9 = psVar5[uVar15 * 2 + 0x15];
        local_2c._2_2_ = local_2c._2_2_ + sVar9;
        local_2c = CONCAT22(local_2c._2_2_,sVar2);
        if (local_30._2_2_ < sVar9) {
          local_30 = CONCAT22(sVar9,(short)local_30);
        }
        else if (sVar9 < local_32) {
          local_32 = sVar9;
        }
        if ((short)local_30 < sVar8) {
          local_30 = CONCAT22(local_30._2_2_,sVar8);
        }
        else if (sVar8 < local_34) {
          local_34 = sVar8;
        }
        uVar15 = uVar15 + 1 & 0xff;
      } while (uVar15 < 4);
      psVar4[2] = (short)(sVar2 - (local_34 + (short)local_30)) >> 1;
      psVar4[3] = (short)(local_2c._2_2_ - (local_32 + local_30._2_2_)) >> 1;
    }
  }
  sVar8 = *(short *)(DAT_01002428 + DAT_0100242c);
  iVar13 = (int)sVar8;
  sVar9 = *(short *)(DAT_01002428 + DAT_01002430);
  iVar11 = (int)sVar9;
  if ((int)((uint)*DAT_01002424 << 0x1d) < 0) {
    *psVar4 = 0;
    iVar16 = (int)psVar4[4];
    if (iVar16 < 1) {
      iVar16 = -iVar16;
    }
    sVar8 = DAT_01002408[1];
    iVar20 = (int)sVar8;
    if (iVar16 <= iVar13) {
      iVar16 = (int)psVar4[5];
      if (iVar16 < 1) {
        iVar16 = -iVar16;
      }
      if (iVar16 <= iVar13) {
        iVar16 = (int)psVar4[6];
        if (iVar16 < 1) {
          iVar16 = -iVar16;
        }
        if (iVar16 <= iVar13) {
          if (iVar20 < iVar11) {
            psVar4[1] = sVar8 + 1;
          }
          else if (iVar11 < iVar20) {
            psVar4[1] = sVar8 + -1;
          }
          goto LAB_010023da;
        }
      }
    }
    if (iVar20 < 1) {
      if (iVar20 < 0) {
        psVar4[1] = sVar8 + 1;
      }
    }
    else {
      psVar4[1] = sVar8 + -1;
    }
  }
  else if (*(short *)(DAT_01002434 + 0x20) != 0) {
    iVar16 = (int)(short)(*(short *)(DAT_01002428 + 10) - psVar4[2]);
    iVar20 = iVar16 * DAT_01002408[0x10];
    iVar13 = 0xb4000;
    if ((iVar20 < 0xb4001) && (iVar13 = iVar20, iVar20 < DAT_01002438)) {
      iVar13 = DAT_01002438;
    }
    iVar20 = *(int *)(DAT_01002408 + 0xc);
    sVar2 = (short)(iVar20 + iVar13 >> 0xc);
    *psVar4 = sVar2;
    if (DAT_0100243c < sVar2) {
      *psVar4 = (short)DAT_0100243c;
    }
    else if ((int)sVar2 < -DAT_0100243c) {
      *psVar4 = (short)-DAT_0100243c;
    }
    psVar5 = DAT_01002408;
    piVar17 = (int *)(DAT_01002408 + 0xc);
    iVar20 = iVar20 + iVar16 * DAT_01002408[0x11];
    *piVar17 = iVar20;
    if (DAT_01002440 < iVar20) {
      *piVar17 = DAT_01002440;
    }
    else if (iVar20 < -DAT_01002440) {
      *piVar17 = -DAT_01002440;
    }
    iVar16 = (int)(short)(sVar8 - psVar4[3]);
    iVar20 = iVar16 * psVar5[0x12];
    iVar13 = 0xb4000;
    if ((iVar20 < 0xb4001) && (iVar13 = iVar20, iVar20 < DAT_01002438)) {
      iVar13 = DAT_01002438;
    }
    iVar20 = *(int *)(DAT_01002408 + 0xe);
    sVar2 = (short)(iVar20 + iVar13 >> 0xc);
    psVar4[1] = sVar2;
    sVar8 = *(short *)(DAT_01002428 + 0x10);
    if (iVar11 < sVar2) {
      psVar4[1] = sVar9;
    }
    else if ((int)sVar2 < (int)sVar8) {
      psVar4[1] = sVar8;
    }
    psVar5 = DAT_01002408;
    iVar20 = iVar20 + iVar16 * DAT_01002408[0x13];
    *(int *)(DAT_01002408 + 0xe) = iVar20;
    if (iVar11 * 0x1000 < iVar20) {
      *(int *)(psVar5 + 0xe) = iVar11 * 0x1000;
    }
    else {
      iVar11 = sVar8 * 0x1000;
      if (iVar20 < iVar11) {
        *(int *)(psVar5 + 0xe) = iVar11;
      }
    }
    uVar15 = (int)*psVar4 * (int)*psVar4;
    uVar14 = (int)psVar4[1] * (int)psVar4[1];
    cVar21 = CARRY4(uVar15,uVar14);
    iVar11 = uVar15 + uVar14;
    uVar22 = FUN_0100031e(iVar11);
    FUN_010068fc((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_01002444,DAT_01002448);
    if ((cVar21 == '\0') && (sVar8 = (short)(iVar11 >> 0xf), 0x175 < sVar8)) {
      iVar13 = (int)(short)(sVar8 + -0x176);
      iVar11 = DAT_01002450;
      if (iVar13 < 100) {
        iVar11 = (int)*(short *)(DAT_0100244c + iVar13 * 2);
      }
      *psVar4 = (short)(iVar11 * *psVar4 >> 0xf);
      psVar4[1] = (short)(iVar11 * psVar4[1] >> 0xf);
    }
  }
LAB_010023da:
  iVar11 = DAT_01002454;
  uVar7 = psVar4[7] + *(short *)(DAT_01002434 + 0x3a);
  uVar14 = (uint)uVar7;
  uVar7 = uVar7 >> 5;
  uVar15 = (uint)uVar7;
  if ((uVar7 & 0x600) == 0) {
    psVar4[8] = *(short *)(DAT_01002454 + uVar15 * 2);
    psVar4[9] = *(short *)(iVar11 + (0x200 - uVar15) * 2);
  }
  else if ((uVar15 & 0x600) == 0x200) {
    psVar4[8] = *(short *)(DAT_01002454 + (DAT_01002458 - uVar15) * 2);
    psVar4[9] = -*(short *)(iVar11 + (uVar15 - 0x200) * 2);
  }
  else if ((uVar15 & 0x600) == 0x400) {
    psVar4[8] = -*(short *)(DAT_01002454 + (uVar15 - DAT_01002458) * 2);
    psVar4[9] = -*(short *)(iVar11 + (0x600 - uVar15) * 2);
  }
  else {
    psVar4[8] = -*(short *)(DAT_01002454 + (DAT_01002458 * 2 - uVar15) * 2);
    psVar4[9] = *(short *)(iVar11 + (uVar15 - 0x600) * 2);
  }
  iVar11 = (int)(short)((int)psVar4[9] * (int)*psVar4 - (int)psVar4[8] * (int)psVar4[1] >> 0xf);
  sVar9 = ((short)((int)psVar4[9] * (int)psVar4[1] + (int)psVar4[8] * (int)*psVar4 >> 0xf) >> 1) -
          (short)(iVar11 * DAT_01002784 >> 0xf);
  sVar8 = (short)((uint)(DAT_01002788 * iVar11) >> 0x10);
  iVar16 = (int)sVar8;
  iVar13 = (int)sVar9;
  iVar11 = iVar16;
  if (iVar13 < iVar16) {
    iVar11 = iVar13;
    iVar13 = iVar16;
  }
  iVar20 = (int)(short)-(sVar8 + sVar9);
  iVar16 = iVar20;
  if ((iVar20 <= iVar13) && (iVar16 = iVar13, iVar20 < iVar11)) {
    iVar11 = iVar20;
  }
  local_24 = (short)(iVar16 + iVar11 + DAT_0100278c >> 1);
  local_28 = sVar8 - local_24;
  sStack_26 = sVar9 - local_24;
  local_24 = -(sVar8 + sVar9) - local_24;
  sVar8 = local_24;
  if (-1 < (int)((uint)*DAT_01002790 << 0x1d)) {
    if (uVar14 < 0x8001) {
      if (local_28 != 0) {
        local_28 = local_28 + -0x2e;
      }
    }
    else {
      local_28 = local_28 + 0x2e;
    }
    if (uVar14 + DAT_01002794 < DAT_01002798) {
      if (sStack_26 != 0) {
        sStack_26 = sStack_26 + -0x2e;
      }
    }
    else {
      sStack_26 = sStack_26 + 0x2e;
    }
    if (uVar14 + DAT_0100279c < DAT_0100279c >> 0x11) {
      local_24 = local_24 + 0x2e;
    }
    else if (local_24 != 0) {
      local_24 = local_24 + -0x2e;
    }
    iVar11 = -DAT_0100278c;
    sVar8 = (short)iVar11;
    sVar9 = sVar8;
    if ((local_28 <= iVar11) && (sVar9 = local_28, local_28 < 0)) {
      local_28 = 0;
      sVar9 = local_28;
    }
    local_28 = sVar9;
    sVar9 = sVar8;
    if ((sStack_26 <= iVar11) && (sVar9 = sStack_26, sStack_26 < 0)) {
      sStack_26 = 0;
      sVar9 = sStack_26;
    }
    sStack_26 = sVar9;
    if ((local_24 <= iVar11) && (sVar8 = local_24, local_24 < 0)) {
      local_24 = 0;
      sVar8 = local_24;
    }
  }
  local_24 = sVar8;
  uVar10 = FUN_01001d00((int)local_28);
  *(undefined4 *)(DAT_010027a0 + 0x28) = uVar10;
  uVar10 = FUN_01001d00((int)sStack_26);
  *(undefined4 *)(DAT_010027a0 + 0x38) = uVar10;
  uVar10 = FUN_01001d00();
  *(undefined4 *)(DAT_010027a0 + 0x48) = uVar10;
  local_1e = FUN_01001d1c((int)local_28);
  sVar8 = FUN_01001d1c((int)sStack_26);
  sVar9 = FUN_01001d1c((int)local_24);
  iVar13 = (int)sVar9;
  *(int *)(DAT_010027a0 + 0x30) = (int)local_1e;
  iVar11 = DAT_010027a0;
  *(int *)(DAT_010027a0 + 0x40) = (int)sVar8;
  *(int *)(iVar11 + 0x50) = iVar13;
  bVar1 = *DAT_010027a4;
  if (bVar1 < 0x10) {
    *DAT_010027a4 = bVar1 + 1;
    iVar11 = DAT_010027a0;
    if (bVar1 == 0xf) {
      *(undefined4 *)(DAT_010027a0 + -0x30) = 0;
      *(uint *)(iVar11 + -0x34) = *(uint *)(iVar11 + -0x34) | 0x3f;
      iVar11 = DAT_010027b0;
      uVar15 = 0;
      do {
        puVar12 = (undefined2 *)(uVar15 * 4 + iVar11);
        *puVar12 = 0;
        puVar12[1] = 0;
        uVar15 = uVar15 + 1 & 0xff;
      } while (uVar15 < 4);
      *DAT_010027b4 = 0;
    }
    *(undefined1 *)(psVar4 + 10) = 0;
    *(undefined1 *)((int)psVar4 + 0x15) = 0;
    iVar11 = DAT_010027bc;
    sVar8 = *(short *)(DAT_010027b8 + 10);
    *(short *)(DAT_010027bc + 6) = sVar8;
    iVar13 = DAT_010027c0;
    *(short *)(DAT_010027c0 + 0xc) = sVar8;
    *DAT_010027c4 = (int)sVar8 << 10;
    puVar18 = (undefined4 *)(DAT_010027b0 + -0x10);
    *(int *)(DAT_010027b0 + -0xc) = (int)sVar8 << 0xc;
    *puVar18 = 0;
    psVar4[1] = sVar8;
    *psVar4 = 0;
    if ((int)((uint)*DAT_010027c8 << 0x19) < 0) {
      *(undefined2 *)(iVar11 + 0xc) = 0xfff6;
      *(undefined2 *)(DAT_010027b4 + 2) = 0xffa4;
    }
    else {
      *(undefined2 *)(DAT_010027b4 + 2) = 0x5c;
      *(undefined2 *)(iVar11 + 0xc) = 0x550;
      if (*(short *)(iVar13 + 2) != 0) {
        *(short *)(iVar13 + 10) = sVar8;
      }
    }
  }
  else {
    if ((int)sVar8 < (int)local_1e) {
      *(undefined1 *)(psVar4 + 10) = 1;
      local_20 = local_1e;
      local_1e = sVar8;
    }
    else {
      *(undefined1 *)(psVar4 + 10) = 2;
      local_20 = sVar8;
    }
    if (local_20 < iVar13) {
      local_1e = local_20;
      *(undefined1 *)(psVar4 + 10) = 3;
      local_20 = sVar9;
    }
    else if (local_1e < iVar13) {
      local_1e = sVar9;
    }
    iVar11 = (int)local_20;
    if (iVar11 + 0x1cc < -DAT_0100278c) {
      *(undefined4 *)(DAT_010027a0 + 0x1c) = DAT_010027a8;
      *(undefined1 *)(psVar4 + 10) = 4;
    }
    else if (local_1e + 0x1cc < iVar11) {
      *(int *)(DAT_010027a0 + 0x1c) = iVar11 + -0x8a;
    }
    else {
      *(undefined1 *)(psVar4 + 10) = 0;
      *(undefined4 *)(DAT_010027a0 + 0x1c) = DAT_010027ac;
    }
  }
  return;
}



// ENTRY 010027cc SIZE 40

void FUN_010027cc(void)

{
  *DAT_010027f4 = *DAT_010027f4 | 0x10;
  *DAT_010027f8 = *DAT_010027f8 | DAT_010027fc;
  *DAT_01002800 = *DAT_01002800 | 0x100000;
  *DAT_01002804 = *DAT_01002804 | 0x10;
  return;
}



// ENTRY 01002808 SIZE 184

void FUN_01002808(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;

  iVar1 = DAT_010028c0;
  *(undefined1 *)(DAT_010028c0 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + -0x1a) = 0;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  *(undefined4 *)(iVar1 + -0x24) = 0;
  *(undefined2 *)(iVar1 + -10) = 10;
  *(undefined2 *)(iVar1 + -0x20) = 0;
  *(undefined2 *)(iVar1 + -0xc) = 0;
  *(char *)(iVar1 + 0x16) = (char)param_1;
  iVar2 = DAT_010028c4;
  *(undefined1 *)(DAT_010028c4 + 0xe) = *(undefined1 *)(iVar1 + 0x11);
  if ((1 < *(byte *)(DAT_010028c8 + 0xc)) && (*(char *)(iVar1 + 0xc) == '\0')) {
    *(undefined1 *)(iVar1 + 0x19) = 1;
    *(undefined1 *)(iVar1 + 0x18) = 1;
    iVar3 = DAT_010028cc;
    *(uint *)(DAT_010028cc + 8) = *(uint *)(DAT_010028cc + 8) | 4;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x1000000;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffffb;
    sVar4 = *(short *)(iVar1 + -0x1e) - param_1 * (short)DAT_010028d0;
    if ((short)(param_1 * (*(short *)(iVar1 + -0x1c) - sVar4)) < 0) {
      *(short *)(iVar1 + -0x1c) = sVar4;
      return;
    }
    sVar4 = *(short *)(iVar1 + -0x1c) - *(short *)(iVar1 + -0x1e);
    if (sVar4 < 1) {
      sVar4 = -sVar4;
    }
    FUN_01002c70(sVar4,2000,4,0x1000000,param_4);
    if ((*(char *)(iVar2 + 0xb) == *(char *)(iVar1 + 0x16)) && (*(short *)(iVar1 + -6) < 0x12)) {
      *(undefined2 *)(iVar1 + -6) = 0x12;
    }
    *(short *)(iVar1 + -6) = param_1 * *(short *)(iVar1 + -6);
    return;
  }
  *(undefined2 *)(iVar1 + -6) = 0;
  return;
}



// ENTRY 010028d4 SIZE 100

void FUN_010028d4(short param_1,short param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_01002938;
  if (0 < (short)((short)*(char *)(DAT_01002938 + 0x56) *
                 (*(short *)(DAT_01002938 + 0x24) - param_1))) {
    *(short *)(DAT_01002938 + 0x24) =
         *(short *)(DAT_01002938 + 0x24) + *(short *)(DAT_01002938 + 0x3a) * -2;
    if (4000 < *(ushort *)(iVar1 + 0x20)) {
      *(short *)(iVar1 + 0x24) = *(short *)(iVar1 + 0x24) + *(short *)(iVar1 + 0x3a) * -2;
    }
    return;
  }
  iVar2 = (int)(short)((short)*(char *)(DAT_01002938 + 0x56) *
                      (*(short *)(DAT_01002938 + 0x24) - param_2));
  if (iVar2 < DAT_0100293c) {
    *(short *)(DAT_01002938 + 0x24) = param_2;
    *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) >> 1;
  }
  else if (iVar2 < 0) {
    *(short *)(DAT_01002938 + 0x24) =
         *(short *)(DAT_01002938 + 0x24) + *(short *)(DAT_01002938 + 0x3a);
    return;
  }
  return;
}



// ENTRY 01002940 SIZE 544

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



// ENTRY 01002bb8 SIZE 154

void FUN_01002bb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = DAT_01002c54;
  if (*(char *)(DAT_01002c54 + 0xc) == '\a') {
    *(uint *)(DAT_01002c58 + 0xc) = *(uint *)(DAT_01002c58 + 0xc) & 0xffffffc0;
    *(undefined1 *)(iVar1 + 0xc) = 1;
  }
  iVar1 = DAT_01002c5c;
  *(undefined1 *)(DAT_01002c5c + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + -0x1a) = 0;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  *(undefined4 *)(iVar1 + -0x24) = 0;
  *(undefined2 *)(iVar1 + -10) = 0;
  *(undefined2 *)(iVar1 + -6) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  iVar2 = DAT_01002c60;
  if (*(char *)(DAT_01002c60 + 0xe) != *(char *)(iVar1 + 0x11)) {
    *(undefined1 *)(DAT_01002c60 + 0xe) = *(undefined1 *)(iVar1 + 0x11);
    *DAT_01002c64 = (uint)*(ushort *)(iVar1 + -0x20) * 0x1a4;
    *(undefined2 *)(iVar1 + -0x20) = 0;
  }
  if (param_1 == 0) {
    if (-1 < (int)(*DAT_01002c6c << 0x18)) {
      *DAT_01002c6c = *DAT_01002c6c | 0x80;
    }
  }
  else {
    *(short *)(iVar1 + -0x1e) = (short)DAT_01002c68 * ((short)param_1 + -1);
    *(undefined2 *)(iVar1 + -0x1c) = *(undefined2 *)(iVar1 + -0x1e);
    *(char *)(iVar1 + 0x17) = (char)param_1;
  }
  if (*(char *)(iVar1 + 0x16) < '\x01') {
    iVar3 = -(int)*(char *)(iVar1 + 0x16);
  }
  else {
    iVar3 = (int)*(char *)(iVar1 + 0x16);
  }
  if (iVar3 != 1) {
    *(undefined1 *)(iVar1 + 0x16) = *(undefined1 *)(iVar2 + 0xb);
  }
  return;
}



// ENTRY 01002c70 SIZE 34

void FUN_01002c70(uint param_1,uint param_2)

{
  uint *puVar1;

  puVar1 = DAT_01002c94;
  DAT_01002c94[9] = param_2;
  puVar1[8] = param_1;
  *puVar1 = *puVar1 | 1;
  do {
  } while ((puVar1[4] & 1) == 0);
  puVar1[5] = puVar1[5] | 1;
  *(short *)(DAT_01002c98 + 0x3a) = (short)puVar1[10];
  return;
}



// ENTRY 01002c9c SIZE 14

void FUN_01002c9c(void)

{
  *DAT_01002cac = 1;
  FUN_01003b1c();
  return;
}



// ENTRY 01002cb0 SIZE 128

void FUN_01002cb0(int param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_414 [256];

  puVar5 = local_414;
  puVar4 = local_414;
  for (uVar2 = 0; (uVar2 < 0x400 - param_2 && (*(ushort *)(param_1 + uVar2) != DAT_01002d30));
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
  FUN_01001f78(param_1,uVar3 >> 2 & 0xffff,local_414);
  return;
}



// ENTRY 01002d34 SIZE 70

void FUN_01002d34(void)

{
  FUN_01000790(0xfffffff3,0);
  FUN_01000790(4,0);
  FUN_01000790(8,1);
  FUN_01000790(0xffffffff);
  FUN_01000790(5,0);
  FUN_01000778(1);
  FUN_01000778(4);
  FUN_01000778(8);
  FUN_01000778(5);
  return;
}



// ENTRY 01002d7c SIZE 116

void FUN_01002d7c(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;

  bVar5 = *(byte *)(DAT_01002df0 + 1);
  *(byte *)(DAT_01002df0 + 1) = bVar5 + 1;
  bVar5 = bVar5 & 7;
  iVar4 = FUN_0100091c(DAT_01002df8,(int)(short)*DAT_01002df4,bVar5);
  *(short *)(DAT_01002dfc + 2) = (short)iVar4;
  puVar1 = DAT_01002e04;
  *DAT_01002e04 = (short)((*(short *)(DAT_01002e00 + 2) * iVar4 & 0xfffffffU) >> 0xc);
  puVar1[2] = (ushort)*(byte *)(DAT_01002e08 + 2) * 0x100 + (ushort)*(byte *)(DAT_01002e08 + 3);
  puVar2 = DAT_01002e0c;
  uVar3 = FUN_0100091c(DAT_01002df8 + 0x48,(int)(short)*DAT_01002e0c,bVar5);
  puVar1[5] = uVar3;
  uVar3 = FUN_0100091c(DAT_01002df8 + 0x36,(int)*(short *)(DAT_01002e10 + 6),bVar5);
  puVar1[3] = uVar3;
  uVar3 = FUN_0100091c(DAT_01002df8 + 0x5a,(int)(short)puVar2[4],bVar5);
  *(undefined2 *)(DAT_01002e14 + 0xe) = uVar3;
  return;
}



// ENTRY 01002e18 SIZE 62

void FUN_01002e18(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;

  puVar3 = DAT_01002e58 + 9;
  puVar7 = DAT_01002e58 + 0x12;
  puVar4 = DAT_01002e58 + 0x1b;
  puVar5 = DAT_01002e58 + 0x24;
  puVar6 = DAT_01002e58 + 0x2d;
  bVar1 = 0;
  puVar2 = DAT_01002e58;
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



// ENTRY 01002e5c SIZE 110

void FUN_01002e5c(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;

  if ((int)((uint)*DAT_01002ecc * 0x20000000) < 0) {
    if ((*(char *)(DAT_01002ed0 + 0x1e) == '\0') && (*(char *)(DAT_01002ed0 + 0xc) != '\0')) {
      cVar2 = *(char *)(DAT_01002ed0 + 0x16) << 1;
    }
    else {
      cVar2 = *(char *)(DAT_01002ed0 + 0x16);
    }
    cVar1 = *DAT_01002ed4;
    if (0 < (int)cVar1 * (int)*(char *)(DAT_01002ed0 + 0x16)) {
      if ((int)cVar1 + 99U < 199) {
        *DAT_01002ed4 = cVar1 + cVar2;
      }
      return;
    }
    *DAT_01002ed4 = cVar2 * '\x04' + cVar1;
  }
  else {
    bVar3 = *(byte *)(DAT_01002ed8 + 0xe) ^ *(byte *)(DAT_01002ed0 + 0x11);
    if (bVar3 == 1) {
      *DAT_01002edc = 0;
      return;
    }
    if (bVar3 == 2) {
      DAT_01002edc[1] = 0;
      return;
    }
    if (bVar3 == 4) {
      DAT_01002edc[2] = 0;
      return;
    }
  }
  return;
}



// ENTRY 01002ee0 SIZE 350

void FUN_01002ee0(void)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;

  puVar7 = DAT_01003054;
  iVar8 = DAT_0100304c;
  iVar6 = DAT_01003048;
  puVar5 = DAT_01003044;
  uVar10 = *DAT_01003044;
  uVar9 = uVar10 & 0xfffffffb;
  if ((int)((uint)*DAT_01003040 * 0x80000) < 0) {
    cVar2 = *(char *)(DAT_0100304c + 0x10);
    if (cVar2 == '\x01') {
      uVar9 = *DAT_01003054;
      if ((int)*(short *)(DAT_01003050 + 4) + 0x6dU < 0xdb) {
        *(undefined1 *)(DAT_0100304c + 0x10) = 2;
        *puVar7 = uVar9 & 0xffffffbf;
      }
      else {
        *DAT_01003054 = uVar9 | 0x40;
      }
    }
    else if (cVar2 == '\x02') {
      if (*(byte *)(DAT_01003058 + 0xc) < 2) {
        *(undefined1 *)(DAT_0100304c + 0x10) = 3;
      }
    }
    else if (cVar2 == '\x03') {
      if (*(char *)(DAT_0100305c + 0x18) != '\0') {
        *(undefined1 *)(DAT_0100304c + 0x15) = 0x14;
        *puVar5 = uVar10 | 4;
        *(undefined2 *)(iVar6 + 10) = 1;
        *(undefined1 *)(iVar8 + 0x13) = 1;
        *(undefined2 *)(iVar8 + 0x22) = 0;
        *(undefined1 *)(iVar8 + 0x10) = 4;
        *(undefined2 *)(iVar8 + 0x24) = 0;
      }
    }
    else if (cVar2 == '\x04') {
      if (*(ushort *)(DAT_0100304c + 0x22) < DAT_01003060) {
        *(ushort *)(DAT_0100304c + 0x22) = *(ushort *)(DAT_0100304c + 0x22) + 10;
      }
      cVar2 = *(char *)(DAT_0100304c + 0x13);
      iVar8 = (int)cVar2;
      if (iVar8 != 0) {
        *(short *)(iVar6 + 10) =
             (short)((uint)(iVar8 * -0x100000 * (int)*(char *)(DAT_01003050 + 0xb)) >> 0x10);
      }
      uVar3 = *(ushort *)(DAT_0100304c + 0x22);
      if ((int)(uint)uVar3 < (int)*(short *)(iVar6 + 10)) {
        *(ushort *)(iVar6 + 10) = uVar3;
      }
      else {
        iVar4 = -(uint)uVar3;
        if (*(short *)(iVar6 + 10) < iVar4) {
          *(short *)(iVar6 + 10) = (short)iVar4;
        }
      }
      if (*DAT_01003064 == 0) {
        if (iVar8 == *(short *)(DAT_0100304c + 0x26)) {
          if (*(ushort *)(DAT_0100304c + 0x24) < 2000) {
            *(ushort *)(DAT_0100304c + 0x24) = *(ushort *)(DAT_0100304c + 0x24) + 1;
          }
          iVar4 = DAT_0100304c;
          puVar1 = (ushort *)(DAT_0100304c + 0x24);
          if ((*puVar1 & 0x3f) == 0) {
            if (iVar8 < 1) {
              if (iVar8 < 0) {
                *(char *)(DAT_0100304c + 0x13) = cVar2 + '\x01';
              }
            }
            else {
              *(char *)(DAT_0100304c + 0x13) = cVar2 + -1;
            }
          }
          if (DAT_01003068 < *puVar1) {
            *(undefined2 *)(iVar6 + 10) = 0;
            *puVar5 = uVar9;
            *(undefined1 *)(DAT_01003058 + 0xc) = 1;
            *(undefined1 *)(iVar4 + 0x10) = 3;
          }
        }
        else {
          *(undefined2 *)(DAT_0100304c + 0x24) = 0;
        }
      }
      else {
        *(undefined2 *)(iVar6 + 10) = 0;
        *puVar5 = uVar9;
        *(undefined1 *)(DAT_01003058 + 0xc) = 1;
        *(undefined1 *)(DAT_0100304c + 0x10) = 3;
      }
    }
    else if (*(char *)(DAT_01003050 + 0x10) != '\a') {
      *(undefined1 *)(DAT_0100304c + 0x10) = 1;
    }
  }
  else {
    *(undefined1 *)(DAT_0100304c + 0x15) = 0;
    *(undefined1 *)(iVar8 + 0x10) = 0;
    if ((int)(uVar10 << 0x1d) < 0) {
      *puVar5 = uVar9;
      *(undefined2 *)(iVar6 + 10) = 0;
      *(undefined1 *)(DAT_01003058 + 0xc) = 1;
    }
    FUN_01000cd0();
  }
  uVar9 = *puVar5;
  if (((uVar9 & 1) == 0) && ((int)(uVar9 << 0x1d) < 0)) {
    *puVar5 = uVar9 | 1;
  }
  *(short *)(DAT_0100304c + 0x26) = (short)*(char *)(DAT_0100304c + 0x13);
  return;
}



// ENTRY 0100306c SIZE 98

void FUN_0100306c(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;

  FUN_010030d4();
  FUN_0100568c();
  iVar2 = DAT_010030d0;
  puVar3 = (ushort *)(DAT_010030d0 + -2);
  do {
    do {
      if (9 < *(byte *)(iVar2 + 2)) {
        *(undefined1 *)(iVar2 + 2) = 0;
        uVar1 = *puVar3;
        *puVar3 = (ushort)(((uint)(uVar1 >> 5) | (uint)uVar1 << 0x1b) + 0x80000000 >> 0x1b) |
                  (uVar1 >> 5) << 5;
        (**(code **)(DAT_010030d0 + 0xe + ((uVar1 & 0x1f) >> 4) * 4))();
      }
    } while (*(char *)(iVar2 + 1) == '\0');
    *(undefined1 *)(iVar2 + 1) = 0;
    FUN_01002d7c();
    FUN_01000fd4();
    uVar1 = *puVar3;
    *puVar3 = (ushort)(((uint)(uVar1 >> 1) | (uint)uVar1 << 0x1f) + 0x80000000 >> 0x1f) |
              (uVar1 >> 1) << 1;
    (**(code **)(DAT_010030d0 + 6 + (uVar1 & 1) * 4))();
  } while( true );
}



// ENTRY 010030d4 SIZE 108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010030d4(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_01003144;
  disableIRQinterrupts();
  _DAT_50000000 = 0x12;
  *DAT_01003144 = DAT_01003140;
  puVar1[4] = DAT_01003148;
  FUN_010027cc();
  *(uint *)(DAT_0100314c + 0x20) = *(uint *)(DAT_0100314c + 0x20) | 4;
  FUN_01004594();
  FUN_01000808();
  FUN_01000828();
  FUN_01001d34();
  FUN_01004914();
  FUN_010059a8();
  FUN_010065f4();
  *DAT_01003150 = 0;
  *DAT_01003154 = 0;
  *DAT_01003158 = 0;
  FUN_01004960();
  FUN_01002d34();
  _DAT_50000000 = 0;
  FUN_01003b08();
  *(undefined1 *)(DAT_0100315c + 0xc) = 0;
  FUN_01002e18();
  enableIRQinterrupts();
  return;
}



// ENTRY 01003160 SIZE 168

void FUN_01003160(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  byte bVar5;

  puVar1 = DAT_01003208;
  if (DAT_01003208[1] != 0) {
    *DAT_01003208 = DAT_0100320c;
    iVar2 = DAT_01003210;
    *(uint *)(DAT_01003210 + 0xc) = *(uint *)(DAT_01003210 + 0xc) & 0xffffffc0;
    puVar3 = DAT_01003214;
    *DAT_01003214 = *DAT_01003214 & 0xffffffbf;
    pcVar4 = DAT_01003218;
    DAT_01003218[1] = '\0';
    do {
    } while (pcVar4[1] == '\0');
    *pcVar4 = '\0';
    do {
    } while (*pcVar4 == '\0');
    *(undefined4 *)(iVar2 + 0x10) = 0x3f;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    bVar5 = 0;
    do {
      if ((int)(*puVar3 << 0x19) < 0) {
        *puVar3 = (*puVar3 & 0xfffffffc) + 1;
        break;
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < 99);
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    if ((*puVar3 & 3) == 0) {
      *(undefined4 *)(iVar2 + 0x38) = 0x3f;
      *pcVar4 = '\0';
      do {
      } while (*pcVar4 == '\0');
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x3f;
      bVar5 = 0;
      do {
        if ((int)(*puVar3 << 0x19) < 0) {
          *puVar3 = (*puVar3 & 0xfffffffc) + 2;
          break;
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 99);
    }
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *puVar1 = DAT_0100321c;
    *puVar3 = *puVar3 & 0xffffffbf;
  }
  return;
}



// ENTRY 01003220 SIZE 160

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0100327e) */
/* WARNING: Removing unreachable block (ram,0x0100327e) */

void FUN_01003220(void)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;

  puVar4 = DAT_01003364;
  iVar3 = DAT_01003360;
  psVar2 = DAT_0100335c;
  iVar1 = DAT_01003358;
  if ((((*(char *)(DAT_01003358 + 0xc) == '\a') && (-1 < (int)((uint)*DAT_01003368 << 0x1d))) &&
      (-1 < (int)(*DAT_01003364 << 0x17))) && (-1 < (int)((uint)*DAT_0100336c << 0x19))) {
    uVar6 = (uint)*(short *)(DAT_01003370 + 6);
    if ((int)uVar6 < 1) {
      uVar6 = -uVar6;
    }
    uVar6 = (uVar6 & 0x7fff) >> 7;
    sVar5 = (short)uVar6;
    if (uVar6 < 0x15) {
      if (uVar6 == 0) {
        sVar5 = 1;
      }
    }
    else {
      sVar5 = 0x14;
    }
    *DAT_0100335c = *DAT_0100335c + sVar5;
    psVar2[1] = psVar2[1] + sVar5;
    psVar2[2] = psVar2[2] + sVar5;
    uVar6 = (uint)*(byte *)(DAT_01003374 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0100327e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (DAT_01003282 <= uVar6) {
      uVar6 = (uint)DAT_01003282;
    }
    (*(code *)((uint)*(byte *)(uVar6 + 0x1003283) * 2 + 0x1003283))();
    return;
  }
  *DAT_0100335c = 0;
  psVar2[1] = 0;
  psVar2[2] = 0;
  *(undefined2 *)(iVar3 + 0x28) = 0;
  if ((*(byte *)(iVar1 + 0xc) < 2) && ((uint)*(ushort *)(iVar1 + 4) < DAT_01003378 - 0x11U)) {
    if ((int)(*puVar4 << 0x17) < 0) {
      *puVar4 = *puVar4 & 0xfffffeff;
    }
    else if ((int)(*puVar4 << 0x12) < 0) {
      *puVar4 = *puVar4 & 0xffffdfff;
    }
  }
  return;
}



// ENTRY 0100337c SIZE 940

void FUN_0100337c(void)

{
  short sVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  short extraout_r3;
  undefined4 in_r3;
  uint uVar11;
  int iVar12;

  puVar6 = DAT_01003728;
  if ((ushort)DAT_01003728[8] < DAT_0100372c) {
    *(short *)(DAT_01003728 + 8) = (short)DAT_01003728[8] + 1;
  }
  else {
    *(undefined1 *)(DAT_01003728 + 0x16) = 0;
    *(undefined1 *)((int)puVar6 + 0x5d) = 0;
    *(undefined1 *)((int)puVar6 + 0x59) = 0;
    *(undefined1 *)((int)puVar6 + 0x5a) = 0;
    *(undefined1 *)((int)puVar6 + 0x5b) = 0;
    *(undefined1 *)(puVar6 + 0x17) = 0;
    *(undefined1 *)((int)puVar6 + 0x4f) = 0;
    *(undefined1 *)((int)puVar6 + 0x4e) = 0;
    *(undefined1 *)(puVar6 + 0x14) = 0;
    *(undefined2 *)((int)puVar6 + 0x26) = 0;
    *puVar6 = 0;
    puVar6[7] = 0;
    *(undefined2 *)((int)puVar6 + 0x36) = 0;
    *(undefined2 *)((int)puVar6 + 0x3a) = 0;
    *(undefined2 *)(puVar6 + 0xd) = 0;
    *(undefined1 *)((int)puVar6 + 0x55) = 1;
    *DAT_01003734 = DAT_01003730;
  }
  bVar8 = *(byte *)(DAT_01003738 + (uint)*(byte *)((int)puVar6 + 0x51));
  if (((bVar8 == 0) || (*DAT_0100373c << 0x18 < 0)) && (-1 < *DAT_0100373c << 0x1a)) {
    *(short *)(puVar6 + 9) = (short)puVar6[9] + *(short *)((int)puVar6 + 0x3a);
    if (2 < *(byte *)((int)puVar6 + 0x52)) {
      FUN_01002bb8(bVar8);
      return;
    }
    *(char *)((int)puVar6 + 0x52) = *(char *)((int)puVar6 + 0x52) + '\x01';
    return;
  }
  cVar2 = bVar8 - *(byte *)((int)puVar6 + 0x57);
  if (*(char *)((int)puVar6 + 0x57) == '\0') {
    iVar12 = (int)*(char *)(DAT_0100374c + 0xb);
    *(char *)((int)puVar6 + 0x56) = *(char *)(DAT_0100374c + 0xb);
    *(undefined1 *)((int)puVar6 + 0x5d) = 0;
    *(undefined1 *)(puVar6 + 0x16) = 0;
    *(undefined1 *)((int)puVar6 + 0x59) = 0;
    *(undefined1 *)((int)puVar6 + 0x5a) = 0;
    *(undefined1 *)((int)puVar6 + 0x5b) = 0;
    *(undefined1 *)(puVar6 + 0x17) = 0;
    *(undefined1 *)((int)puVar6 + 0x5e) = 0;
    *(undefined1 *)((int)puVar6 + 0x4f) = 0;
    *(undefined1 *)((int)puVar6 + 0x4e) = 0;
    *(undefined1 *)(puVar6 + 0x14) = 0;
    *(undefined2 *)((int)puVar6 + 0x26) = 0;
    *puVar6 = 0;
    puVar6[7] = 0;
    *(undefined2 *)((int)puVar6 + 0x36) = 0;
  }
  else if ((cVar2 == '\x01') || (cVar2 == -5)) {
    iVar12 = 1;
  }
  else if ((cVar2 == -1) || (cVar2 == '\x05')) {
    iVar12 = -1;
  }
  else {
    iVar12 = 0;
    if (bVar8 != *(byte *)((int)puVar6 + 0x57)) {
      iVar12 = 0x6e;
    }
  }
  if (iVar12 != 0x6e) {
    if (((*(char *)((int)puVar6 + 0x56) == iVar12) &&
        (*(ushort *)((int)puVar6 + 0x36) < (ushort)puVar6[8])) && (bVar8 != 0)) {
      *(short *)(puVar6 + 9) = (short)puVar6[9] + *(short *)((int)puVar6 + 0x3a);
      *(byte *)((int)puVar6 + 0x57) = bVar8;
      *(ushort *)((int)puVar6 + 0x22) = (short)DAT_01003740 * (bVar8 - 1);
      puVar7 = DAT_01003734;
      sVar4 = (short)iVar12;
      if (*(char *)((int)puVar6 + 0x59) == '\0') {
        uVar10 = *DAT_01003734;
        if ((uVar10 == 0) || ((char)puVar6[0x16] != '\0')) {
          *(undefined2 *)(puVar6 + 9) = *(undefined2 *)((int)puVar6 + 0x22);
          *(undefined2 *)((int)puVar6 + 0x36) = 0;
          if ((char)puVar6[0x16] == '\0') {
            if (uVar10 == 0) {
              *puVar7 = DAT_01003730;
            }
          }
          else {
            *puVar7 = (uint)(ushort)puVar6[8] * 0x1a4;
            FUN_01002c70(0x460000);
            *(undefined1 *)((int)puVar6 + 0x59) = 1;
            iVar12 = DAT_01003748;
            *(uint *)(DAT_01003748 + -0x38) = *(uint *)(DAT_01003748 + -0x38) | 4;
            *(uint *)(iVar12 + -0x38) = *(uint *)(iVar12 + -0x38) | 0x1000000;
            *(uint *)(iVar12 + -0x38) = *(uint *)(iVar12 + -0x38) & 0xfffffffb;
          }
        }
        else {
          FUN_010052e0(in_r3);
        }
      }
      else {
        sVar1 = *(short *)((int)puVar6 + 0x22);
        sVar5 = (short)DAT_01003744;
        if (*(uint *)(DAT_01003748 + 0x18) < 200) {
          sVar3 = (short)((uint)((*(int *)(DAT_01003748 + 0x18) + 0x2c) *
                                (int)*(short *)((int)puVar6 + 0x3a)) >> 6);
        }
        else {
          sVar3 = (short)(*(short *)((int)puVar6 + 0x3a) * 0x2c >> 6);
        }
        uVar10 = puVar6[9];
        *(short *)((int)puVar6 + 0x26) = *(short *)((int)puVar6 + 0x26) + (short)puVar6[8];
        if (*(char *)((int)puVar6 + 0x5a) != '\0') {
          *(short *)((int)puVar6 + 0x26) =
               *(short *)((int)puVar6 + 0x26) -
               *(short *)((int)puVar6 + (uint)*(byte *)((int)puVar6 + 0x4e) * 2 + 0x28);
        }
        bVar8 = *(byte *)((int)puVar6 + 0x4e);
        *(byte *)((int)puVar6 + 0x4e) = bVar8 + 1;
        *(short *)((int)puVar6 + (uint)bVar8 * 2 + 0x28) = (short)puVar6[8];
        if (5 < *(byte *)((int)puVar6 + 0x4e)) {
          *(undefined1 *)((int)puVar6 + 0x4e) = 0;
          *(undefined1 *)((int)puVar6 + 0x5a) = 1;
        }
        uVar9 = (uint)(ushort)puVar6[8];
        uVar11 = (uint)*(ushort *)((int)puVar6 + 0x26) * 0x46;
        *DAT_01003734 = uVar11;
        if (*(char *)((int)puVar6 + 0x5a) == '\0') {
          *DAT_01003734 = uVar9 * 0x46 * (6 - (uint)*(byte *)((int)puVar6 + 0x4e)) + uVar11;
        }
        uVar11 = *(uint *)(DAT_01003748 + 0x10);
        iVar12 = uVar11 + uVar9 * -0x46;
        if (iVar12 < 1) {
          iVar12 = -iVar12;
        }
        if (iVar12 < 0xd2) {
          *puVar6 = *puVar6 + uVar11;
          if (*(char *)((int)puVar6 + 0x5b) != '\0') {
            *puVar6 = *puVar6 - puVar6[*(byte *)((int)puVar6 + 0x4f) + 1];
          }
          bVar8 = *(byte *)((int)puVar6 + 0x4f);
          *(byte *)((int)puVar6 + 0x4f) = bVar8 + 1;
          puVar6[bVar8 + 1] = uVar11;
          if (5 < *(byte *)((int)puVar6 + 0x4f)) {
            *(undefined1 *)((int)puVar6 + 0x4f) = 0;
            *(undefined1 *)((int)puVar6 + 0x5b) = 1;
          }
          if (*(char *)((int)puVar6 + 0x5b) != '\0') {
            iVar12 = *puVar6 - *DAT_01003734;
            if (iVar12 < 1) {
              iVar12 = -iVar12;
            }
            if (iVar12 < 0x1a4) {
              *DAT_01003734 = *puVar6;
            }
          }
        }
        else {
          *(undefined1 *)((int)puVar6 + 0x5b) = 0;
          *(undefined1 *)((int)puVar6 + 0x4f) = 0;
          *puVar6 = 0;
        }
        if (DAT_01003750 < *DAT_01003734) {
          *DAT_01003734 = uVar9 * 0xb7c + *DAT_01003734 >> 3;
        }
        FUN_01001998((int)(short)(sVar4 * ((sVar3 + (sVar1 - sVar4 * sVar5)) - (short)uVar10)));
      }
      if (((short)(ushort)*(byte *)((int)puVar6 + 0x55) < *(short *)((int)puVar6 + 0x3a)) &&
         (*(byte *)((int)puVar6 + 0x55) < 10)) {
        *(char *)((int)puVar6 + 0x55) = *(char *)((int)puVar6 + 0x55) + '\x02';
      }
      else if ((*(short *)((int)puVar6 + 0x3a) < (short)(ushort)*(byte *)((int)puVar6 + 0x55)) &&
              (*(char *)((int)puVar6 + 0x55) != '\0')) {
        *(char *)((int)puVar6 + 0x55) = *(char *)((int)puVar6 + 0x55) + -1;
      }
      if (*(short *)((int)puVar6 + 0x3a) < (short)(ushort)*(byte *)((int)puVar6 + 0x55)) {
        *(ushort *)((int)puVar6 + 0x3a) = (ushort)*(byte *)((int)puVar6 + 0x55);
      }
      *(short *)((int)puVar6 + 0x3a) = sVar4 * *(short *)((int)puVar6 + 0x3a);
      FUN_01002e5c();
      *(undefined1 *)(DAT_0100374c + 0xe) = *(undefined1 *)((int)puVar6 + 0x51);
      *(undefined2 *)(puVar6 + 8) = 0;
      return;
    }
    if (((iVar12 == 0) || ((ushort)puVar6[8] <= *(ushort *)((int)puVar6 + 0x36))) || (bVar8 == 0)) {
      if (*(char *)((int)puVar6 + 0x59) == '\0') {
        *(undefined2 *)(puVar6 + 9) = *(undefined2 *)((int)puVar6 + 0x22);
        return;
      }
      FUN_01004eb4();
      if (*(char *)((int)puVar6 + 0x5d) == '\0') {
        if (*(char *)(DAT_0100374c + 0xb) == *(char *)((int)puVar6 + 0x56)) {
          iVar12 = DAT_01003758 * *(char *)((int)puVar6 + 0x56);
        }
        else {
          iVar12 = -(DAT_01003758 * *(char *)((int)puVar6 + 0x56));
        }
        uVar10 = iVar12 + (uint)*(ushort *)((int)puVar6 + 0x22);
        uVar9 = (uint)*(ushort *)((int)puVar6 + 0x22) - DAT_01003740 * *(char *)((int)puVar6 + 0x56)
        ;
      }
      else {
        uVar10 = ((uint)(ushort)puVar6[0xd] + DAT_01003744) * (int)*(char *)((int)puVar6 + 0x56) +
                 (uint)*(ushort *)((int)puVar6 + 0x22);
        uVar9 = (uint)*(ushort *)((int)puVar6 + 0x22) -
                ((uint)(ushort)puVar6[0xd] + DAT_01003754) * (int)*(char *)((int)puVar6 + 0x56);
      }
      FUN_010028d4(uVar10 & 0xffff,uVar9 & 0xffff);
      if (0xd2 < (ushort)puVar6[8]) {
        *DAT_01003734 = (uint)(ushort)puVar6[8] * 0x1a4;
        return;
      }
    }
    else {
      uVar10 = FUN_01001934(iVar12);
      *(undefined1 *)((int)puVar6 + 0x5d) = 0;
      bVar8 = (char)puVar6[0x15] + 1;
      *(byte *)(puVar6 + 0x15) = bVar8;
      if (bVar8 <= uVar10) {
        return;
      }
      *(char *)((int)puVar6 + 0x57) = (char)extraout_r3;
      *(short *)((int)puVar6 + 0x22) = (short)DAT_01003740 * (extraout_r3 + -1);
      FUN_01002808(iVar12);
    }
    return;
  }
  *(short *)(puVar6 + 9) = (short)puVar6[9] + *(short *)((int)puVar6 + 0x3a);
  if (4 < *(byte *)((int)puVar6 + 0x52)) {
    FUN_01002bb8(bVar8);
    return;
  }
  *(char *)((int)puVar6 + 0x52) = *(char *)((int)puVar6 + 0x52) + '\x01';
  return;
}



// ENTRY 0100375c SIZE 184

void FUN_0100375c(void)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;

  iVar5 = DAT_0100381c;
  iVar4 = DAT_01003818;
  puVar3 = DAT_01003814;
  if ((int)(*DAT_01003814 * 0x1000000) < 0) {
    uVar7 = *(short *)(DAT_0100381c + 0x2a) + 1;
    *(ushort *)(DAT_0100381c + 0x2a) = uVar7;
    if (0x14 < uVar7) {
      bVar2 = *(byte *)(iVar5 + 0x11) | *(byte *)(iVar4 + 0x11) ^ *(byte *)(iVar5 + 0x12);
      *(byte *)(iVar5 + 0x11) = bVar2;
      if (bVar2 == 7) {
        *puVar3 = *puVar3 & 0xffffff7f;
      }
      if (DAT_01003820 < uVar7) {
        *(undefined2 *)(iVar5 + 0x2a) = 0;
        *(undefined1 *)(iVar5 + 0x11) = 0;
      }
    }
  }
  else {
    *(undefined2 *)(DAT_0100381c + 0x2a) = 0;
    *(undefined1 *)(iVar5 + 0x11) = 0;
  }
  *(undefined1 *)(iVar5 + 0x12) = *(undefined1 *)(DAT_01003824 + 0xe);
  iVar6 = DAT_0100382c;
  cVar1 = *(char *)(DAT_0100381c + 0x15);
  if ((-1 < (int)(*DAT_01003828 * 0x20000000)) && (cVar1 == '\0')) {
    if (((*DAT_01003828 & 1) != 0) && (-1 < (int)((uint)*DAT_01003830 << 0x1d))) {
      *(uint *)(DAT_0100382c + 0x20) = *(uint *)(DAT_0100382c + 0x20) | 0x40;
      return;
    }
    *(uint *)(DAT_0100382c + 0x24) = *(uint *)(DAT_0100382c + 0x24) | 0x40;
    return;
  }
  if (*(ushort *)(iVar5 + 0x2c) < 500) {
    *(ushort *)(iVar5 + 0x2c) = *(ushort *)(iVar5 + 0x2c) + 1;
  }
  else {
    if (cVar1 != '\0') {
      *(char *)(iVar5 + 0x15) = cVar1 + -1;
    }
    *(undefined2 *)(iVar5 + 0x2c) = 0;
    if (*(int *)(iVar6 + 0x14) << 0x19 < 0) {
      *(uint *)(iVar6 + 0x24) = *(uint *)(iVar6 + 0x24) | 0x40;
    }
    else {
      *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 0x40;
    }
  }
  if (*(char *)(iVar4 + 0x18) != '\0') {
    *(undefined1 *)(iVar5 + 0x15) = 0x14;
  }
  return;
}



// ENTRY 01003834 SIZE 456

void FUN_01003834(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;

  puVar6 = PTR_DAT_01003a00;
  puVar5 = PTR_DAT_010039fc;
  PTR_DAT_01003a00[10] = PTR_DAT_010039fc[0x16];
  if (puVar5[0x18] == '\0') {
    param_2 = 0;
  }
  else if (*(int *)PTR_DAT_01003a04 != 0) {
    uVar8 = FUN_0100017c(DAT_01003a08,*(int *)PTR_DAT_01003a04,param_3,param_4,param_4);
    param_2 = (uint)uVar8;
  }
  puVar7 = PTR_DAT_01003a0c;
  bVar1 = PTR_DAT_01003a0c[9];
  PTR_DAT_01003a0c[9] = bVar1 + 1;
  sVar9 = FUN_01004f24(PTR_DAT_01003a10,param_2,bVar1 & 7);
  *(short *)(puVar6 + 2) = sVar9;
  cVar2 = puVar6[0xb];
  if (cVar2 != puVar5[0x16]) {
    *(short *)(puVar6 + 2) = -sVar9;
  }
  iVar12 = (int)*(short *)(PTR_DAT_01003a00 + 2) >> 3;
  sVar9 = (short)iVar12;
  *(short *)(PTR_DAT_01003a00 + 4) = sVar9;
  puVar5 = PTR_DAT_01003a14;
  uVar11 = *(uint *)PTR_DAT_01003a14;
  if ((int)(uVar11 << 4) < 0) {
    if (iVar12 < DAT_01003a1c) {
      if ((char)puVar7[0xd] < -99) {
        *(uint *)PTR_DAT_01003a14 = uVar11 & ~DAT_01003a18;
      }
      else {
        puVar7[0xd] = puVar7[0xd] + -1;
      }
    }
  }
  else if (0x358 < iVar12) {
    if ((char)puVar7[0xd] < 'e') {
      *(uint *)PTR_DAT_01003a14 = uVar11 | DAT_01003a18;
    }
    else {
      puVar7[0xd] = puVar7[0xd] + '\x01';
    }
  }
  puVar6 = PTR_DAT_01003a20;
  uVar11 = *(uint *)PTR_DAT_01003a20;
  if (((((int)(uVar11 << 0x10) < 0) || (PTR_DAT_01003a24[0xc] != '\a')) || (iVar12 + 0x6cU < 0xd9))
     || ((((int)((uint)(byte)*PTR_DAT_01003a28 << 0x1d) < 0 ||
          ((int)((uint)(byte)*puVar5 << 0x19) < 0)) ||
         (cVar3 = PTR_DAT_01003a00[10], cVar3 != puVar7[0xc])))) {
    puVar7[8] = 0;
  }
  else if ((byte)puVar7[8] < 0xfa) {
    puVar7[8] = puVar7[8] + 1;
  }
  else {
    *(uint *)PTR_DAT_01003a20 = uVar11 | 0x8000;
    if (cVar3 != cVar2) {
      PTR_DAT_01003a00[0xb] = cVar3;
      *(uint *)puVar6 = uVar11 | 0x8004;
    }
  }
  uVar11 = *(uint *)PTR_DAT_01003a20;
  if (-1 < (int)(uVar11 << 0xf)) {
    sVar4 = *(short *)(PTR_DAT_01003a2c + 2);
    uVar8 = *(short *)(puVar7 + 0x1c) - sVar4;
    *(ushort *)(puVar7 + 0x1c) = uVar8;
    if ((short)uVar8 < 1) {
      uVar8 = -uVar8;
    }
    sVar10 = *(short *)(puVar7 + 0x1e) - sVar9;
    *(short *)(puVar7 + 0x1e) = sVar10;
    if (sVar10 < 1) {
      sVar10 = -sVar10;
    }
    *(short *)(puVar7 + 0x1e) = sVar10;
    if ((((byte)PTR_DAT_01003a24[0xc] < 6) || (sVar4 < 0x509)) ||
       ((0x4f < *(short *)(PTR_DAT_01003a24 + 2) ||
        (((9 < uVar8 || (9 < sVar10)) || ((int)((uint)(byte)*puVar5 << 0x19) < 0)))))) {
      puVar7[10] = 0;
      if (*(short *)(PTR_DAT_01003a24 + 2) < 0x3c) {
        puVar7[0xb] = 0;
      }
      else if ((byte)puVar7[0xb] < 0xfa) {
        puVar7[0xb] = puVar7[0xb] + 1;
      }
      else {
        *(uint *)PTR_DAT_01003a20 = uVar11 | 0x10000;
      }
    }
    else if ((byte)puVar7[10] < 0x32) {
      puVar7[10] = puVar7[10] + 1;
    }
    else {
      uVar8 = FUN_01000190(DAT_01003a30 * iVar12,*(undefined2 *)PTR_DAT_01003a24);
      uVar8 = FUN_01000190(DAT_01003a34 * (uint)uVar8,(int)sVar4);
      *(uint *)PTR_DAT_01003a20 = uVar11 | 0x10000;
      if (uVar8 - 0x1f5 < DAT_01003a1c + 0xe9U) {
        *(ushort *)PTR_DAT_01003a00 = uVar8;
      }
    }
    *(short *)(puVar7 + 0x1e) = sVar9;
    *(short *)(puVar7 + 0x1c) = sVar4;
  }
  puVar7[0xc] = PTR_DAT_01003a00[10];
  return;
}



// ENTRY 01003a38 SIZE 184

void FUN_01003a38(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  puVar2 = PTR_DAT_01003af0;
  uVar6 = 0;
  uVar5 = 0x10;
  do {
    if ((uint)*(ushort *)(PTR_DAT_01003af4 + 10) <
        (uint)*(ushort *)(PTR_DAT_01003af0 + (uVar6 + uVar5) * 2)) {
      uVar6 = uVar6 + uVar5 & 0xffff;
    }
  } while ((uVar6 < 0x18) && (uVar5 = uVar5 >> 1, uVar5 != 0));
  pcVar7 = PTR_DAT_01003af0 + -0x44;
  if (uVar6 < 0x17) {
    if (uVar6 == 0) {
      *(undefined2 *)(PTR_DAT_01003af0 + -0x2c) = 0;
    }
    else {
      sVar4 = FUN_01000190(((uint)*(ushort *)(PTR_DAT_01003af0 + uVar6 * 2) -
                            (uint)*(ushort *)(PTR_DAT_01003af4 + 10) & 0xffff) * 100,
                           (uint)*(ushort *)(PTR_DAT_01003af0 + uVar6 * 2) -
                           (uint)*(ushort *)(PTR_DAT_01003af0 + (uVar6 + 1) * 2));
      *(short *)(puVar2 + -0x2c) = (short)uVar6 * 100 + sVar4;
    }
  }
  else {
    *(short *)(PTR_DAT_01003af0 + -0x2c) = (short)DAT_01003af8;
  }
  puVar3 = PTR_DAT_01003b00;
  uVar5 = (uint)*(ushort *)(puVar2 + -0x2c);
  bVar1 = PTR_DAT_01003af0[-0x44];
  if (uVar5 < DAT_01003afc) {
    if (uVar5 < 0x3e9) {
      if (bVar1 == 0) {
        if (*(short *)(PTR_DAT_01003b04 + 4) == 0) {
          *(uint *)PTR_DAT_01003b00 = *(uint *)PTR_DAT_01003b00 & 0xfffffdff;
        }
      }
      else {
        *pcVar7 = bVar1 - 1;
      }
    }
  }
  else if (bVar1 < 8) {
    *pcVar7 = bVar1 + 1;
  }
  else {
    *(uint *)PTR_DAT_01003b00 = *(uint *)PTR_DAT_01003b00 | 0x200;
  }
  *(uint *)(PTR_DAT_01003af0 + -0x10) =
       *(uint *)(PTR_DAT_01003af0 + -0x10) & 0xfffffff7 | ((*(uint *)puVar3 & 0x3ff) >> 9) << 3;
  return;
}



// ENTRY 01003b08 SIZE 16

void FUN_01003b08(void)

{
  undefined2 *puVar1;

  puVar1 = DAT_01003b18;
  *DAT_01003b18 = 0;
  puVar1[1] = 0;
  puVar1[2] = 2000;
  return;
}



// ENTRY 01003b1c SIZE 122

void FUN_01003b1c(void)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;

  uVar5 = DAT_01003ba0;
  puVar4 = DAT_01003b98;
  uVar2 = *DAT_01003b98;
  uVar6 = (uint)DAT_01003b98[2];
  puVar1 = DAT_01003b98 + 1;
  uVar3 = DAT_01003b98[2] + 1;
  if ((uint)uVar2 < (uint)*DAT_01003b9c) {
    uVar2 = *DAT_01003b9c;
    *DAT_01003b98 = uVar2;
    if ((uint)*puVar1 * 2 < (uint)uVar2) {
      puVar4[2] = 0;
      puVar4[1] = uVar2 >> 1;
      puVar4[4] = uVar2 >> 1;
    }
    else if (uVar6 < uVar5) {
      puVar4[2] = uVar3;
    }
  }
  else if ((uint)*DAT_01003b9c < (uint)*puVar1) {
    uVar7 = *DAT_01003b9c;
    DAT_01003b98[1] = uVar7;
    uVar7 = uVar7 + 0x1d;
    puVar4[4] = uVar7;
    uVar8 = (uint)uVar7 * 2;
    if (uVar8 < uVar2) {
      puVar4[2] = 0;
      *puVar4 = (ushort)uVar8;
    }
    else if (uVar6 < uVar5) {
      puVar4[2] = uVar3;
    }
  }
  else if (uVar6 < DAT_01003ba0) {
    DAT_01003b98[2] = uVar3;
  }
  if (uVar5 <= puVar4[2]) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  puVar4[3] = *puVar4 + puVar4[4];
  return;
}



// ENTRY 01003ba4 SIZE 42

void FUN_01003ba4(void)

{
  uint *puVar1;

  puVar1 = DAT_01003bd0;
  if (((*DAT_01003bd0 & 1) == 0) && (*(short *)(DAT_01003bd4 + 4) == 0)) {
    *DAT_01003bd0 = *DAT_01003bd0 | 1;
    FUN_01003e70();
    FUN_01006640();
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  return;
}



// ENTRY 01003bd8 SIZE 622

void FUN_01003bd8(void)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_r3;
  uint uVar11;
  uint uVar12;
  uint *puVar13;

  puVar3 = PTR_DAT_01003e48;
  iVar10 = *(int *)(PTR_DAT_01003e48 + 0x1c);
  *(int *)(PTR_DAT_01003e48 + 0x1c) = iVar10 + 1;
  puVar5 = PTR_DAT_01003e4c;
  FUN_01004e88(PTR_DAT_01003e54,DAT_01003e50 * *(short *)(PTR_DAT_01003e4c + 2) >> 0xc,iVar10 + 1,
               in_r3,in_r3);
  puVar4 = PTR_DAT_01003e58;
  uVar1 = *(undefined2 *)(puVar3 + 0x10);
  PTR_DAT_01003e58[0x11] = (char)((ushort)uVar1 >> 8);
  puVar4[0x12] = (char)uVar1;
  puVar13 = (uint *)(puVar3 + 0x30);
  if ((byte)puVar5[0xc] < 2) {
    *puVar13 = *puVar13 & 0xfffffff7;
  }
  else {
    *puVar13 = *puVar13 | 8;
  }
  puVar3 = PTR_DAT_01003e60;
  uVar9 = *(uint *)PTR_DAT_01003e5c;
  if ((int)(uVar9 << 0x1c) < 0) {
    uVar6 = (uVar9 & 0xfff) >> 0xb;
  }
  else {
    uVar6 = (*(uint *)PTR_DAT_01003e60 & 0x3f) >> 5;
  }
  uVar7 = *puVar13;
  uVar11 = ((*(uint *)PTR_DAT_01003e60 & 0x1f) >> 4) << 10;
  uVar8 = uVar7 & 0xfffff9ff | uVar6 << 9 | uVar11;
  *puVar13 = uVar8;
  if (((*(uint *)puVar3 & 0xf) >> 2 == 0) && (-1 < *(int *)puVar3 << 0x14)) {
    uVar12 = *(uint *)(PTR_DAT_01003e48 + 0x34) & 0xffffff7f;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_01003e48 + 0x34) | 0x80;
  }
  *(uint *)(PTR_DAT_01003e48 + 0x34) =
       uVar12 & 0xfffff1ff | ((*(uint *)PTR_DAT_01003e60 & 0x7f) >> 6) << 9 |
       ((*(uint *)PTR_DAT_01003e60 & 0x1ff) >> 8) << 10 |
       ((*(uint *)PTR_DAT_01003e60 & 0xff) >> 7) << 0xb;
  puVar5 = PTR_DAT_01003e64;
  puVar3 = PTR_DAT_01003e58;
  uVar12 = *(uint *)PTR_DAT_01003e64;
  if ((int)(uVar12 * 0x20000000) < 0) {
    if ((byte)PTR_DAT_01003e58[-0x11] < 100) {
      *(undefined2 *)(PTR_DAT_01003e48 + 6) = 0;
      *(uint *)puVar5 = uVar12 & 0xfffffffc;
    }
    if ((-1 < (int)((uint)(byte)PTR_DAT_01003e48[0x12] << 0x1e)) &&
       (uVar9 = *(uint *)puVar5, *(uint *)puVar5 = uVar9 & 0xfffffffb,
       -1 < (int)((uVar9 & 0xfffffffb) << 3))) {
      *puVar13 = uVar7 & 0xfffff9fe | uVar6 << 9 | uVar11;
    }
  }
  else if (((int)((uint)(byte)PTR_DAT_01003e48[0x12] << 0x1e) < 0) && (-1 < (int)(uVar9 << 0xc))) {
    PTR_DAT_01003e58[-0x14] = 0;
    *puVar13 = uVar8 | 1;
    *(uint *)puVar5 = uVar12 & 0xfffffffc | 4;
    *(undefined2 *)(PTR_DAT_01003e48 + 6) = 0;
    if ((*(short *)(PTR_DAT_01003e68 + 4) < 0x19) && ((byte)PTR_DAT_01003e4c[0xc] < 2)) {
      FUN_01003e70();
    }
  }
  puVar4 = PTR_DAT_01003e48;
  uVar2 = *(ushort *)(PTR_DAT_01003e48 + 0x12);
  if ((uVar2 & 0xa20) == 0) {
    uVar9 = *(uint *)puVar5 & 0xfffffff7;
  }
  else {
    uVar9 = *(uint *)puVar5 | 8;
  }
  *(uint *)puVar5 = uVar9;
  uVar6 = DAT_01003e6c;
  if ((uVar2 & 0x1c8) == 0) {
    uVar9 = uVar9 & ~DAT_01003e6c;
  }
  else {
    uVar9 = uVar9 | DAT_01003e6c;
  }
  *(uint *)puVar5 = uVar9;
  if ((PTR_DAT_01003e48[0x34] & 1) != 0) {
    *(uint *)puVar5 = uVar9 | uVar6;
  }
  uVar9 = *(uint *)puVar5;
  if ((int)(uVar9 << 0xb) < 0) {
    *(undefined2 *)(puVar4 + 6) = 0;
    *(uint *)PTR_DAT_01003e60 = *(uint *)PTR_DAT_01003e60 & 0xffffefff;
    *(uint *)puVar5 = uVar9 & 0xfffffffc;
  }
  if (PTR_DAT_01003e58[0x37] == '\0') {
    *(undefined2 *)(puVar4 + 6) = 0;
  }
  if ((byte)PTR_DAT_01003e4c[0xc] < 2) {
    if (*(int *)PTR_DAT_01003e60 << 0x13 < 0) {
      *puVar13 = *puVar13 & 0xfffffffe;
    }
    uVar9 = *(uint *)puVar5;
    if (((int)(uVar9 << 0x1d) < 0) && (puVar3[-0x11] == 'd')) {
      if (*(ushort *)(puVar4 + 6) < 600) {
        *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) + 1;
      }
      else if ((*puVar13 & 1) != 0) {
        *puVar13 = *puVar13 & 0xfffffffe;
      }
    }
    else {
      if ((int)((uint)*(ushort *)(PTR_DAT_01003e48 + 0x2c) << 0x13) < 0) {
        if ((-1 < (int)(*puVar13 << 0x1d)) && ((int)(uVar9 << 0x1b) < 0)) {
          if (*(ushort *)(puVar4 + 6) < 0x5a) {
            *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) + 1;
          }
          else {
            *puVar13 = *puVar13 & 0xfffffffe;
            *(uint *)puVar5 = uVar9 | 2;
          }
          goto LAB_01003e34;
        }
      }
      if (*(short *)(PTR_DAT_01003e68 + 4) == 0) {
        if (*(ushort *)(puVar4 + 6) < 0x12c0) {
          *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) + 1;
        }
        else {
          *puVar13 = *puVar13 & 0xfffffffe;
          *(uint *)puVar5 = uVar9 | 2;
        }
        if (((*puVar13 & 1) == 0) && (-1 < (int)((uint)(byte)*puVar5 << 0x1d))) {
          *(short *)(puVar4 + 6) = *(short *)(puVar4 + 6) + 0x50;
        }
      }
      else {
        *(undefined2 *)(puVar4 + 6) = 0;
      }
    }
  }
  else {
    *(undefined2 *)(puVar4 + 6) = 0;
  }
LAB_01003e34:
  if ((*(int *)puVar5 << 0x1e < 0) && (-1 < *(int *)puVar5 << 0x1d)) {
    *(undefined2 *)(puVar4 + 6) = 0;
    FUN_01003ba4();
  }
  return;
}



// ENTRY 01003e70 SIZE 276

void FUN_01003e70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  undefined4 in_r3;
  int iVar13;

  iVar3 = DAT_01003f88;
  iVar2 = DAT_01003f84;
  uVar12 = (uint)*(byte *)(DAT_01003f84 + 0x18) +
           (uint)*(byte *)(DAT_01003f84 + 0x17) * 0x100 +
           (uint)*(byte *)(DAT_01003f84 + 0x16) * 0x10000 +
           (uint)*(byte *)(DAT_01003f84 + 0x15) * 0x1000000;
  iVar13 = *(int *)(DAT_01003f88 + 0x3c);
  if ((iVar13 + 10U < uVar12) && ((int)(*DAT_01003f8c << 0xf) < 0)) {
    iVar8 = *DAT_01003f90 + 1;
    *DAT_01003f90 = (ushort)iVar8;
    pcVar4 = DAT_01003f94;
    *DAT_01003f94 = (char)((uint)iVar8 >> 8);
    pcVar4[1] = (char)iVar8;
    uVar9 = *(undefined4 *)(iVar3 + 0x40);
    pcVar4[8] = (char)((uint)uVar9 >> 0x18);
    pcVar4[9] = (char)((uint)uVar9 >> 0x10);
    pcVar4[10] = (char)((uint)uVar9 >> 8);
    pcVar4[0xb] = (char)uVar9;
    uVar9 = FUN_0100017c(uVar12,10,uVar12,in_r3,in_r3);
    pcVar4[0x10] = (char)((uint)uVar9 >> 0x18);
    pcVar4[0x11] = (char)((uint)uVar9 >> 0x10);
    pcVar4[0x12] = (char)((uint)uVar9 >> 8);
    pcVar4[0x13] = (char)uVar9;
    uVar9 = FUN_0100017c(iVar13,10);
    pcVar4[0xc] = (char)((uint)uVar9 >> 0x18);
    pcVar4[0xd] = (char)((uint)uVar9 >> 0x10);
    pcVar4[0xe] = (char)((uint)uVar9 >> 8);
    pcVar4[0xf] = (char)uVar9;
    iVar13 = DAT_01003f98;
    iVar8 = (uint)*(ushort *)(DAT_01003f98 + 6) * 10;
    pcVar4[0x16] = (char)((uint)iVar8 >> 8);
    pcVar4[0x17] = (char)iVar8;
    iVar13 = (uint)*(ushort *)(iVar13 + 4) * 10;
    pcVar4[0x18] = (char)((uint)iVar13 >> 8);
    pcVar4[0x19] = (char)iVar13;
    pcVar4[0x1a] = *(char *)(iVar2 + 0x1f);
    pcVar4[0x1b] = *(char *)(iVar2 + 0x20);
    pcVar4[0x1c] = *(char *)(iVar2 + 0x1d);
    pcVar4[0x1d] = *(char *)(iVar2 + 0x1e);
    cVar11 = 'i';
    bVar6 = 0;
    pcVar10 = pcVar4;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar11 = cVar1 + cVar11;
      bVar6 = bVar6 + 1;
    } while (bVar6 < 0x1e);
    pcVar4[0x1e] = cVar11;
    pcVar4[0x1f] = '\x16';
    puVar5 = DAT_01003f9c;
    FUN_01002cb0(DAT_01003f9c,0x20,DAT_01003f94);
    uVar7 = *puVar5 * 0x100 + (*puVar5 >> 8);
    if (DAT_01003f90[1] + 1 < (uint)uVar7) {
      DAT_01003f90[1] = uVar7 - 1;
    }
    *(uint *)(iVar3 + 0x3c) =
         (uint)*(byte *)(iVar2 + 0x18) +
         (uint)*(byte *)(iVar2 + 0x17) * 0x100 +
         (uint)*(byte *)(iVar2 + 0x16) * 0x10000 + (uint)*(byte *)(iVar2 + 0x15) * 0x1000000;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *DAT_01003f8c = *DAT_01003f8c & 0xfffcffff;
  }
  return;
}



// ENTRY 01003fa0 SIZE 392

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x01003fec) */
/* WARNING: Removing unreachable block (ram,0x01003fec) */

void FUN_01003fa0(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;

  puVar3 = PTR_DAT_010041bc;
  uVar6 = (ushort)(byte)PTR_DAT_010041bc[0x10] + (ushort)(byte)PTR_DAT_010041bc[0xf] * 0x100;
  uVar7 = (uint)uVar6;
  puVar11 = (uint *)(PTR_DAT_010041c0 + 0x2c);
  puVar10 = PTR_DAT_010041bc + 0x20;
  if (uVar7 != *(ushort *)(PTR_DAT_010041c0 + 8)) {
    uVar9 = *(uint *)PTR_DAT_010041c4;
    uVar8 = *puVar11;
    if (uVar7 == 0xb) {
      *puVar11 = uVar8 & 0xfffff7ff;
    }
    else {
      if (uVar7 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x01003fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if (DAT_01003ff0 <= uVar7) {
          uVar7 = (uint)DAT_01003ff0;
        }
        (*(code *)((uint)*(byte *)(uVar7 + 0x1003ff1) * 2 + 0x1003ff1))();
        return;
      }
      if (uVar7 == 0x12) {
        *puVar11 = uVar8 | 0x10000;
      }
      else if (uVar7 < 0x13) {
        if (uVar7 == 0xc) {
          *puVar11 = uVar8 & 0xfffffffe;
        }
        else if (uVar7 == 0xd) {
          *puVar11 = uVar8 | 1;
        }
        else if (uVar7 == 0x10) {
          *puVar11 = uVar8 | 0x2000;
        }
        else if (uVar7 == 0x11) {
          *puVar11 = uVar8 & 0xffffdfff;
        }
      }
      else if (uVar7 == 0x13) {
        *puVar11 = uVar8 & 0xfffeffff;
      }
      else if (uVar7 == 0x1e) {
        *puVar11 = uVar8 | 0x20000;
        *(uint *)PTR_DAT_010041c4 = uVar9 & 0xf9ffffff | ((byte)puVar3[-0x18] & 3) << 0x19;
      }
      else if (uVar7 == 0x1f) {
        *puVar11 = uVar8 & 0xfffdffff;
        puVar3[-0x18] = ((byte)(uVar9 >> 0x18) & 7) >> 1;
      }
      else if (uVar7 == 0xfb) {
        PTR_DAT_010041bc[-0x18] = 1;
        puVar3[0x3a] = 1;
        *puVar11 = DAT_010041d0;
        puVar3[0x3b] = 1;
        puVar4 = PTR_DAT_010041c0;
        *(undefined4 *)(PTR_DAT_010041c0 + 0x3c) = 0;
        *(undefined4 *)(puVar4 + 0x38) = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x17] = 0;
        puVar3[0x18] = 0;
        puVar5 = DAT_010041d4;
        DAT_010041d4[2] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[3] = 0;
        puVar3[0x35] = 0;
        puVar3[0x36] = 0x28;
        FUN_01001dc8(DAT_010041d8);
        FUN_01001dc8(DAT_010041dc);
      }
    }
    *(ushort *)(PTR_DAT_010041c0 + 8) = uVar6;
  }
  puVar4 = PTR_DAT_010041e0;
  uVar1 = *(undefined2 *)(PTR_DAT_010041e0 + 4);
  puVar3[0x19] = (char)((ushort)uVar1 >> 8);
  puVar3[0x1a] = (char)uVar1;
  sVar2 = *(short *)(puVar4 + 6);
  puVar3[0x1b] = (char)(((int)sVar2 & 0x1ffffU) >> 9);
  puVar3[0x1c] = (char)(((int)sVar2 & 0x1ffffU) >> 1);
  puVar4 = PTR_DAT_010041e0;
  puVar3[0x1d] = (char)((ushort)*(undefined2 *)(PTR_DAT_010041e0 + 0x10) >> 8);
  puVar3[0x1e] = puVar4[0x10];
  puVar3[0x1f] = (char)((ushort)*(undefined2 *)(puVar4 + 0x12) >> 8);
  *puVar10 = puVar4[0x12];
  uVar6 = *(ushort *)PTR_DAT_010041e4;
  puVar3[0x25] = (char)((uint)uVar6 * 0x1c000 >> 0x18);
  puVar3[0x26] = (char)((uint)uVar6 * 0x1c000 >> 0x10);
  if (((byte)puVar3[0x3b] < 4) && (puVar3[0x3a] != '\0')) {
    *puVar11 = *puVar11 & 0xfffffcff | ((byte)puVar3[0x3b] & 3) << 8;
    return;
  }
  *puVar11 = *puVar11 & 0xfffffcff;
  return;
}



// ENTRY 010041e8 SIZE 390

void FUN_010041e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 in_r3;
  uint *puVar12;

  puVar2 = PTR_DAT_0100437c;
  puVar1 = PTR_DAT_01004378;
  iVar7 = (int)*(short *)(DAT_01004370 + 4);
  if (iVar7 < 1) {
    iVar7 = -iVar7;
  }
  uVar8 = DAT_01004374 * iVar7;
  if (PTR_DAT_01004378[0xc] == '\a') {
    iVar7 = *(int *)(PTR_DAT_0100437c + 0x20);
    *(int *)(PTR_DAT_0100437c + 0x20) = iVar7 + 1;
    FUN_01004e88(PTR_DAT_01004380,(int)(short)(uVar8 >> 0x10),iVar7 + 1,in_r3,in_r3);
  }
  puVar12 = (uint *)(PTR_DAT_0100437c + 0x2c);
  if ((((1 < (byte)puVar1[0xc]) && (uVar9 = *puVar12, -1 < (int)(uVar9 << 0x13))) &&
      (*(uint *)(puVar2 + 0x38) = *(int *)(puVar2 + 0x38) + (uVar8 >> 0x10),
      -1 < (int)(uVar9 << 0x11))) &&
     (uVar10 = *(int *)(puVar2 + 0x24) + (uVar8 >> 0x10), *(uint *)(puVar2 + 0x24) = uVar10,
     DAT_01004384 < uVar10)) {
    *puVar12 = uVar9 | 0x4000;
  }
  puVar3 = PTR_DAT_01004388;
  PTR_DAT_01004388[0xd] = (char)(uVar8 >> 0x18);
  puVar3[0xe] = (char)(uVar8 >> 0x10);
  iVar7 = *(short *)(puVar1 + 2) * 0xca;
  puVar3[0x10] = (char)(iVar7 >> 0x14);
  puVar3[0x11] = (char)(iVar7 >> 0xc);
  sVar6 = *(short *)(DAT_01004370 + 4);
  if (sVar6 < 1) {
    sVar6 = -sVar6;
  }
  puVar3[0x12] = (char)((ushort)sVar6 >> 8);
  puVar3[0x13] = (char)sVar6;
  uVar8 = *puVar12;
  puVar3[0x14] = (char)(uVar8 >> 0x18);
  puVar3[0x15] = (char)(uVar8 >> 0x10);
  puVar3[0x16] = (char)(uVar8 >> 8);
  puVar3[0x17] = (char)uVar8;
  uVar9 = *(uint *)(PTR_DAT_0100437c + 0x30);
  puVar3[0x18] = (char)(uVar9 >> 0x18);
  puVar3[0x19] = (char)(uVar9 >> 0x10);
  puVar3[0x1a] = (char)(uVar9 >> 8);
  puVar3[0x1b] = (char)uVar9;
  uVar11 = *(undefined4 *)(PTR_DAT_0100437c + 0x34);
  puVar3[0x1c] = (char)((uint)uVar11 >> 0x18);
  puVar3[0x1d] = (char)((uint)uVar11 >> 0x10);
  puVar3[0x1e] = (char)((uint)uVar11 >> 8);
  puVar3[0x1f] = (char)uVar11;
  uVar5 = FUN_0100017c(*(undefined4 *)(puVar2 + 0x38),0x168);
  puVar1 = PTR_DAT_01004388;
  PTR_DAT_01004388[0x33] = (char)(uVar5 >> 8);
  puVar1[0x34] = (char)uVar5;
  iVar7 = *(int *)(puVar2 + 0x3c) + (uint)uVar5;
  puVar1[0x35] = (char)((uint)iVar7 >> 0x18);
  puVar1[0x36] = (char)((uint)iVar7 >> 0x10);
  puVar1[0x37] = (char)((uint)iVar7 >> 8);
  puVar1[0x38] = (char)iVar7;
  *(uint *)(PTR_DAT_0100437c + 0x30) =
       uVar9 & 0xffffff7f | (((byte)*PTR_DAT_0100438c & 7) >> 2) << 7;
  puVar1 = PTR_DAT_01004388;
  *puVar12 = uVar8 & 0xffffffef | ((byte)PTR_DAT_01004388[0x57] & 1) << 4;
  uVar5 = (ushort)(byte)puVar1[0x6d] + (ushort)(byte)puVar1[0x6c] * 0x100;
  *(ushort *)(puVar2 + 0x14) = uVar5;
  if (uVar5 < 0x17d) {
    if (uVar5 < 0x32) {
      *(undefined2 *)(puVar2 + 0x14) = 0x32;
      puVar1[0x6c] = 0;
      puVar1[0x6d] = 0x32;
    }
  }
  else {
    *(undefined2 *)(puVar2 + 0x14) = 0x17c;
    puVar1[0x6c] = puVar1[0x6a];
    puVar1[0x6d] = puVar1[0x6b];
  }
  iVar7 = FUN_0100017c(*(undefined2 *)(puVar2 + 0x14),10);
  sVar6 = FUN_0100017c(((((uint)(DAT_01004390 * iVar7) >> 0x10) + 6) * 8 - 0x50 & 0xffff) << 10,
                       DAT_01004394);
  *(short *)(puVar2 + 0x16) = sVar6 + 1;
  puVar4 = DAT_01004398;
  uVar5 = (ushort)(byte)puVar1[0x56] + (ushort)(byte)puVar1[0x55] * 0x100;
  if (0x3c < uVar5) {
    puVar1[0x55] = 0;
    puVar1[0x56] = *puVar4;
    return;
  }
  if (uVar5 < 0x1e) {
    *DAT_01004398 = 0x1e;
    return;
  }
  *DAT_01004398 = (char)uVar5;
  return;
}



// ENTRY 0100439c SIZE 456

void FUN_0100439c(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort *puVar8;
  undefined *puVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  char cVar16;
  undefined4 in_r3;
  int iVar17;

  puVar4 = PTR_DAT_01004568;
  puVar3 = PTR_DAT_01004564;
  uVar2 = *(undefined2 *)(PTR_DAT_01004564 + 0x1a);
  PTR_DAT_01004568[1] = (char)((ushort)uVar2 >> 8);
  puVar4[2] = (char)uVar2;
  uVar2 = *(undefined2 *)(puVar3 + 0x18);
  puVar4[3] = (char)((ushort)uVar2 >> 8);
  puVar4[4] = (char)uVar2;
  puVar9 = PTR_DAT_01004590;
  puVar7 = PTR_DAT_01004584;
  puVar6 = PTR_DAT_0100457c;
  puVar4 = PTR_DAT_01004578;
  uVar5 = DAT_01004570;
  uVar14 = (uint)*(ushort *)(puVar3 + 0x12);
  uVar12 = (uint)((int)(uVar14 << 0x14) < 0);
  if ((int)(uVar14 * 0x400000) < 0) {
    uVar12 = uVar12 | 4;
  }
  if ((int)(uVar14 << 0x17) < 0) {
    uVar12 = uVar12 | 8;
  }
  if ((int)(uVar14 << 0x18) < 0) {
    uVar12 = uVar12 | 0x10;
  }
  if ((int)(uVar14 << 0x19) < 0) {
    uVar12 = uVar12 | 0x20;
  }
  if ((int)(uVar14 << 0x1d) < 0) {
    uVar12 = uVar12 | 0x240;
  }
  if ((int)(uVar14 << 0x1b) < 0) {
    uVar12 = uVar12 | 0x80;
  }
  if ((int)(uVar14 << 0x1a) < 0) {
    uVar12 = uVar12 | 0x100;
  }
  if ((int)(uVar14 << 0x1c) < 0) {
    uVar12 = uVar12 | 0x400;
  }
  uVar14 = *(uint *)(PTR_DAT_01004564 + 0x34);
  if ((uVar14 & 1) != 0) {
    uVar12 = uVar12 | 0x800;
  }
  if ((*(uint *)PTR_DAT_0100456c & 3) != 0) {
    uVar12 = uVar12 | 0x1000;
  }
  if ((int)(uVar14 << 0x1a) < 0) {
    uVar12 = uVar12 | 0x2000;
  }
  if ((int)(uVar14 << 0x1b) < 0) {
    uVar12 = uVar12 | 0x4000;
  }
  if ((int)(uVar14 << 0x16) < 0) {
    uVar12 = uVar12 | 0x8000;
  }
  if ((int)(uVar14 << 0x1d) < 0) {
    uVar12 = uVar12 | 0x10000;
  }
  if ((*(int *)(PTR_DAT_01004564 + 0x30) << 0x16 < 0) ||
     (*(int *)(PTR_DAT_01004564 + 0x30) << 0x15 < 0)) {
    uVar12 = uVar12 | DAT_01004570;
  }
  if (*(int *)PTR_DAT_0100456c << 0x11 < 0) {
    uVar12 = uVar12 | 0x80000;
  }
  if ((int)(uVar14 << 0x15) < 0) {
    uVar12 = uVar12 | 0x100000;
  }
  if ((int)(uVar14 << 0x13) < 0) {
    uVar12 = uVar12 | 0x200000;
  }
  if ((int)(uVar14 << 0x14) < 0) {
    uVar12 = uVar12 | 0x400000;
  }
  if ((int)(uVar14 << 0x1c) < 0) {
    uVar12 = uVar12 | 0x800000;
  }
  uVar14 = *(uint *)PTR_DAT_01004578;
  if ((((byte)PTR_DAT_01004574[0xc] < 2) && (*(short *)(PTR_DAT_01004580 + 4) == 0)) &&
     (iVar17 = uVar14 << 0xd, iVar17 < 0)) {
    iVar13 = *(ushort *)(PTR_DAT_01004584 + 4) + 1;
    *(short *)(PTR_DAT_01004584 + 4) = (short)iVar13;
    *puVar6 = (char)((uint)iVar13 >> 8);
    puVar6[1] = (char)iVar13;
    puVar8 = DAT_01004588;
    FUN_01002cb0(DAT_01004588,0x18,puVar6,iVar17,in_r3);
    uVar11 = *puVar8 * 0x100 + (*puVar8 >> 8);
    if (*(ushort *)(puVar7 + 6) + 1 < (uint)uVar11) {
      *(ushort *)(puVar7 + 6) = uVar11 - 1;
    }
    *(uint *)PTR_DAT_01004578 = *(uint *)PTR_DAT_01004578 & ~uVar5;
    *(uint *)PTR_DAT_0100458c = *(uint *)PTR_DAT_0100458c | 4;
  }
  else {
    cVar16 = *PTR_DAT_01004590;
    if (((cVar16 != '\0') && (uVar12 != 0)) && ((*(uint *)(PTR_DAT_01004564 + 0x28) & ~uVar12) != 0)
       ) {
      *(uint *)(PTR_DAT_01004564 + 0x28) = uVar12;
      *(uint *)puVar4 = uVar14 | uVar5;
      puVar6[2] = cVar16;
      puVar6[3] = puVar9[1];
      puVar6[4] = puVar9[2];
      puVar6[5] = puVar9[3];
      puVar6[6] = puVar9[4];
      puVar6[7] = puVar9[5];
      puVar6[8] = (char)(uVar12 >> 0x18);
      puVar6[9] = (char)(uVar12 >> 0x10);
      puVar6[10] = (char)(uVar12 >> 8);
      puVar6[0xb] = (char)uVar12;
      puVar3 = PTR_DAT_01004568;
      puVar6[0x10] = PTR_DAT_01004568[-0x33];
      puVar6[0x11] = puVar3[-0x32];
      puVar6[0x12] = puVar3[-0x30];
      puVar6[0x13] = puVar3[-0x2f];
      puVar6[0x14] = puVar3[-0x31];
      cVar16 = 'k';
      bVar10 = 0;
      pcVar15 = PTR_DAT_0100457c;
      do {
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        cVar16 = cVar1 + cVar16;
        bVar10 = bVar10 + 1;
      } while (bVar10 < 0x16);
      puVar6[0x16] = cVar16;
      puVar6[0x17] = 0x16;
      return;
    }
  }
  return;
}



// ENTRY 01004594 SIZE 48

void FUN_01004594(void)

{
  int iVar1;

  *(uint *)(DAT_010045c4 + 0x30) = *(uint *)(DAT_010045c4 + 0x30) | 0x66;
  iVar1 = DAT_010045c8;
  *(uint *)(DAT_010045c8 + 0x34) = *(uint *)(DAT_010045c8 + 0x34) | DAT_010045cc;
  *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) | DAT_010045d0;
  *DAT_010045d4 = 0xb;
  *DAT_010045d8 = 0xb;
  *DAT_010045dc = 0xb;
  *DAT_010045e0 = 0xb;
  return;
}



// ENTRY 010045e4 SIZE 250

void FUN_010045e4(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;

  puVar1 = DAT_010046e4;
  if (*(int *)(DAT_010046e0 + 4) != 0) {
    *DAT_010046e4 = *DAT_010046e4 & 0xfffffbff;
    iVar2 = DAT_010046e8;
    *(undefined4 *)(DAT_010046e8 + 0x10) = 0x3f;
    iVar3 = DAT_010046ec;
    *(undefined1 *)(DAT_010046ec + 1) = 0;
    uVar4 = DAT_010046f0;
    do {
    } while (*(char *)(iVar3 + 1) == '\0');
    bVar5 = 0;
    do {
      if (bVar5 == 0) {
        *(undefined4 *)(iVar2 + 0x38) = 0x28;
      }
      else if (bVar5 == 1) {
        *(undefined4 *)(iVar2 + 0x38) = 0x22;
      }
      else if (bVar5 == 2) {
        *(undefined4 *)(iVar2 + 0x38) = 10;
      }
      do {
      } while (*(char *)(iVar3 + 1) == '\0');
      *(undefined1 *)(iVar3 + 1) = 0;
      do {
      } while (*(char *)(iVar3 + 1) == '\0');
      if (((uVar4 < *DAT_010046f4) || (uVar4 < *DAT_010046f8)) || (uVar4 < *DAT_010046fc)) {
        *puVar1 = *puVar1 | 0x400;
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < 3);
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    if (-1 < (int)(*puVar1 << 0x15)) {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x3f;
      bVar5 = 0;
      do {
        if (bVar5 == 0) {
          *(undefined4 *)(iVar2 + 0x38) = 0x2b;
        }
        else if (bVar5 == 1) {
          *(undefined4 *)(iVar2 + 0x38) = 0x2e;
        }
        else if (bVar5 == 2) {
          *(undefined4 *)(iVar2 + 0x38) = 0x3a;
        }
        do {
        } while (*(char *)(iVar3 + 1) == '\0');
        *(undefined1 *)(iVar3 + 1) = 0;
        do {
        } while (*(char *)(iVar3 + 1) == '\0');
        if (800 < (int)(short)(*DAT_01004708 - (short)((uint)(DAT_01004704 * *DAT_01004700) >> 0xc))
                  + 400U) {
          *puVar1 = *puVar1 | 0x400;
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 3);
    }
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  return;
}



// ENTRY 0100470c SIZE 254

void FUN_0100470c(void)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  pcVar2 = DAT_01004814;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  if ((*(int *)(DAT_0100480c + 4) != 0) && (uVar6 = *DAT_01004810, -1 < (int)(uVar6 << 0x17))) {
    *DAT_01004814 = '\0';
    iVar5 = DAT_01004818;
    do {
    } while (*pcVar2 == '\0');
    *(uint *)(DAT_01004818 + 0xc) = *(uint *)(DAT_01004818 + 0xc) & 0xffffffc0;
    *DAT_0100481c = *DAT_0100481c & 0xffffffbf;
    *(undefined4 *)(iVar5 + 0x10) = 0x3f;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    iVar5 = DAT_01004820;
    uVar4 = 0;
    do {
      pcVar2 = DAT_01004814;
      DAT_01004814[1] = '\0';
      iVar3 = DAT_01004818;
      do {
      } while (pcVar2[1] == '\0');
      uVar7 = uVar7 + *DAT_01004824;
      uVar8 = uVar8 + *DAT_01004828;
      uVar9 = uVar9 + *DAT_0100482c;
    } while (((*(char *)(iVar5 + 0x18) == '\0') && (-1 < (int)(*DAT_0100481c << 0x19))) &&
            (uVar4 = uVar4 + 1, uVar4 < 0x100));
    *(undefined4 *)(DAT_01004818 + 0x38) = 0x2a;
    *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    iVar5 = DAT_01004830;
    if (0xff < uVar4) {
      uVar4 = (uVar7 & 0xffffff) >> 8;
      *(short *)(DAT_01004830 + 4) = (short)((uVar7 & 0xffffff) >> 8);
      uVar7 = (uVar8 & 0xffffff) >> 8;
      *(short *)(iVar5 + 6) = (short)((uVar8 & 0xffffff) >> 8);
      uVar8 = (uVar9 & 0xffffff) >> 8;
      *(short *)(iVar5 + 8) = (short)((uVar9 & 0xffffff) >> 8);
      puVar1 = DAT_01004810;
      if ((int)(uVar6 << 0x1c) < 0) {
        iVar5 = 0x7a;
      }
      else {
        iVar5 = 0x170;
      }
      uVar9 = iVar5 + DAT_01004834;
      if ((((uVar9 < uVar4) || (uVar4 + iVar5 < DAT_01004834)) ||
          ((uVar9 < uVar7 || ((uVar7 + iVar5 < DAT_01004834 || (uVar9 < uVar8)))))) ||
         (uVar8 + iVar5 < DAT_01004834)) {
        *DAT_0100481c = *DAT_0100481c & 0xfffffff3 | ((*DAT_0100481c & 0xf) >> 2 | 2) << 2;
      }
      else {
        *DAT_01004810 = uVar6 | 1;
      }
      *puVar1 = *puVar1 | 0x100;
    }
  }
  return;
}



// ENTRY 01004838 SIZE 188

void FUN_01004838(void)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;

  puVar1 = DAT_010048f8;
  if (*(int *)(DAT_010048f4 + 4) != 0) {
    uVar5 = *DAT_010048f8;
    *DAT_010048f8 = uVar5 | 0x20;
    iVar2 = DAT_010048fc;
    *(undefined4 *)(DAT_010048fc + 0x10) = 0x3f;
    pcVar3 = DAT_01004900;
    DAT_01004900[1] = '\0';
    do {
    } while (pcVar3[1] == '\0');
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x3f;
    bVar4 = 0;
    do {
      if (bVar4 == 0) {
        *(undefined4 *)(iVar2 + 0x38) = 0x2b;
      }
      else if (bVar4 == 1) {
        *(undefined4 *)(iVar2 + 0x38) = 0x2e;
      }
      else if (bVar4 == 2) {
        *(undefined4 *)(iVar2 + 0x38) = 0x3a;
      }
      *pcVar3 = '\0';
      do {
      } while (*pcVar3 == '\0');
      *pcVar3 = '\0';
      do {
      } while (*pcVar3 == '\0');
      if (0x578 < (int)(short)(*DAT_0100490c - (short)((uint)(DAT_01004908 * *DAT_01004904) >> 0xc))
                  + 700U) {
        *DAT_01004910 = *DAT_01004910 | 0x1000;
        break;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 3);
    *(undefined4 *)(iVar2 + 0x38) = 0x2a;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffc0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    bVar4 = 0;
    do {
      *pcVar3 = '\0';
      do {
      } while (*pcVar3 == '\0');
      bVar4 = bVar4 + 1;
    } while (bVar4 < 3);
    *puVar1 = uVar5 & 0xffffffdf;
  }
  return;
}



// ENTRY 01004914 SIZE 44

void FUN_01004914(void)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = DAT_01004940;
  *(uint *)(DAT_01004940 + 0x30) = *(uint *)(DAT_01004940 + 0x30) | 0xbb000000;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0xb;
  puVar2 = DAT_01004944;
  *DAT_01004944 = 0xf0000;
  puVar2[2] = 0x5b00;
  puVar2[2] = puVar2[2] | 0x23;
  return;
}



// ENTRY 01004948 SIZE 2

void thunk_FUN_01004952(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;

  while (param_3 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1 & 0xff;
  }
  return;
}



// ENTRY 01004952 SIZE 20

void FUN_01004952(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;

  while (param_3 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1 & 0xff;
  }
  return;
}



// ENTRY 01004960 SIZE 804

void FUN_01004960(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined2 *puVar6;
  short *psVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ushort *puVar12;
  ushort uVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30 [24];
  int local_18;

  thunk_FUN_01001f6a(DAT_01004c84,0xf,&local_60);
  puVar6 = DAT_01004c88;
  *DAT_01004c88 = (short)local_60;
  puVar6[1] = (short)local_5c;
  puVar6[2] = (short)local_58;
  puVar6[3] = (short)local_54;
  puVar6[4] = (short)local_50;
  psVar7 = DAT_01004c8c;
  *DAT_01004c8c = (short)local_4c;
  sVar4 = (short)local_48;
  psVar7[1] = sVar4;
  puVar8 = DAT_01004c94;
  local_18 = (int)sVar4;
  if (local_3c == DAT_01004c90) {
    *DAT_01004c98 = *DAT_01004c98 | 1;
    *puVar8 = *puVar8 | 1;
  }
  uVar5 = DAT_01004ca0;
  uVar16 = DAT_01004c9c;
  uVar3 = (undefined2)DAT_01004ca0;
  if ((DAT_01004c9c < (local_60 & 0xffff)) || ((local_60 & 0xffff) + 0x170 < DAT_01004ca0)) {
    *DAT_01004c88 = uVar3;
  }
  puVar6 = DAT_01004c88;
  if ((uVar16 < (local_5c & 0xffff)) || ((local_5c & 0xffff) + 0x170 < uVar5)) {
    DAT_01004c88[1] = uVar3;
  }
  uVar5 = DAT_01004ca8;
  uVar16 = DAT_01004ca4;
  uVar3 = (undefined2)DAT_01004ca8;
  if ((DAT_01004ca4 < (local_58 & 0xffff)) || ((local_58 & 0xffff) + 0x170 < DAT_01004ca8)) {
    puVar6[2] = uVar3;
  }
  if ((uVar16 < (local_54 & 0xffff)) || ((local_54 & 0xffff) + 0x170 < uVar5)) {
    puVar6[3] = uVar3;
  }
  if ((uVar16 < (local_50 & 0xffff)) || ((local_50 & 0xffff) + 0x170 < uVar5)) {
    puVar6[4] = uVar3;
  }
  iVar9 = DAT_01004cac;
  psVar7 = DAT_01004c8c;
  uVar16 = DAT_01004ca4 + 0x21;
  if (uVar16 <= (uint)((short)local_4c + DAT_01004cac)) {
    *DAT_01004c8c = 0x1000;
  }
  if (uVar16 <= (uint)(sVar4 + iVar9)) {
    psVar7[1] = 0x1000;
  }
  iVar9 = DAT_01004cb0;
  puVar17 = DAT_01004cb4;
  if ((local_38 != 0xffffffff) && (local_34 != 0xffffffff)) {
    puVar17 = &local_38;
  }
  uVar16 = 0;
  do {
    uVar5 = *puVar17;
    puVar17 = (uint *)((int)puVar17 + 1);
    *(char *)(iVar9 + uVar16 + 9) = (char)uVar5;
    puVar11 = DAT_01004cb4;
    iVar10 = DAT_01004cb0;
    uVar16 = uVar16 + 1 & 0xffff;
  } while (uVar16 < 8);
  *(undefined1 *)(DAT_01004cb0 + 0xc) = *(undefined1 *)((int)DAT_01004cb4 + 3);
  *(char *)(iVar10 + 0xd) = (char)puVar11[1];
  local_30._0_2_ = local_30._1_2_;
  thunk_FUN_01001f6a(DAT_01004cb8,0x11,&local_60);
  puVar6 = DAT_01004c88;
  puVar14 = DAT_01004c88 + 5;
  *(undefined1 *)(DAT_01004c88 + 0xd) = 0;
  if ((local_5c & 3) == 0) {
    *(undefined1 *)((int)puVar6 + 0x15) = 0xff;
  }
  else if ((local_5c & 3) == 1) {
    *(undefined1 *)((int)puVar6 + 0x15) = 1;
  }
  else {
    *(undefined1 *)((int)puVar6 + 0x15) = 1;
  }
  *(undefined1 *)(puVar6 + 0xb) = 1;
  *(undefined1 *)((int)puVar6 + 0x17) = 0;
  puVar6[8] = 0x8000;
  if (local_58 == 0xffffffff) {
    puVar6[9] = 0;
  }
  else {
    puVar6[9] = (short)local_58;
  }
  *puVar14 = (short)local_54;
  if (DAT_01004cbc <= (local_54 & 0xffff) - 500) {
    *puVar14 = 0x354;
  }
  *(undefined1 *)((int)puVar6 + 0x19) = 0x28;
  if (local_50 == 0xffffffff) {
    *DAT_01004cc0 = 0;
  }
  else {
    *DAT_01004cc0 = (short)local_50;
  }
  if (local_4c == -1) {
    *DAT_01004cc4 = 0;
  }
  else {
    *DAT_01004cc4 = local_4c;
  }
  iVar9 = DAT_01004cb0;
  puVar15 = (undefined1 *)(DAT_01004cb0 + 0x20);
  if (local_48 == 0xffffffff) {
    *(undefined1 *)(DAT_01004cb0 + 0x72) = 1;
    *(undefined1 *)(iVar9 + 0x7b) = 1;
    *(undefined1 *)(iVar9 + 0x28) = 1;
    *(undefined1 *)(iVar9 + 0x7a) = 1;
  }
  else {
    uVar16 = local_48 & 0xf;
    *(char *)(DAT_01004cb0 + 0x28) = (char)uVar16;
    if ((uVar16 != 2) && (uVar16 != 10)) {
      *(undefined1 *)(iVar9 + 0x28) = 1;
    }
    *(char *)(iVar9 + 0x7b) = (char)((local_48 & 0x3ff) >> 8);
    if ((local_48 & 0x3ff) >> 8 != 0) {
      *(undefined1 *)(iVar9 + 0x7a) = 1;
    }
    uVar16 = (local_48 & 0x7ffff) >> 0x10;
    *(char *)(iVar9 + 0x72) = (char)((local_48 & 0x7ffff) >> 0x10);
    if ((5 < uVar16) || (uVar16 == 0)) {
      *(undefined1 *)(iVar9 + 0x72) = 1;
    }
  }
  puVar17 = DAT_01004cc8;
  if (local_44 == 0xffffffff) {
    *DAT_01004cc8 = DAT_01004cd4;
  }
  else {
    *DAT_01004cc8 = local_44;
  }
  *puVar17 = *puVar17 | 0x40000;
  if (local_40 == -1) {
    *(undefined1 *)(iVar9 + 0x76) = 0x28;
    *(undefined1 *)(iVar9 + 0x75) = 0;
  }
  else {
    *(char *)(iVar9 + 0x76) = (char)local_40;
    *(char *)(iVar9 + 0x75) = (char)((uint)local_40 >> 8);
  }
  puVar12 = DAT_01004ccc;
  DAT_01004ccc[2] = (ushort)local_38;
  puVar12[3] = (ushort)(local_38 >> 0x10);
  *puVar12 = (ushort)local_34;
  puVar12[1] = (ushort)(local_34 >> 0x10);
  if ((local_38 & 0xffff) == DAT_01004cd0) {
    puVar12[2] = 0;
  }
  if (local_38 >> 0x10 == DAT_01004cd0) {
    puVar12[3] = 0;
  }
  uVar1 = puVar12[2];
  if ((uint)uVar1 < (uint)puVar12[3]) {
    puVar12[3] = uVar1;
  }
  uVar16 = DAT_01004cd0;
  if ((local_34 & 0xffff) == DAT_01004cd0) {
    *puVar12 = 0;
  }
  if (local_34 >> 0x10 == uVar16) {
    puVar12[1] = 0;
  }
  uVar13 = *puVar12;
  if ((uint)uVar13 < (uint)puVar12[1]) {
    puVar12[1] = uVar13;
  }
  uVar2 = puVar12[3];
  if ((uint)uVar1 == (uint)uVar2) {
    *puVar8 = *puVar8 & 0xffffefff;
  }
  else {
    *puVar8 = *puVar8 | 0x1000;
  }
  uVar1 = puVar12[1];
  if ((uint)uVar13 == (uint)uVar1) {
    *puVar8 = *puVar8 & 0xfffff7ff;
  }
  else {
    *puVar8 = *puVar8 | 0x800;
  }
  iVar9 = DAT_01004cb0;
  *(char *)(DAT_01004cb0 + 0x11) = (char)local_30._4_4_;
  *(char *)(iVar9 + 0x12) = SUB41(local_30._4_4_,1);
  *(char *)(iVar9 + 0x13) = SUB41(local_30._4_4_,2);
  *(char *)(iVar9 + 0x14) = SUB41(local_30._4_4_,3);
  *(char *)(iVar9 + 0x15) = (char)local_30._8_4_;
  *(char *)(iVar9 + 0x16) = SUB41(local_30._8_4_,1);
  *(char *)(iVar9 + 0x17) = SUB41(local_30._8_4_,2);
  *(char *)(iVar9 + 0x18) = SUB41(local_30._8_4_,3);
  *(char *)(iVar9 + 0x19) = (char)local_30._12_4_;
  *(char *)(iVar9 + 0x1a) = SUB41(local_30._12_4_,1);
  *(char *)(iVar9 + 0x1b) = SUB41(local_30._12_4_,2);
  *(char *)(iVar9 + 0x1c) = SUB41(local_30._12_4_,3);
  *(char *)(iVar9 + 0x1d) = (char)local_30._16_4_;
  *(char *)(iVar9 + 0x1e) = SUB41(local_30._16_4_,1);
  *(char *)(iVar9 + 0x1f) = SUB41(local_30._16_4_,2);
  *puVar15 = SUB41(local_30._16_4_,3);
  uVar13 = *DAT_01004cd8 * 0x100 + (*DAT_01004cd8 >> 8);
  if ((uVar13 != uVar16) && ((uint)uVar2 < (uint)uVar13)) {
    puVar12[3] = uVar13 - 1;
  }
  uVar13 = *DAT_01004cdc * 0x100 + (*DAT_01004cdc >> 8);
  if ((uVar13 != uVar16) && ((uint)uVar1 < (uint)uVar13)) {
    puVar12[1] = uVar13 - 1;
  }
  iVar9 = DAT_01004cb0;
  *(char *)(DAT_01004cb0 + 0x8d) = (char)local_30._0_2_;
  *(char *)(iVar9 + 0x8c) = SUB21(local_30._0_2_,1);
  return;
}



// ENTRY 01004ce0 SIZE 304

void FUN_01004ce0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_r3;
  undefined1 *extraout_r3;
  undefined1 *puVar11;

  puVar4 = PTR_DAT_01004e20;
  puVar3 = PTR_DAT_01004e1c;
  puVar2 = PTR_DAT_01004e18;
  puVar1 = PTR_DAT_01004e14;
  if (*PTR_DAT_01004e10 != 0) {
    puVar11 = PTR_DAT_01004e10;
    if (9 < (byte)*PTR_DAT_01004e10) {
      iVar9 = (int)*(short *)(PTR_DAT_01004e14 + 4);
      if (iVar9 < 1) {
        iVar9 = -iVar9;
      }
      uVar7 = FUN_01001968(DAT_01004e24 * iVar9,*(undefined2 *)PTR_DAT_01004e14,DAT_01004e24,
                           PTR_DAT_01004e10,in_r3);
      uVar7 = FUN_01001968(DAT_01004e28 * (uint)uVar7,(uint)*(ushort *)puVar3 * 3);
      uVar10 = DAT_01004e2c * (uVar7 - 0x59);
      *(short *)(puVar2 + 6) = (short)(uVar10 >> 0x10);
      sVar8 = FUN_01001968(uVar10 >> 0x10,3);
      *(short *)(puVar2 + 2) = sVar8;
      *(short *)puVar2 = sVar8 << 1;
      *(short *)(puVar2 + 8) = sVar8;
      puVar11 = extraout_r3;
    }
    puVar5 = DAT_01004e34;
    DAT_01004e34[7] = DAT_01004e30;
    puVar6 = DAT_01004e34;
    DAT_01004e34[-0xd] = (DAT_01004e34[-0xd] & 0xffff9fff) + 0x2000;
    puVar6[-2] = 0x2a;
    puVar6[-0xd] = puVar6[-0xd] & 0xffffffc0;
    puVar6[-0xc] = 0;
    puVar6[-6] = 0x400;
    *puVar5 = 0;
    *(undefined4 *)(DAT_01004e38 + 0x14) = 0;
    *puVar5 = 0;
    *puVar11 = 0;
    *puVar4 = 0;
    iVar9 = DAT_01004e3c;
    *(undefined2 *)(DAT_01004e3c + 6) = 0;
    *(undefined2 *)(iVar9 + 4) = 0;
    puVar1 = PTR_DAT_01004e40;
    *(undefined2 *)(PTR_DAT_01004e40 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 0x10) = 0;
    *(undefined2 *)(iVar9 + 2) = 0;
    return;
  }
  FUN_010007d4();
  if (-1 < (int)((uint)(byte)*PTR_DAT_01004e44 << 0x1a)) {
    FUN_01003b1c();
  }
  if (((*(int *)PTR_DAT_01004e48 == 0) && (*(short *)(PTR_DAT_01004e4c + 10) != 0)) &&
     (0x37 < (byte)*puVar4)) {
    if ((int)((uint)(byte)*PTR_DAT_01004e50 << 0x1d) < 0) {
      sVar8 = 0;
    }
    else if (((*(ushort *)(PTR_DAT_01004e54 + 0x20) < DAT_01004e58) && (*(short *)puVar3 != 0)) &&
            (puVar1[0xb] == PTR_DAT_01004e54[0x56])) {
      uVar10 = (uint)*(ushort *)(puVar2 + 6) * (DAT_01004e58 - 10) >> 10;
      if (0x59 < *(ushort *)(puVar2 + 6)) {
        uVar10 = uVar10 + 0x59 & 0xffff;
      }
      sVar8 = FUN_01001968((DAT_01004e24 + -0x20) * uVar10);
    }
    else {
      sVar8 = 0;
    }
    *(short *)(puVar2 + 10) = sVar8;
    *DAT_01004e5c = (int)sVar8 << 10;
    puVar3[0xc] = 7;
  }
  else if ((byte)*puVar4 < 0xfa) {
    *puVar4 = *puVar4 + 1;
    return;
  }
  return;
}



// ENTRY 01004e60 SIZE 34

ushort * FUN_01004e60(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;

  while( true ) {
    uVar1 = *param_1;
    if (uVar1 == DAT_01004e84) {
      return (ushort *)0x0;
    }
    if (((uint)uVar1 * 0x100 + (uint)(uVar1 >> 8) & 0xffff) == param_2) break;
    param_1 = (ushort *)((param_3 & 0xfffffffe) + (int)param_1);
  }
  return param_1;
}



// ENTRY 01004e88 SIZE 42

void FUN_01004e88(int *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;

  iVar2 = *param_1;
  *param_1 = iVar2 + param_2;
  if ((short)param_1[1] < param_2) {
    *(short *)(param_1 + 1) = (short)param_2;
  }
  else if (param_2 < (short)param_1[2]) {
    *(short *)(param_1 + 2) = (short)param_2;
  }
  uVar1 = FUN_01000190(iVar2 + param_2,param_3);
  *(undefined2 *)((int)param_1 + 6) = uVar1;
  return;
}



// ENTRY 01004eb4 SIZE 94

void FUN_01004eb4(void)

{
  int iVar1;

  iVar1 = DAT_01004f14;
  *(undefined1 *)(DAT_01004f14 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(short *)(iVar1 + -0x1c) = *(short *)(iVar1 + -0x1c) + *(short *)(iVar1 + -6);
  if (*(ushort *)(iVar1 + -8) < *(ushort *)(iVar1 + -0x20)) {
    *(undefined1 *)(iVar1 + 0x1d) = 0;
  }
  if (*(char *)(DAT_01004f18 + 0xc) == '\a') {
    if (((*(char *)(iVar1 + 0xc) != '\0') &&
        (*(char *)(DAT_01004f20 + 0xb) != *(char *)(iVar1 + 0x16))) &&
       (2000 < *(ushort *)(iVar1 + -0x20))) {
      *(short *)(iVar1 + -0x20) = *(short *)(iVar1 + -0x20) + 5;
      return;
    }
  }
  else if (DAT_01004f1c < *(ushort *)(iVar1 + -0x20)) {
    *(short *)(iVar1 + -0x20) = *(short *)(iVar1 + -0x20) + 3;
  }
  return;
}



// ENTRY 01004f24 SIZE 30

uint FUN_01004f24(uint *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 - (uint)*(ushort *)((int)param_1 + param_3 * 2 + 4);
  *(short *)((int)param_1 + param_3 * 2 + 4) = (short)param_2;
  return (*param_1 & 0x7ffff) >> 3;
}



// ENTRY 01004f44 SIZE 28

void FUN_01004f44(void)

{
  if ((*DAT_01004f60 & 1) == 0) {
    if ((int)(*DAT_01004f60 << 0x1d) < 0) {
      FUN_01006640();
      return;
    }
  }
  else {
    FUN_01001e28(0);
  }
  return;
}



// ENTRY 01004f64 SIZE 458

undefined4 FUN_01004f64(undefined1 *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;

  puVar7 = DAT_01005148;
  puVar5 = DAT_01005138;
  cVar9 = 'h';
  bVar4 = (byte)param_4;
  uVar10 = *DAT_01005130;
  uVar3 = (undefined1)param_2;
  uVar2 = (undefined1)(param_2 >> 8);
  if (param_5 == 0) {
    if (-1 < (int)(uVar10 << 0x12)) {
      *DAT_01005148 = 0x68;
      puVar7[1] = bVar4;
      puVar7[2] = ~bVar4;
      puVar7[3] = 0x68;
      puVar7[4] = (char)param_3;
      if ((param_3 < 0x91) || ((param_4 != 0x31 && (param_4 != 0x32)))) {
        puVar7[5] = uVar3;
        uVar11 = 1;
        do {
          cVar9 = puVar7[uVar11] + cVar9;
          uVar11 = uVar11 + 1 & 0xffff;
        } while (uVar11 < 6);
      }
      else {
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        uVar11 = 1;
        cVar9 = 'h';
        do {
          cVar9 = puVar7[uVar11] + cVar9;
          uVar11 = uVar11 + 1 & 0xffff;
        } while (uVar11 < 7);
      }
      while (param_2 != 0) {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar7[uVar11] = uVar2;
        puVar7[uVar11] = puVar7[uVar11] + '3';
        pcVar1 = puVar7 + uVar11;
        uVar11 = uVar11 + 1 & 0xffff;
        cVar9 = *pcVar1 + cVar9;
        param_2 = param_2 - 1 & 0xffff;
      }
      uVar8 = uVar11 + 1 & 0xffff;
      puVar7[uVar11] = cVar9;
      puVar7[uVar8] = 0x16;
      iVar6 = DAT_01005140;
      *(uint *)(DAT_01005140 + -0xa0) = *(uint *)(DAT_01005140 + -0xa0) & 0xfffffffe;
      *(uint *)(iVar6 + -0x9c) = uVar8 + 1 & 0xffff;
      *(uint *)(iVar6 + -0xa8) = *(uint *)(iVar6 + -0xa8) | 1;
      *(uint *)(iVar6 + -0xa0) = *(uint *)(iVar6 + -0xa0) | 1;
      *DAT_0100514c = *DAT_0100514c | 0x100000;
      *DAT_01005130 = uVar10 | 0x2000;
      iVar6 = DAT_0100513c;
      *(undefined2 *)(DAT_0100513c + 0x16) = 0;
      *(undefined1 *)(iVar6 + 7) = 0;
      return 1;
    }
  }
  else {
    uVar11 = *DAT_01005134;
    if (-1 < (int)(uVar11 << 0x11)) {
      *DAT_01005138 = 0x68;
      puVar5[1] = bVar4;
      puVar5[2] = ~bVar4;
      puVar5[3] = 0x68;
      puVar5[4] = (char)param_3;
      if (param_3 < 0x10) {
        puVar5[5] = uVar3;
        uVar8 = 1;
        do {
          cVar9 = puVar5[uVar8] + cVar9;
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 6);
      }
      else {
        puVar5[5] = uVar2;
        puVar5[6] = uVar3;
        uVar8 = 1;
        cVar9 = 'h';
        do {
          cVar9 = puVar5[uVar8] + cVar9;
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 7);
      }
      while (param_2 != 0) {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar5[uVar8] = uVar2;
        puVar5[uVar8] = puVar5[uVar8] + '3';
        pcVar1 = puVar5 + uVar8;
        uVar8 = uVar8 + 1 & 0xffff;
        cVar9 = *pcVar1 + cVar9;
        param_2 = param_2 - 1 & 0xffff;
      }
      if ((((puVar5[4] == '\x03') && (puVar5[5] == '\x03')) && (puVar5[6] == '\x10')) &&
         ((puVar5[7] == 'U' && (puVar5[8] == 'U')))) {
        *DAT_01005130 = uVar10 | 0x100000;
        *(undefined2 *)(DAT_0100513c + 0x14) = 0;
      }
      uVar10 = uVar8 + 1 & 0xffff;
      puVar5[uVar8] = cVar9;
      puVar5[uVar10] = 0x16;
      iVar6 = DAT_01005140;
      *(uint *)(DAT_01005140 + 0x20) = *(uint *)(DAT_01005140 + 0x20) & 0xfffffffe;
      *(uint *)(iVar6 + 0x24) = uVar10 + 1 & 0xffff;
      *(uint *)(DAT_01005140 + -0xa8) = *(uint *)(DAT_01005140 + -0xa8) | 0x40;
      *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 1;
      *DAT_01005144 = *DAT_01005144 | 0x100000;
      *DAT_01005134 = uVar11 | 0x4000;
      iVar6 = DAT_0100513c;
      *(undefined2 *)(DAT_0100513c + 0x18) = 0;
      *(undefined1 *)(iVar6 + 8) = 0;
      return 1;
    }
  }
  return 0;
}



// ENTRY 0100515c SIZE 326

void FUN_0100515c(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  *(short *)PTR_DAT_010052a8 = (short)DAT_010052a4;
  if ((int)((uint)*(ushort *)PTR_DAT_010052ac << 0x14) < 0) {
    FUN_01006898(1,0x50,PTR_DAT_010052b0);
  }
  else {
    FUN_010068b4(0x28,(int)(short)param_1,PTR_DAT_010052b0);
  }
  if (2 < *(short *)(PTR_DAT_010052b4 + 2)) {
    FUN_01006898(0x2d,(int)(short)param_1,PTR_DAT_010052b0);
  }
  sVar1 = *(short *)PTR_DAT_010052b0;
  iVar7 = (int)sVar1 - (int)*(short *)(PTR_DAT_010052b8 + 2);
  iVar8 = iVar7 * 0xfa;
  iVar5 = DAT_010052bc;
  if ((iVar8 - DAT_010052bc == 0 || iVar8 < DAT_010052bc) && (iVar5 = iVar8, iVar8 < -DAT_010052bc))
  {
    iVar5 = -DAT_010052bc;
  }
  iVar9 = *(int *)(DAT_010052c0 + 0x38);
  iVar3 = iVar9 + iVar5 >> 10;
  iVar4 = (int)*(short *)(PTR_DAT_010052b4 + 2);
  iVar8 = iVar4;
  if (iVar4 < 0x14) {
    iVar8 = 0x14;
  }
  iVar6 = *(short *)(PTR_DAT_010052b0 + 6) + 0x19;
  if ((iVar3 <= iVar6) &&
     (iVar8 = *(short *)(PTR_DAT_010052b0 + 6) - iVar8, iVar6 = iVar3, iVar3 < iVar8)) {
    iVar6 = iVar8;
  }
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  iVar10 = (int)(short)iVar6;
  *(short *)(PTR_DAT_010052a8 + 10) = (short)iVar6;
  iVar8 = FUN_0100017c(DAT_010052c4,*(undefined2 *)PTR_DAT_010052b4);
  iVar3 = FUN_0100017c(iVar8 * param_1,*(undefined2 *)PTR_DAT_010052b8);
  iVar8 = DAT_010052c0;
  if (iVar4 < 0x3c) {
LAB_01005232:
    if (iVar10 < iVar3 >> 3) {
      iVar3 = iVar7;
      if (iVar7 < 1) {
        iVar3 = -iVar7;
      }
      if (0x28 < iVar3) {
        *(int *)(DAT_010052c0 + 0x38) = iVar7 * 10 + iVar9;
        goto LAB_01005276;
      }
    }
  }
  else {
    iVar4 = iVar7;
    if (iVar7 < 1) {
      iVar4 = -iVar7;
    }
    if (0x1e0 < iVar4) goto LAB_01005232;
  }
  if (sVar1 < 0x17c1) {
    bVar2 = *(char *)(DAT_010052c0 + 4) + 1;
    *(byte *)(DAT_010052c0 + 4) = bVar2;
    if ((bVar2 & 1) != 0) {
      *(int *)(iVar8 + 0x38) = iVar9 + iVar7;
    }
  }
  else {
    *(int *)(DAT_010052c0 + 0x38) = iVar7 * 0x14 + iVar9;
  }
LAB_01005276:
  iVar7 = DAT_010052c0;
  iVar8 = (iVar10 + 0x19) * 0x400;
  if (iVar8 < *(int *)(DAT_010052c0 + 0x38)) {
    *(int *)(DAT_010052c0 + 0x38) = iVar8;
  }
  else {
    iVar5 = (iVar10 + -0x23) * 0x400 - iVar5;
    if (*(int *)(DAT_010052c0 + 0x38) < iVar5) {
      *(int *)(DAT_010052c0 + 0x38) = iVar5;
    }
  }
  if (*(int *)(iVar7 + 0x38) < 0x400) {
    *(undefined4 *)(iVar7 + 0x38) = 0x400;
  }
  return;
}



// ENTRY 010052e0 SIZE 96

void FUN_010052e0(undefined2 param_1)

{
  int iVar1;

  iVar1 = DAT_01005340;
  *(undefined1 *)(DAT_01005340 + 0x18) = 1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  if (*(char *)(DAT_01005344 + 0xb) == *(char *)(iVar1 + 0x16)) {
    *(undefined1 *)(iVar1 + 0x1d) = 1;
    *(undefined2 *)(iVar1 + -6) = 0x14;
  }
  else {
    *(undefined1 *)(iVar1 + 0x1d) = 0;
    *(undefined2 *)(iVar1 + -6) = 0xb;
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    *(undefined2 *)(iVar1 + -0x1c) = param_1;
  }
  if (*(ushort *)(iVar1 + -0x20) < DAT_01005348) {
    *(undefined2 *)(iVar1 + -10) = 10;
  }
  else {
    *(undefined2 *)(iVar1 + -10) = 0x1e;
  }
  iVar1 = DAT_0100534c;
  *(uint *)(DAT_0100534c + 8) = *(uint *)(DAT_0100534c + 8) | 4;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x1000000;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffb;
  return;
}



// ENTRY 01005350 SIZE 474

void FUN_01005350(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  puVar4 = PTR_DAT_01005544;
  puVar3 = PTR_DAT_01005534;
  puVar2 = PTR_DAT_01005530;
  puVar5 = PTR_DAT_01005530 + 10;
  if (*(int *)PTR_DAT_0100552c == 0) {
    iVar7 = (int)*(short *)(PTR_DAT_0100553c + DAT_01005548);
    uVar6 = *(uint *)PTR_DAT_01005544;
    if (((int)(uVar6 << 0x1c) < 0) || (-1 < (int)(*(uint *)PTR_DAT_0100554c << 0x19))) {
      if ((int)(uVar6 << 0xc) < 0) {
        *(uint *)PTR_DAT_01005544 = uVar6 & 0xfff7ffff;
      }
      else {
        uVar8 = *(uint *)PTR_DAT_01005538;
        if (((((*(uint *)PTR_DAT_0100554c & 0x1f) == 0) &&
             (-1 < (int)((uint)*(ushort *)PTR_DAT_01005558 << 0x13))) && ((uVar8 & 1) != 0)) &&
           (((iVar9 = *(int *)PTR_DAT_0100555c, -1 < iVar9 << 0x1a || (-1 < iVar9 << 0x19)) &&
            (-1 < iVar9 << 0x13)))) {
          if ((int)(uVar6 << 0x1c) < 0) {
            FUN_010055e4();
          }
          else {
            if (*(short *)(PTR_DAT_01005534 + 0x16) == 0) {
              if (((iVar7 + 0xe5U < 0x1cb) && ((byte)PTR_DAT_01005550[0xc] < 2)) &&
                 (*(short *)(PTR_DAT_01005530 + 4) != 0)) {
                FUN_01004838();
                goto LAB_010054cc;
              }
            }
            FUN_01005560();
          }
        }
        else {
          *(undefined2 *)(PTR_DAT_01005530 + 2) = 0;
          *(uint *)PTR_DAT_01005538 = uVar8 & 0xfffffeff;
          FUN_01006898(0x23,0,puVar5);
          FUN_010068b4(0x23,0,puVar5);
          *(undefined2 *)PTR_DAT_01005540 = *(undefined2 *)(PTR_DAT_0100553c + 2);
          *(int *)(puVar3 + 0x38) = (int)*(short *)(PTR_DAT_01005554 + 2) << 10;
          *(uint *)PTR_DAT_01005544 = *(uint *)PTR_DAT_01005544 | 0x400;
        }
      }
    }
    else {
      if ((int)(uVar6 << 0xc) < 0) {
        if (iVar7 < 0x3c) {
          *(undefined2 *)(PTR_DAT_01005530 + 2) = 0;
        }
        if (*(short *)(puVar2 + 2) == 0) {
          FUN_01006898(10,0,puVar5);
        }
      }
      else if (iVar7 < 0x79) {
        if (5 < (byte)PTR_DAT_01005550[0xc]) {
          *(undefined2 *)(PTR_DAT_01005530 + 2) = 0;
          FUN_01006898(0x2d,0,puVar5);
        }
      }
      else {
        *(undefined2 *)(PTR_DAT_01005530 + 2) = 10;
        *(undefined2 *)(puVar2 + 10) = 10;
        *(uint *)puVar4 = uVar6 | 0x80000;
      }
      *(undefined2 *)PTR_DAT_01005540 = *(undefined2 *)(PTR_DAT_0100553c + 2);
      *(int *)(puVar3 + 0x38) = (int)*(short *)(PTR_DAT_01005554 + 2) << 10;
      *(uint *)puVar4 = *(uint *)puVar4 | 0x400;
    }
  }
  else {
    if (*(int *)PTR_DAT_0100552c << 0x12 < 0) {
      FUN_01006898(5,0,puVar5);
      FUN_010068b4(5,0,puVar5);
    }
    else {
      FUN_01006898(0x28,0,puVar5);
      FUN_010068b4(0x28,0,puVar5);
    }
    *(undefined2 *)(puVar2 + 2) = 0;
    *(uint *)PTR_DAT_01005538 = *(uint *)PTR_DAT_01005538 & 0xfffffeff;
    *(undefined2 *)PTR_DAT_01005540 = *(undefined2 *)(PTR_DAT_0100553c + 2);
  }
LAB_010054cc:
  *(undefined2 *)(puVar3 + 0x16) = *(undefined2 *)(puVar2 + 4);
  if (*(short *)(puVar2 + 2) == 0) {
    bVar1 = puVar3[5];
    if (bVar1 < 200) {
      puVar3[5] = bVar1 + 1;
      if ((int)*(short *)(PTR_DAT_01005550 + 2) + 1U < 3) {
        puVar3[5] = bVar1 + 2;
      }
      if (*(short *)(PTR_DAT_01005540 + 0xc) < 0) {
        puVar3[5] = puVar3[5] + '\x03';
      }
    }
  }
  else {
    puVar3[5] = 0;
  }
  if (((1 < (byte)PTR_DAT_01005550[0xc]) && (*(short *)(puVar2 + 10) == 0)) &&
     (99 < (byte)puVar3[5])) {
    PTR_DAT_01005550[0xc] = 1;
    *(uint *)PTR_DAT_01005544 = *(uint *)PTR_DAT_01005544 & 0xfffffbff;
  }
  return;
}



// ENTRY 01005560 SIZE 112

void FUN_01005560(void)

{
  short *psVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;

  puVar3 = PTR_DAT_010055d0;
  psVar1 = (short *)(PTR_DAT_010055d0 + 4);
  *(short *)(PTR_DAT_010055d0 + 2) = *psVar1;
  puVar4 = PTR_DAT_010055d4;
  if (*psVar1 != 0) {
    uVar7 = *(uint *)PTR_DAT_010055d4;
    if ((int)(uVar7 << 0x1e) < 0) {
      *(undefined2 *)(puVar3 + 2) = 0x410;
      *(uint *)puVar4 = uVar7 & 0xfffffeff;
    }
  }
  if ((int)((uint)*(ushort *)puVar4 << 0x17) < 0) {
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar3 + 6);
  }
  puVar6 = PTR_DAT_010055e0;
  puVar5 = PTR_DAT_010055dc;
  puVar4 = PTR_DAT_010055d8;
  if (*(short *)(puVar3 + 2) != 0) {
    if (*(short *)(PTR_DAT_010055e0 + 0xc) < 0) {
      *(undefined2 *)PTR_DAT_010055e0 = *(undefined2 *)(PTR_DAT_010055d8 + 2);
      sVar2 = *(short *)(puVar6 + 6);
      *(short *)(puVar3 + 10) = sVar2;
      *(int *)(puVar5 + 0x38) = (int)sVar2 << 10;
      return;
    }
    FUN_0100515c();
    return;
  }
  FUN_01006898(0x2d,0,PTR_DAT_010055d0 + 10);
  *(undefined2 *)puVar6 = *(undefined2 *)(puVar4 + 2);
  *(int *)(puVar5 + 0x38) = (int)*(short *)(puVar6 + 6) << 10;
  return;
}



// ENTRY 010055e4 SIZE 142

void FUN_010055e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;

  puVar1 = PTR_DAT_01005678;
  *(short *)PTR_DAT_01005678 = (short)DAT_01005674;
  uVar3 = *(ushort *)(puVar1 + 4);
  *(ushort *)(puVar1 + 2) = uVar3;
  puVar2 = PTR_DAT_0100567c;
  if ((int)*(short *)(puVar1 + 10) < (int)(uint)uVar3) {
    if ((int)((uint)*(ushort *)PTR_DAT_0100567c << 0x14) < 0) {
      uVar3 = 0;
    }
    else if ((PTR_DAT_01005680[0xb] == PTR_DAT_01005684[0x16]) ||
            (*(short *)(PTR_DAT_01005680 + 4) < 0x15)) {
      uVar3 = (uVar3 >> 7) + 1 & 0xff;
      if (0x1e < uVar3) {
        uVar3 = 0x1e;
      }
    }
    else {
      uVar3 = 3;
    }
    FUN_010068b4(uVar3,(int)*(short *)(puVar1 + 2));
    uVar4 = *(uint *)puVar2;
    if (((int)(uVar4 << 0x15) < 0) && (*(short *)(puVar1 + 10) < *(short *)(PTR_DAT_01005688 + 6)))
    {
      *(short *)(puVar1 + 10) = *(short *)(PTR_DAT_01005688 + 6);
    }
    *(uint *)puVar2 = uVar4 & 0xfffffbff;
  }
  else if ((int)(uint)uVar3 < (int)*(short *)(puVar1 + 10)) {
    FUN_01006898(0x2d,(int)*(short *)(puVar1 + 2),puVar1 + 10);
    *(uint *)puVar2 = *(uint *)puVar2 | 0x400;
    return;
  }
  return;
}



// ENTRY 0100568c SIZE 106

void FUN_0100568c(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = DAT_010056fc;
  iVar3 = 0x28;
  if (*(int *)(DAT_010056f8 + 0x10) * 0x2000000 < 0) {
    iVar1 = DAT_01005708;
    if ((int)((uint)*DAT_01005700 << 0x13) < 0) {
      *DAT_010056fc = *DAT_010056fc | 1;
      *DAT_01005704 = *DAT_01005704 | 0x10;
      iVar1 = DAT_01005708;
    }
  }
  else {
    *DAT_010056fc = *DAT_010056fc | 1;
    iVar1 = DAT_01005708;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)(iVar1 + 2) = 0;
    do {
    } while (*(byte *)(iVar1 + 2) < 10);
    FUN_01002d7c();
  }
  if ((*puVar2 & 1) == 0) {
    *DAT_0100570c = *DAT_0100570c | 0x100;
  }
  FUN_010007d4();
  FUN_01001eb8();
  FUN_010067e0();
  FUN_010068cc();
  return;
}



// ENTRY 01005710 SIZE 74

void FUN_01005710(void)

{
  if ((*(char *)(DAT_0100575c + 0x18) == '\0') && (*(byte *)(DAT_01005760 + 0xc) < 2)) {
    if (*DAT_01005764 << 0x18 < 0) {
      if (-1 < *DAT_01005764 << 0x17) {
        if ((((*DAT_01005768 & 3) == 0) && (-1 < (int)(*DAT_01005768 << 0x19))) &&
           (*DAT_0100576c < 0x32)) {
          FUN_0100470c();
          goto LAB_01005754;
        }
      }
      FUN_01004f44();
    }
    else {
      FUN_010012e8();
    }
  }
LAB_01005754:
  FUN_01003220();
  return;
}



// ENTRY 01005770 SIZE 362

void FUN_01005770(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_r3;
  uint uVar13;
  uint uVar14;

  puVar5 = PTR_DAT_010058e0;
  uVar3 = *(ushort *)PTR_DAT_010058dc;
  uVar10 = ((uint)(uVar3 >> 9) | (uint)uVar3 << 0x17) + 0x10000000;
  uVar14 = (uint)(uVar3 >> 9) << 9;
  *(ushort *)PTR_DAT_010058dc = (ushort)(uVar10 >> 0x17) | (ushort)uVar14;
  iVar8 = DAT_0100590c;
  puVar7 = PTR_DAT_010058e8;
  puVar6 = PTR_DAT_010058e4;
  uVar13 = *(uint *)puVar5;
  uVar12 = uVar10 >> 0x1c;
  uVar11 = *(uint *)PTR_DAT_010058e4;
  if (uVar12 < 10) {
    if (uVar12 == 2) {
      FUN_010041e8();
    }
    else if (uVar12 == 3) {
      FUN_01003fa0();
    }
    else if (uVar12 == 4) {
      FUN_01003bd8();
    }
    else if (uVar12 == 5) {
      if ((uVar11 & 1) == 0) {
        PTR_DAT_010058e8[1] = 0;
      }
      else {
        if ((byte)PTR_DAT_010058e8[1] < 0x1e) {
          PTR_DAT_010058e8[1] = PTR_DAT_010058e8[1] + 1;
        }
        else if (*(short *)(PTR_DAT_010058f0 + 4) == 0) {
          *(uint *)(DAT_01005908 + 0x24) = *(uint *)(DAT_01005908 + 0x24) | 4;
        }
        if ((int)(uVar13 << 0x1d) < 0) {
          *(uint *)puVar5 = uVar13 | 1;
          *(uint *)puVar6 = uVar11 & 0xfffffffc | 0x10;
        }
      }
    }
    else if (uVar12 == 6) {
      if ((int)(uVar11 << 10) < 0) {
        bVar2 = PTR_DAT_010058e8[2];
        if (bVar2 < 2) {
          *(undefined1 *)(DAT_0100590c + 0xc) = 0;
        }
        else if (bVar2 < 8) {
          *(undefined1 *)(DAT_0100590c + 0xc) = 0x20;
        }
        else {
          *(uint *)PTR_DAT_010058e4 = uVar11 & 0xffdfffff;
          *(undefined1 *)(iVar8 + 0xc) = 0;
          *(uint *)puVar5 = uVar13 & 0xfffffffe;
        }
        puVar7[2] = bVar2 + 1;
      }
      else {
        PTR_DAT_010058e8[2] = 0;
      }
    }
  }
  else {
    uVar14 = ((uint)(uVar3 >> 0xd) | (uVar10 >> 0x17 & 0xfffffe1f | uVar14) << 0x13) + 0x10000000;
    uVar4 = (uVar3 >> 0xd) << 0xd;
    uVar3 = (ushort)(uVar14 >> 0x13);
    *(ushort *)PTR_DAT_010058dc = uVar3 | uVar4;
    uVar14 = uVar14 >> 0x1c;
    if (uVar14 < 10) {
      if (uVar14 == 1) {
        FUN_01003a38();
      }
      else if (uVar14 == 3) {
        FUN_0100439c();
      }
      else if (uVar14 == 4) {
        uVar9 = FUN_0100017c((uint)*(ushort *)PTR_DAT_010058f4 * (uint)*(ushort *)PTR_DAT_010058f0,
                             DAT_010058f8,puVar7,0,in_r3);
        *DAT_010058fc = uVar9;
      }
      else if (uVar14 == 5) {
        *DAT_01005900 = 0xaa;
        FUN_01000520();
      }
      else if (uVar14 == 6) {
        if (*DAT_01005904 << 0x11 < 0) {
          cVar1 = *puVar7;
          *puVar7 = cVar1 + 1U;
          if (0x3c < (byte)(cVar1 + 1U)) {
            *(uint *)puVar5 = uVar13 & 0xfffffffe;
            *(uint *)puVar6 = uVar11 | 2;
          }
        }
        else {
          *puVar7 = 0;
        }
      }
    }
    else {
      *(ushort *)PTR_DAT_010058dc = uVar3 & 0xe1ff | uVar4;
      *(int *)PTR_DAT_010058ec = *(int *)PTR_DAT_010058ec + 1;
    }
  }
  FUN_01001388();
  return;
}



// ENTRY 01005910 SIZE 12

void FUN_01005910(void)

{
  FUN_0100375c();
  FUN_010059fc();
  return;
}



// ENTRY 0100591c SIZE 64

void FUN_0100591c(void)

{
  ushort uVar1;
  undefined *puVar2;

  puVar2 = PTR_DAT_0100595c;
  uVar1 = *(ushort *)PTR_DAT_0100595c;
  *(ushort *)PTR_DAT_0100595c =
       (ushort)(((uint)(uVar1 >> 2) | (uint)uVar1 << 0x1e) + 0x80000000 >> 0x1e) | (uVar1 >> 2) << 2
  ;
  (**(code **)(PTR_DAT_01005960 + ((uVar1 & 3) >> 1) * 4))();
  uVar1 = *(ushort *)puVar2;
  *(ushort *)puVar2 =
       (ushort)(((uint)(uVar1 >> 4) | (uint)uVar1 << 0x1c) + 0x40000000 >> 0x1c) | (uVar1 >> 4) << 4
  ;
  (**(code **)(PTR_DAT_01005960 + (uVar1 & 0xc) + 8))();
  return;
}



// ENTRY 01005964 SIZE 8

void FUN_01005964(void)

{
  FUN_01002940();
  return;
}



// ENTRY 0100596c SIZE 8

void FUN_0100596c(void)

{
  FUN_01000a44();
  return;
}



// ENTRY 01005974 SIZE 20

void FUN_01005974(void)

{
  FUN_01002ee0();
  if (-1 < (int)((uint)*DAT_01005988 << 0x1d)) {
    FUN_01005350();
  }
  return;
}



// ENTRY 0100598c SIZE 8

void FUN_0100598c(void)

{
  FUN_0100093c();
  return;
}



// ENTRY 01005994 SIZE 8

void FUN_01005994(void)

{
  FUN_0100172c();
  return;
}



// ENTRY 0100599c SIZE 12

void FUN_0100599c(void)

{
  FUN_01003834();
  FUN_01000f28();
  return;
}



// ENTRY 010059a8 SIZE 60

void FUN_010059a8(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_010059e4 + 0x34) = *(uint *)(DAT_010059e4 + 0x34) | 0xaa0;
  puVar1 = DAT_010059e8;
  DAT_010059e8[6] = 0x96;
  *puVar1 = DAT_010059ec;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_010059f4;
  *(undefined4 *)(DAT_010059f4 + 0x20) = DAT_010059f0;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_010059f8;
  *(undefined4 **)(iVar2 + 0x30) = DAT_010059e8 + 7;
  *(uint *)(DAT_010059f4 + -0xa8) = *(uint *)(DAT_010059f4 + -0xa8) | 0x40;
  return;
}



// ENTRY 010059fc SIZE 1630

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x01005ae6) */
/* WARNING (jumptable): Removing unreachable block (ram,0x01005bb2) */
/* WARNING: Removing unreachable block (ram,0x01005ae6) */
/* WARNING: Removing unreachable block (ram,0x01005bb2) */

void FUN_010059fc(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  undefined *puVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  ushort *puVar18;
  uint extraout_r2;
  uint uVar19;
  int extraout_r3;
  char local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b [35];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;

  iVar8 = DAT_01005e04;
  iVar15 = DAT_01005e00;
  uVar19 = DAT_01005dfc;
  uVar14 = *DAT_01005df8;
  if (((int)(uVar14 << 0x11) < 0) &&
     ((uVar13 = *(short *)(DAT_01005e04 + 0x18) + 1, *(ushort *)(DAT_01005e04 + 0x18) = uVar13,
      uVar19 < uVar13 || (*(int *)(iVar15 + 0x14) << 0x19 < 0)))) {
    if (*(char *)(iVar8 + 8) == '\0') goto LAB_01005a6c;
    *DAT_01005df8 = uVar14 & 0xffffbfff;
  }
  while (iVar11 = DAT_01005e30, puVar18 = DAT_01005e14, puVar9 = DAT_01005e0c,
        uVar14 = *DAT_01005e0c, (int)(uVar14 << 0x12) < 0) {
    uVar13 = *(short *)(iVar8 + 0x16) + 1;
    *(ushort *)(iVar8 + 0x16) = uVar13;
    if ((uVar13 <= uVar19) && ((*(uint *)(iVar15 + 0x14) & 1) == 0)) {
      return;
    }
    if (*(char *)(iVar8 + 7) == '\0') {
      *(undefined1 *)(iVar8 + 7) = 1;
      return;
    }
    *puVar9 = uVar14 & 0xffffdfff;
    if (-1 < (int)(*DAT_01005df8 << 0xb)) {
      return;
    }
    FUN_01000c88();
    uVar19 = extraout_r2;
    iVar15 = extraout_r3;
LAB_01005a6c:
    *(undefined1 *)(iVar8 + 8) = 1;
  }
  if (-1 < (int)(uVar14 * 0x80000)) {
    if (-1 < (int)(*DAT_01006398 << 0x11)) {
      if (*(ushort *)(iVar8 + 0x12) < 800) {
        *(ushort *)(iVar8 + 0x12) = *(ushort *)(iVar8 + 0x12) + 1;
      }
      else {
        *DAT_01006398 = *DAT_01006398 | 0x4000;
        *DAT_010063b4 = 0;
      }
    }
    puVar9 = DAT_010063b8;
    if (-1 < (int)(uVar14 << 9)) {
      return;
    }
    iVar15 = FUN_01004f64((int)DAT_010063bc + 5,*DAT_010063bc,*(undefined1 *)(DAT_010063bc + 2),
                          *(undefined1 *)(DAT_010063bc + 1));
    if (iVar15 == 0) {
      return;
    }
    *puVar9 = *puVar9 & 0xffbf7fff;
    return;
  }
  uVar19 = (uint)(byte)DAT_01005e14[2];
  local_18 = uVar19 + 0xc0;
  if (*(char *)(iVar8 + 6) != '\0') {
    FUN_01004f64(DAT_01005e04 + 6,1,local_18 & 0xff);
    *DAT_01005e0c = *DAT_01005e0c & 0xffffefff;
    goto LAB_01005cee;
  }
  bVar1 = *(byte *)((int)DAT_01005e14 + 7);
  local_1c = (uint)bVar1;
  bVar2 = (byte)DAT_01005e14[3];
  uVar13 = *DAT_01005e14;
  if (((char)DAT_01005e14[1] == '1') || ((char)DAT_01005e14[1] == '2')) {
    if ((uVar19 == 6) && (((uVar13 == 9 && (bVar2 == 0x61)) && (local_1c == 6)))) {
      thunk_FUN_01004952(DAT_01005e14 + 4,&local_60);
      uVar14 = (uint)local_5c * 0x3c + (uint)local_5d * 0xe10 + (uint)local_5b[0];
      uVar19 = *DAT_01005e1c;
      if (uVar14 < uVar19) {
        iVar15 = DAT_01005e20 - uVar19;
        local_5d = FUN_0100017c(iVar15,0xe10);
        iVar15 = iVar15 + (uint)local_5d * -0xe10;
        local_5c = FUN_0100017c(iVar15,0x3c);
        local_5b[0] = (char)iVar15 + local_5c * -0x3c;
        if (local_5e < 2) {
          if (1 < local_5f) {
            local_5f = local_5f - 1;
            uVar19 = (uint)local_5f;
                    /* WARNING: Could not recover jumptable at 0x01005bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            if (DAT_01005bb6 <= uVar19) {
              uVar19 = (uint)DAT_01005bb6;
            }
            (*(code *)((uint)*(byte *)(uVar19 + 0x1005bb7) * 2 + 0x1005bb7))();
            return;
          }
          local_60 = local_60 + -1;
          local_5f = 0xc;
          local_5e = 0x1f;
        }
        else {
          local_5e = local_5e - 1;
        }
      }
      else {
        iVar15 = uVar14 - uVar19;
        local_5d = FUN_0100017c(iVar15,0xe10);
        iVar15 = iVar15 + (uint)local_5d * -0xe10;
        local_5c = FUN_0100017c(iVar15,0x3c);
        local_5b[0] = (char)iVar15 + local_5c * -0x3c;
      }
      thunk_FUN_01004952(&local_60,DAT_01005e28,6);
    }
    puVar9 = DAT_01005e0c;
    if ((int)(*DAT_01005e0c << 0x11) < 0) {
      *DAT_01005e0c = *DAT_01005e0c | 0x80000;
    }
    else {
      iVar15 = FUN_01004f64((int)puVar18 + 5,*puVar18,(char)puVar18[2],(char)puVar18[1]);
      if (iVar15 == 0) {
        *puVar9 = *puVar9 | 0x80000;
      }
      else {
        *puVar9 = *puVar9 | 0x8000;
        *(undefined2 *)(iVar8 + 0x1a) = 0;
      }
    }
    puVar10 = DAT_01005e2c;
    uVar19 = *DAT_01005e0c;
    if ((int)(uVar19 << 0xc) < 0) {
      *(char *)(DAT_01005e2c + 2) = (char)puVar18[2];
      *puVar10 = *puVar18;
      *(char *)(puVar10 + 1) = (char)puVar18[1];
      for (uVar14 = 0; uVar14 < *puVar10; uVar14 = uVar14 + 1 & 0xffff) {
        *(undefined1 *)((int)puVar10 + uVar14 + 5) = *(undefined1 *)((int)puVar18 + uVar14 + 5);
      }
    }
    *DAT_01005e0c = uVar19 & 0xffffefff;
    goto LAB_01005cee;
  }
  local_20 = (int)*(short *)(DAT_01005e18 + 4);
  cVar3 = *(char *)((int)DAT_01005e14 + 5);
  if (uVar19 == 7) {
LAB_01005f9e:
    *(undefined1 *)(iVar8 + 6) = 0x34;
    puVar12 = PTR_DAT_01006230;
    local_2c = (byte)PTR_DAT_01006230[4] + 0x80;
    uVar4 = *(ushort *)(PTR_DAT_01006224 + 0x22);
    local_30 = (uint)uVar4;
    uVar5 = *(ushort *)(PTR_DAT_01006224 + 0x1e);
    if ((cVar3 == '\x01') && (uVar13 == 1)) {
      local_60 = '\x01';
      if (uVar19 == 8) {
        local_5f = (byte)(uVar5 >> 8);
        local_5e = (byte)uVar5;
      }
      else {
        local_5f = (byte)(uVar4 >> 8);
        local_5e = (byte)uVar4;
      }
      FUN_01004f64(&local_60,3,local_2c & 0xff,0x21);
      *(undefined1 *)(iVar8 + 6) = 0;
    }
    else {
      uVar6 = *(ushort *)(PTR_DAT_01006224 + 0x24);
      local_34 = (uint)uVar6;
      uVar7 = *(ushort *)(PTR_DAT_01006224 + 0x20);
      local_38 = (uint)uVar7;
      if ((cVar3 == '\x02') && (uVar13 == 1)) {
        local_60 = '\x02';
        if (uVar19 == 8) {
          local_5f = (byte)(uVar7 >> 8);
          local_5e = (byte)uVar7;
        }
        else {
          local_5f = (byte)(uVar6 >> 8);
          local_5e = (byte)uVar6;
        }
        FUN_01004f64(&local_60,3,local_2c & 0xff,0x21);
        *(undefined1 *)(iVar8 + 6) = 0;
      }
      else if ((*(byte *)(DAT_0100621c + 0xc) < 2) && (local_20 == 0)) {
        uVar14 = (uint)(byte)PTR_DAT_01006230[6] * 0x100 + (uint)(byte)PTR_DAT_01006230[7];
        if (((cVar3 == '\x04') || (cVar3 == '\x03')) && (uVar13 == 3)) {
          uVar16 = *DAT_01006220;
          *DAT_01006220 = uVar16 | 4;
          if (((uVar19 == 8) && (local_38 < uVar14)) && (uVar14 <= uVar5)) {
            if (cVar3 == '\x04') {
              FUN_010018d0(DAT_01006238,uVar14,0x20);
            }
            puVar12 = PTR_DAT_01006224;
            puVar18 = (ushort *)(PTR_DAT_01006224 + 0x1e);
            *(short *)(PTR_DAT_01006224 + 0x20) = (short)uVar14;
            uVar13 = *puVar18;
            if (uVar13 <= uVar14) {
              *DAT_0100623c = *DAT_0100623c & 0xfffff7ff;
              *(ushort *)(puVar12 + 0x20) = uVar13;
            }
            *(undefined1 *)(iVar8 + 6) = 0;
          }
          else if (((uVar19 == 7) && (local_34 < uVar14)) && (uVar14 <= local_30)) {
            if (cVar3 == '\x04') {
              FUN_010018d0(DAT_01006240,uVar14,0x18);
            }
            puVar12 = PTR_DAT_01006224;
            *(short *)(PTR_DAT_01006224 + 0x24) = (short)uVar14;
            uVar13 = *(ushort *)(puVar12 + 0x22);
            if (uVar13 <= uVar14) {
              *DAT_0100623c = *DAT_0100623c & 0xffffefff;
              *(ushort *)(puVar12 + 0x24) = uVar13;
            }
            *(undefined1 *)(iVar8 + 6) = 0;
          }
          else {
            *DAT_01006220 = uVar16 & 0xfffffffb;
          }
          if (*(char *)(iVar8 + 6) == '\0') {
            FUN_01004f64(PTR_DAT_01006230 + 5,3,PTR_DAT_01006230[4] + -0x80,0x21);
          }
        }
        else if ((cVar3 == '\x05') && (uVar13 == 1)) {
          if (uVar19 == 8) {
            *(ushort *)(PTR_DAT_01006224 + 0x20) = uVar5;
            FUN_01001dc8(DAT_01006238);
            *DAT_0100623c = *DAT_0100623c & 0xfffff7ff;
          }
          else {
            *(ushort *)(PTR_DAT_01006224 + 0x24) = uVar4;
            FUN_01001dc8(DAT_01006240);
            *DAT_0100623c = *DAT_0100623c & 0xffffefff;
          }
          FUN_01004f64(puVar12 + 5,1,puVar12[4] + -0x80,0x21);
          *(undefined1 *)(iVar8 + 6) = 0;
        }
        else if ((cVar3 == '\x06') && (uVar13 == 3)) {
          local_60 = '\x06';
          local_5d = 0x68;
          local_5f = bVar2;
          local_5e = bVar1;
          if ((uVar5 < uVar14) || (uVar19 != 8)) {
            if ((uVar19 == 7) && (uVar14 <= local_30)) {
              pbVar17 = (byte *)FUN_01004e60(DAT_01006240,uVar14,0x18);
              if (pbVar17 == (byte *)0x0) {
                *(undefined1 *)(iVar8 + 6) = 0x33;
              }
              else {
                local_5c = 3;
                uVar19 = 0;
                do {
                  bVar1 = *pbVar17;
                  pbVar17 = pbVar17 + 1;
                  local_5b[uVar19] = bVar1;
                  uVar19 = uVar19 + 1 & 0xffff;
                } while (uVar19 < 0x18);
                FUN_01004f64(&local_60,0x1d,0x87,0x21);
                *(undefined1 *)(iVar8 + 6) = 0;
              }
            }
          }
          else {
            pbVar17 = (byte *)FUN_01004e60(DAT_01006238,uVar14,0x20);
            if (pbVar17 != (byte *)0x0) {
              local_5c = 1;
              uVar19 = 0;
              do {
                bVar1 = *pbVar17;
                pbVar17 = pbVar17 + 1;
                local_5b[uVar19] = bVar1;
                uVar19 = uVar19 + 1 & 0xffff;
              } while (uVar19 < 0x20);
              FUN_01004f64(&local_60,0x25,0x88,0x21);
              *(undefined1 *)(iVar8 + 6) = 0;
            }
          }
        }
      }
    }
    if (*(char *)(iVar8 + 6) != '\0') {
      FUN_01004f64(DAT_0100638c,1,*(char *)(DAT_01006388 + 4) + -0x40,0x21);
    }
  }
  else {
    if (uVar19 < 8) {
      local_24 = (uint)*(byte *)((int)DAT_01005e14 + 5) + (uint)(byte)DAT_01005e14[3];
      local_28 = *(byte *)((int)DAT_01005e14 + 5) + 1;
                    /* WARNING: Could not recover jumptable at 0x01005ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_01005aea <= uVar19) {
        uVar19 = (uint)DAT_01005aea;
      }
      (*(code *)((uint)*(byte *)(uVar19 + 0x1005aeb) * 2 + 0x1005aeb))();
      return;
    }
    if (uVar19 == 8) goto LAB_01005f9e;
    iVar15 = (uint)(byte)DAT_01005e14[3] * 0x100 + (uint)*(byte *)((int)DAT_01005e14 + 5);
    if (uVar19 == 0xdd) {
      uVar19 = *DAT_01006390;
      if ((int)(uVar19 << 0x1c) < 0) {
        uVar13 = FUN_0100017c(((uint)(DAT_0100639c * iVar15) >> 0x10) * (int)(short)*DAT_010063a4,
                              (int)*(short *)(DAT_010063a0 + 2));
        if ((uint)uVar13 + iVar11 < DAT_010063a8) {
          *DAT_010063a4 = uVar13;
          *DAT_01006390 = uVar19 | 1;
          *(undefined1 *)(iVar8 + 6) = 0;
        }
        else {
          *(undefined1 *)(iVar8 + 6) = 1;
        }
        FUN_01004f64(DAT_0100638c,1,0,0x21);
      }
    }
    else if (uVar19 == 0xee) {
      if (((int)((uint)(byte)*DAT_01006390 << 0x1c) < 0) && (*(byte *)(DAT_01006394 + 0xc) < 2)) {
        FUN_010045e4();
        *(char *)(iVar8 + 6) = (char)((*DAT_01006398 & 0x7ff) >> 10);
        FUN_01004f64(DAT_0100638c,1,0,0x21);
      }
    }
    else if (uVar19 == 0xff) {
      uVar19 = *DAT_01006390;
      if (((int)(uVar19 << 0x1c) < 0) && (*(short *)(DAT_010063ac + 2) != 0)) {
        uVar13 = FUN_0100017c(((uint)(DAT_010063b0 * iVar15) >> 0x10) << 0xc);
        if ((uint)uVar13 + iVar11 < DAT_010063a8) {
          DAT_010063a4[1] = uVar13;
          *DAT_01006390 = uVar19 | 1;
          *(undefined1 *)(iVar8 + 6) = 0;
        }
        else {
          *(undefined1 *)(iVar8 + 6) = 1;
        }
        FUN_01004f64(DAT_0100638c,1,0,0x21);
      }
    }
    else {
      *(undefined1 *)(iVar8 + 6) = 0x20;
      FUN_01004f64(DAT_01005e04 + 6,1,local_18 & 0xff,0x21);
    }
  }
  *DAT_01005e0c = *DAT_01005e0c & 0xffffefff;
LAB_01005cee:
  if (*(ushort *)(iVar8 + 0x12) < 0x30d) {
    *DAT_01006398 = *DAT_01006398 & 0xffffbfff;
    *(undefined2 *)(iVar8 + 0x12) = 0;
  }
  else {
    *(ushort *)(iVar8 + 0x12) = *(ushort *)(iVar8 + 0x12) - 1;
  }
  return;
}



// ENTRY 010063c0 SIZE 118

/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x010063e8) */
/* WARNING (jumptable): Removing unreachable block (ram,0x010064ce) */
/* WARNING: Removing unreachable block (ram,0x010063e8) */
/* WARNING: Removing unreachable block (ram,0x010064ce) */

void FUN_010063c0(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;

  pbVar1 = DAT_010065d8;
  if (*(int *)(DAT_010065d4 + 4) * 0x40000000 < 0) {
    uVar2 = *(uint *)(DAT_010065d4 + 0x20);
    if (-1 < *DAT_010065dc << 0x12) {
      uVar3 = (uint)*DAT_010065d8;
      *DAT_010065d8 = *DAT_010065d8 + 1;
                    /* WARNING: Could not recover jumptable at 0x010063e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010063ec <= uVar3) {
        uVar3 = (uint)DAT_010063ec;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10063ed) * 2 + 0x10063ed))(uVar2 & 0xff);
      return;
    }
  }
  else if (DAT_010065d8[1] < 0xfa) {
    DAT_010065d8[1] = DAT_010065d8[1] + 1;
  }
  else {
    *DAT_010065d8 = 0;
  }
  if (*(int *)(DAT_010065e8 + 4) << 0x1e < 0) {
    uVar2 = *(uint *)(DAT_010065e8 + 0x20);
    if (-1 < *DAT_010065ec << 0x13) {
      uVar3 = (uint)pbVar1[2];
      pbVar1[2] = pbVar1[2] + 1;
                    /* WARNING: Could not recover jumptable at 0x010064ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010064d2 <= uVar3) {
        uVar3 = (uint)DAT_010064d2;
      }
      (*(code *)((uint)*(byte *)(uVar3 + 0x10064d3) * 2 + 0x10064d3))(uVar2 & 0xff);
      return;
    }
    return;
  }
  if (pbVar1[3] < 0xfa) {
    pbVar1[3] = pbVar1[3] + 1;
    return;
  }
  pbVar1[2] = 0;
  return;
}



// ENTRY 010065f4 SIZE 52

void FUN_010065f4(void)

{
  undefined4 *puVar1;
  int iVar2;

  *(uint *)(DAT_01006628 + 0x34) = *(uint *)(DAT_01006628 + 0x34) | 0xaa;
  puVar1 = DAT_0100662c;
  DAT_0100662c[6] = 0x96;
  *puVar1 = DAT_01006630;
  puVar1[4] = puVar1[4] | 1;
  iVar2 = DAT_01006638;
  *(undefined4 *)(DAT_01006638 + 0x20) = DAT_01006634;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_0100663c;
  *(undefined4 **)(iVar2 + 0x30) = DAT_0100662c + 7;
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 1;
  return;
}



// ENTRY 01006640 SIZE 390

void FUN_01006640(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint local_50 [13];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;

  puVar1 = DAT_010067c8;
  if ((int)((uint)(byte)*DAT_010067c8 * 0x10000000) < 0) {
    uVar2 = 0;
    do {
      local_50[uVar2] = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xd);
  }
  else {
    local_50[0] = (uint)(byte)DAT_010067d0[8];
    local_50[1] = (uint)(*(char *)((int)DAT_010067d0 + 0xb) == '\x01');
    local_50[2] = (uint)(short)DAT_010067d0[4];
    local_50[3] = (uint)*DAT_010067d0;
    local_50[4] = (uint)DAT_010067cc[0x33] * 0x100 + (uint)DAT_010067cc[0x34];
    local_50[5] = (uint)DAT_010067cc[0x35] * 0x1000000 + (uint)DAT_010067cc[0x36] * 0x10000 +
                  (uint)DAT_010067cc[0x37] * 0x100 + (uint)DAT_010067cc[0x38];
    local_50[6] = (uint)DAT_010067cc[8];
    if (DAT_010067cc[0x5a] != 0) {
      local_50[6] = (uint)CONCAT11(DAT_010067cc[0x5b],DAT_010067cc[8]);
    }
    local_50[6] = local_50[6] | (uint)DAT_010067cc[0x52] << 0x10;
    local_50[7] = *DAT_010067d4;
    local_50[8] = (uint)DAT_010067cc[0x56] + (uint)DAT_010067cc[0x55] * 0x100;
    local_50[10] = (uint)DAT_010067d8[2] + (uint)DAT_010067d8[3] * 0x10000;
    local_50[0xb] = (uint)*DAT_010067d8 + (uint)DAT_010067d8[1] * 0x10000;
    local_50[0xc] = (uint)DAT_010067cc[0x6d] + (uint)DAT_010067cc[0x6c] * 0x100;
  }
  local_1c = (uint)DAT_010067cc[-0xf] + (uint)DAT_010067cc[-0xe] * 0x100 +
             (uint)DAT_010067cc[-0xd] * 0x10000 + (uint)DAT_010067cc[-0xc] * 0x1000000;
  local_18 = (uint)DAT_010067cc[-0xb] + (uint)DAT_010067cc[-10] * 0x100 +
             (uint)DAT_010067cc[-9] * 0x10000 + (uint)DAT_010067cc[-8] * 0x1000000;
  local_14 = (uint)DAT_010067cc[-7] + (uint)DAT_010067cc[-6] * 0x100 +
             (uint)DAT_010067cc[-5] * 0x10000 + (uint)DAT_010067cc[-4] * 0x1000000;
  local_10 = (uint)DAT_010067cc[-3] + (uint)DAT_010067cc[-2] * 0x100 +
             (uint)DAT_010067cc[-1] * 0x10000 + (uint)*DAT_010067cc * 0x1000000;
  iVar3 = FUN_01001f78(DAT_010067dc,0x11,local_50);
  if (iVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  return;
}



// ENTRY 010067e0 SIZE 160

void FUN_010067e0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;

  iVar1 = DAT_01006880;
  *(undefined1 *)(DAT_01006880 + 0x13) = 6;
  *(undefined1 *)(iVar1 + 0x14) = 0x40;
  *(undefined1 *)(iVar1 + 0x17) = 1;
  *DAT_01006884 = *(undefined1 *)(iVar1 + 0x16);
  *(undefined1 *)(iVar1 + 0x28) = 1;
  *(undefined1 *)(iVar1 + 0x29) = 4;
  *(undefined1 *)(iVar1 + 0x18) = 1;
  *(undefined1 *)(iVar1 + 0x19) = 0xe0;
  *(undefined1 *)(iVar1 + 0x25) = 0x14;
  *(undefined1 *)(iVar1 + -0x60) = 7;
  iVar2 = DAT_01006888;
  uVar4 = 0;
  do {
    ((undefined1 *)(iVar1 + -0x60))[uVar4 + 1] = *(undefined1 *)(iVar2 + uVar4);
    puVar3 = DAT_0100688c;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  *DAT_0100688c = *DAT_0100688c & 0xfffffffe;
  puVar3[-2] = puVar3[-2] | 0x8080;
  *(undefined1 *)(iVar1 + 0x2a) = 1;
  *(undefined1 *)(iVar1 + 0x2b) = 0x7c;
  *(undefined1 *)(iVar1 + 0x1c) = 0x39;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined1 *)(iVar1 + 0x1e) = 0xd;
  *(undefined1 *)(iVar1 + 7) = 0x30;
  *(undefined1 *)(iVar1 + 8) = 0x27;
  *(undefined1 *)(iVar1 + 9) = 0x3c;
  *(undefined1 *)(iVar1 + 0xb) = 0x29;
  *DAT_01006890 = *DAT_01006890 & 0xfffeffff;
  puVar3 = DAT_0100688c;
  *(undefined2 *)((int)DAT_0100688c + -0x22) = 0;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(undefined1 *)(DAT_01006894 + 0xc) = 1;
  return;
}



// ENTRY 01006898 SIZE 28

void FUN_01006898(int param_1,int param_2,short *param_3)

{
  short sVar1;

  sVar1 = *param_3;
  if ((int)sVar1 < param_2 + param_1) {
    if (param_2 < sVar1) {
      *param_3 = sVar1 + -1;
      return;
    }
  }
  else {
    *param_3 = sVar1 - (short)param_1;
  }
  return;
}



// ENTRY 010068b4 SIZE 24

void FUN_010068b4(int param_1,int param_2,short *param_3)

{
  short sVar1;

  sVar1 = *param_3;
  param_1 = sVar1 + param_1;
  if (param_2 < param_1) {
    if (sVar1 < param_2) {
      *param_3 = sVar1 + 1;
      return;
    }
  }
  else {
    *param_3 = (short)param_1;
  }
  return;
}



// ENTRY 010068cc SIZE 36

void FUN_010068cc(void)

{
  undefined4 *puVar1;

  puVar1 = DAT_010068f0;
  *DAT_010068f0 = 0x55;
  puVar1[1] = 0x700;
  puVar1[1] = puVar1[1] | DAT_010068f4;
  *puVar1 = 0x66;
  *(uint *)(DAT_010068f8 + 4) = *(uint *)(DAT_010068f8 + 4) | 0x40;
  return;
}



// ENTRY 010068fc SIZE 100

void FUN_010068fc(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0x100000;
  uVar1 = param_4 | param_2;
  if ((int)uVar1 < 0) {
    if (-1 < (int)(uVar1 + 0x100000)) {
      uVar2 = 0x200000;
      if ((param_4 << 1 < 0xffe00000) && (param_2 << 1 < 0xffe00000)) {
        return;
      }
      goto LAB_0100694e;
    }
    if ((int)(uVar1 - 0x100000) < 0) {
      if (param_2 != param_4) {
        return;
      }
      return;
    }
  }
  else {
    if ((int)(uVar1 + 0x100000) < 0) {
      if ((-1 < (int)(param_4 + 0x100000)) && (-1 < (int)(param_2 + 0x100000))) {
        return;
      }
LAB_0100694e:
      FUN_01000334(param_3,param_4,param_1,param_2,DAT_01006960,uVar2);
      return;
    }
    if (-1 < (int)(uVar1 - 0x100000)) {
      if (param_4 != param_2) {
        return;
      }
      return;
    }
  }
  return;
}
