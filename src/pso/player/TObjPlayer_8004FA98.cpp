#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();
extern const f32 lbl_805D8A0C;
extern const f32 lbl_805D8A10;
int TObjPlayer__sub_8004FB24(void *p);
}

extern "C" {

void release_subobjects__10TObjPlayerFPv(u8 *arg0);
void update_both__10TObjPlayerFPv(void* p);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();

extern const f32 lbl_805D8A08;

void release_subobjects__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) >= 0xB4) {
        TObjPlayer__sub_80052390(lbl_805D8A08);
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00(arg0 + 0xD4);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xE0));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xCC));
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x108));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x108));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        sync_player_globals__10TObjPlayerFv();
    }
}

int TObjPlayer__sub_8004FB24(void *p) {
    u8 *arg0 = (u8 *)p;
    f32 alpha;
    f32 frac;
    s32 t;
    alpha = lbl_805D8A0C;
    t = M2C_FIELD(arg0, s32 *, 0xE4);
    if (t >= 0xF0) {
        return;
    }
    if (t > 0xA0) {
        alpha = (f32)(0xF0 - t) / lbl_805D8A10;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0 + 0xD4);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xE0));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xA8));
    TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0xEC));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xE8));
    clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0xEC));
    frac = (s32)M2C_FIELD(arg0, f32 *, 0xE8) % 30;
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xB4));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xB0), M2C_FIELD(arg0, s32 *, 0xB8), frac);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC0));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC4), frac);
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

void update_both__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8004FB24((void *)(p)); release_subobjects__10TObjPlayerFPv((u8 *)(p)); }

}
