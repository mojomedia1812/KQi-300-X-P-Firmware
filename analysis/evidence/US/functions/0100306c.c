
void FUN_0100306c(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;

  FUN_010030d4();
  FUN_0100568c();
  iVar2 = DAT_010030d0;
  puVar3 = (ushort *)(DAT_010030d0 + -2);
  do {
    do {
      if (9 < *(byte *)(iVar2 + 2)) {
        *(undefined1 *)(iVar2 + 2) = 0;
        uVar1 = *puVar3;
        *puVar3 = (ushort)(((uint)(uVar1 >> 5) | (uint)uVar1 << 0x1b) + 0x80000000 >> 0x1b) |
                  (uVar1 >> 5) << 5;
        (**(code **)(DAT_010030d0 + 0xe + ((uVar1 & 0x1f) >> 4) * 4))();
      }
    } while (*(char *)(iVar2 + 1) == '\0');
    *(undefined1 *)(iVar2 + 1) = 0;
    FUN_01002d7c();
    FUN_01000fd4();
    uVar1 = *puVar3;
    *puVar3 = (ushort)(((uint)(uVar1 >> 1) | (uint)uVar1 << 0x1f) + 0x80000000 >> 0x1f) |
              (uVar1 >> 1) << 1;
    (**(code **)(DAT_010030d0 + 6 + (uVar1 & 1) * 4))();
  } while( true );
}
