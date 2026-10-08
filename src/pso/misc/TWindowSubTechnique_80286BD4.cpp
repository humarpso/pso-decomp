#include "types.h"
#include "pso/misc/TWindowSubTechnique.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void mark_area_change_pending(void);
void TKeyBoardControl__sub_8000F9A4(void);
int get_selection__19TWindowSubTechniqueFPvPvi(void*, void* a1);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
int get_current_selection__19TWindowSubTechniqueFPvPv(void* p, void* _w1);
u32 get_player_by_client_id(s32);
s32 is_palette_entry_displayable__10TObjPlayerFv(s32, M2C_UNK, u8);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 lookup_technique__19TWindowSubTechniqueFii(s32 arg0, s32 arg1);
s32 is_technique_available__19TWindowSubTechniqueFii(s32 arg0, s32 arg1);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK set_field_1c__6TLobbyFPvf(int);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv(int);
f32 TWindowSubEquip__sub_80263AF8(int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(int);
s32 create_title_window__19TWindowSubTechniqueFPv(u8 *arg0);
extern s16 *lbl_804D2E20[];
extern const f32 lbl_805DD838;
s32 get_cursor_pos__20TWindowShortListCtrlFPv(s32);
void reset_entries__17TWindowSubComCardFPv(s32);
void draw_technique_row__19TWindowSubTechniqueFiii(s32 arg0, s32 arg1, s32 arg2);
void update_layout_height__17TWindowSubComCardFPvf(s32, f32);
void align_menu_entry_positions(s32);
void set_selected_index__17TWindowSubComCardFPvs(s32, s32);

}

extern "C" {

void draw_technique_row__19TWindowSubTechniqueFiii(s32 arg0, s32 arg1, s32 arg2);
s32 lookup_technique__19TWindowSubTechniqueFii(s32 arg0, s32 arg1);
s32 get_technique_name(s16);
s32 can_use_palette_action__10TObjPlayerFPvUcUc(u32, s32, u8);
u32 get_player_by_client_id(s32);
s32 add_text_entry__19TWindowSubTradeMainFPviiii(s32, s32, s32, s16, s32);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s16);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);

int get_current_selection__19TWindowSubTechniqueFPvPv(void* p, void* _w1) { return get_selection__19TWindowSubTechniqueFPvPvi((void*)(p), (void*)(_w1)); }

s32 is_technique_available__19TWindowSubTechniqueFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = ((s32)get_player_by_client_id(arg1));
    if (temp_r3 == 0) {
        return 0;
    }
    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        return 0;
    }
    if (lookup_technique__19TWindowSubTechniqueFii(arg0, arg1) != 0) {
        return is_palette_entry_displayable__10TObjPlayerFv(temp_r3, 3, (u8) arg0);
    }
    return 0;
}

s32 lookup_technique__19TWindowSubTechniqueFii(s32 arg0, s32 arg1) {
    u32 temp = get_player_by_client_id(arg1);
    if (temp == 0U) {
        return 0;
    }
    return can_use_palette_action__10TObjPlayerFPvUcUc(temp, 3, (u8) arg0);
}
void draw_technique_row__19TWindowSubTechniqueFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = get_technique_name(arg0);
    if (lookup_technique__19TWindowSubTechniqueFii((s32)(arg0), (s32)(arg1)) == 0) {
        draw_text_gray__17TWindowSubComCardFiiii(arg2, temp_r31, 6, arg0);
        return;
    }
    if (is_technique_available__19TWindowSubTechniqueFii((s32)((void*)((void*)(arg0))), (s32)((void*)((void*)(arg1)))) == 0) {
        add_text_entry__19TWindowSubTradeMainFPviiii(arg2, temp_r31, 0x16, arg0, 0xFFFD3901);
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(arg2, temp_r31, 6, arg0);
}
#pragma fp_contract on

void TWindowSubTechnique::rebuildTechniqueList(s32 list, s32 category) {
    s32 selected;
    s16 *entry;
    entry = lbl_804D2E20[category];
    selected = get_cursor_pos__20TWindowShortListCtrlFPv(list);
    reset_entries__17TWindowSubComCardFPv(list);
    while (*entry != 19) {
        draw_technique_row__19TWindowSubTechniqueFiii(*entry, playerIndex, list);
        ++entry;
    }
    update_layout_height__17TWindowSubComCardFPvf(list, lbl_805DD838);
    align_menu_entry_positions(list);
    set_selected_index__17TWindowSubComCardFPvs(list, selected);
}

s32 create_title_window__19TWindowSubTechniqueFPv(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((int) 0x30));
  temp_r31 = create_titled_window_menu((int) get_window_layout_position((int) 0x13), (int) 5, (int) temp_r31_2, (int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  TWindowSubEquip__sub_80263AF8((int) (*((s32 *) (((s8 *) arg0) + 0x30))), (int) 1);
  set_field_1c__6TLobbyFPvf((int) temp_r31);
  set_flag70_bit100__17TWindowOptionCtrlFPv((int) temp_r31);
  set_flag70_bit10__16TObjCityMainWarpFPv((int) temp_r31);
  return temp_r31;
}

}
