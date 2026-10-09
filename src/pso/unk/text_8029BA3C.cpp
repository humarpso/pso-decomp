#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32, f32, f32);
M2C_UNK set_draw_texture_and_color(void *, void *);
extern s32 TAdBackTxtGC__backtext_texture_list;
extern const f32 lbl_805DDCF8;
extern const f32 lbl_805DDCFC;
extern const f32 lbl_805DDD00;
extern const f32 lbl_805DDD04;
void draw_character_background_frame(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void draw_character_background_frame(u8 *arg0, s32 arg1, s32 arg2) {
  f32 buffer_8[8];
  begin_screen_draw((int) 1);
  set_global_param__8TObjFishFi((void *) TAdBackTxtGC__backtext_texture_list);
  set_draw_texture_and_color((void *) arg1, (void *) arg2);
  buffer_8[0] = lbl_805DDCF8;
  buffer_8[1] = lbl_805DDCF8;
  buffer_8[2] = lbl_805DDCFC;
  buffer_8[3] = lbl_805DDD00;
  buffer_8[4] = lbl_805DDCF8;
  buffer_8[5] = lbl_805DDCF8;
  buffer_8[7] = (buffer_8[6] = lbl_805DDD04);
  draw_textured_quad_at_depth((void *) (&buffer_8[0]), (f32) (*((f32 *) (((s8 *) arg0) + 0x20))), (f32) lbl_805DDCFC, (f32) lbl_805DDCF8);
  get_player__20TWindowSubStatusDispFv();
}

}
