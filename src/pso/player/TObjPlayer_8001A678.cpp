#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag890_state__10TObjPlayerFPv(void *arg0);

s32 get_flag890_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x890);
    var_r3 = 0;
    if (temp_r4 & 0x20) {
        var_r3 = 0;
    }
    if (temp_r4 & 0x40) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x80) {
        return 2;
    }
    return var_r3;
}

}
