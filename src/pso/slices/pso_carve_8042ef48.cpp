#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D7CA8;
extern s8 *lbl_805D7CB8;
extern u8 *lbl_805D7CC0;

s32 fn_8042EF48(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    *lbl_805D7CB8 = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x1000);
    return 0;
}

}
