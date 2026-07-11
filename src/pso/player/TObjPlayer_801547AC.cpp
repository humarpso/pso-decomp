#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt { char pad[0x18]; s32 f18; char pad2[0x2C - 0x1C]; };

extern "C" {

u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);

u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct Elt *temp_r3;

    temp_r3 = M2C_FIELD(arg0, struct Elt **, 0xA4);
    if (temp_r3 != 0) {
        return (u8) ((arg2 & temp_r3[arg1].f18) != 0);
    }
    return 0U;
}

}
