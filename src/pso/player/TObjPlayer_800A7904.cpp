#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_hit_sound__10TObjPlayerFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800F5EB4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_8022602C(M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D9AA0;

void play_hit_sound__10TObjPlayerFi(s32 arg0) {
    M2C_UNK temp_r3;
    if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9AA0) {
        temp_r3 = TObjEnePanarms__sub_800F5EB4(arg0, 0x4003B23B);
        TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
    } else {
        temp_r3 = TObjEnePanarms__sub_800F5EB4(arg0, 0x4003B23C);
        TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
    }
    TObjPlayer__sub_8022602C(-0x100);
}

}
