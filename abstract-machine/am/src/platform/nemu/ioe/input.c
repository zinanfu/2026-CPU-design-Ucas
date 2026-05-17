#include <am.h>
#include <nemu.h>

#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t code = inl(0xa0000060);


  kbd->keydown = ((code & KEYDOWN_MASK) != 0);
  kbd->keycode = code & 0x7fff;

  if (code != 0) {
    printf("The code is 0x%x\n", code);
  }
 
  
}
