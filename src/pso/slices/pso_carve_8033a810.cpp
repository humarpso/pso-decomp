#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_803DA16C(void*);
extern u32 lbl_805D6D78;

void fn_8033A810(void) {
    if ((u32) lbl_805D6D78 != 0U) {
        fn_803DA16C((void*)lbl_805D6D78);
        lbl_805D6D78 = 0U;
    }
}

}
