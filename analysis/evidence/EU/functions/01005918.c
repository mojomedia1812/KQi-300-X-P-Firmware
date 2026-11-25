
void FUN_01005918(void)

{
  ushort uVar1;
  undefined *puVar2;

  puVar2 = PTR_DAT_01005958;
  uVar1 = *(ushort *)PTR_DAT_01005958;
  *(ushort *)PTR_DAT_01005958 =
       (ushort)(((uint)(uVar1 >> 2) | (uint)uVar1 << 0x1e) + 0x80000000 >> 0x1e) | (uVar1 >> 2) << 2
  ;
  (**(code **)(PTR_DAT_0100595c + ((uVar1 & 3) >> 1) * 4))();
  uVar1 = *(ushort *)puVar2;
  *(ushort *)puVar2 =
       (ushort)(((uint)(uVar1 >> 4) | (uint)uVar1 << 0x1c) + 0x40000000 >> 0x1c) | (uVar1 >> 4) << 4
  ;
  (**(code **)(PTR_DAT_0100595c + (uVar1 & 0xc) + 8))();
  return;
}
