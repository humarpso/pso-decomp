#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
extern u32 lbl_805D4F38;
extern u32 lbl_805D4F3C;
extern u32 lbl_805D4F40;
extern u32 lbl_805D4F44;
extern u32 lbl_805D4F48;
extern u32 lbl_805D4F4C;
extern u32 lbl_805D4F50;

void fn_8009234C(void) {
    if ((u32) lbl_805D4F38 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F38);
        lbl_805D4F38 = 0U;
    }
    if ((u32) lbl_805D4F3C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F3C);
        lbl_805D4F3C = 0U;
    }
    if ((u32) lbl_805D4F40 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F40);
        lbl_805D4F40 = 0U;
    }
    if ((u32) lbl_805D4F44 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F44);
        lbl_805D4F44 = 0U;
    }
    if ((u32) lbl_805D4F50 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4F50, 1);
        lbl_805D4F50 = 0U;
    }
    if ((u32) lbl_805D4F4C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4F4C, 1);
        lbl_805D4F4C = 0U;
    }
    if ((u32) lbl_805D4F48 != 0U) {
        fn_8001FE7C((void*)lbl_805D4F48, 1);
        lbl_805D4F48 = 0U;
    }
}

}
