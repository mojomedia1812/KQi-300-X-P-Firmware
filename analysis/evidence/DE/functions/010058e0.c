
/* WARNING: Function: __ARM_common_switch8 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x010059ca) */
/* WARNING (jumptable): Removing unreachable block (ram,0x01005a96) */
/* WARNING: Removing unreachable block (ram,0x010059ca) */
/* WARNING: Removing unreachable block (ram,0x01005a96) */

void FUN_010058e0(void)

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

  iVar8 = DAT_01005ce8;
  iVar15 = DAT_01005ce4;
  uVar19 = DAT_01005ce0;
  uVar14 = *DAT_01005cdc;
  if (((int)(uVar14 << 0x11) < 0) &&
     ((uVar13 = *(short *)(DAT_01005ce8 + 0x18) + 1, *(ushort *)(DAT_01005ce8 + 0x18) = uVar13,
      uVar19 < uVar13 || (*(int *)(iVar15 + 0x14) << 0x19 < 0)))) {
    if (*(char *)(iVar8 + 8) == '\0') goto LAB_01005950;
    *DAT_01005cdc = uVar14 & 0xffffbfff;
  }
  while (iVar11 = DAT_01005d14, puVar18 = DAT_01005cf8, puVar9 = DAT_01005cf0,
        uVar14 = *DAT_01005cf0, (int)(uVar14 << 0x12) < 0) {
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
    if (-1 < (int)(*DAT_01005cdc << 0xb)) {
      return;
    }
    FUN_01000c88();
    uVar19 = extraout_r2;
    iVar15 = extraout_r3;
LAB_01005950:
    *(undefined1 *)(iVar8 + 8) = 1;
  }
  if (-1 < (int)(uVar14 * 0x80000)) {
    if (-1 < (int)(*DAT_0100627c << 0x11)) {
      if (*(ushort *)(iVar8 + 0x12) < 800) {
        *(ushort *)(iVar8 + 0x12) = *(ushort *)(iVar8 + 0x12) + 1;
      }
      else {
        *DAT_0100627c = *DAT_0100627c | 0x4000;
        *DAT_01006298 = 0;
      }
    }
    puVar9 = DAT_0100629c;
    if (-1 < (int)(uVar14 << 9)) {
      return;
    }
    iVar15 = FUN_01004e48((int)DAT_010062a0 + 5,*DAT_010062a0,*(undefined1 *)(DAT_010062a0 + 2),
                          *(undefined1 *)(DAT_010062a0 + 1));
    if (iVar15 == 0) {
      return;
    }
    *puVar9 = *puVar9 & 0xffbf7fff;
    return;
  }
  uVar19 = (uint)(byte)DAT_01005cf8[2];
  local_18 = uVar19 + 0xc0;
  if (*(char *)(iVar8 + 6) != '\0') {
    FUN_01004e48(DAT_01005ce8 + 6,1,local_18 & 0xff);
    *DAT_01005cf0 = *DAT_01005cf0 & 0xffffefff;
    goto LAB_01005bd2;
  }
  bVar1 = *(byte *)((int)DAT_01005cf8 + 7);
  local_1c = (uint)bVar1;
  bVar2 = (byte)DAT_01005cf8[3];
  uVar13 = *DAT_01005cf8;
  if (((char)DAT_01005cf8[1] == '1') || ((char)DAT_01005cf8[1] == '2')) {
    if ((uVar19 == 6) && (((uVar13 == 9 && (bVar2 == 0x61)) && (local_1c == 6)))) {
      thunk_FUN_01004836(DAT_01005cf8 + 4,&local_60);
      uVar14 = (uint)local_5c * 0x3c + (uint)local_5d * 0xe10 + (uint)local_5b[0];
      uVar19 = *DAT_01005d00;
      if (uVar14 < uVar19) {
        iVar15 = DAT_01005d04 - uVar19;
        local_5d = FUN_0100017c(iVar15,0xe10);
        iVar15 = iVar15 + (uint)local_5d * -0xe10;
        local_5c = FUN_0100017c(iVar15,0x3c);
        local_5b[0] = (char)iVar15 + local_5c * -0x3c;
        if (local_5e < 2) {
          if (1 < local_5f) {
            local_5f = local_5f - 1;
            uVar19 = (uint)local_5f;
                    /* WARNING: Could not recover jumptable at 0x01005a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            if (DAT_01005a9a <= uVar19) {
              uVar19 = (uint)DAT_01005a9a;
            }
            (*(code *)((uint)*(byte *)(uVar19 + 0x1005a9b) * 2 + 0x1005a9b))();
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
      thunk_FUN_01004836(&local_60,DAT_01005d0c,6);
    }
    puVar9 = DAT_01005cf0;
    if ((int)(*DAT_01005cf0 << 0x11) < 0) {
      *DAT_01005cf0 = *DAT_01005cf0 | 0x80000;
    }
    else {
      iVar15 = FUN_01004e48((int)puVar18 + 5,*puVar18,(char)puVar18[2],(char)puVar18[1]);
      if (iVar15 == 0) {
        *puVar9 = *puVar9 | 0x80000;
      }
      else {
        *puVar9 = *puVar9 | 0x8000;
        *(undefined2 *)(iVar8 + 0x1a) = 0;
      }
    }
    puVar10 = DAT_01005d10;
    uVar19 = *DAT_01005cf0;
    if ((int)(uVar19 << 0xc) < 0) {
      *(char *)(DAT_01005d10 + 2) = (char)puVar18[2];
      *puVar10 = *puVar18;
      *(char *)(puVar10 + 1) = (char)puVar18[1];
      for (uVar14 = 0; uVar14 < *puVar10; uVar14 = uVar14 + 1 & 0xffff) {
        *(undefined1 *)((int)puVar10 + uVar14 + 5) = *(undefined1 *)((int)puVar18 + uVar14 + 5);
      }
    }
    *DAT_01005cf0 = uVar19 & 0xffffefff;
    goto LAB_01005bd2;
  }
  local_20 = (int)*(short *)(DAT_01005cfc + 4);
  cVar3 = *(char *)((int)DAT_01005cf8 + 5);
  if (uVar19 == 7) {
LAB_01005e82:
    *(undefined1 *)(iVar8 + 6) = 0x34;
    puVar12 = PTR_DAT_01006114;
    local_2c = (byte)PTR_DAT_01006114[4] + 0x80;
    uVar4 = *(ushort *)(PTR_DAT_01006108 + 0x22);
    local_30 = (uint)uVar4;
    uVar5 = *(ushort *)(PTR_DAT_01006108 + 0x1e);
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
      FUN_01004e48(&local_60,3,local_2c & 0xff,0x21);
      *(undefined1 *)(iVar8 + 6) = 0;
    }
    else {
      uVar6 = *(ushort *)(PTR_DAT_01006108 + 0x24);
      local_34 = (uint)uVar6;
      uVar7 = *(ushort *)(PTR_DAT_01006108 + 0x20);
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
        FUN_01004e48(&local_60,3,local_2c & 0xff,0x21);
        *(undefined1 *)(iVar8 + 6) = 0;
      }
      else if ((*(byte *)(DAT_01006100 + 0xc) < 2) && (local_20 == 0)) {
        uVar14 = (uint)(byte)PTR_DAT_01006114[6] * 0x100 + (uint)(byte)PTR_DAT_01006114[7];
        if (((cVar3 == '\x04') || (cVar3 == '\x03')) && (uVar13 == 3)) {
          uVar16 = *DAT_01006104;
          *DAT_01006104 = uVar16 | 4;
          if (((uVar19 == 8) && (local_38 < uVar14)) && (uVar14 <= uVar5)) {
            if (cVar3 == '\x04') {
              FUN_010017cc(DAT_0100611c,uVar14,0x20);
            }
            puVar12 = PTR_DAT_01006108;
            puVar18 = (ushort *)(PTR_DAT_01006108 + 0x1e);
            *(short *)(PTR_DAT_01006108 + 0x20) = (short)uVar14;
            uVar13 = *puVar18;
            if (uVar13 <= uVar14) {
              *DAT_01006120 = *DAT_01006120 & 0xfffff7ff;
              *(ushort *)(puVar12 + 0x20) = uVar13;
            }
            *(undefined1 *)(iVar8 + 6) = 0;
          }
          else if (((uVar19 == 7) && (local_34 < uVar14)) && (uVar14 <= local_30)) {
            if (cVar3 == '\x04') {
              FUN_010017cc(DAT_01006124,uVar14,0x18);
            }
            puVar12 = PTR_DAT_01006108;
            *(short *)(PTR_DAT_01006108 + 0x24) = (short)uVar14;
            uVar13 = *(ushort *)(puVar12 + 0x22);
            if (uVar13 <= uVar14) {
              *DAT_01006120 = *DAT_01006120 & 0xffffefff;
              *(ushort *)(puVar12 + 0x24) = uVar13;
            }
            *(undefined1 *)(iVar8 + 6) = 0;
          }
          else {
            *DAT_01006104 = uVar16 & 0xfffffffb;
          }
          if (*(char *)(iVar8 + 6) == '\0') {
            FUN_01004e48(PTR_DAT_01006114 + 5,3,PTR_DAT_01006114[4] + -0x80,0x21);
          }
        }
        else if ((cVar3 == '\x05') && (uVar13 == 1)) {
          if (uVar19 == 8) {
            *(ushort *)(PTR_DAT_01006108 + 0x20) = uVar5;
            FUN_01001cc4(DAT_0100611c);
            *DAT_01006120 = *DAT_01006120 & 0xfffff7ff;
          }
          else {
            *(ushort *)(PTR_DAT_01006108 + 0x24) = uVar4;
            FUN_01001cc4(DAT_01006124);
            *DAT_01006120 = *DAT_01006120 & 0xffffefff;
          }
          FUN_01004e48(puVar12 + 5,1,puVar12[4] + -0x80,0x21);
          *(undefined1 *)(iVar8 + 6) = 0;
        }
        else if ((cVar3 == '\x06') && (uVar13 == 3)) {
          local_60 = '\x06';
          local_5d = 0x68;
          local_5f = bVar2;
          local_5e = bVar1;
          if ((uVar5 < uVar14) || (uVar19 != 8)) {
            if ((uVar19 == 7) && (uVar14 <= local_30)) {
              pbVar17 = (byte *)FUN_01004d44(DAT_01006124,uVar14,0x18);
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
                FUN_01004e48(&local_60,0x1d,0x87,0x21);
                *(undefined1 *)(iVar8 + 6) = 0;
              }
            }
          }
          else {
            pbVar17 = (byte *)FUN_01004d44(DAT_0100611c,uVar14,0x20);
            if (pbVar17 != (byte *)0x0) {
              local_5c = 1;
              uVar19 = 0;
              do {
                bVar1 = *pbVar17;
                pbVar17 = pbVar17 + 1;
                local_5b[uVar19] = bVar1;
                uVar19 = uVar19 + 1 & 0xffff;
              } while (uVar19 < 0x20);
              FUN_01004e48(&local_60,0x25,0x88,0x21);
              *(undefined1 *)(iVar8 + 6) = 0;
            }
          }
        }
      }
    }
    if (*(char *)(iVar8 + 6) != '\0') {
      FUN_01004e48(DAT_01006270,1,*(char *)(DAT_0100626c + 4) + -0x40,0x21);
    }
  }
  else {
    if (uVar19 < 8) {
      local_24 = (uint)*(byte *)((int)DAT_01005cf8 + 5) + (uint)(byte)DAT_01005cf8[3];
      local_28 = *(byte *)((int)DAT_01005cf8 + 5) + 1;
                    /* WARNING: Could not recover jumptable at 0x010059ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_010059ce <= uVar19) {
        uVar19 = (uint)DAT_010059ce;
      }
      (*(code *)((uint)*(byte *)(uVar19 + 0x10059cf) * 2 + 0x10059cf))();
      return;
    }
    if (uVar19 == 8) goto LAB_01005e82;
    iVar15 = (uint)(byte)DAT_01005cf8[3] * 0x100 + (uint)*(byte *)((int)DAT_01005cf8 + 5);
    if (uVar19 == 0xdd) {
      uVar19 = *DAT_01006274;
      if ((int)(uVar19 << 0x1c) < 0) {
        uVar13 = FUN_0100017c(((uint)(DAT_01006280 * iVar15) >> 0x10) * (int)(short)*DAT_01006288,
                              (int)*(short *)(DAT_01006284 + 2));
        if ((uint)uVar13 + iVar11 < DAT_0100628c) {
          *DAT_01006288 = uVar13;
          *DAT_01006274 = uVar19 | 1;
          *(undefined1 *)(iVar8 + 6) = 0;
        }
        else {
          *(undefined1 *)(iVar8 + 6) = 1;
        }
        FUN_01004e48(DAT_01006270,1,0,0x21);
      }
    }
    else if (uVar19 == 0xee) {
      if (((int)((uint)(byte)*DAT_01006274 << 0x1c) < 0) && (*(byte *)(DAT_01006278 + 0xc) < 2)) {
        FUN_010044c8();
        *(char *)(iVar8 + 6) = (char)((*DAT_0100627c & 0x7ff) >> 10);
        FUN_01004e48(DAT_01006270,1,0,0x21);
      }
    }
    else if (uVar19 == 0xff) {
      uVar19 = *DAT_01006274;
      if (((int)(uVar19 << 0x1c) < 0) && (*(short *)(DAT_01006290 + 2) != 0)) {
        uVar13 = FUN_0100017c(((uint)(DAT_01006294 * iVar15) >> 0x10) << 0xc);
        if ((uint)uVar13 + iVar11 < DAT_0100628c) {
          DAT_01006288[1] = uVar13;
          *DAT_01006274 = uVar19 | 1;
          *(undefined1 *)(iVar8 + 6) = 0;
        }
        else {
          *(undefined1 *)(iVar8 + 6) = 1;
        }
        FUN_01004e48(DAT_01006270,1,0,0x21);
      }
    }
    else {
      *(undefined1 *)(iVar8 + 6) = 0x20;
      FUN_01004e48(DAT_01005ce8 + 6,1,local_18 & 0xff,0x21);
    }
  }
  *DAT_01005cf0 = *DAT_01005cf0 & 0xffffefff;
LAB_01005bd2:
  if (*(ushort *)(iVar8 + 0x12) < 0x30d) {
    *DAT_0100627c = *DAT_0100627c & 0xffffbfff;
    *(undefined2 *)(iVar8 + 0x12) = 0;
  }
  else {
    *(ushort *)(iVar8 + 0x12) = *(ushort *)(iVar8 + 0x12) - 1;
  }
  return;
}
