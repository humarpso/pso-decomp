#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8006FE7C();
M2C_UNK fn_80074034(s32);
M2C_UNK fn_80074A5C(s32);
M2C_UNK fn_80074DBC(s32);
extern M2C_UNK lbl_8048C9D8[];
extern s32 tl_07;

void fn_8006FF4C(void) {
    fn_8006FE7C();
    fn_80074DBC(tl_07);
    fn_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x30) == 0) {
        fn_80074A5C(tl_07);
    }
}

}
