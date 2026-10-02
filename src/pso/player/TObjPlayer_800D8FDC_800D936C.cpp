#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_dead_spot_scale15(s32 arg0, s32 arg1);
void TObjPlayer__sub_800D93C4(s32 arg0, s32 arg1);
void spawn_dead_spot_type2__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK spawn_dead_spot__10TObjPlayerFiiif(M2C_UNK, s32, s32, f32);

extern const f32 lbl_805DA3C8;

void spawn_dead_spot_type2__10TObjPlayerFii(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 2, arg1, lbl_805DA3C8);
}

extern const f32 lbl_805DA3CC;

void spawn_dead_spot_scale15(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 2, arg1, lbl_805DA3CC);
}

extern const f32 lbl_805DA3D0;

void TObjPlayer__sub_800D93C4(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 2, arg1, lbl_805DA3D0);
}

}
