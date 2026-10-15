#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 get_option_field_C__17TWindowOptionCtrlFv();
s32 get_localized_text_entry(s32, s32);
s32 set_selected_index__20TWindowSubStatusDispFs(s32, s32);
s32 add_menu_item__17TWindowOptionCtrlFlll(s32, s32, s32);
s32 refresh_with_default_list__20TWindowSubStatusDispFll(s32, s32 *);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);

extern s32 lbl_8044F49C[];

s32 TWindowOptionCtrl::create_option_menu() {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xD0);
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFll(temp_r3, lbl_8044F49C);
    add_menu_item__17TWindowOptionCtrlFlll(temp_r31, get_localized_text_entry(0xF, 0x10), 0);
    add_menu_item__17TWindowOptionCtrlFlll(temp_r31, get_localized_text_entry(0xF, 0x11), 1);
    add_menu_item__17TWindowOptionCtrlFlll(temp_r31, get_localized_text_entry(0xF, 0x12), 2);
    set_selected_index__20TWindowSubStatusDispFs(temp_r31, (s16) get_option_field_C__17TWindowOptionCtrlFv());
    return temp_r31;
}

}
