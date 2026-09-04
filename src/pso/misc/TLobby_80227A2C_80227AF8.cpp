#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80227AF8(void* p);
int TLobby__sub_80227B18(void);
int TLobby__sub_80227D14(void* p);
int TLobby__sub_80227D38(void);
void handle_6xB2_play_sound_from_player(void *arg0);
s32 is_camera_state_active__6TLobbyFv(void);
void set_mode__6TLobbyFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
u16 TCameraCtrl__sub_8006A5DC();
int TLobby__sub_8023F754(void*);
int TLobby__sub_8023F8B0(void*, int);
int TLobby__sub_8023FF64(void*);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK bswap_6xB2_play_sound();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK on_set_mode__6TLobbyFv(M2C_UNK);
M2C_UNK set_mode__6TLobbyFPvi(M2C_UNK *, s32);

int TLobby__sub_80227AF8(void* p) { return TLobby__sub_8023F754(p); }

int TLobby__sub_80227B18(void) { return 0; }

extern s32 lbl_805D53A0;

void handle_6xB2_play_sound_from_player(void *arg0) {
    s32 temp_r3;

    bswap_6xB2_play_sound();
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == get_global_state__14TOKeyMachine01Fv()) {
        if (M2C_FIELD(arg0, s16 *, 6) == 0xFFFF) {
            TBoss3Volopt__sub_8022675C(M2C_FIELD(arg0, s32 *, 8), 0, 0, 0);
            return;
        }
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if (temp_r3 != 0) {
            TBoss3Volopt__sub_8022675C(M2C_FIELD(arg0, s32 *, 8), temp_r3 + 0x38, 0, 0);
        }
    }
}

s32 is_camera_state_active__6TLobbyFv(void) {
    if ((TCameraCtrl__sub_8006A5DC() == 5) || (TCameraCtrl__sub_8006A5DC() == 9)) {
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_80514F64[];

void set_mode__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        on_set_mode__6TLobbyFv(1);
        break;
    case 1:
        on_set_mode__6TLobbyFv(0);
        break;
    case 2:
        on_set_mode__6TLobbyFv(0);
        break;
    }
    set_mode__6TLobbyFPvi(lbl_80514F64, arg0);
}

int TLobby__sub_80227D14(void* p) { return TLobby__sub_8023F8B0(p, 64); }
int TLobby__sub_80227D38(void) { return TLobby__sub_8023FF64((void*)(0)); }

}
