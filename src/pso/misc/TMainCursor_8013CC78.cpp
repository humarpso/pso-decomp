#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
s32 get_type__10TObjPlayerFPv(s32);
M2C_UNK set_color_mode__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_color__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK TMainCursor__sub_8013E990(s32, M2C_UNK);
M2C_UNK set_flags__11TMainCursorFPvi(s32, M2C_UNK);
s32 TObjPlayer__sub_801B066C(s32);
s32 is_technique_ready__8TTecCtrlFv();

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (get_type__10TObjPlayerFPv(arg1 + 0x828) != 0) {
        set_color__11TMainCursorFPvi(arg2, 0xA000);
        set_color_mode__11TMainCursorFPvi(arg2, 0x70000000);
        return;
    }
    set_color__11TMainCursorFPvi(arg2, 0x8000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x60000000);
}

void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x10000000);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000800);
    if (is_technique_ready__8TTecCtrlFv() == 0) {
        TMainCursor__sub_8013E990(arg2, 0x30000);
        return;
    }
    if (TObjPlayer__sub_801B066C(arg1) == 1) {
        TMainCursor__sub_8013E990(arg2, 0x40030000);
        return;
    }
    TMainCursor__sub_8013E990(arg2, 0x40030000);
}

void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    TMainCursor__sub_8013E990(arg2, 0x3C000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x800);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000000);
}

}
