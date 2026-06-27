#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8031F070();

u8 fn_8031FA64(void *arg0) {
    int var_r4;

    if (fn_8031F070() == 1) {
        return 1;
    }
    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) >= (s32) M2C_FIELD(arg0, s32 *, 0x3F8)) || ((s32) M2C_FIELD(arg0, s32 *, 0x414) >= (s32) M2C_FIELD(arg0, s32 *, 0x3F4))) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

}
