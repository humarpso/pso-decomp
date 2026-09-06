#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
extern s32 lbl_805D7018;
extern const f32 lbl_805E03F0;
extern const f32 lbl_805E03F8;
extern const f32 lbl_805E0400;
extern const f32 lbl_805E0404;
extern const f32 lbl_805E0408;
extern const f32 lbl_805E041C;
void TWindowSubStatusDisp__sub_8036DA94(void);
}

extern "C" {

void TWindowSubStatusDisp__sub_8036DA94(void) {
  s32 var_r31;
  f32 buffer_8[8];
  f32 temp_f31;
  TWindowSubStatusDisp__sub_803DEE6C((int) 1);
  set_global_param__8TObjFishFi((void *) lbl_805D7018);
  TWindowSubStatusDisp__sub_803DF160((int) 0, (int) (-1));
  var_r31 = 0;
  ;
  buffer_8[0] = lbl_805E03F8;
  buffer_8[1] = lbl_805E041C;
  buffer_8[2] = lbl_805E0408;
  buffer_8[3] = lbl_805E03F0;
  buffer_8[4] = lbl_805E03F8;
  buffer_8[5] = lbl_805E03F8;
  buffer_8[6] = lbl_805E0400;
  buffer_8[7] = lbl_805E0404;
  do
  {
    TWindowSubComCard__sub_803DEECC((void *) (&buffer_8[0]), (f32) lbl_805E0400);
    var_r31 += 1;
    buffer_8[0] += lbl_805E0408;
    buffer_8[2] += lbl_805E0408;
  }
  while (var_r31 < 0xA);
  get_player__20TWindowSubStatusDispFv();
}

}
