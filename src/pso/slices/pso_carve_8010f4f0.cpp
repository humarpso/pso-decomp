#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8010FA4C(void *);
extern void *lbl_805D549C;
extern void *lbl_805D54A0;

void fn_8010F4F0(void) {
    void *temp_r3;
    temp_r3 = lbl_805D549C;
    if (temp_r3 != 0) {
        fn_8010FA4C(temp_r3);
    }
    temp_r3 = lbl_805D54A0;
    if (temp_r3 != 0) {
        fn_8010FA4C(temp_r3);
    }
}

}
