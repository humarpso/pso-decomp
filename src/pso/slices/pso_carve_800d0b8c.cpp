#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneEpsilon__sub_800B97B4(f32);
extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

void fn_800D0B8C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        TObjEneEpsilon__sub_800B97B4(lbl_805DA244);
        return;
    }
    TObjEneEpsilon__sub_800B97B4(lbl_805DA248);
}

}
