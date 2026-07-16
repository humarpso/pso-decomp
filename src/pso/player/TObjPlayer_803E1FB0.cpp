#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_803E1FB0(void);
void TObjPlayer__sub_803E1FBC(void);

extern s8 lbl_805D77C8;

void TObjPlayer__sub_803E1FB0(void) {
    lbl_805D77C8 = 1;
}

extern s8 lbl_805D77C8;

void TObjPlayer__sub_803E1FBC(void) {
    lbl_805D77C8 = 0;
}

}
