
void FUN_010000c8(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  int iVar3;

  iVar1 = DAT_010000fc;
  puVar2 = (undefined4 *)((int)&DAT_010000fc + DAT_010000fc);
  iVar3 = DAT_010000fc + 0x10000fb;
  if (puVar2 == (undefined4 *)((int)&DAT_010000fc + DAT_01000100)) {
    FUN_01000128();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x1000108);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x010000fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar2,*(undefined4 *)((int)&DAT_01000100 + iVar1),*(undefined4 *)(iVar1 + 0x1000104))
  ;
  return;
}
