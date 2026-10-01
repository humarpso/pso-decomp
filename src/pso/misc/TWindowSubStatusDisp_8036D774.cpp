#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Desc_8036D774 { f32 *pos; u32 *col; s32 a; s32 n; };

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
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TWindowSubStatusDisp__sub_8036D88C();
M2C_UNK TWindowSubStatusDisp__sub_8036D994();
void TWindowSubStatusDisp__sub_8036DA94(void);
extern s32 lbl_805D7018;
extern s32 lbl_805D701C;
void TWindowSubStatusDisp__sub_8036DB54(void);
void TWindowCtrlMain__sub_801E352C(Desc_8036D774 *, int, int, f32);
extern const f32 lbl_805E03E8;
extern const f32 lbl_805E03EC;
extern const f32 lbl_805E03F0;
extern const f32 lbl_805E03F4;
extern const f32 lbl_805E03F8;
extern const f32 lbl_805E03FC;
void TWindowSubStatusDisp__sub_8036D774(void);
}

extern "C" {

void TWindowSubStatusDisp__sub_8036D774(void) {
    f32 verts[8];
    Desc_8036D774 d;
    u32 cols[4];
    d.pos = verts;
    d.col = cols;
    d.a = 0;
    d.n = 4;
    d.pos[0] = lbl_805E03E8;
    d.pos[1] = lbl_805E03EC;
    d.col[0] = 0xFF000000;
    d.pos[2] = lbl_805E03F0;
    d.pos[3] = lbl_805E03EC;
    d.col[1] = 0xFF000000;
    d.pos[4] = lbl_805E03F0;
    d.pos[5] = lbl_805E03F0;
    d.col[2] = 0xFF000000;
    d.pos[6] = lbl_805E03E8;
    d.pos[7] = lbl_805E03F0;
    d.col[3] = 0xFF000000;
    TWindowCtrlMain__sub_801E352C(&d, 4, 0x16, lbl_805E03F4);
    d.pos[0] = lbl_805E03F8;
    d.pos[1] = lbl_805E03F8;
    d.pos[2] = lbl_805E03FC;
    d.pos[3] = lbl_805E03F8;
    d.pos[4] = lbl_805E03FC;
    d.pos[5] = lbl_805E03EC;
    d.pos[6] = lbl_805E03F8;
    d.pos[7] = lbl_805E03EC;
    TWindowCtrlMain__sub_801E352C(&d, 4, 0x16, lbl_805E03F4);
}

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
void TWindowSubStatusDisp__sub_8036DB54(void) {
    s32 var_r3;
    if ((u32) (*(u32 *)&lbl_805D7018) != 0U) {
        set_depth_buffer_settings_2__Fv();
        reset_transform_state__10TObjPlayerFv();
        begin_effect_render__13TParticleCtrlFv();
        TCameraCtrl__sub_80069024();
        TWindowSubStatusDisp__sub_8036DA94();
        TWindowSubStatusDisp__sub_8036D994();
        TWindowSubStatusDisp__sub_8036D88C();
        TWindowSubStatusDisp__sub_8036D774();
        TCameraCtrl__sub_80068EF0();
        end_effect_render__13TParticleCtrlFv();
        fn_80141A30();
        var_r3 = lbl_805D701C;
        lbl_805D701C = var_r3 + 1;
        if (var_r3 > 0x708) {
            lbl_805D701C = 0;
        }
    }
}

}
