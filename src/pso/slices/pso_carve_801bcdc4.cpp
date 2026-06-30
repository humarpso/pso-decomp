#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 obj_getField1c(void *);
M2C_UNK fn_801AFCF4(void *, s16);
M2C_UNK fn_801B826C();
s32 TObjPlayer__sub_801C2114();
extern s32 lbl_805D5D84;

void TObjPlayer__sub_801BCDC4(void *arg0) {
    fn_801B826C();
    fn_801AFCF4(arg0, TObjPlayer__sub_801C2114());
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (lbl_805D5D84 + (obj_getField1c(arg0) * 0x600));
}

}
