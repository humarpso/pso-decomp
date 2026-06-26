#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80121200();
M2C_UNK fn_803D929C(M2C_UNK, s32);
M2C_UNK fn_803DB470(u32);

void fn_801249C4(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80121200();
    if ((temp_r3 > 0) && (temp_r3 < 4)) {
        fn_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
    if (temp_r3 == 4) {
        if (M2C_FIELD(arg0, u32 *, 0x188) != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 1) {
                fn_803DB470(M2C_FIELD(arg0, u32 *, 0x188));
            }
        }
    }
}

}
