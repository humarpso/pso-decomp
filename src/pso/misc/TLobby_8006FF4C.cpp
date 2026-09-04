#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_800703D0(void);
int TLobby__sub_800704CC(void*);
void create_time_window__6TLobbyFv(void);
void update_battle_cleanup_flag__6TLobbyFPv(void *arg0);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_8006FC7C(void *);
M2C_UNK TLobby__sub_8006FE7C();
s32 TLobby__sub_80070078(void *);
int TLobby__sub_80070170(void*);
void TLobby__sub_80070550(void);
M2C_UNK TLobby__sub_800722AC(s32);
M2C_UNK TLobby__sub_80072618();
s32 TLobby__sub_800739BC(void *);
M2C_UNK TLobby__sub_80074034(s32);
s32 TLobby__sub_8026A328();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 check_player_state_flag_2__6TLobbyFPv();
void cleanup_if_inactive__6TLobbyFPv(void* p);
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

int TLobby__sub_800703D0(void) { return 0; }
int TLobby__sub_800704CC(void*) { return 0; }

}
