
void FUN_01003068(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;

  FUN_010030d0();
  FUN_01005688();
  iVar2 = DAT_010030cc;
  puVar3 = (ushort *)(DAT_010030cc + -2);
  do {
    do {
      if (9 < *(byte *)(iVar2 + 2)) {
        *(undefined1 *)(iVar2 + 2) = 0;
        uVar1 = *puVar3;
        *puVar3 = (ushort)(((uint)(uVar1 >> 5) | (uint)uVar1 << 0x1b) + 0x80000000 >> 0x1b) |
                  (uVar1 >> 5) << 5;
        (**(code **)(DAT_010030cc + 0xe + ((uVar1 & 0x1f) >> 4) * 4))();
      }
    } while (*(char *)(iVar2 + 1) == '\0');
    *(undefined1 *)(iVar2 + 1) = 0;
    FUN_01002d78();
    FUN_01000fd0();
    uVar1 = *puVar3;
    *puVar3 = (ushort)(((uint)(uVar1 >> 1) | (uint)uVar1 << 0x1f) + 0x80000000 >> 0x1f) |
              (uVar1 >> 1) << 1;
    (**(code **)(DAT_010030cc + 6 + (uVar1 & 1) * 4))();
  } while( true );
}
