#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_pair__20TWindowSubStatusDispFii(s32 arg0, s32 arg1);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_textured_quad_at_depth(s32, f32);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32);

extern s32 lbl_805D6668;
extern f32 lbl_805DDF88;

void render_status_pair__20TWindowSubStatusDispFii(s32 arg0, s32 arg1) {
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D6668);
    TWindowSubStatusDisp__sub_803DF160(0, arg1);
    draw_textured_quad_at_depth(arg0 + 0x1C, lbl_805DDF88);
    get_player__20TWindowSubStatusDispFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D6668);
    TWindowSubStatusDisp__sub_803DF160(0, arg1);
    draw_textured_quad_at_depth(arg0 + 0x3C, lbl_805DDF88);
    get_player__20TWindowSubStatusDispFv();
}

}
