#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_803E4BC4(void);
void TObjPlayer__sub_803E4BD0(void);

extern s32 lbl_805D7808;

void TObjPlayer__sub_803E4BC4(void) {
    lbl_805D7808 = 1;
}

extern s32 lbl_805D7808;

void TObjPlayer__sub_803E4BD0(void) {
    lbl_805D7808 = 0;
}

}
