#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_803E1A58(void *, void *);

void fn_8016D99C(u8 *arg0) {
    if ((fn_803E1A58(arg0 + 0xE4, arg0 + 0x38) > M2C_FIELD(arg0, f32 *, 0x6C)) && ((u8) M2C_FIELD(arg0, u8 *, 0x100) != 4)) {
        M2C_FIELD(arg0, u8 *, 0x100) = 3U;
    }
}

}
