#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDf2Bringer__sub_800990F0(void *arg0);
s32 TObjEneEpsilon__sub_800B95E0();
M2C_UNK TObjEneEpsilon__sub_800B96D4(f32);

extern f32 lbl_805D9820;

void TObjEneDf2Bringer__sub_800990F0(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        TObjEneEpsilon__sub_800B96D4(lbl_805D9820);
        return;
    }
    if (TObjEneEpsilon__sub_800B95E0() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

}
