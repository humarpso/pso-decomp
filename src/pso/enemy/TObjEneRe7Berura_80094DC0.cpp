#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0);

u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0) {
    int var_r4;
    s32 temp_r5;
    s32 temp_r0;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4BC);
    var_r4 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B8);
    if ((temp_r5 >= temp_r0) || (temp_r5 <= (s32) -temp_r0)) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

}
