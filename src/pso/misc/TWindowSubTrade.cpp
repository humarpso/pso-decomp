#include "types.h"
#include "pso/misc/TWindowSubTrade.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_802B1F98___vt__15TWindowSubTrade { s32 value; u8 remaining[0x14]; };

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
void __dl__7TObjectFPv(s32);
void TWindow__close(void *);
s32 TLobby__sub_802D2A2C(u32);
void check_flags_and_proceed__6TLobbyFv(void);
s32 __dt__7TObjectFv(void *, int);
extern s32 __vt__15TWindowSubTrade[];
u8 *__dt__15TWindowSubTradeFv(u8 *arg0, s16 arg1);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 is_player_input_active(int);
s32 get_selected_menu_value(int);
u32 open_trade_confirm_prompt(void *, int);
u32 open_player_message_window(void *, int, int);
u32 TWindowSubComCard__sub_802B1C1C(void *);
s32 cancel_trade__6TLobbyFv();
s32 send_modify_trade_proposal__6TLobbyFi(int);
extern s32 controller_input_state[];
}

extern "C" {

void *TWindowSubTrade__ct(void *arg0, void *arg1, void *arg2);
void TLobby__sub_802D2A50(void *);
void __ct__7TObjectFP7TObject(void *);

void TWindowSubTrade::render() {  }

extern s32 __vt__15TWindowSubTrade[];
extern void *lbl_805D3EA8;

void TWindowSubTrade::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r30;
    s32 temp_r5;
    temp_r30 = is_player_input_active((int) (*(s32 *)((s8 *)arg0 + 0x20)));
    switch (*(u8 *)((s8 *)arg0 + 0x1C)) {
    case 0:
    case 1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x34)))->close();
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x2C) = TWindowSubComCard__sub_802B1C1C((void *) (arg0));
        }
        ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x2C)))->clear_flag_and_release();
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 2:
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x2C)))->get_status_flag() != 0) {
            ((VObj_18_204a81 *)(*(u8 **)((s8 *)arg0 + 0x28)))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 7U;
        } else if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x2C)))->is_visible() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
        }
        break;
    case 3:
        if (*(u32 *)((s8 *)arg0 + 0x2C) != 0) {
            *(s32 *)((s8 *)arg0 + 0x24) = get_selected_menu_value(*(s32 *)((s8 *)arg0 + 0x2C));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x34) = open_trade_confirm_prompt((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x24)));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
    case 4:
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->get_card_data() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
        } else if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->is_child_visible() != 0) {
            if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->get_slot_or_neg1() == 0) {
                *(u8 *)((s8 *)arg0 + 0x1C) = 5U;
            } else {
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            }
        }
        break;
    case 5:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x34)))->close();
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x30) = open_player_message_window((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x24)), (int) (TWindowSubStatusDisp::get_message_10((int) (0xD7))));
        }
        send_modify_trade_proposal__6TLobbyFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
    case 6:
        temp_r5 = temp_r30 * 0x50;
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(((u8 *)(controller_input_state) + temp_r5)) + 0x20), (int) (2), (int) (temp_r5)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            cancel_trade__6TLobbyFv();
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
        }
        break;
    case 7:
        break;
    }
}

u8 *__dt__15TWindowSubTradeFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802B1F98___vt__15TWindowSubTrade *)&__vt__15TWindowSubTrade).value;
        TLobby__sub_802D2A2C((u32) arg0);
        check_flags_and_proceed__6TLobbyFv();
        temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x34));
        if (temp_r3 != NULL) {
            ((TWindowSubComCard *)temp_r3)->close();
            *(u8 **)((s8 *)arg0 + 0x34) = NULL;
        }
        temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x30));
        if (temp_r3_2 != NULL) {
            TWindow__close(temp_r3_2);
            *(u8 **)((s8 *)arg0 + 0x30) = NULL;
        }
        temp_r3_3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x2C));
        if (temp_r3_3 != NULL) {
            TWindow__close(temp_r3_3);
            *(u8 **)((s8 *)arg0 + 0x2C) = NULL;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void *TWindowSubTrade__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowSubTrade;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3EA8;
    *(void **)((s8 *)arg0 + 0x28) = arg1;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    *(u32 *)((s8 *)arg0 + 0x24) = 4;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    TLobby__sub_802D2A50(arg0);
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
