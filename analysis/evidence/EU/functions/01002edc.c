
void FUN_01002edc(void)

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

  puVar7 = DAT_01003050;
  iVar8 = DAT_01003048;
  iVar6 = DAT_01003044;
  puVar5 = DAT_01003040;
  uVar10 = *DAT_01003040;
  uVar9 = uVar10 & 0xfffffffb;
  if ((int)((uint)*DAT_0100303c * 0x80000) < 0) {
    cVar2 = *(char *)(DAT_01003048 + 0x10);
    if (cVar2 == '\x01') {
      uVar9 = *DAT_01003050;
      if ((int)*(short *)(DAT_0100304c + 4) + 0x6dU < 0xdb) {
        *(undefined1 *)(DAT_01003048 + 0x10) = 2;
        *puVar7 = uVar9 & 0xffffffbf;
      }
      else {
        *DAT_01003050 = uVar9 | 0x40;
      }
    }
    else if (cVar2 == '\x02') {
      if (*(byte *)(DAT_01003054 + 0xc) < 2) {
        *(undefined1 *)(DAT_01003048 + 0x10) = 3;
      }
    }
    else if (cVar2 == '\x03') {
      if (*(char *)(DAT_01003058 + 0x18) != '\0') {
        *(undefined1 *)(DAT_01003048 + 0x15) = 0x14;
        *puVar5 = uVar10 | 4;
        *(undefined2 *)(iVar6 + 10) = 1;
        *(undefined1 *)(iVar8 + 0x13) = 1;
        *(undefined2 *)(iVar8 + 0x22) = 0;
        *(undefined1 *)(iVar8 + 0x10) = 4;
        *(undefined2 *)(iVar8 + 0x24) = 0;
      }
    }
    else if (cVar2 == '\x04') {
      if (*(ushort *)(DAT_01003048 + 0x22) < DAT_0100305c) {
        *(ushort *)(DAT_01003048 + 0x22) = *(ushort *)(DAT_01003048 + 0x22) + 10;
      }
      cVar2 = *(char *)(DAT_01003048 + 0x13);
      iVar8 = (int)cVar2;
      if (iVar8 != 0) {
        *(short *)(iVar6 + 10) =
             (short)((uint)(iVar8 * -0x100000 * (int)*(char *)(DAT_0100304c + 0xb)) >> 0x10);
      }
      uVar3 = *(ushort *)(DAT_01003048 + 0x22);
      if ((int)(uint)uVar3 < (int)*(short *)(iVar6 + 10)) {
        *(ushort *)(iVar6 + 10) = uVar3;
      }
      else {
        iVar4 = -(uint)uVar3;
        if (*(short *)(iVar6 + 10) < iVar4) {
          *(short *)(iVar6 + 10) = (short)iVar4;
        }
      }
      if (*DAT_01003060 == 0) {
        if (iVar8 == *(short *)(DAT_01003048 + 0x26)) {
          if (*(ushort *)(DAT_01003048 + 0x24) < 2000) {
            *(ushort *)(DAT_01003048 + 0x24) = *(ushort *)(DAT_01003048 + 0x24) + 1;
          }
          iVar4 = DAT_01003048;
          puVar1 = (ushort *)(DAT_01003048 + 0x24);
          if ((*puVar1 & 0x3f) == 0) {
            if (iVar8 < 1) {
              if (iVar8 < 0) {
                *(char *)(DAT_01003048 + 0x13) = cVar2 + '\x01';
              }
            }
            else {
              *(char *)(DAT_01003048 + 0x13) = cVar2 + -1;
            }
          }
          if (DAT_01003064 < *puVar1) {
            *(undefined2 *)(iVar6 + 10) = 0;
            *puVar5 = uVar9;
            *(undefined1 *)(DAT_01003054 + 0xc) = 1;
            *(undefined1 *)(iVar4 + 0x10) = 3;
          }
        }
        else {
          *(undefined2 *)(DAT_01003048 + 0x24) = 0;
        }
      }
      else {
        *(undefined2 *)(iVar6 + 10) = 0;
        *puVar5 = uVar9;
        *(undefined1 *)(DAT_01003054 + 0xc) = 1;
        *(undefined1 *)(DAT_01003048 + 0x10) = 3;
      }
    }
    else if (*(char *)(DAT_0100304c + 0x10) != '\a') {
      *(undefined1 *)(DAT_01003048 + 0x10) = 1;
    }
  }
  else {
    *(undefined1 *)(DAT_01003048 + 0x15) = 0;
    *(undefined1 *)(iVar8 + 0x10) = 0;
    if ((int)(uVar10 << 0x1d) < 0) {
      *puVar5 = uVar9;
      *(undefined2 *)(iVar6 + 10) = 0;
      *(undefined1 *)(DAT_01003054 + 0xc) = 1;
    }
    FUN_01000cd0();
  }
  uVar9 = *puVar5;
  if (((uVar9 & 1) == 0) && ((int)(uVar9 << 0x1d) < 0)) {
    *puVar5 = uVar9 | 1;
  }
  *(short *)(DAT_01003048 + 0x26) = (short)*(char *)(DAT_01003048 + 0x13);
  return;
}
