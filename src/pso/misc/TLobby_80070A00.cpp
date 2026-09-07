#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070F4C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_80070FD8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_800713C8_lbl_804FF82C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80070DA8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_80071064_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_80070EE4_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct RecoveredGlobal_8007119C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
int check_player_state_flag_2__6TLobbyFPv(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
extern M2C_UNK lbl_8048C9D8[];
extern u32 lbl_805D4E28;
s32 TLobby__sub_80070F4C(void);
int check_player_state_flag_2__6TLobbyFPv(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
extern M2C_UNK lbl_8048C9D8[];
extern u32 lbl_805D4E28;
s32 TLobby__sub_80070FD8(void);
s32 get_card_window__17TWindowSubComCardFUi(u32);
M2C_UNK TLobby__sub_8006F888(void *, void *, int, int);
extern RecoveredGlobal_800713C8_lbl_804FF82C lbl_804FF82C;
M2C_UNK *TLobby__sub_800713C8(void);
extern M2C_UNK lbl_8048C9D8[];
s32 TLobby__sub_80070DA8(void);
f32 get_random_float__8TObjFishFv(f32);
s32 is_flag_set__6TLobbyFv();
M2C_UNK TObjCHTimeWin__sub_80071DF4(void *);
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_80071064(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 check_challenge_time_range__6TLobbyFi(s32);
M2C_UNK TLobby__sub_80072448(void *);
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_80070EE4(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 check_challenge_time_range__6TLobbyFi(s32);
s32 TLobby__sub_8006F6B0(int);
s32 is_flag_set__6TLobbyFv();
s32 calc_remaining_char_slots__6TLobbyFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern M2C_UNK lbl_8048C9D8[];
s32 TLobby__sub_8007119C(s32 arg0);
}

extern "C" {

void update_dead_list_win__6TLobbyFv(void);
void draw_if_ready__6TLobbyFv(void);
s32 check_ready_state__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();
s32 is_ready_to_draw__6TLobbyFv();
M2C_UNK fn_800733C4(void*);
M2C_UNK create__15TObjDeadListWinFPv(void*);

extern u32 lbl_805D4E28;

void update_dead_list_win__6TLobbyFv(void) {
    if ((is_flag_set__6TLobbyFv() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        create__15TObjDeadListWinFPv((void*)lbl_805D4E28);
    }
}

extern u32 lbl_805D4E28;

void draw_if_ready__6TLobbyFv(void) {
    if ((is_flag_set__6TLobbyFv() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_800733C4((void*)lbl_805D4E28);
    }
}

extern M2C_UNK lbl_8048C9D8[];

s32 check_ready_state__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80070DA8();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}
typedef char RecoveredGlobal_80070F4C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070F4C_lbl_8048C9D8) == 0x748 ? 1 : -1];

typedef char RecoveredGlobal_80070DA8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070DA8_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 TLobby__sub_80070DA8(void) {
    if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80070DA8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x20) != 0) {
        return M2C_FIELD(&(*(RecoveredGlobal_80070DA8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x24);
    }
    return 0;
}

typedef char RecoveredGlobal_80070EE4_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070EE4_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80070EE4(s32 arg0) {
    check_challenge_time_range__6TLobbyFi(arg0);
    get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80070EE4_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0xC)));
    TLobby__sub_80072448((void *) (arg0));
}

s32 TLobby__sub_80070F4C(void) {
    u32 var_r31;
    u8 *temp_r3;
    if (((void *) (*(u8 * *)&lbl_805D4E28) == NULL) || ((s32) M2C_FIELD((*(u8 * *)&lbl_805D4E28), s32 *, 0x1C) != 2)) {
        return 0;
    }
    var_r31 = 0;
loop_4:
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(var_r31));
    if ((temp_r3 != NULL) && (check_player_state_flag_2__6TLobbyFPv(temp_r3) != 0)) {
        M2C_FIELD(&(*(RecoveredGlobal_80070F4C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x20) = 1;
        return 1;
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 4) {
        return 0;
    }
    goto loop_4;
}
typedef char RecoveredGlobal_80070FD8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070FD8_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 TLobby__sub_80070FD8(void) {
    u32 var_r31;
    u8 *temp_r3;
    if (((void *) (*(u8 * *)&lbl_805D4E28) == NULL) || ((s32) M2C_FIELD((*(u8 * *)&lbl_805D4E28), s32 *, 0x1C) != 2)) {
        return 0;
    }
    var_r31 = 0;
loop_4:
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(var_r31));
    if ((temp_r3 != NULL) && (check_player_state_flag_2__6TLobbyFPv(temp_r3) == 0)) {
        return 0;
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 4) {
        M2C_FIELD(&(*(RecoveredGlobal_80070FD8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x20) = 1;
        return 1;
    }
    goto loop_4;
}
typedef char RecoveredGlobal_800713C8_lbl_804FF82C_size[sizeof(RecoveredGlobal_800713C8_lbl_804FF82C) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80071064_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80071064_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80071064(s32 arg0) {
    if (is_flag_set__6TLobbyFv() != 0) {
        get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80071064_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0xC)));
        M2C_FIELD(&(*(RecoveredGlobal_80071064_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0xC) = arg0;
        TObjCHTimeWin__sub_80071DF4((void *) (arg0));
    }
}

typedef char RecoveredGlobal_8007119C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8007119C_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 TLobby__sub_8007119C(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;
    var_r31 = arg0;
    if ((is_flag_set__6TLobbyFv() == 0) || ((s32) M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0) == -1) || (((u32)get_card_window__17TWindowSubComCardFUi((u32)((int) (0xFFFF)))) == 0U)) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x14) = -4;
        return -4;
    }
    get_random_float__8TObjFishFv((f32) (var_r31 - M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0xC)));
    if (check_challenge_time_range__6TLobbyFi((s32)((int) (var_r31))) != 0) {
        var_r31 = 0x8C9F;
    }
    temp_r3 = TLobby__sub_8006F6B0((int) (var_r31));
    if (temp_r3 == -1) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x14) = -1;
        return -1;
    }
    if (temp_r3 < 0) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x14) = -2;
        return -2;
    }
    if (calc_remaining_char_slots__6TLobbyFv() == 0) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x14) = -3;
        return -3;
    }
    M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x14) = temp_r3;
    return temp_r3;
}

M2C_UNK *TLobby__sub_800713C8(void) {
    s32 temp_r3;
    temp_r3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
    TLobby__sub_8006F888((void *) (&lbl_804FF82C.value), (void *) (temp_r3 + 0x229C), (int) (0xC), (int) (temp_r3));
    return &lbl_804FF82C.value;
}

}
