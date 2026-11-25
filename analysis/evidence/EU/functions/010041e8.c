
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

  puVar2 = PTR_DAT_01004378;
  puVar1 = PTR_DAT_01004374;
  iVar7 = (int)*(short *)(DAT_0100436c + 4);
  if (iVar7 < 1) {
    iVar7 = -iVar7;
  }
  uVar8 = DAT_01004370 * iVar7;
  if (PTR_DAT_01004374[0xc] == '\a') {
    iVar7 = *(int *)(PTR_DAT_01004378 + 0x20);
    *(int *)(PTR_DAT_01004378 + 0x20) = iVar7 + 1;
    FUN_01004e84(PTR_DAT_0100437c,(int)(short)(uVar8 >> 0x10),iVar7 + 1,in_r3,in_r3);
  }
  puVar12 = (uint *)(PTR_DAT_01004378 + 0x2c);
  if ((((1 < (byte)puVar1[0xc]) && (uVar9 = *puVar12, -1 < (int)(uVar9 << 0x13))) &&
      (*(uint *)(puVar2 + 0x38) = *(int *)(puVar2 + 0x38) + (uVar8 >> 0x10),
      -1 < (int)(uVar9 << 0x11))) &&
     (uVar10 = *(int *)(puVar2 + 0x24) + (uVar8 >> 0x10), *(uint *)(puVar2 + 0x24) = uVar10,
     DAT_01004380 < uVar10)) {
    *puVar12 = uVar9 | 0x4000;
  }
  puVar3 = PTR_DAT_01004384;
  PTR_DAT_01004384[0xd] = (char)(uVar8 >> 0x18);
  puVar3[0xe] = (char)(uVar8 >> 0x10);
  iVar7 = *(short *)(puVar1 + 2) * 0xca;
  puVar3[0x10] = (char)(iVar7 >> 0x14);
  puVar3[0x11] = (char)(iVar7 >> 0xc);
  sVar6 = *(short *)(DAT_0100436c + 4);
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
  uVar9 = *(uint *)(PTR_DAT_01004378 + 0x30);
  puVar3[0x18] = (char)(uVar9 >> 0x18);
  puVar3[0x19] = (char)(uVar9 >> 0x10);
  puVar3[0x1a] = (char)(uVar9 >> 8);
  puVar3[0x1b] = (char)uVar9;
  uVar11 = *(undefined4 *)(PTR_DAT_01004378 + 0x34);
  puVar3[0x1c] = (char)((uint)uVar11 >> 0x18);
  puVar3[0x1d] = (char)((uint)uVar11 >> 0x10);
  puVar3[0x1e] = (char)((uint)uVar11 >> 8);
  puVar3[0x1f] = (char)uVar11;
  uVar5 = FUN_0100017c(*(undefined4 *)(puVar2 + 0x38),0x168);
  puVar1 = PTR_DAT_01004384;
  PTR_DAT_01004384[0x33] = (char)(uVar5 >> 8);
  puVar1[0x34] = (char)uVar5;
  iVar7 = *(int *)(puVar2 + 0x3c) + (uint)uVar5;
  puVar1[0x35] = (char)((uint)iVar7 >> 0x18);
  puVar1[0x36] = (char)((uint)iVar7 >> 0x10);
  puVar1[0x37] = (char)((uint)iVar7 >> 8);
  puVar1[0x38] = (char)iVar7;
  *(uint *)(PTR_DAT_01004378 + 0x30) =
       uVar9 & 0xffffff7f | (((byte)*PTR_DAT_01004388 & 7) >> 2) << 7;
  puVar1 = PTR_DAT_01004384;
  *puVar12 = uVar8 & 0xffffffef | ((byte)PTR_DAT_01004384[0x57] & 1) << 4;
  uVar5 = (ushort)(byte)puVar1[0x6d] + (ushort)(byte)puVar1[0x6c] * 0x100;
  *(ushort *)(puVar2 + 0x14) = uVar5;
  if (uVar5 < 0xfb) {
    if (uVar5 < 0x32) {
      *(undefined2 *)(puVar2 + 0x14) = 0x32;
      puVar1[0x6c] = 0;
      puVar1[0x6d] = 0x32;
    }
  }
  else {
    *(undefined2 *)(puVar2 + 0x14) = 0xfa;
    puVar1[0x6c] = puVar1[0x6a];
    puVar1[0x6d] = puVar1[0x6b];
  }
  iVar7 = FUN_0100017c(*(undefined2 *)(puVar2 + 0x14),10);
  sVar6 = FUN_0100017c(((((uint)(DAT_0100438c * iVar7) >> 0x10) + 6) * 8 - 0x50 & 0xffff) << 10,
                       DAT_01004390);
  *(short *)(puVar2 + 0x16) = sVar6 + 1;
  puVar4 = DAT_01004394;
  uVar5 = (ushort)(byte)puVar1[0x56] + (ushort)(byte)puVar1[0x55] * 0x100;
  if (0x3c < uVar5) {
    puVar1[0x55] = 0;
    puVar1[0x56] = *puVar4;
    return;
  }
  if (uVar5 < 0x1e) {
    *DAT_01004394 = 0x1e;
    return;
  }
  *DAT_01004394 = (char)uVar5;
  return;
}
