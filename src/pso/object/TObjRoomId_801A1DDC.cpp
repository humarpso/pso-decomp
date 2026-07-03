#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjRoomId__sub_801A1DDC(void *arg0);
s32 is_split_screen();

extern s32 lbl_805D53A0;

u8 TObjRoomId__sub_801A1DDC(void *arg0) {
    if (is_split_screen() != 0) {
        return 1U;
    }
    return (u8) (M2C_FIELD(arg0, u16 *, 0x1C) == lbl_805D53A0);
}

}
