#include "types.h"
extern "C" {
void TWindowKeyBoardSoft__sub_8024E6D8(void *, void *);
void TWindowSubComCard__sub_803DEECC(void *, f32);
extern const f32 lbl_805DD270;
extern const f32 lbl_805DD274;
extern const f32 lbl_805DD278;
extern const f32 lbl_805DD27C;
extern const f32 lbl_805DD280;
extern const f32 lbl_805DD284;
extern const f32 lbl_805DD288;
void fn_8026C664(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
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
  TWindowSubComCard__sub_803DEECC(&buffer_8[0], farg2);
}

}
