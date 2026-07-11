#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK fn_8007EBB4(u32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK fn_803DA16C(void*);
extern s32 lbl_805D4EFC;
extern u32 lbl_805D4F00;
extern u32 lbl_805D4F04;

void fn_800885B4(void) {
    free__11TOBoss4RockFUi(lbl_805D4EFC);
    lbl_805D4EFC = 0;
    if ((u32) lbl_805D4F00 != 0U) {
        fn_8001FE7C((void*)lbl_805D4F00, 1);
        lbl_805D4F00 = 0U;
    }
    if ((u32) lbl_805D4F04 != 0U) {
        fn_803DA16C((void*)lbl_805D4F04);
        fn_8007EBB4(lbl_805D4F04);
        lbl_805D4F04 = 0U;
    }
}

}
