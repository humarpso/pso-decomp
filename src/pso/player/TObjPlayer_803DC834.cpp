#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DC83C { u8 pad[0x77]; u8 f; };

struct S_803DC850 { u8 pad[0x78]; u8 f; };

extern "C" {
extern S_803DC83C ginja_material_cache;
void set_ginja_post_texgen_count(s32 x);
extern S_803DC83C ginja_material_cache;
void set_ginja_post_tev_stage_count(s32 x);
}

extern "C" {

void set_ginja_draw_end_callback(s32 arg0);
void set_global_effect_state__10TObjPlayerFi(s32 arg0);

extern s32 lbl_805D76E0;

void set_global_effect_state__10TObjPlayerFi(s32 arg0) {
    lbl_805D76E0 = arg0;
}

extern s32 ginja_draw_end_callback;

#pragma push
#pragma scheduling off
#pragma peephole off
void set_ginja_post_texgen_count(s32 x) {
    ginja_material_cache.f = (u8)x;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void set_ginja_post_tev_stage_count(s32 x) {
    (*(S_803DC850 *)&ginja_material_cache).f = (u8)x;
}
#pragma pop

void set_ginja_draw_end_callback(s32 arg0) {
    ginja_draw_end_callback = arg0;
}

}
