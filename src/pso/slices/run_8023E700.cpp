#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int fn_803DA16C();

s32 fn_8023E700(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    fn_803DA16C();
    return 1;
}

M2C_UNK fn_803DDC50();

s32 fn_8023E734(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    fn_803DDC50();
    return 1;
}

}
