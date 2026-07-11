#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_children__16TObjEneRe7BeruraFv(void);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
void fn_8001FE7C(void*, int);
void fn_800F5C8C(void*, int);

extern u32 lbl_805D4F64;
extern u32 lbl_805D4F80;
extern u32 lbl_805D4F8C;
extern u32 lbl_805D4FA0;

void destroy_children__16TObjEneRe7BeruraFv(void) {
    if ((u32) lbl_805D4FA0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4FA0, 1);
        lbl_805D4FA0 = 0U;
    }
    if ((u32) lbl_805D4F8C != 0U) {
        fn_800F5C8C((void*)lbl_805D4F8C, 1);
        lbl_805D4F8C = 0U;
    }
    if ((u32) lbl_805D4F80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F80);
        lbl_805D4F80 = 0U;
    }
    if ((u32) lbl_805D4F64 != 0U) {
        fn_8001FE7C((void*)lbl_805D4F64, 1);
        lbl_805D4F64 = 0U;
    }
}

}
