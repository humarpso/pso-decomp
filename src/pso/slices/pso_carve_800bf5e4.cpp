#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
void TBoss4Type3__sub_800D9A68(void*, int);
void TOBoss4Rock__sub_80147A80(void*);
extern u32 lbl_805D5144;
extern u32 lbl_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;

void TObjGrass__sub_800BF5E4(void) {
    if ((u32) lbl_805D5144 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D5144);
        lbl_805D5144 = 0U;
    }
    if ((u32) lbl_805D515C != 0U) {
        TBoss4Type3__sub_800D9A68((void*)lbl_805D515C, 1);
        lbl_805D515C = 0U;
    }
    if ((u32) lbl_805D5158 != 0U) {
        TBoss4Type3__sub_800D9A68((void*)lbl_805D5158, 1);
        lbl_805D5158 = 0U;
    }
    if ((u32) lbl_805D5154 != 0U) {
        fn_8001FE7C((void*)lbl_805D5154, 1);
        lbl_805D5154 = 0U;
    }
}

}
