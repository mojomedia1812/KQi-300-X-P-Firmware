
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
