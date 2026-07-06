#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80200998();
s32 fn_80201204(s32 *, M2C_UNK);
extern s32 *lbl_805D5F6C;

void fn_801FFF58(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = fn_80201204(lbl_805D5F6C, 0x11C);
    fn_80200998();
}

}
