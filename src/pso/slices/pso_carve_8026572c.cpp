#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_array_entry__20TWindowSubStatusDispFPvi();

s32 fn_8026572C(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x78);
    if (temp_r4 < 0) {
        return 0;
    }
    if (temp_r4 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        return 0;
    }
    return get_array_entry__20TWindowSubStatusDispFPvi();
}

}
