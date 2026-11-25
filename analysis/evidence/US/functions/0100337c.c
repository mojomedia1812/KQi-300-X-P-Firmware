
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
