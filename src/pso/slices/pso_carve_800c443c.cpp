#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK fn_800C4D44();
extern u32 lbl_805D5174;

void fn_800C443C(void) {
    fn_800C4D44();
    if ((u32) lbl_805D5174 != 0U) {
        fn_8001FE7C((void*)lbl_805D5174, 1);
        lbl_805D5174 = 0U;
    }
}

}
