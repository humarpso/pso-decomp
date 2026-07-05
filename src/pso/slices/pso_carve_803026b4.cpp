#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
void TBoss4Type3__sub_800D9A68(void*, int);
void TOBoss4Rock__sub_80147A80(void*);
extern u32 lbl_805D6A00;
extern u32 lbl_805D6A04;
extern u32 lbl_805D6A08;
extern u32 lbl_805D6A0C;
extern u32 lbl_805D6A10;
extern u32 lbl_805D6A14;
extern u32 lbl_805D6A18;

void TObjEneDolmOlm__sub_803026B4(void) {
    if ((u32) lbl_805D6A00 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D6A00);
        lbl_805D6A00 = 0U;
    }
    if ((u32) lbl_805D6A04 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D6A04);
        lbl_805D6A04 = 0U;
    }
    if ((u32) lbl_805D6A08 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D6A08);
        lbl_805D6A08 = 0U;
    }
    if ((u32) lbl_805D6A0C != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D6A0C);
        lbl_805D6A0C = 0U;
    }
    if ((u32) lbl_805D6A18 != 0U) {
        TBoss4Type3__sub_800D9A68((void*)lbl_805D6A18, 1);
        lbl_805D6A18 = 0U;
    }
    if ((u32) lbl_805D6A14 != 0U) {
        TBoss4Type3__sub_800D9A68((void*)lbl_805D6A14, 1);
        lbl_805D6A14 = 0U;
    }
    if ((u32) lbl_805D6A10 != 0U) {
        fn_8001FE7C((void*)lbl_805D6A10, 1);
        lbl_805D6A10 = 0U;
    }
}

}
