#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
extern void *lbl_805D63F8;

s32 get_display_flag__11TWindowCtrlFv(void) {
    if (is_split_screen() != 0) {
        return 0;
    }
    if ((void *) lbl_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) >> 1U) & 1;
}

}
