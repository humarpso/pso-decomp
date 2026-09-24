#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070358_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct E_8007032C { u8 pad[0x104]; };

struct G_8007032C { u8 pad[0x270]; E_8007032C e[4]; };

extern "C" {
s32 get_card_window__17TWindowSubComCardFUi(u32);
int TLobby__sub_800703D0(void *, void *);
extern M2C_UNK lbl_8048C9D8[];
extern s32 lbl_805D53A0;
void TLobby__sub_80070358(void);
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_8007032C(void);
}

extern "C" {

int TLobby__sub_800704CC(void*);
void TLobby__sub_80070550(void);
void TLobby__sub_80070598(u8 *arg0);
void cleanup_if_inactive__6TLobbyFPv(void* p);
void create_time_window__6TLobbyFv(void);
void update_battle_cleanup_flag__6TLobbyFPv(void *arg0);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_8006FC7C(void *);
M2C_UNK TLobby__sub_8006FE7C();
s32 TLobby__sub_80070078(void *);
int TLobby__sub_80070170(void*);
M2C_UNK TLobby__sub_800722AC(s32);
M2C_UNK TLobby__sub_80072618();
s32 TLobby__sub_800739BC(void *);
M2C_UNK TLobby__sub_80074034(s32);
s32 TLobby__sub_8026A328();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 check_player_state_flag_2__6TLobbyFPv();
M2C_UNK create_ch_time_win(s32);
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
s32 fn_80076B14(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();

extern M2C_UNK lbl_8048C9D8[];
extern s32 tl_07;

void create_time_window__6TLobbyFv(void) {
    TLobby__sub_8006FE7C();
    create_ch_time_win(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

extern M2C_UNK lbl_8048C9D8[];
extern s32 lbl_805D53A0;

void update_battle_cleanup_flag__6TLobbyFPv(void *arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return;
    }
    if (check_player_state_flag_2__6TLobbyFPv() != 0) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && ((s32) M2C_FIELD(&lbl_8048C9D8, s32 *, 0x34) == 0)) {
            TLobby__sub_8006FC7C(arg0);
            TLobby__sub_800722AC(lbl_805D53A0);
            TLobby__sub_80072618();
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

typedef char RecoveredGlobal_80070358_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070358_lbl_8048C9D8) == 0x748 ? 1 : -1];

void TLobby__sub_8007032C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        *(s32 *)&(*(G_8007032C *)&lbl_8048C9D8).e[i] = 0;
    }
}

void TLobby__sub_80070358(void) {
    s32 *temp_r31;
    TLobby__sub_8007032C();
    temp_r31 = (s32 *)((u8 *)(((u8 *)(&(*(RecoveredGlobal_80070358_lbl_8048C9D8 *)&lbl_8048C9D8).value) + (lbl_805D53A0 * 0x104))) + 0x270);
    if (get_card_window__17TWindowSubComCardFUi(0xFFFFU) != 0U) {
        M2C_FIELD(temp_r31, s32 *, 0) = 1;
        TLobby__sub_800703D0((void *)((void *) ((u8 *)(temp_r31) + 4)), (void *)((void *) (get_card_window__17TWindowSubComCardFUi(0xFFFFU) + 0x21C4)));
    }
}

int TLobby__sub_800703D0(void * _w0, void * _w1) { return 0; }
int TLobby__sub_800704CC(void*) { return 0; }

void TLobby__sub_80070550(void) {  }
void cleanup_if_inactive__6TLobbyFPv(void* p) { if (TLobby__sub_800704CC((void*)(p)) == 0) { TLobby__sub_80070170(p); update_battle_cleanup_flag__6TLobbyFPv((void *)(p)); } }
void TLobby__sub_80070598(u8 *arg0) {
    if (((s32)TLobby__sub_800704CC((void*)((void*)(arg0)))) == 0) {
        ((M2C_UNK)TLobby__sub_80070078((void *) (arg0)));
        if (TCameraCtrl__sub_8006B368() != 0) {
            ((M2C_UNK)init__23TAdSinglePlyChrSelectGCFv());
            ((M2C_UNK)TLobby__sub_800739BC((void *) (arg0)));
            ((M2C_UNK)TLobby__sub_8026A328());
            ((M2C_UNK)fn_80076B14((void *) (arg0)));
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
}

}
