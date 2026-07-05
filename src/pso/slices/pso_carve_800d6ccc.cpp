#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
void TOBoss4Rock__sub_80147A80(void*);
extern u32 lbl_805D5210;
extern u32 lbl_805D5214;
extern u32 lbl_805D5218;
extern u32 lbl_805D521C;
extern u32 lbl_805D5220;

void TObjEneMerillLia__sub_800D6CCC(void) {
    if ((u32) lbl_805D5210 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D5210);
        lbl_805D5210 = 0U;
    }
    if ((u32) lbl_805D5214 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D5214);
        lbl_805D5214 = 0U;
    }
    if ((u32) lbl_805D5218 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D5218);
        lbl_805D5218 = 0U;
    }
    if ((u32) lbl_805D521C != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D521C);
        lbl_805D521C = 0U;
    }
    if ((u32) lbl_805D5220 != 0U) {
        fn_8001FE7C((void*)lbl_805D5220, 1);
        lbl_805D5220 = 0U;
    }
}

}
