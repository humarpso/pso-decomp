#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2);
void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void sort_list__11TMainCursorFii(s32 arg0, s32 arg1);
M2C_UNK TMainCursor__sub_8013E970(s32, u16, s32, s32);
s32 TMainCursor__sub_8013F154(s32, M2C_UNK);
s32 TMainCursor__sub_8013F168(s32);
s32 TObjPlayer__sub_801B066C(s32);
u16 get_id__11TMainCursorFPv(s32);
s32 get_selected_entry__11TMainCursorFPv(s32, s32);
s32 get_type__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK quick_sort__11TMainCursorFiiii(s32, s32, M2C_UNK, s32);
M2C_UNK set_color__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_color_mode__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_field_0c__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_flags__11TMainCursorFPvi(s32, M2C_UNK);

void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2) {
    u32 eq = (u32) __cntlzw((u32) ((u16) get_id__11TMainCursorFPv(arg0 + 0x4F8) - (u16) arg1)) >> 5;
    TMainCursor__sub_8013E970(arg0 + 0x508, arg1, arg2, eq + 1);
}

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
        set_field_0c__11TMainCursorFPvi(arg2, 0x30000);
        return;
    }
    if (TObjPlayer__sub_801B066C(arg1) == 1) {
        set_field_0c__11TMainCursorFPvi(arg2, 0x40030000);
        return;
    }
    set_field_0c__11TMainCursorFPvi(arg2, 0x40030000);
}

void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    set_field_0c__11TMainCursorFPvi(arg2, 0x3C000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x800);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000000);
}

void sort_list__11TMainCursorFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = arg1 * 0x124;
    temp_r30 = arg0 + temp_r4 + 0x5C;
    if (get_selected_entry__11TMainCursorFPv(temp_r30, temp_r4) != 0) {
        temp_r31 = TMainCursor__sub_8013F168(temp_r30 + 0x40);
        quick_sort__11TMainCursorFiiii(temp_r30, TMainCursor__sub_8013F154(temp_r30 + 0x40, 0), 0, temp_r31 - 1);
    }
}

}
