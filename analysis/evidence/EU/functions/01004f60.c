
undefined4 FUN_01004f60(undefined1 *param_1,uint param_2,uint param_3,int param_4,int param_5)

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

  puVar7 = DAT_01005144;
  puVar5 = DAT_01005134;
  cVar9 = 'h';
  bVar4 = (byte)param_4;
  uVar10 = *DAT_0100512c;
  uVar3 = (undefined1)param_2;
  uVar2 = (undefined1)(param_2 >> 8);
  if (param_5 == 0) {
    if (-1 < (int)(uVar10 << 0x12)) {
      *DAT_01005144 = 0x68;
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
      iVar6 = DAT_0100513c;
      *(uint *)(DAT_0100513c + -0xa0) = *(uint *)(DAT_0100513c + -0xa0) & 0xfffffffe;
      *(uint *)(iVar6 + -0x9c) = uVar8 + 1 & 0xffff;
      *(uint *)(iVar6 + -0xa8) = *(uint *)(iVar6 + -0xa8) | 1;
      *(uint *)(iVar6 + -0xa0) = *(uint *)(iVar6 + -0xa0) | 1;
      *DAT_01005148 = *DAT_01005148 | 0x100000;
      *DAT_0100512c = uVar10 | 0x2000;
      iVar6 = DAT_01005138;
      *(undefined2 *)(DAT_01005138 + 0x16) = 0;
      *(undefined1 *)(iVar6 + 7) = 0;
      return 1;
    }
  }
  else {
    uVar11 = *DAT_01005130;
    if (-1 < (int)(uVar11 << 0x11)) {
      *DAT_01005134 = 0x68;
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
        *DAT_0100512c = uVar10 | 0x100000;
        *(undefined2 *)(DAT_01005138 + 0x14) = 0;
      }
      uVar10 = uVar8 + 1 & 0xffff;
      puVar5[uVar8] = cVar9;
      puVar5[uVar10] = 0x16;
      iVar6 = DAT_0100513c;
      *(uint *)(DAT_0100513c + 0x20) = *(uint *)(DAT_0100513c + 0x20) & 0xfffffffe;
      *(uint *)(iVar6 + 0x24) = uVar10 + 1 & 0xffff;
      *(uint *)(DAT_0100513c + -0xa8) = *(uint *)(DAT_0100513c + -0xa8) | 0x40;
      *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | 1;
      *DAT_01005140 = *DAT_01005140 | 0x100000;
      *DAT_01005130 = uVar11 | 0x4000;
      iVar6 = DAT_01005138;
      *(undefined2 *)(DAT_01005138 + 0x18) = 0;
      *(undefined1 *)(iVar6 + 8) = 0;
      return 1;
    }
  }
  return 0;
}
