#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80121200();
M2C_UNK fn_803D929C(M2C_UNK, s32);

void fn_8034F810(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80121200();
    switch (temp_r3) {
    case 2:
        fn_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 8:
        fn_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    }
}

}
