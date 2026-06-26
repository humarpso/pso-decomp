#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);

void fn_800A0210(void *arg0) {
    s32 var_r31;

    var_r31 = M2C_FIELD(arg0, u8 *, 0x37);
    var_r31 -= 0x10;
    if (var_r31 < 0) {
        var_r31 = 0;
        queue_destruction__7TObjectFv(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) var_r31;
    M2C_FIELD(arg0, s8 *, 0x3B) = (s8) var_r31;
}

}
