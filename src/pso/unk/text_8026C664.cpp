#include "types.h"

struct Stack_8026C708
{
  f32 sp8;
  f32 spC;
  f32 sp10;
  f32 sp14;
  f32 sp18;
  f32 sp1C;
  f32 sp20;
  f32 sp24;
};

extern "C" {
void TWindowKeyBoardSoft__sub_8024E6D8(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
extern const f32 lbl_805DD270;
extern const f32 lbl_805DD274;
extern const f32 lbl_805DD278;
extern const f32 lbl_805DD27C;
extern const f32 lbl_805DD280;
extern const f32 lbl_805DD284;
extern const f32 lbl_805DD288;
void fn_8026C664(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void TWindowKeyBoardSoft__sub_8024E6D8(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
extern const f32 lbl_805DD270;
extern const f32 lbl_805DD274;
extern const f32 lbl_805DD278;
extern const f32 lbl_805DD280;
extern const f32 lbl_805DD288;
extern const f32 lbl_805DD28C;
extern const f32 lbl_805DD290;
void fn_8026C708(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
}

extern "C" {

void fn_8026C664(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
  f32 buffer_8[8];
  buffer_8[0] = farg0;
  buffer_8[1] = farg1;
  if (farg3 < lbl_805DD270)
  {
    buffer_8[0] = ((f32) ((double) farg0)) + farg3;
  }
  buffer_8[2] = lbl_805DD274 + buffer_8[0];
  buffer_8[3] = lbl_805DD278 + buffer_8[1];
  buffer_8[4] = lbl_805DD27C;
  buffer_8[5] = lbl_805DD280;
  buffer_8[6] = lbl_805DD284;
  buffer_8[7] = lbl_805DD288;
  TWindowKeyBoardSoft__sub_8024E6D8(arg0, &buffer_8[0]);
  draw_textured_quad_at_depth(&buffer_8[0], farg2);
}
typedef struct Stack_8026C708 Stack_8026C708;
void fn_8026C708(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
  float new_var;
  Stack_8026C708 stack;
  stack.sp8 = farg0;
  stack.spC = farg1;
  if (farg3 > lbl_805DD270)
  {
    stack.sp8 = ((f32) ((double) farg0)) + farg3;
  }
  stack.sp10 = lbl_805DD274 + stack.sp8;
  new_var = lbl_805DD278 + stack.spC;
  stack.sp14 = new_var;
  stack.sp18 = lbl_805DD28C;
  stack.sp1C = lbl_805DD280;
  stack.sp20 = lbl_805DD290;
  stack.sp24 = lbl_805DD288;
  TWindowKeyBoardSoft__sub_8024E6D8(arg0, &stack.sp8);
  draw_textured_quad_at_depth(&stack.sp8, farg2);
}

}
