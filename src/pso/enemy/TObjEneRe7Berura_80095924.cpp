#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_children__16TObjEneRe7BeruraFv(void);
void TBoss4Type3__sub_800D9A68(void*, int);
void TOBoss4Rock__sub_80147A80(void*);
void fn_8001FE7C(void*, int);
void fn_800F5C8C(void*, int);

extern u32 lbl_805D4F64;
extern u32 lbl_805D4F80;
extern u32 lbl_805D4F8C;
extern u32 lbl_805D4FA0;

void destroy_children__16TObjEneRe7BeruraFv(void) {
    if ((u32) lbl_805D4FA0 != 0U) {
        TBoss4Type3__sub_800D9A68((void*)lbl_805D4FA0, 1);
        lbl_805D4FA0 = 0U;
    }
    if ((u32) lbl_805D4F8C != 0U) {
        fn_800F5C8C((void*)lbl_805D4F8C, 1);
        lbl_805D4F8C = 0U;
    }
    if ((u32) lbl_805D4F80 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D4F80);
        lbl_805D4F80 = 0U;
    }
    if ((u32) lbl_805D4F64 != 0U) {
        fn_8001FE7C((void*)lbl_805D4F64, 1);
        lbl_805D4F64 = 0U;
    }
}

}
