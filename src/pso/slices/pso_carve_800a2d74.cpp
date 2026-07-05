#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK TEneEffHamon__sub_800A380C();
M2C_UNK fn_800A4288();
void fn_801E483C(void*);
extern u32 lbl_805D500C;
extern u32 lbl_805D5010;

void fn_800A2D74(void) {
    if ((u32) lbl_805D500C != 0U) {
        fn_8001FE7C((void*)lbl_805D500C, 1);
        lbl_805D500C = 0U;
    }
    if ((u32) lbl_805D5010 != 0U) {
        fn_801E483C((void*)lbl_805D5010);
        lbl_805D5010 = 0U;
    }
    fn_800A4288();
    TEneEffHamon__sub_800A380C();
}

}
