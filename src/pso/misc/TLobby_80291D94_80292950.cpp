#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80292A34_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_8029299C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern s32 lbl_804DB1F0[];
extern u32 lbl_805D6580;
s32 check_player_state_flag_2__6TLobbyFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
void TLobby__sub_80293218(s32);
extern s32 lbl_804DB1F0[];
extern u32 lbl_805D6580;
s32 TLobby__sub_8029299C(void);
s32 check_player_state_flag_2__6TLobbyFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern s32 lbl_804DB1F0[];
extern u32 lbl_805D6580;
s32 TLobby__sub_80292A34(void);
}

extern "C" {

void clamp_and_store_layout_index__6TLobbyFi(s32 arg0);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);

extern s32 lbl_804DB1F0[];

void clamp_and_store_layout_index__6TLobbyFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    lbl_804DB1F0[0] = var_r31;
}
typedef char RecoveredGlobal_80292A34_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292A34_lbl_804DB1F0) == 0x6B0 ? 1 : -1];

typedef char RecoveredGlobal_8029299C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_8029299C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
s32 TLobby__sub_8029299C(void) {
    s32 var_r31;
    u32 var_r30;
    u8 *temp_r3;
    if ((u32) lbl_805D6580 == 0U) {
        return 0;
    }
    var_r31 = 0;
    var_r30 = 0;
    do {
        temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)(var_r30))));
        if ((temp_r3 != NULL) && (((int)check_player_state_flag_2__6TLobbyFPv((void *)(temp_r3))) != 0)) {
            TLobby__sub_80293218((s32) var_r30);
            var_r31 = 1;
        }
        var_r30 += 1;
    } while ((s32) var_r30 < 4);
    if (var_r31 != 0) {
        M2C_FIELD(&(*(RecoveredGlobal_8029299C_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x20) = 1;
        return 1;
    }
    return 0;
}
s32 TLobby__sub_80292A34(void) {
    s32 var_r31;
    u8 *temp_r3;
    if ((u32) lbl_805D6580 == 0U) {
        return 0;
    }
    var_r31 = 0;
loop_3:
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)(var_r31))));
    if ((temp_r3 != NULL) && (((int)check_player_state_flag_2__6TLobbyFPv(temp_r3)) == 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        M2C_FIELD(&lbl_804DB1F0, s32 *, 0x20) = 1;
        return 1;
    }
    goto loop_3;
}

}
