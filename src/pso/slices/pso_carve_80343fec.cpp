#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_800F957C(void*);
void free__11TOBoss4RockFUi(void*);
M2C_UNK fn_8034AF18();
extern u32 lbl_805D6E0C;
extern u32 lbl_805D6E10;
extern u32 lbl_805D6E14;
extern u32 lbl_805D6E18;
extern u32 lbl_805D6E1C;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E50;
extern u32 lbl_805D6E54;
extern u32 lbl_805D6E58;
extern u32 lbl_805D6E5C;
extern u32 lbl_805D6E60;

void TWindowDD__sub_80343FEC(void) {
    fn_8034AF18();
    if ((u32) lbl_805D6E1C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E1C);
        lbl_805D6E1C = 0U;
    }
    if ((u32) lbl_805D6E20 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E20);
        lbl_805D6E20 = 0U;
    }
    if ((u32) lbl_805D6E18 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E18);
        lbl_805D6E18 = 0U;
    }
    if ((u32) lbl_805D6E14 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E14);
        lbl_805D6E14 = 0U;
    }
    if ((u32) lbl_805D6E10 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E10);
        lbl_805D6E10 = 0U;
    }
    if ((u32) lbl_805D6E0C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E0C);
        lbl_805D6E0C = 0U;
    }
    if ((u32) lbl_805D6E60 != 0U) {
        fn_800F957C((void*)lbl_805D6E60);
        lbl_805D6E60 = 0U;
    }
    if ((u32) lbl_805D6E5C != 0U) {
        fn_800F957C((void*)lbl_805D6E5C);
        lbl_805D6E5C = 0U;
    }
    if ((u32) lbl_805D6E58 != 0U) {
        fn_800F957C((void*)lbl_805D6E58);
        lbl_805D6E58 = 0U;
    }
    if ((u32) lbl_805D6E54 != 0U) {
        fn_800F957C((void*)lbl_805D6E54);
        lbl_805D6E54 = 0U;
    }
    if ((u32) lbl_805D6E50 != 0U) {
        fn_800F957C((void*)lbl_805D6E50);
        lbl_805D6E50 = 0U;
    }
}

}
