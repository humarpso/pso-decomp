#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80064AB0(void *);
M2C_UNK fn_80064F2C();
s32 TObjEneEpsilon__sub_800B95E0(void *);
M2C_UNK TObjEneEpsilon__sub_800B9680(void *, M2C_UNK *);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
extern M2C_UNK lbl_80437938[];

void fn_8005F7BC(void *arg0) {
    fn_80064F2C();
    if (!(M2C_FIELD(arg0, s32 *, 0x490) & 0x1F)) {
        if (TObjEneEpsilon__sub_800B95E0(arg0) != 0) {
            TObjEneEpsilon__sub_800B96A4(arg0);
        } else {
            TObjEneEpsilon__sub_800B9680(arg0, lbl_80437938);
        }
        fn_80064AB0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) (M2C_FIELD(arg0, s32 *, 0x490) + 1);
}

}
