#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_objects__11TOKeyCave01Fv(void);
M2C_UNK TOBoss4Rock__sub_80147A80(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5A18;
extern s32 *lbl_805D5A1C;

void free_objects__11TOKeyCave01Fv(void) {
    if ((s32 *) lbl_805D5A1C != NULL) {
        fn_801E483C(*lbl_805D5A1C);
        if ((s32 *) lbl_805D5A1C != NULL) {
            TOBoss4Rock__sub_80147A80((void*)lbl_805D5A1C);
            lbl_805D5A1C = NULL;
        }
    }
    if ((u32) lbl_805D5A18 != 0U) {
        fn_8001FE7C((void*)lbl_805D5A18, 1);
        lbl_805D5A18 = 0U;
    }
}

}
