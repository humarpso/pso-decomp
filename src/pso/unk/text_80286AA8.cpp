#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_selected_menu_value(int);
s32 fn_80286AA8(u8 *arg0);
}

extern "C" {

s32 fn_80286AA8(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x34)))) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x34)));
    return 1;
}

}
