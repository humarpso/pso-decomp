#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690();
s32 fn_8001A430();
M2C_UNK fn_8006AF9C(void *, M2C_UNK);

void fn_8006AB4C(void *arg0) {
    if ((fn_80019690() == 0) && (fn_8001A430() != 1)) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
            fn_8006AF9C(arg0, 0);
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
}

}
