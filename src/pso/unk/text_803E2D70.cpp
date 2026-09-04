#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void func_803e11e8__FUl(s32 arg0);
void func_803e11f0__Fv(void);

extern s32 lbl_805D77F8;

void func_803e11e8__FUl(s32 arg0) {
    lbl_805D77F8 = arg0;
}

extern s32 lbl_805D77F8;

void func_803e11f0__Fv(void) {
    lbl_805D77F8 = 0;
}

}
