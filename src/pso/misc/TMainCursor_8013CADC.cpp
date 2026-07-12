#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2);
u16 TMainCursor__sub_8013E308(s32);
M2C_UNK TMainCursor__sub_8013E970(s32, u16, s32, s32);

void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2) {
    u32 eq = (u32) __cntlzw((u32) ((u16) TMainCursor__sub_8013E308(arg0 + 0x4F8) - (u16) arg1)) >> 5;
    TMainCursor__sub_8013E970(arg0 + 0x508, arg1, arg2, eq + 1);
}

}
