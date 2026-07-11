#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010DF68();
s32 fn_8010EC88(void *);
s32 fn_8010EEC8(s32);
extern s32 lbl_805D2B10;

s32 fn_8010E390(void *arg0) {
    u8 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 4);
        if ((temp_r0 != 0) && (temp_r0 < 0x29U) && (TItemData__sub_8010DF68() == 0)) {
            if (fn_8010EC88(arg0) == 1) {
                return fn_8010EEC8(M2C_FIELD(arg0, u8 *, 4) + 0x1CB);
            }
            return fn_8010EEC8(0x1F4);
        }
    }
    return lbl_805D2B10;
}

}
