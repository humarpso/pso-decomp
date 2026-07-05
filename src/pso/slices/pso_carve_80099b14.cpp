#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK fn_8009A7A0();
void TBoss4Type3__sub_800D9A68(void*, int);
void fn_800F5C8C(void*, int);
extern u32 lbl_805D4FB8;
extern u32 lbl_805D4FC8;
extern u32 lbl_805D4FCC;

void fn_80099B14(void) {
    fn_8009A7A0();
    if ((u32) lbl_805D4FCC != 0U) {
        fn_800F5C8C((void*)lbl_805D4FCC, 1);
        lbl_805D4FCC = 0U;
    }
    if ((u32) lbl_805D4FC8 != 0U) {
        TBoss4Type3__sub_800D9A68((void*)lbl_805D4FC8, 1);
        lbl_805D4FC8 = 0U;
    }
    if ((u32) lbl_805D4FB8 != 0U) {
        fn_8001FE7C((void*)lbl_805D4FB8, 1);
        lbl_805D4FB8 = 0U;
    }
}

}
