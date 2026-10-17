#include "types.h"
#include "pso/misc/TLobby_80132ED0.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {
s32 refresh_with_default_list__20TWindowSubStatusDispFll(int, void *);
int get_option_entry__17TWindowOptionCtrlFi(int);
extern s32 lbl_8044F48C[];
extern s32 current_language;
s32 TWindowOptionCtrl::create_select_menu_window() {
    s32 temp_r31;
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFll(get_option_entry__17TWindowOptionCtrlFi((int) (0xCF)), (void *) (lbl_8044F48C));
    TWindowOptionCtrl::add_menu_item((int) (temp_r31), (int) (get_localized_text_entry((0xF), (8))), (int) (0));
    TWindowOptionCtrl::add_menu_item((int) (temp_r31), (int) (get_localized_text_entry((0xF), (9))), (int) (1));
    TWindowOptionCtrl::add_menu_item((int) (temp_r31), (int) (get_localized_text_entry((0xF), (0xA))), (int) (2));
    TWindowOptionCtrl::add_menu_item((int) (temp_r31), (int) (get_localized_text_entry((0xF), (0xB))), (int) (3));
    TWindowOptionCtrl::add_menu_item((int) (temp_r31), (int) (get_localized_text_entry((0xF), (0xC))), (int) (4));
    ((TWindowSubStatusDisp *)temp_r31)->set_selected_index((s16)((void *) ((s16) current_language)));
    return temp_r31;
}

}
