
void FUN_01000128(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;

  uVar1 = FUN_01000408();
  FUN_01000120(uVar1,extraout_r2);
  FUN_0100306c();
  uVar2 = FUN_01000446();
  FUN_01000124();
  FUN_010004bc((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  (*DAT_01000168)();
  (*DAT_0100016c)();
  return;
}
