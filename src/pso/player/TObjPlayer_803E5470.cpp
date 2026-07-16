#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_803E5470(s32 arg0);
void TObjPlayer__sub_803E5478(void);
M2C_UNK TObjPlayer__sub_803E4F14();
M2C_UNK TObjPlayer__sub_803E53BC();

extern s32 lbl_805D7778;

void TObjPlayer__sub_803E5470(s32 arg0) {
    lbl_805D7778 = arg0;
}

void TObjPlayer__sub_803E5478(void) {
    TObjPlayer__sub_803E4F14();
    TObjPlayer__sub_803E53BC();
}

}
