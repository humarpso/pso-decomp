#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802B1F98___vt__15TWindowSubTrade { M2C_UNK value; u8 remaining[0x14]; };

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7();
};

extern "C" {
void __dl__7TObjectFPv(s32);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
s32 TLobby__sub_802D2A2C(u32);
void check_flags_and_proceed__6TLobbyFv(void);
M2C_UNK __dt__7TObjectFv(void *, int);
extern M2C_UNK __vt__15TWindowSubTrade[];
u8 *__dt__15TWindowSubTradeFv(u8 *arg0, s16 arg1);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(int);
M2C_UNK play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 is_player_input_active(int);
s32 TWindowSubComCard__sub_80265BF8(int);
int close__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 TWindowSubComCard__sub_802A57FC(int);
u32 fn_802B1AB4(void *, int);
u32 fn_802B1B80(void *, int, int);
u32 TWindowSubComCard__sub_802B1C1C(void *);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK TLobby__sub_802D32D0(int);
extern M2C_UNK lbl_8050E208[];
void run_task__15TWindowSubTradeFv(u8 *arg0);
}

extern "C" {

void *TWindowSubTrade__ct(void *arg0, void *arg1, void *arg2);
void render__15TWindowSubTradeFv(void);
void TLobby__sub_802D2A50(void *);
void __ct__7TObjectFP7TObject(void *);

void render__15TWindowSubTradeFv(void) {  }

extern M2C_UNK __vt__15TWindowSubTrade[];
extern void *lbl_805D3EA8;

void run_task__15TWindowSubTradeFv(u8 *arg0) {
    s32 temp_r30;
    s32 temp_r5;
    temp_r30 = is_player_input_active((int) (M2C_FIELD(arg0, s32 *, 0x20)));
    switch (M2C_FIELD(arg0, u8 *, 0x1C)) {
    case 0:
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x2C) = TWindowSubComCard__sub_802B1C1C((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 2U;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C))) != 0) {
            ((VObj_18_204a81 *)(M2C_FIELD(arg0, u8 **, 0x28)))->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 7U;
        } else if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0x2C) != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x2C));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x34) = fn_802B1AB4((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x24)));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
    case 4:
        if (get_card_data__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x34))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        } else if (TWindowSubComCard__sub_802A57FC((int) (M2C_FIELD(arg0, u32 *, 0x34))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x34))) == 0) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 5U;
            } else {
                M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            }
        }
        break;
    case 5:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x30) = fn_802B1B80((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0xD7))));
        }
        TLobby__sub_802D32D0((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 6U;
    case 6:
        temp_r5 = temp_r30 * 0x50;
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(((u8 *)(lbl_8050E208) + temp_r5)) + 0x20), (int) (2), (int) (temp_r5)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            TLobby__sub_802D2D64();
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802B1F98___vt__15TWindowSubTrade *)&__vt__15TWindowSubTrade).value;
        TLobby__sub_802D2A2C((u32) arg0);
        check_flags_and_proceed__6TLobbyFv();
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        if (temp_r3 != NULL) {
            close__17TWindowSubComCardFPv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x34) = NULL;
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
        if (temp_r3_2 != NULL) {
            TWindow__close(temp_r3_2);
            M2C_FIELD(arg0, u8 **, 0x30) = NULL;
        }
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
        if (temp_r3_3 != NULL) {
            TWindow__close(temp_r3_3);
            M2C_FIELD(arg0, u8 **, 0x2C) = NULL;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSubTrade;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3EA8;
    M2C_FIELD(arg0, void **, 0x28) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x24) = 4;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    TLobby__sub_802D2A50(arg0);
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
