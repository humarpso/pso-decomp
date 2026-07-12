#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneEpsilonGuard__sub_80361E24(u8 *arg0);
s32 TObjEneEpsilon__sub_800B96D4(f32);

extern const f32 lbl_805E0238;

void TObjEneEpsilonGuard__sub_80361E24(u8 *arg0) {
    if (TObjEneEpsilon__sub_800B96D4((f32) (lbl_805E0238)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFF7F);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x80);
}

}
