#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 __eq__16TPlyGuildCardTagFR16TPlyGuildCardTag(void *arg0, void *arg1);

u8 __eq__16TPlyGuildCardTagFR16TPlyGuildCardTag(void *arg0, void *arg1) {
    int var_r6;

    var_r6 = 0;
    if (((u8) M2C_FIELD(arg0, u8 *, 1) == (u8) M2C_FIELD(arg1, u8 *, 1)) && ((u16) M2C_FIELD(arg0, u16 *, 2) == (u16) M2C_FIELD(arg1, u16 *, 2)) && ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) M2C_FIELD(arg1, u32 *, 4))) {
        var_r6 = 1;
    }
    return (u8)var_r6;
}

}
