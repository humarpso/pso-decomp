#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK fn_80066A4C();
M2C_UNK TBoss5GryphonSnarl__sub_80066E84();
M2C_UNK fn_8007EBB4(u32);
M2C_UNK fn_803255F8();
M2C_UNK fn_80355A1C();
M2C_UNK fn_803DA16C(void*);
extern u32 lbl_805D4DA0;
extern u32 lbl_805D4DA4;
extern u32 lbl_805D4DA8;

void fn_80065BC0(void) {
    fn_803255F8();
    TBoss5GryphonSnarl__sub_80066E84();
    fn_80355A1C();
    fn_80066A4C();
    if ((u32) lbl_805D4DA8 != 0U) {
        fn_803DA16C((void*)lbl_805D4DA8);
        fn_8007EBB4(lbl_805D4DA8);
        lbl_805D4DA8 = 0U;
    }
    if ((u32) lbl_805D4DA4 != 0U) {
        fn_8001FE7C((void*)lbl_805D4DA4, 1);
        lbl_805D4DA4 = 0U;
    }
    if ((u32) lbl_805D4DA0 != 0U) {
        fn_8001FE7C((void*)lbl_805D4DA0, 1);
        lbl_805D4DA0 = 0U;
    }
}

}
