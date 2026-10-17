#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowSubTechnique.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/object/TObjCityMainWarp.h"

extern "C" {
int get_selection__19TWindowSubTechniqueFPsPll(void*, void* a1);
u32 get_player_by_client_id(s32);
s32 is_palette_entry_displayable__10TObjPlayerFv(s32, s32, u8);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 set_field_1c__6TLobbyFf(int);
f32 TWindowSubEquip__sub_80263AF8(int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(int);
extern s16 *lbl_804D2E20[];
extern const f32 lbl_805DD838;
s32 get_cursor_pos__20TWindowShortListCtrlFv(s32);
void draw_technique_row__19TWindowSubTechniqueFiii(s32 arg0, s32 arg1, s32 arg2);
void align_menu_entry_positions(s32);
void set_selected_index__21TWindowSubComCardListFs(s32, s32);

s32 get_technique_name(s16);
s32 can_use_palette_action__10TObjPlayerFPvUcUc(u32, s32, u8);
s32 add_text_entry__19TWindowSubTradeMainFllll(s32, s32, s32, s16, s32);
s32 draw_text_gray__17TWindowSubComCardFllll(s32, s32, s32, s16);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);

int TWindowSubTechnique::get_current_selection(void* _w1) { return get_selection__19TWindowSubTechniqueFPsPll((void*)(this), (void*)(_w1)); }

s32 TWindowSubTechnique::is_technique_available(s32 sub, s32 arg1) {
    s32 player;
    player = ((s32)get_player_by_client_id(arg1));
    if (player == 0) {
        return 0;
    }
    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        return 0;
    }
    if (TWindowSubTechnique::lookup_technique(sub, arg1) != 0) {
        return is_palette_entry_displayable__10TObjPlayerFv(player, 3, (u8) sub);
    }
    return 0;
}

s32 TWindowSubTechnique::lookup_technique(s32 arg0, s32 arg1) {
    u32 temp = get_player_by_client_id(arg1);
    if (temp == 0U) {
        return 0;
    }
    return can_use_palette_action__10TObjPlayerFPvUcUc(temp, 3, (u8) arg0);
}
void draw_technique_row__19TWindowSubTechniqueFiii(s32 id, s32 arg1, s32 arg2) {
    s32 technique_name;

    technique_name = get_technique_name(id);
    if (TWindowSubTechnique::lookup_technique((s32)(id), (s32)(arg1)) == 0) {
        draw_text_gray__17TWindowSubComCardFllll(arg2, technique_name, 6, id);
        return;
    }
    if (TWindowSubTechnique::is_technique_available((s32)((void*)((void*)(id))), (s32)((void*)((void*)(arg1)))) == 0) {
        add_text_entry__19TWindowSubTradeMainFllll(arg2, technique_name, 0x16, id, 0xFFFD3901);
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(arg2, technique_name, 6, id);
}
#pragma fp_contract on

void TWindowSubTechnique::rebuildTechniqueList(s32 list, s32 category) {
    s32 selected;
    s16 *entry;
    entry = lbl_804D2E20[category];
    selected = get_cursor_pos__20TWindowShortListCtrlFv(list);
    ((TWindowSubComCardList *)list)->reset_entries();
    while (*entry != 19) {
        draw_technique_row__19TWindowSubTechniqueFiii(*entry, playerIndex, list);
        ++entry;
    }
    ((TWindowSubComCardList *)list)->update_layout_height(lbl_805DD838);
    align_menu_entry_positions(list);
    set_selected_index__21TWindowSubComCardListFs(list, selected);
}

s32 TWindowSubTechnique::create_title_window() {
    u8 *arg0 = (u8 *)this;
  s32 titled_window_menu;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFl((int) 0x30));
  titled_window_menu = create_titled_window_menu((int) get_window_layout_position((int) 0x13), (int) 5, (int) temp_r31_2, (int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  TWindowSubEquip__sub_80263AF8((int) (*((s32 *) (((s8 *) arg0) + 0x30))), (int) 1);
  set_field_1c__6TLobbyFf((int) titled_window_menu);
  ((TWindowSubComCardList *)titled_window_menu)->set_flag70_bit100();
  ((TWindowSubComCardList *)titled_window_menu)->set_flag70_bit10();
  return titled_window_menu;
}

}
