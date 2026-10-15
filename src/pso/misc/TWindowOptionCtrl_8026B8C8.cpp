#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 get_localized_text_entry(s32, s32);
s32 set_selected_index__20TWindowSubStatusDispFs(s32, s32);
s32 add_menu_item__17TWindowOptionCtrlFlll(s32, s32, s32);
s32 refresh_with_default_list__20TWindowSubStatusDispFll(s32, s32 *);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);

extern s32 lbl_8044F494[];

s32 TWindowOptionCtrl::create_sound_mode_menu() {
    s16 temp_r0;
    s32 temp_r31;

    s32 temp_r3_after_cba4 = get_option_entry__17TWindowOptionCtrlFi(0xCF);
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFll(temp_r3_after_cba4, lbl_8044F494);
    add_menu_item__17TWindowOptionCtrlFlll(temp_r31, get_localized_text_entry(0xF, 0xE), 0);
    add_menu_item__17TWindowOptionCtrlFlll(temp_r31, get_localized_text_entry(0xF, 0xD), 1);
    add_menu_item__17TWindowOptionCtrlFlll(temp_r31, get_localized_text_entry(0xF, 0xF), 2);
    temp_r0 = *(s16 *)((s8 *)this + 0x20);
    switch (temp_r0) {
    case 0:
        set_selected_index__20TWindowSubStatusDispFs(temp_r31, 0);
        break;
    case 1:
        set_selected_index__20TWindowSubStatusDispFs(temp_r31, 1);
        break;
    case 2:
        set_selected_index__20TWindowSubStatusDispFs(temp_r31, 2);
        break;
    }
    return temp_r31;
}

}
