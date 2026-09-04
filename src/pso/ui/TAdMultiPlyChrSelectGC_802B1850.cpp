#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32 arg0, s32 arg1, u32 arg2);

void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32 arg0, s32 arg1, u32 arg2) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (arg0 + (arg1 * 4));
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x24) != arg2) {
        M2C_FIELD(temp_r3, u32 *, 0x1C) = arg2;
        M2C_FIELD(temp_r3, s32 *, 0x3C) = 0;
    }
    M2C_FIELD(temp_r3, u32 *, 0x24) = arg2;
}

}
