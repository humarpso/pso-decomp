#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_option_menu__17TWindowOptionCtrlFv(void);
s32 get_option_field_C__17TWindowOptionCtrlFv();
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(s32, s32);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 refresh_with_default_list__20TWindowSubStatusDispFii(M2C_UNK, M2C_UNK *);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);

extern M2C_UNK lbl_8044F49C[];

s32 create_option_menu__17TWindowOptionCtrlFv(void) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xD0);
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(temp_r3, lbl_8044F49C);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0x10), 0);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0x11), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0x12), 2);
    set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, (s16) get_option_field_C__17TWindowOptionCtrlFv());
    return temp_r31;
}

}
