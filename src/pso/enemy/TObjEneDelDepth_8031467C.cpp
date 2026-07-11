#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDelDepth__sub_8031467C(void *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, M2C_UNK);
s32 fn_8031624C(void *);
s32 fn_80316420(s32);

void TObjEneDelDepth__sub_8031467C(void *arg0) {
    if (fn_80316420(M2C_FIELD(arg0, s32 *, 0x37C)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        if (fn_8031624C(arg0) != 0) {
            TObjEneDelDepth__sub_803154A8(arg0, 7);
            return;
        }
        TObjEneDelDepth__sub_803154A8(arg0, 6);
    }
}

}
