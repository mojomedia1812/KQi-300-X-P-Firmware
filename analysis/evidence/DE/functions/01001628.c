
void FUN_01001628(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  iVar4 = DAT_010017ac;
  iVar3 = DAT_010017a8;
  if (*(char *)(DAT_010017a4 + 0xc) == '\a') {
    if ((int)((uint)*DAT_010017bc << 0x1d) < 0) {
      *(undefined2 *)(DAT_010017ac + 0xc) = 0x1c0;
    }
    else {
      cVar1 = *(char *)(DAT_010017a8 + 7);
      sVar2 = *(short *)(DAT_010017c4 + 6);
      iVar5 = DAT_010017ac + 0xc;
      if (*(short *)(DAT_010017c0 + 2) == 0) {
        iVar3 = (int)*(short *)(DAT_010017ac + 0xc);
        if (cVar1 == '\0') {
          if (iVar3 < 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 1;
          }
          FUN_01006784(0x32,uVar6,iVar5);
          FUN_010067a0(0x32,uVar6,iVar5);
        }
        else {
          if (sVar2 * iVar3 < 1) {
            if (iVar3 < 1) {
              *(undefined2 *)(DAT_010017ac + 0xc) = 0xffff;
            }
            else {
              *(undefined2 *)(DAT_010017ac + 0xc) = 1;
            }
          }
          else {
            *(short *)(DAT_010017ac + 0xc) = sVar2;
          }
          *(undefined1 *)(DAT_010017a8 + 7) = 0;
        }
      }
      else if (*(int *)DAT_010017c8 << 0xc < 0) {
        if (cVar1 == '\x02') {
          *(short *)(DAT_010017ac + 0xc) = sVar2;
        }
        FUN_01006784(0x1e,(int)*(short *)(iVar4 + 0x12),iVar5);
        FUN_010067a0(0x1e,(int)*(short *)(iVar4 + 0x12),iVar5);
        if ((int)((uint)*DAT_010017c8 << 0x1e) < 0) {
          if ((*(short *)(DAT_010017c4 + 6) < *(short *)(iVar4 + 0xc)) &&
             (*(short *)(iVar4 + 0x12) < *(short *)(iVar4 + 0xc))) {
            *(short *)(iVar4 + 0xc) = *(short *)(DAT_010017c4 + 6);
          }
        }
        *(undefined1 *)(DAT_010017a8 + 7) = 1;
      }
      else {
        if (cVar1 == '\x01') {
          *(short *)(DAT_010017ac + 0xc) = sVar2;
        }
        else {
          FUN_010067a0(10,0x550,iVar5);
          FUN_01006784(10,0x550,iVar5);
        }
        *(undefined1 *)(iVar3 + 7) = 2;
      }
    }
  }
  else {
    *(undefined1 *)(DAT_010017a8 + 7) = 0;
  }
  iVar5 = DAT_010017b4;
  iVar3 = (int)*(short *)(DAT_010017b0 + 4);
  if (((iVar3 < 5) || (*(char *)(DAT_010017b0 + 0xb) != *(char *)(DAT_010017b8 + 0x16))) &&
     (0 < *(short *)(iVar4 + 0xc))) {
    *(undefined2 *)(DAT_010017b4 + 10) = 0;
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
    iVar4 = DAT_010017b4 + 10;
    FUN_010067a0(10,iVar3);
    FUN_01006784(10,iVar3,iVar4);
    iVar3 = (int)*(short *)(DAT_010017c4 + 2);
    if (iVar3 < 1) {
      iVar3 = -iVar3;
    }
    iVar4 = DAT_010017b4 + 8;
    FUN_01006784(0x14,iVar3 >> 1);
    FUN_010067a0(0x14,iVar3 >> 1,iVar4);
  }
  *(undefined2 *)(iVar5 + 0xe) = 0x42;
  *(undefined2 *)(iVar5 + 0xc) = 0x24c;
  return;
}
