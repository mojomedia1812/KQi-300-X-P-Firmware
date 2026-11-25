
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
