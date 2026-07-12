#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80363F60(s32 arg0);
M2C_UNK TObjPlayer__sub_80364280(void *);
M2C_UNK TObjPlayer__sub_80364258(void *, s32);

extern void *lbl_805D6FB8;

void TObjPlayer__sub_80363F60(s32 arg0) {
    if ((s32) M2C_FIELD(lbl_805D6FB8, s32 *, 0xB0) == 0) {
        TObjPlayer__sub_80364280(lbl_805D6FB8);
    }
    TObjPlayer__sub_80364258(lbl_805D6FB8, arg0);
}

}
