#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK fn_801E483C(s32);
extern u32 lbl_805D59D0;
extern void *lbl_805D59D4;

void fn_80168A38(void) {
    if ((void *) lbl_805D59D4 != NULL) {
        fn_801E483C(M2C_FIELD(lbl_805D59D4, s32 *, 4));
        fn_801E483C(M2C_FIELD(lbl_805D59D4, s32 *, 0));
        if ((void *) lbl_805D59D4 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D59D4);
            lbl_805D59D4 = NULL;
        }
    }
    if ((u32) lbl_805D59D0 != 0U) {
        fn_8001FE7C((void*)lbl_805D59D0, 1);
        lbl_805D59D0 = 0U;
    }
}

}
