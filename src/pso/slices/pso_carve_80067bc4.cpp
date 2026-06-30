#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TCameraCtrl__sub_8006786C(void *);
M2C_UNK fn_8006E310(void *);
s32 fn_801A6E60(void *, M2C_UNK);
extern u8 lbl_8050E208[];

void TCameraCtrl__sub_80067BC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0x15;
    if (fn_801A6E60(lbl_8050E208 + 0x20, 0x10000) != 0) {
        fn_8006E310(arg0);
    } else {
        TCameraCtrl__sub_8006786C(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x10);
}

}
