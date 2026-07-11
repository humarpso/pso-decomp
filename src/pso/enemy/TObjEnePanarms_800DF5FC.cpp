#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEnePanarms__sub_800DF5FC(void);
void fn_8001FE7C(void*, int);

extern u32 lbl_805D5278;

void TObjEnePanarms__sub_800DF5FC(void) {
    if ((u32) lbl_805D5278 != 0U) {
        fn_8001FE7C((void*)lbl_805D5278, 1);
        lbl_805D5278 = 0U;
    }
}

}
