#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D64D8;

void fn_8028B8C8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        if ((s32) lbl_805D64D8 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        lbl_805D64D8 = 0;
    }
}

}
