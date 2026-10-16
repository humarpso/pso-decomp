#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"
#include "pso/TMainTask.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/ui/TAdChrSelASlotGC.h"

typedef struct S_802DC294 { u8 pad0[0x5C]; s32 f5C; } S_802DC294;

struct Info_802DC024 {
    s32 val[4];
    s32 idx[4];
    s32 count;
};

struct Sel_802DC118 { u8 pad[0x64]; u32 win; };

extern "C" {
s32 get_localized_text_entry(int, int);
s32 set_status_flag_80__12TQuestThreadFPv(int);
s32 calc_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(void *, int);
extern const f32 lbl_805DE890;
s32 TAdMultiPlyChrSelectGC__sub_802DBE4C(long long arg1);
s32 get_localized_text_entry(int, int);
s32 set_status_flag_80__12TQuestThreadFPv(int);
s32 calc_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(void *, int);
extern const f32 lbl_805DE890;
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(unsigned long long arg1);
s32 get_localized_text_entry(int, int);
s32 free_member__17TWindowSubComCardFv(int, int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(int, int, void *, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, int, int, int);
extern s32 lbl_804728A8[];
extern const f32 lbl_805DE888;
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(s32 arg0);
s32 get_localized_text_entry(int, int);
s32 free_member__17TWindowSubComCardFv(int, int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(int, int, void *, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, int, int, int);
extern s32 lbl_804728A0[];
extern const f32 lbl_805DE88C;
s32 TAdMultiPlyChrSelectGC__sub_802DBD64(s32 arg0);
s32 get_localized_text_entry(int, int);
s32 align_menu_entry_positions(int);
s32 update_layout_height__21TWindowSubComCardListFf(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_window_menu(void *, int, int);
extern s32 lbl_80472890[];
extern const f32 lbl_805DE894;
s32 get_localized_text_entry(int, int);
s32 free_member__17TWindowSubComCardFv(int, int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(int, int, void *, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, int, int, int);
extern u8 lbl_80472898[];
extern const f32 lbl_805DE88C;
extern u8 player_number_text_buffer[];
s32 get_localized_text_entry(int, int);
void *memset(void *, int, u32);
s32 sprintf(void *, const void *, ...);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(S_802DC294 *arg0, s32 arg1);
s32 copy_selected_characters__23TAdSinglePlyChrSelectGCFPv(void *);
s32 is_multiplayer_character_slot_selected(u32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C658C(u32);
s32 set_entry_value__22TAdMultiPlyChrSelectGCFlUl(int, int, void *);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
extern s32 TAdMultiPlyChrSelectGC__data_805DE898;
void sub_802DC118__22TAdMultiPlyChrSelectGCFl(u8 *arg0, s32 arg1);
}

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DC310(void *arg0);
s32 clear_entries__18TAdChrMoveEffectGCFv();
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 queue_destruction__7TObjectFv(void *);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

void TAdMultiPlyChrSelectGC::render() {
    if (TMainTask::get_state_flag() == 1) return;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(s32 arg0) {
    s32 temp_r31;
    temp_r31 = create__19TWindowMessageYesNoFPvPvPvPv((void *) (arg0), (int) (TAdMultiPlyChrSelectGC::get_clamped_cursor()), (int) (0), (int) (0));
    forward_slot_selection__16TAdChrSelASlotGCFPvPv((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (0xA))), (void *) (lbl_804728A8), (f32) (lbl_805DE888));
    free_member__17TWindowSubComCardFv((int) (temp_r31), (int) (1));
    return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBD64(s32 arg0) {
    s32 temp_r31;
    temp_r31 = create__19TWindowMessageYesNoFPvPvPvPv((void *) (arg0), (int) (TAdMultiPlyChrSelectGC::get_clamped_cursor()), (int) (0), (int) (0));
    forward_slot_selection__16TAdChrSelASlotGCFPvPv((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (9))), (void *) (lbl_804728A0), (f32) (lbl_805DE88C));
    free_member__17TWindowSubComCardFv((int) (temp_r31), (int) (1));
    return temp_r31;
}

s32 TAdMultiPlyChrSelectGC::create_confirm_window() {
    void *u1;
    int u2;
    s32 r = create__19TWindowMessageYesNoFPvPvPvPv(u1, u2, 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPv(r, get_localized_text_entry(0x1F, 8), lbl_80472898, lbl_805DE88C);
    free_member__17TWindowSubComCardFv(r, 1);
    return r;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBE4C(long long arg1) {
  s32 temp_r31;
  temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl((void *) arg1, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_localized_text_entry((int) 0x1F, (int) 7), (int) 0x21, (int) 0);
  ((TAdChrSelASlotGC *)temp_r31)->set_flag_40();
  set_status_flag_80__12TQuestThreadFPv((int) temp_r31);
  calc_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) lbl_805DE890);
  return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(unsigned long long arg1) {
  s32 temp_r31;
  temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl((void *) arg1, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_localized_text_entry((int) 0x1F, (int) 6), (int) 0x21, (int) 0);
  ((TAdChrSelASlotGC *)temp_r31)->set_flag_40();
  set_status_flag_80__12TQuestThreadFPv((int) temp_r31);
  calc_layout_height__17TWindowSubComCardFPvf((int) temp_r31, (f32) lbl_805DE890);
  return temp_r31;
}

s32 TAdMultiPlyChrSelectGC::create_choice_menu() {
    s32 temp_r31;
    temp_r31 = create_window_menu((void *) (lbl_80472890), (int) (4), (int) (TAdMultiPlyChrSelectGC::get_clamped_cursor()));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (2))), (int) (6), (int) (0));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (3))), (int) (6), (int) (1));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (4))), (int) (6), (int) (2));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (5))), (int) (6), (int) (3));
    update_layout_height__21TWindowSubComCardListFf((int) (temp_r31), (f32) (lbl_805DE894));
    ((TWindowSubComCardList *)temp_r31)->set_selected_index((int) (0));
    align_menu_entry_positions((int) (temp_r31));
    return temp_r31;
}

void TAdMultiPlyChrSelectGC::collect_player_slots() {
    Info_802DC024 info;
    u32 i;
    info.count = TAdMultiPlyChrSelectGC__sub_802C6558();
    for (i = 0; i < 4; i++) {
        if (is_multiplayer_character_slot_selected(i) != 0) {
            info.val[i] = TAdMultiPlyChrSelectGC__sub_802C658C(i);
            info.idx[i] = i;
        } else {
            info.val[i] = -1;
            info.idx[i] = -1;
        }
    }
    copy_selected_characters__23TAdSinglePlyChrSelectGCFPv(&info);
}

s32 TAdMultiPlyChrSelectGC::get_state_result() {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = -1;
    temp_r0 = *(s32 *)&this->m_20;
    switch (temp_r0) {
    case 0:
        var_r4 = 0;
        break;
    case 12:
        var_r4 = get_instance__22TAdMultiPlyChrSelectGCFv(this->m_5c);
        break;
    case 29:
        var_r4 = 0;
        break;
    }
    return var_r4;
}

void TAdMultiPlyChrSelectGC::sub_802DC118(s32 arg1) {
    Sel_802DC118 *s = (Sel_802DC118 *)((u8 *)this);
    if (s->win != 0) {
        switch (arg1) {
        case -1:
            if (TAdMultiPlyChrSelectGC__sub_802C6558() == TAdMultiPlyChrSelectGC::count_ready()) {
                set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 0, &TAdMultiPlyChrSelectGC__data_805DE898);
                set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
                return;
            }
            set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 0, TAdMultiPlyChrSelectGC::format_player_number_text((s32)((u8 *)this), TAdMultiPlyChrSelectGC::get_clamped_cursor()));
            set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
            break;
        default:
            if (TAdMultiPlyChrSelectGC__sub_802C6558() == TAdMultiPlyChrSelectGC::count_ready()) {
                set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 0, &TAdMultiPlyChrSelectGC__data_805DE898);
                set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
                return;
            }
            set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 0, TAdMultiPlyChrSelectGC::format_player_number_text((s32)((u8 *)this), arg1));
            set_entry_value__22TAdMultiPlyChrSelectGCFlUl(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
            break;
        }
    }
}

u8 *TAdMultiPlyChrSelectGC::format_player_number_text(s32 arg0, s32 arg1) {
    memset(player_number_text_buffer, 0, 0x80);
    sprintf(player_number_text_buffer, (const void *)get_localized_text_entry(0x1F, 0), arg1 + 1);
    return player_number_text_buffer;
}

s32 TAdMultiPlyChrSelectGC__sub_802DC294(S_802DC294 *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
    case 2:
        return TAdMultiPlyChrSelectGC__sub_802DFFE8(arg0->f5C);
    case 1:
        return TAdMultiPlyChrSelectGC__sub_802DFFE8(arg0->f5C) + 4;
    default:
        return -1;
    }
}

int TAdMultiPlyChrSelectGC::request_scene_change() { return request_scene_change__21TAdMultiChgGameModeGCFv(this); }
void TAdMultiPlyChrSelectGC__sub_802DC310(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x88) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x88));
        *(u32 *)((s8 *)arg0 + 0x88) = 0U;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x6C)))->get_mode() < 0x14) {
        if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x68)))->get_player_index() < 0xE) {
            *(s32 *)((s8 *)arg0 + 0x58) = 0;
        }
        if (TAdMultiPlyChrSelectGC::get_global_state() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFv();
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x6C)))->get_mode() == 0x1D) {
        if (TAdMultiPlyChrSelectGC::get_global_state() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFv();
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x68)))->set_cursor_index(1);
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)arg0 + 0x6C)))->set_field_1c(1);
    }
}

}
