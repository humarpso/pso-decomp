#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBalClawClaw__sub_80090D3C(void *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK advance_animation_playback(void *);

extern f32 TObjEneBalClawClaw__data_805D968C;

void TObjEneBalClawClaw__sub_80090D3C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        return;
    }
}

}
