
ushort * FUN_01004d44(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;

  while( true ) {
    uVar1 = *param_1;
    if (uVar1 == DAT_01004d68) {
      return (ushort *)0x0;
    }
    if (((uint)uVar1 * 0x100 + (uint)(uVar1 >> 8) & 0xffff) == param_2) break;
    param_1 = (ushort *)((param_3 & 0xfffffffe) + (int)param_1);
  }
  return param_1;
}
