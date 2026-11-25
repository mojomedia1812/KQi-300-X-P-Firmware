
void Reset_Handler(void)

{
  (*DAT_01000168)();
  (*DAT_0100016c)();
  return;
}
