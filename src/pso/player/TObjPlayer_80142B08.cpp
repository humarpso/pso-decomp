#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80142B08(void *arg0);

s32 TObjPlayer__sub_80142B08(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((!(temp_r4 & 4) || (temp_r4 & 1)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        return 1;
    }
    return 0;
}

}
