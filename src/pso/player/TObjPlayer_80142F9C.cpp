#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model_with_callback__10TObjPlayerFPv(u8 *arg0);
void render_world_model__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK draw_model_blend_motion(s32, void *, f32);

extern M2C_UNK TObjPlayer__sub_80142EEC[];
extern u32 lbl_805D567C;

void draw_model_with_callback__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xE0);
    if (temp_r0 != 0U) {
        lbl_805D567C = temp_r0;
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(TObjPlayer__sub_80142EEC));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
        if ((temp_r3 & 4) && !(temp_r3 & 0x400)) {
            draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
        } else {
            draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(NULL));
        reset_transform_state__10TObjPlayerFv();
    }
}

extern s32 lbl_805D7810;

void render_world_model__10TObjPlayerFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(lbl_805D7810));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(0));
    }
    reset_transform_state__10TObjPlayerFv();
    clear_global_state__10TObjPlayerFv();
}

}
