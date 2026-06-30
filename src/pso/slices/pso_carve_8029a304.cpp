#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK fn_80293000(M2C_UNK);
M2C_UNK fn_80299F84(void *);
M2C_UNK fn_8029A038(void *);
M2C_UNK fn_8029A0A0();
M2C_UNK fn_8029A110(void *);
extern M2C_UNK lbl_804DBE90[];

void fn_8029A304(void *arg0) {
    s32 temp_r3;

    fn_8029A0A0();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        fn_80299F84(arg0);
    }
    if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 != 2) {
            fn_80293000(lbl_804DBE90[temp_r3]);
            fn_8029A038(arg0);
            fn_8029A110(arg0);
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}
