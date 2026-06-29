#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8000F91C(M2C_UNK);
M2C_UNK fn_8000F9CC(M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv();
extern s32 lbl_805D6A5C;

void fn_803078C0(void) {
    queue_destruction__7TObjectFv();
    if ((s32) lbl_805D6A5C != 0) {
        fn_8000F9CC(2);
        return;
    }
    fn_8000F91C(2);
    fn_8000F9CC(0x12);
}

}
