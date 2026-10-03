#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_box__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK set_draw_texture_and_color(int, int);

extern s32 lbl_805D6E88;
extern const f32 lbl_805DFD60;

void render_status_box__20TWindowSubStatusDispFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6E88));
    set_draw_texture_and_color((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x74) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x54), (f32) (lbl_805DFD60));
    get_player__20TWindowSubStatusDispFv();
}

}
