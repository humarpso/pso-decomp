#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/ui/TAdMultiSaveGC.h"
#include "pso/TAdMultiChgGameModeGC.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/misc/THunterGuildSeqOffline.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(void *, int);
extern s32 lbl_80474D90[];
extern const f32 lbl_805DEF28;
s32 TAdMultiSaveGC__sub_802FF170(void);
s32 update_window_mode_from_progress__6TLobbyFPv(void *, void *);
s32 get_localized_text_entry(s32 arg0, s32 arg1);
extern u8 TAdMultiSaveGC__data_80474D70[];
extern u8 TAdMultiSaveGC__data_80474D78[];
s32 TAdMultiSaveGC__sub_802FF1F4(void);
s32 TAdMultiSaveGC__sub_802FF254(void);
s32 TAdMultiSaveGC__sub_802FF2B4(void);
s32 TAdMultiSaveGC__sub_802FF314(void);
s32 verify_system_file__23TAdSinglePlyChrSelectGCFPv();
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC();
s32 write_encrypted_save__23TAdSinglePlyChrSelectGCFv();
void *__nw__7TObjectFUl(u32);
void TWindow__close(u8 *arg0);
s32 get_selected_menu_value(int);
extern s32 tl_fade;
void run_task__14TAdMultiSaveGCFv(u8 *arg0);
int queue_destruction__7TObjectFv(void);

void TAdMultiSaveGC::queue_destruction() { queue_destruction__7TObjectFv(); TAdMultiChgGameModeGC::begin_change_game_mode(); }
s32 TAdMultiSaveGC__sub_802FF170(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFl((void *) (lbl_80474D90), (int) (2));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0xD))), (int) (6), (int) (0));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0xE))), (int) (6), (int) (1));
    ((TWindowSubComCardList *)temp_r31)->update_layout_height((f32) (lbl_805DEF28));
    return temp_r31;
}
s32 TAdMultiSaveGC__sub_802FF1F4(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    ((TLobby *)r)->send_and_handle(get_localized_text_entry(0x20, 2), 1);
    return r;
}
s32 TAdMultiSaveGC__sub_802FF254(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    ((TLobby *)r)->send_and_handle(get_localized_text_entry(0x20, 3), 1);
    return r;
}
s32 TAdMultiSaveGC__sub_802FF2B4(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    ((TLobby *)r)->send_and_handle(get_localized_text_entry(0x20, 3), 1);
    return r;
}
s32 TAdMultiSaveGC__sub_802FF314(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    ((TLobby *)r)->send_and_handle(get_localized_text_entry(0x20, 0), 1);
    return r;
}
void run_task__14TAdMultiSaveGCFv(u8 *arg0) {
    s32 selected_menu_value;
    s32 var_r30;
    u32 temp_r0;
    if (((TAdPlayerLoadGC *)0)->probe_card_slot() == 0) {
        ((TAdMultiSaveGC *)arg0)->m_1c = 0U;
    }
    temp_r0 = ((TAdMultiSaveGC *)arg0)->m_1c;
    switch (temp_r0) {
    case 0:
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_24 != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x24)));
            ((TAdMultiSaveGC *)arg0)->m_24 = 0U;
        }
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_28 != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x28)));
            ((TAdMultiSaveGC *)arg0)->m_28 = 0U;
        }
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_2c != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x2C)));
            ((TAdMultiSaveGC *)arg0)->m_2c = 0U;
        }
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_30 != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x30)));
            ((TAdMultiSaveGC *)arg0)->m_30 = 0U;
        }
        if (((TAdPlayerLoadGC *)0)->probe_card_slot() != 0) {
            ((TAdMultiSaveGC *)arg0)->m_1c = 1U;
            return;
        }
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_20 == 0U) {
            ((TAdMultiSaveGC *)arg0)->m_20 = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF314)((void *) (arg0));
        }
        break;
    case 1:
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_20 != 0U) {
            TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x20)));
            ((TAdMultiSaveGC *)arg0)->m_20 = 0U;
        }
        if (TAdPlayerLoadGC::check_memcard_status((int) (0)) == 0) {
            ((TAdMultiSaveGC *)arg0)->m_1c = 2U;
            return;
        }
        if ((u32) ((TAdMultiSaveGC *)arg0)->m_24 == 0U) {
            ((TAdMultiSaveGC *)arg0)->m_24 = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF254)((void *) (arg0));
            return;
        }
        break;
    case 2:
        var_r30 = 1;
        if (verify_system_file__23TAdSinglePlyChrSelectGCFPv() == 0) {
            var_r30 = 0;
        }
        if (TAdSinglePlyChrSelectGC::load_save_from_card() == 0) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            ((TAdMultiSaveGC *)arg0)->m_1c = 4U;
            return;
        }
        ((TAdMultiSaveGC *)arg0)->m_2c = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF2B4)((void *) (arg0));
        ((TAdMultiSaveGC *)arg0)->m_30 = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF170)((void *) (arg0));
        ((TAdMultiSaveGC *)arg0)->m_1c = 3U;
        return;
    case 3:
        if (((TWindowMenu *)(((TAdMultiSaveGC *)arg0)->m_30))->is_visible() != 0) {
            selected_menu_value = get_selected_menu_value((int) (((TAdMultiSaveGC *)arg0)->m_30));
            switch (selected_menu_value) {
            case 1:
                ((TAdMultiSaveGC *)arg0)->m_1c = 8U;
                return;
            case 0:
                ((TAdMultiSaveGC *)arg0)->m_1c = 0U;
                return;
            }
        }
        break;
    case 4:
        write_encrypted_save__23TAdSinglePlyChrSelectGCFv();
        ((TAdMultiSaveGC *)arg0)->m_28 = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF1F4)((void *) (arg0));
        ((TAdMultiSaveGC *)arg0)->m_1c = 5U;
        return;
    case 5:
        if (TAdPlayerLoadGC::get_instance() == 0) {
            ((TAdMultiSaveGC *)arg0)->m_1c = 6U;
            return;
        }
        break;
    case 6:
        TAdSinglePlyChrSelectGC__sub_801FDAAC();
        ((TAdMultiSaveGC *)arg0)->m_1c = 7U;
        return;
    case 7:
        if (TAdPlayerLoadGC::get_instance() == 0) {
            if ((u32) ((TAdMultiSaveGC *)arg0)->m_28 != 0U) {
                TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x28)));
                ((TAdMultiSaveGC *)arg0)->m_28 = 0U;
            }
            ((TAdMultiSaveGC *)arg0)->m_1c = 8U;
            return;
        }
        break;
    case 8:
        {
            void *p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                ((THunterGuildSeqOffline *)p)->init((void *) tl_fade, (void *) TAdMultiSaveGC::queue_destruction);
            }
        }
        break;
    case 9:
        break;
    }
}

}
