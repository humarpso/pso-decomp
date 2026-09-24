#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80137B50___vt__6TLobby {
    M2C_UNK value;
    u8 remaining[0x14];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80137C10 { s32 a; s32 b; };

extern "C" {
s32 __dt__7TObjectFv(void *, int);
void destroy_all_objects__6TLobbyFv(void);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80137B50___vt__6TLobby __vt__6TLobby;
extern s32 TLobby__data_805D4E30;
extern s32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5584;
extern s32 TLobby__data_805D5588;
extern s16 TLobby__data_805D558C;
extern s16 TLobby__data_805D558E;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5598;
extern s32 TLobby__data_805D559C;
extern s32 lbl_805D55A0;
extern s32 TLobby__data_805D55A4;
extern s32 TLobby__data_805D55A8;
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__data_805D55B0;
extern s32 TLobby__data_805D55B4;
extern s32 TLobby__data_805D55B8;
extern s32 TLobby__data_805D55BC;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55FC;
extern s32 lbl_805D5600;
extern s32 TLobby__data_805D5604;
u8 *__dt__6TLobbyFv(u8 *arg0, s16 arg1);
extern u32 TLobby__data_805D55CC;
extern s32 TLobby__data_805D5594;
extern const Pair_80137C10 lbl_8043EE00[];
s32 TWindowSubComCard__sub_8026CBB8(s32);
void TQuestListOnline__sub_8013ACF4(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
void TLobby__sub_80137C10(s32 arg0);
}

extern "C" {

void destroy_all_objects__6TLobbyFv(void);
void init_player_window_effect__6TLobbyFv(void);
void update_com_card_window__6TLobbyFv(void);
void update_player_window__6TLobbyFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
s32 TWindowSubComCard__sub_80265BF8(void*);
M2C_UNK clear_lobby_flag__10TObjPlayerFPv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK send_lobby_arrow__9TProtocolFUc(s32, s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
M2C_UNK init_effect_5f0__10TObjPlayerFPv();
s32 is_visible__17TWindowSubComCardFPv(u32);
void queue_destruction__7TObjectFv(void*);

extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55D4;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void destroy_all_objects__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55C8);
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55CC);
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) lbl_805D55D4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55D4);
        lbl_805D55D4 = 0U;
    }
    if ((u32) TLobby__data_805D55D8 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55DC);
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55E0);
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55E4);
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55EC);
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F0);
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F4);
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F8);
        lbl_805D55F8 = 0U;
    }
}

extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_80137B50___vt__6TLobby_size[sizeof(RecoveredGlobal_80137B50___vt__6TLobby) == 0x18 ? 1 : -1];
u8 *__dt__6TLobbyFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__6TLobby.value;
        destroy_all_objects__6TLobbyFv();
        TLobby__data_805D5580 = 0;
        TLobby__data_805D5584 = 0;
        TLobby__data_805D5588 = 0;
        TLobby__data_805D558C = 0;
        TLobby__data_805D558E = 0;
        TLobby__data_805D5590 = 0;
        TLobby__data_805D5594 = 0;
        TLobby__data_805D5598 = 1;
        TLobby__data_805D559C = 0;
        lbl_805D55A0 = 0;
        TLobby__data_805D55A4 = 0;
        TLobby__data_805D55A8 = 0;
        TLobby__data_805D55AC = 0;
        TLobby__data_805D55B0 = 0;
        TLobby__data_805D55B4 = 0;
        TLobby__data_805D55B8 = 0;
        TLobby__data_805D55BC = 1;
        lbl_805D55C0 = 0;
        TLobby__data_805D55FC = 0;
        lbl_805D5600 = 0;
        TLobby__data_805D5604 = 0;
        TLobby__data_805D4E30 = 0;
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void TLobby__sub_80137C10(s32 arg0) {
    if (TLobby__data_805D55CC == 0) {
        Pair_80137C10 tmp = lbl_8043EE00[0];
        TLobby__data_805D55CC = update_window_mode_from_progress__6TLobbyFiPv(TWindowSubComCard__sub_8026CBB8(0xc6), &tmp);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55CC, arg0, 3);
    TLobby__data_805D5594 = 0x14;
    TQuestListOnline__sub_8013ACF4(0xb);
}

void update_player_window__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        clear_lobby_flag__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

extern s32 lbl_805D53A0;

void init_player_window_effect__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        init_effect_5f0__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
}

extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55E4;

void update_com_card_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)lbl_805D55E4);
        if (is_visible__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            send_lobby_arrow__9TProtocolFUc(TLobby__data_805D5580, temp_r31);
            close_all_windows__6TLobbyFv();
            return;
        }
        if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
