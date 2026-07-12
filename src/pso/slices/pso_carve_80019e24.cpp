#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TItemLoad__sub_8010FE20(void*, int);
extern s32 lbl_805D49D8;
extern u32 lbl_805D49DC;

void fn_80019E24(void) {
    if ((u32) lbl_805D49DC != 0U) {
        TItemLoad__sub_8010FE20((void*)lbl_805D49DC, 1);
        lbl_805D49DC = 0U;
        lbl_805D49D8 = 0;
    }
}

}
