#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern M2C_UNK lbl_80474D90[];
extern const f32 lbl_805DEF28;
s32 TAdMultiSaveGC__sub_802FF170(void);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
s32 get_localized_text_entry(int, int);
extern u8 TAdMultiSaveGC__data_80474D70[];
extern u8 TAdMultiSaveGC__data_80474D78[];
s32 TAdMultiSaveGC__sub_802FF1F4(void);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
s32 get_localized_text_entry(int, int);
extern u8 TAdMultiSaveGC__data_80474D70[];
extern u8 TAdMultiSaveGC__data_80474D78[];
s32 TAdMultiSaveGC__sub_802FF254(void);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
s32 get_localized_text_entry(int, int);
extern u8 TAdMultiSaveGC__data_80474D70[];
extern u8 TAdMultiSaveGC__data_80474D78[];
s32 TAdMultiSaveGC__sub_802FF2B4(void);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
s32 get_localized_text_entry(int, int);
extern u8 TAdMultiSaveGC__data_80474D70[];
extern u8 TAdMultiSaveGC__data_80474D78[];
s32 TAdMultiSaveGC__sub_802FF314(void);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
s32 probe_card_slot__15TAdPlayerLoadGCFi(int);
s32 check_memcard_status__15TAdPlayerLoadGCFi(int);
s32 verify_system_file__23TAdSinglePlyChrSelectGCFPv();
s32 load_save_from_card__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDAAC();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8020051C();
void *__nw__7TObjectFUl(u32);
M2C_UNK TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 TAdMultiSaveGC__sub_802FF170(void);
s32 TAdMultiSaveGC__sub_802FF1F4(void);
s32 TAdMultiSaveGC__sub_802FF254(void);
s32 TAdMultiSaveGC__sub_802FF2B4(void);
s32 TAdMultiSaveGC__sub_802FF314(void);
void queue_destruction__14TAdMultiSaveGCFv(void);
extern s32 tl_fade;
void run_task__14TAdMultiSaveGCFv(u8 *arg0);
}

extern "C" {

void queue_destruction__14TAdMultiSaveGCFv(void);
int begin_change_game_mode__21TAdMultiChgGameModeGCFv(void);
int queue_destruction__7TObjectFv(void);

void queue_destruction__14TAdMultiSaveGCFv(void) { queue_destruction__7TObjectFv(); begin_change_game_mode__21TAdMultiChgGameModeGCFv(); }
s32 TAdMultiSaveGC__sub_802FF170(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *) (lbl_80474D90), (int) (2));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0xD))), (int) (6), (int) (0));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0xE))), (int) (6), (int) (1));
    update_layout_height__17TWindowSubComCardFPvf((int) (temp_r31), (f32) (lbl_805DEF28));
    return temp_r31;
}
s32 TAdMultiSaveGC__sub_802FF1F4(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    send_and_handle__6TLobbyFPvii(r, get_localized_text_entry(0x20, 2), 1);
    return r;
}
s32 TAdMultiSaveGC__sub_802FF254(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    send_and_handle__6TLobbyFPvii(r, get_localized_text_entry(0x20, 3), 1);
    return r;
}
s32 TAdMultiSaveGC__sub_802FF2B4(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    send_and_handle__6TLobbyFPvii(r, get_localized_text_entry(0x20, 3), 1);
    return r;
}
s32 TAdMultiSaveGC__sub_802FF314(void) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(TAdMultiSaveGC__data_80474D70, TAdMultiSaveGC__data_80474D78);
    send_and_handle__6TLobbyFPvii(r, get_localized_text_entry(0x20, 0), 1);
    return r;
}
void run_task__14TAdMultiSaveGCFv(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    u32 temp_r0;
    if (probe_card_slot__15TAdPlayerLoadGCFi((int) (0)) == 0) {
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (0)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 1U;
            return;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x20) = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF314)((void *) (arg0));
        }
        break;
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if (check_memcard_status__15TAdPlayerLoadGCFi((int) (0)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 2U;
            return;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x24) = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF254)((void *) (arg0));
            return;
        }
        break;
    case 2:
        var_r30 = 1;
        if (verify_system_file__23TAdSinglePlyChrSelectGCFPv() == 0) {
            var_r30 = 0;
        }
        if (load_save_from_card__23TAdSinglePlyChrSelectGCFv() == 0) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 4U;
            return;
        }
        M2C_FIELD(arg0, u32 *, 0x2C) = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF2B4)((void *) (arg0));
        M2C_FIELD(arg0, u32 *, 0x30) = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF170)((void *) (arg0));
        M2C_FIELD(arg0, u32 *, 0x1C) = 3U;
        return;
    case 3:
        if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x30))) != 0) {
            temp_r3 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x30)));
            switch (temp_r3) {
            case 1:
                M2C_FIELD(arg0, u32 *, 0x1C) = 8U;
                return;
            case 0:
                M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
                return;
            }
        }
        break;
    case 4:
        TAdSinglePlyChrSelectGC__sub_8020051C();
        M2C_FIELD(arg0, u32 *, 0x28) = ((s32 (*)(void *))TAdMultiSaveGC__sub_802FF1F4)((void *) (arg0));
        M2C_FIELD(arg0, u32 *, 0x1C) = 5U;
        return;
    case 5:
        if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 6U;
            return;
        }
        break;
    case 6:
        TAdSinglePlyChrSelectGC__sub_801FDAAC();
        M2C_FIELD(arg0, u32 *, 0x1C) = 7U;
        return;
    case 7:
        if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x28));
                M2C_FIELD(arg0, u32 *, 0x28) = 0U;
            }
            M2C_FIELD(arg0, u32 *, 0x1C) = 8U;
            return;
        }
        break;
    case 8:
        {
            void *p = __nw__7TObjectFUl(0x28);
            if (p != 0) {
                init__22THunterGuildSeqOfflineFPvPvPv(p, (void *) tl_fade, (void *) queue_destruction__14TAdMultiSaveGCFv);
            }
        }
        break;
    case 9:
        break;
    }
}

}
