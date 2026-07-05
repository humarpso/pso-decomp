#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKeyAncient03__sub_8016BC20(void);
M2C_UNK TOBoss4Rock__sub_80147A80(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5A10;
extern void *lbl_805D5A14;

void TOKeyAncient03__sub_8016BC20(void) {
    if ((void *) lbl_805D5A14 != NULL) {
        fn_801E483C(M2C_FIELD(lbl_805D5A14, s32 *, 4));
        if ((void *) lbl_805D5A14 != NULL) {
            TOBoss4Rock__sub_80147A80((void*)lbl_805D5A14);
            lbl_805D5A14 = NULL;
        }
    }
    if ((u32) lbl_805D5A10 != 0U) {
        fn_8001FE7C((void*)lbl_805D5A10, 1);
        lbl_805D5A10 = 0U;
    }
}

}
