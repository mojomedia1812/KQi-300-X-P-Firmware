
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
