#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt80364258_80364258 { s32 f0; };

extern "C" {

void TObjPlayer__sub_80364258(u8 *arg0, s32 arg1);

void TObjPlayer__sub_80364258(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r0 < 0x20) {
        ((struct Elt80364258_80364258 *)(arg0 + 0x30))[temp_r0].f0 = arg1;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) + 1);
    }
}

}
