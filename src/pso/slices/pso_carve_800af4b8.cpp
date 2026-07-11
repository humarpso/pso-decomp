#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
extern u32 lbl_805D50C8;
extern u32 lbl_805D50CC;
extern u32 lbl_805D50D0;
extern u32 lbl_805D50D4;
extern u32 lbl_805D50D8;
extern u32 lbl_805D50DC;

void fn_800AF4B8(void) {
    if ((u32) lbl_805D50C8 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50C8);
        lbl_805D50C8 = 0U;
    }
    if ((u32) lbl_805D50CC != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50CC);
        lbl_805D50CC = 0U;
    }
    if ((u32) lbl_805D50D0 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50D0);
        lbl_805D50D0 = 0U;
    }
    if ((u32) lbl_805D50D4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50D4);
        lbl_805D50D4 = 0U;
    }
    if ((u32) lbl_805D50DC != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50DC, 1);
        lbl_805D50DC = 0U;
    }
    if ((u32) lbl_805D50D8 != 0U) {
        fn_8001FE7C((void*)lbl_805D50D8, 1);
        lbl_805D50D8 = 0U;
    }
}

}
