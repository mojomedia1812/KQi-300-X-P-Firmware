
void Vector_3(void)

{
  *(undefined4 *)(DAT_01000614 + 0x38) = 0x2a;
  *(uint *)(DAT_01000614 + 0xc) = *(uint *)(DAT_01000614 + 0xc) & 0xffffffc0;
  *(undefined4 *)(DAT_01000614 + 0x10) = 0;
  *(int *)(DAT_01000618 + 0x30) = *(int *)(DAT_01000618 + 0x30) + 1;
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_01000620 + 0xc) = DAT_0100061c;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}
