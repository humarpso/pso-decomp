#include "types.h"
extern "C" {
extern s32 lbl_805D53D8;
extern s32 lbl_805D53DC;
s32 fn_800FE0A8(void);
}

extern "C" {

s32 fn_800FE0A8(void) {
  unsigned long new_var;
  s32 temp_r3;
  new_var = lbl_805D53D8;
  new_var = lbl_805D53DC - new_var;
  lbl_805D53D8 = lbl_805D53D8;
  temp_r3 = new_var;
  return (lbl_805D53DC - lbl_805D53D8) & (((s32) ((-temp_r3) & (~new_var))) >> 0x1F);
}

}
