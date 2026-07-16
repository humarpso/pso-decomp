#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803C4C78();
M2C_UNK fn_803C4F14();
extern s32 lbl_805D7520;

void fn_803C4C44(void) {
    if ((s32) lbl_805D7520 == 0) {
        fn_803C4F14();
        return;
    }
    fn_803C4C78();
}

}
