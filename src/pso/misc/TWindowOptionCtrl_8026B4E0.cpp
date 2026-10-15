#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {
s32 get_localized_text_entry(s32, s32);
u8 *get_window_layout_position(s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
s32 free_member__17TWindowSubComCardFv(int, int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(int, void *, int, f32);
extern const f32 lbl_805DD268;
s32 get_localized_text_entry(s32, s32);
void *TAdEnterPasswordGC__sub_8013ADE4();
s32 complete_reveal__14TWindowMessageFPv(s32);
s32 add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(s32, s32, s32, s32);
s32 set_window_mode_4__6TLobbyFPvll(void *, s32 *, s32);
s32 warn_if_empty__17TWindowOptionCtrlFPUc(void *);
void *get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv();
void *get_formatted_serial__22TAdEnterSerialAccessGCFv();
void *TAdEnterSerialAccessGC__sub_80321738();
void *TAdEnterSerialAccessGC__sub_803217B8();
void *TAdEnterSerialAccessGC__sub_80321874();
extern s32 lbl_8044F4A4[];
}

extern "C" {

s32 TWindowOptionCtrl::create_serial_info_window(s32 arg1) {
    s32 w;
    w = set_window_mode_4__6TLobbyFPvll(this, lbl_8044F4A4, 3);
    switch (arg1) {
    case 0:
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x16), warn_if_empty__17TWindowOptionCtrlFPUc(TAdEnterSerialAccessGC__sub_80321874()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x17), warn_if_empty__17TWindowOptionCtrlFPUc(TAdEnterSerialAccessGC__sub_803217B8()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x18), warn_if_empty__17TWindowOptionCtrlFPUc(TAdEnterPasswordGC__sub_8013ADE4()), 0);
        break;
    case 1:
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x16), warn_if_empty__17TWindowOptionCtrlFPUc(TAdEnterSerialAccessGC__sub_80321738()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x17), warn_if_empty__17TWindowOptionCtrlFPUc(get_formatted_serial__22TAdEnterSerialAccessGCFv()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x18), warn_if_empty__17TWindowOptionCtrlFPUc(get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv()), 0);
        break;
    }
    complete_reveal__14TWindowMessageFPv(w);
    return w;
}

s32 TWindowOptionCtrl::open_yes_no_window(s32 arg0, s32 arg1, s32 arg2) {
  s32 temp_r30;
  u8 *temp_r31;
  temp_r30 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, 6, arg0 * 0, 0);
  ;
  forward_slot_selection__16TAdChrSelASlotGCFPvPv((int) temp_r30, (void *) get_localized_text_entry(0xF, arg1), (int) ((u8 *) get_window_layout_position(arg2)), (f32) lbl_805DD268);
  free_member__17TWindowSubComCardFv((int) temp_r30, (int) 1);
  return temp_r30;
}

}
