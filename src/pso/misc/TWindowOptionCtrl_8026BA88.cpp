#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {
s32 get_localized_text_entry(int, int);
s32 set_selected_index__20TWindowSubStatusDispFs(int, void *);
s32 add_menu_item__17TWindowOptionCtrlFlll(int, int, int);
s32 refresh_with_default_list__20TWindowSubStatusDispFll(int, void *);
int get_option_entry__17TWindowOptionCtrlFi(int);
extern s32 lbl_8044F48C[];
extern s32 current_language;
}

extern "C" {

s32 TWindowOptionCtrl::create_select_menu_window() {
    s32 temp_r31;
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFll(get_option_entry__17TWindowOptionCtrlFi((int) (0xCF)), (void *) (lbl_8044F48C));
    add_menu_item__17TWindowOptionCtrlFlll((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (8))), (int) (0));
    add_menu_item__17TWindowOptionCtrlFlll((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (9))), (int) (1));
    add_menu_item__17TWindowOptionCtrlFlll((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (0xA))), (int) (2));
    add_menu_item__17TWindowOptionCtrlFlll((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (0xB))), (int) (3));
    add_menu_item__17TWindowOptionCtrlFlll((int) (temp_r31), (int) (get_localized_text_entry((int) (0xF), (int) (0xC))), (int) (4));
    set_selected_index__20TWindowSubStatusDispFs((int) (temp_r31), (void *) ((s16) current_language));
    return temp_r31;
}

}
