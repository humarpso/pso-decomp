#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdWarningBaseGC__sub_8032CE1C(void *arg0);

extern s32 lbl_805D6CE8;
extern s32 lbl_805D6CF4;

void TAdWarningBaseGC__sub_8032CE1C(void *arg0) {
    if ((s32) lbl_805D6CF4 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        lbl_805D6CE8 = 1;
    }
}

}
