#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_localized_text_entry(s32, s32);
u8 *get_window_layout_position(s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, void *, int, f32);
extern const f32 lbl_805DD268;
s32 TWindowOptionCtrl__sub_8026B64C(s32 arg0, s32 arg1, s32 arg2);
s32 get_localized_text_entry(s32, s32);
void *TAdEnterPasswordGC__sub_8013ADE4();
M2C_UNK complete_reveal__14TWindowMessageFPv(s32);
M2C_UNK add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(s32, s32, s32, M2C_UNK);
s32 set_window_mode_4__6TLobbyFPvii(void *, M2C_UNK *, M2C_UNK);
s32 warn_if_empty__17TWindowOptionCtrlFPv(void *);
void *get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv();
void *TAdEnterSerialAccessGC__sub_803216C0();
void *TAdEnterSerialAccessGC__sub_80321738();
void *TAdEnterSerialAccessGC__sub_803217B8();
void *TAdEnterSerialAccessGC__sub_80321874();
extern M2C_UNK lbl_8044F4A4[];
s32 create_serial_info_window__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
}

extern "C" {

s32 create_serial_info_window__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1) {
    s32 w;
    w = set_window_mode_4__6TLobbyFPvii(arg0, lbl_8044F4A4, 3);
    switch (arg1) {
    case 0:
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x16), warn_if_empty__17TWindowOptionCtrlFPv(TAdEnterSerialAccessGC__sub_80321874()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x17), warn_if_empty__17TWindowOptionCtrlFPv(TAdEnterSerialAccessGC__sub_803217B8()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x18), warn_if_empty__17TWindowOptionCtrlFPv(TAdEnterPasswordGC__sub_8013ADE4()), 0);
        break;
    case 1:
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x16), warn_if_empty__17TWindowOptionCtrlFPv(TAdEnterSerialAccessGC__sub_80321738()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x17), warn_if_empty__17TWindowOptionCtrlFPv(TAdEnterSerialAccessGC__sub_803216C0()), 0);
        add_label_value_line__17TWindowOptionCtrlFPvPvPvUi(w, get_localized_text_entry(0xF, 0x18), warn_if_empty__17TWindowOptionCtrlFPv(get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv()), 0);
        break;
    }
    complete_reveal__14TWindowMessageFPv(w);
    return w;
}

s32 TWindowOptionCtrl__sub_8026B64C(s32 arg0, s32 arg1, s32 arg2) {
  s32 temp_r30;
  u8 *temp_r31;
  temp_r30 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, 6, arg0 * 0, 0);
  ;
  forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) temp_r30, (void *) get_localized_text_entry(0xF, arg1), (int) ((u8 *) get_window_layout_position(arg2)), (f32) lbl_805DD268);
  free_member__17TWindowSubComCardFPv((int) temp_r30, (int) 1);
  return temp_r30;
}

}
