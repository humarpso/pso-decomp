#include "types.h"

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

extern "C" {
s32 init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, void *);
s32 send_logout__6TLobbyFv();
u32 __nw__7TObjectFUl(int);
s32 fn_8024AB54(int);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
void init_char_select__16TKeyBoardControlFv(void);
extern s32 tl_00;
extern int window_sub_game_end_active_flag;
void run_task__17TWindowSubGameEndFv(u8 *arg0);
s32 get_main_phase();
s32 is_split_screen();
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 __ct__7TObjectFP7TObject();
s32 get_window_layout_position(s32);
s32 notify_warp_flag70__19TWindowSubShortMailFPv(s32);
s32 free_member__17TWindowSubComCardFPv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
extern s32 __vt__17TWindowSubGameEnd[];
extern s32 TWindowSubGameEnd__class_name;
extern const f32 lbl_805DD628;
extern const f32 lbl_805DD62C;
void *TWindowSubGameEnd__ct(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_802796FC(void);
void TLobby__sub_80279708(void);
void *__dt__17TWindowSubGameEndFv(void *arg0, s16 arg1);
void init_char_select__16TKeyBoardControlFv(void);
void render__17TWindowSubGameEndFv(void);
s32 setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv();
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();
s32 is_split_screen();

void init_char_select__16TKeyBoardControlFv(void) {
    if (is_split_screen() != 0) {
        setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F9CC(7);
        return;
    }
    init__23TAdSinglePlyChrSelectGCFv();
    TKeyBoardControl__sub_8000F91C(9);
    TKeyBoardControl__sub_8000F9CC(0x12);
}
void render__17TWindowSubGameEndFv(void) {  }

extern s32 __vt__17TWindowSubGameEnd[];

void run_task__17TWindowSubGameEndFv(u8 *arg0) {
    s32 slot;
    void *obj;
    switch (*(s32 *)((s8 *)arg0 + 0x1C)) {
    case 0:
    case 1:
        if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x28)) != 0) {
            (*(VObj_18_204a81 **)((s8 *)arg0 + 0x24))->m7();
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x28)) != 0) {
            slot = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x28));
            if (slot == 0) {
                if (window_sub_game_end_active_flag != 1) {
                    obj = (void *)__nw__7TObjectFUl(0x28);
                    if (obj != NULL) {
                        init__22THunterGuildSeqOfflineFPvPvPv(obj, tl_00, (void *)init_char_select__16TKeyBoardControlFv);
                    }
                    fn_8024AB54(*(s32 *)((s8 *)arg0 + 0x20));
                    send_logout__6TLobbyFv();
                    window_sub_game_end_active_flag = 1;
                }
                *(s32 *)((s8 *)arg0 + 0x1C) = 2;
            }
            if (slot == 1) {
                (*(VObj_18_204a81 **)((s8 *)arg0 + 0x24))->m7();
            }
        }
        break;
    case 2:
        break;
    }
}

void *__dt__17TWindowSubGameEndFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowSubGameEnd;
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int window_sub_game_end_active_flag;

void *TWindowSubGameEnd__ct(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f31;
    s32 var_r31;
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowSubGameEnd;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubGameEnd__class_name;
    *(s32 *)((s8 *)arg0 + 0x24) = arg1;
    *(s32 *)((s8 *)arg0 + 0x20) = arg2;
    if (get_main_phase() == 0xF) {
        var_r31 = get_message_10__20TWindowSubStatusDispFPv(0x3B);
        var_f31 = lbl_805DD628;
    } else if (is_split_screen() != 0) {
        var_r31 = get_message_10__20TWindowSubStatusDispFPv(0x3C);
        var_f31 = lbl_805DD62C;
    } else {
        var_r31 = get_message_10__20TWindowSubStatusDispFPv(0x3A);
        var_f31 = lbl_805DD628;
    }
    *(s32 *)((s8 *)arg0 + 0x28) = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(*(s32 *)((s8 *)arg0 + 0x28), var_r31, get_window_layout_position(0x17), var_f31);
    free_member__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x28), 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(*(s32 *)((s8 *)arg0 + 0x28));
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void TLobby__sub_802796FC(void) { window_sub_game_end_active_flag = 0; }

    extern int window_sub_game_end_active_flag;
void TLobby__sub_80279708(void) { window_sub_game_end_active_flag = 0; }

}
