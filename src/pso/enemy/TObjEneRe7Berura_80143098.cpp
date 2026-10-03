#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__16TObjEneRe7BeruraFPv(u8 *arg0);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(s32);
M2C_UNK restore_actor_draw_lighting(s32);
M2C_UNK setup_actor_draw_lighting();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK draw_model_blend_motion(s32, void *, f32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern s32 lbl_805D7810;

void draw__16TObjEneRe7BeruraFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    setup_actor_draw_lighting();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_global_state__16TObjEneRe7BeruraFi(lbl_805D7810);
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_global_state__16TObjEneRe7BeruraFi(0);
    }
    reset_transform_state__10TObjPlayerFv();
    restore_actor_draw_lighting(M2C_FIELD(arg0, s32 *, 0));
    clear_global_state__10TObjPlayerFv();
}

}
