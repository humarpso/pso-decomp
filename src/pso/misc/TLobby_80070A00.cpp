#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_690 { u8 bytes[0x690]; };

struct RecoveredGlobal_80070A78_lbl_8048C348 {
    M2C_UNK value;
    u8 remaining[0x68C];
};

struct RecoveredGlobal_80070A78_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
extern RecoveredGlobal_80070A78_lbl_8048C348 challenge_settings_defaults;
extern M2C_UNK challenge_mode_state[];
#define challenge_mode_state (*(RecoveredGlobal_80070A78_lbl_8048C9D8 *)challenge_mode_state)
void copy_state_block__6TLobbyFv(void);
}

extern "C" {

void init_on_main_phase__6TLobbyFv(void);
M2C_UNK start_lobby_name_request__6TLobbyFv();
M2C_UNK set_name_string__6TLobbyFi(M2C_UNK *);
u32 create__10TChallengeFv();
M2C_UNK load_resources__13TObjTombstoneFv();

s32 get_main_phase();
extern M2C_UNK lbl_804385B0[];
extern u32 lbl_805D4E28;
extern s32 lbl_805D4E2C;
extern s32 TLobby__data_805D4E30;

void init_on_main_phase__6TLobbyFv(void) {
    lbl_805D4E2C = 0;
    if ((u32) lbl_805D4E28 == 0U) {
        if (get_main_phase() != 0xF) {
            TLobby__data_805D4E30 = 0;
            return;
        }
        start_lobby_name_request__6TLobbyFv();
        if ((s32) TLobby__data_805D4E30 != 0) {
            lbl_805D4E28 = create__10TChallengeFv();
            lbl_805D4E2C = 1;
            load_resources__13TObjTombstoneFv();
            set_name_string__6TLobbyFi(lbl_804385B0);
        }
    }
}
typedef char RecoveredGlobal_80070A78_lbl_8048C348_size[sizeof(RecoveredGlobal_80070A78_lbl_8048C348) == 0x690 ? 1 : -1];
typedef char RecoveredGlobal_80070A78_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070A78_lbl_8048C9D8) == 0x748 ? 1 : -1];
void copy_state_block__6TLobbyFv(void) {
    *(M2CCopy_690 *)(&challenge_mode_state.value) = *(const M2CCopy_690 *)(&challenge_settings_defaults.value);
}

}

__declspec(section ".ctors") static void *const __sinit_TLobby_80070A00_80070A00_cpp_ref = (void *)copy_state_block__6TLobbyFv;

#undef challenge_mode_state

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070ACC_lbl_8048D208 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8039994C_lbl_804F5800 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_80399904_lbl_804F5A00 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_80399928_lbl_804F5900 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct G_80070B34 { u8 pad[0x10]; s32 x10; u8 pad2[0x34 - 0x14]; s32 x34; };

extern "C" {
extern RecoveredGlobal_80070ACC_lbl_8048D208 lbl_8048D208;
M2C_UNK *TLobby__sub_80070ACC(void);
extern RecoveredGlobal_80399904_lbl_804F5A00 lbl_804F5A00;
u32 TLobby__sub_80070AD8(s32 arg0);
#define challenge_mode_state (*(G_80070B34 *)challenge_mode_state)
u8 is_flag_set__6TLobbyFv(void);
s32 mix_seed_checked__6TLobbyFi(s32);
void TLobby__sub_80070B34(s32 v);
void set_split_screen_flag__6TLobbyFv(void);
}

extern "C" {

#define lbl_805D4E28 (*(s32 *)&lbl_805D4E28)

u8 is_flag_set__6TLobbyFv(void) {
    return (u8) (lbl_805D4E28 != 0);
}

    extern int chat_last_line_buffer;
int get_unit_list__6TLobbyFv(void) {  return chat_last_line_buffer; }
typedef char RecoveredGlobal_80070ACC_lbl_8048D208_size[sizeof(RecoveredGlobal_80070ACC_lbl_8048D208) == 0x18 ? 1 : -1];
M2C_UNK *TLobby__sub_80070ACC(void) {
    return &lbl_8048D208.value;
}
typedef char RecoveredGlobal_8039994C_lbl_804F5800_size[sizeof(RecoveredGlobal_8039994C_lbl_804F5800) == 0x100 ? 1 : -1];
typedef char RecoveredGlobal_80399904_lbl_804F5A00_size[sizeof(RecoveredGlobal_80399904_lbl_804F5A00) == 0x100 ? 1 : -1];
u32 TLobby__sub_80070AD8(s32 arg0) {
    if (arg0 == -1) {
        return -1U;
    }
    return M2C_FIELD(((u8 *)(&lbl_804F5A00.value) + (u8) arg0), u8 *, 0);
}
void set_split_screen_flag__6TLobbyFv(void) {
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() != 0) {
        challenge_mode_state.x34 = 1;
    }
}
void TLobby__sub_80070B34(s32 v) {
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() != 0) {
        if (v < 0x3c || v > 0xe10) {
            return;
        }
        challenge_mode_state.x10 = mix_seed_checked__6TLobbyFi(v);
    }
}

typedef char RecoveredGlobal_80399928_lbl_804F5900_size[sizeof(RecoveredGlobal_80399928_lbl_804F5900) == 0x100 ? 1 : -1];

}

#undef challenge_mode_state
#undef lbl_805D4E28

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070BE8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct G_80070C50 { u8 pad[0xC]; s32 fc; u8 padc[0x10]; s32 f20; s32 f24; s32 f28; u8 pad2c[4]; s32 f30; u8 pad34[4]; s32 a38[4]; u8 pad48[0x680 - 0x48]; s32 a680[4]; u8 rest[0x100]; };

struct H_80070C50 { u8 pad[0x20]; s32 f20; s32 f24; s32 f28; };

extern "C" {

extern M2C_UNK challenge_mode_state[];
void TLobby__sub_80070BE8(s32 arg0);
void TLobby__sub_8026A328(void *);
extern M2C_UNK challenge_mode_state[];
#define lbl_805D4E28 (*(H_80070C50 **)&lbl_805D4E28)
void TLobby__sub_80070C50(void);
}

extern "C" {

s32 get_state__6TLobbyFv(void);

extern M2C_UNK challenge_mode_state[];

s32 get_state__6TLobbyFv(void) {
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(challenge_mode_state, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(challenge_mode_state, s32 *, 0x2C) != 0)) {
        M2C_FIELD(challenge_mode_state, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(challenge_mode_state, s32 *, 0x2C);
}
typedef char RecoveredGlobal_80070BE8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070BE8_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80070BE8(s32 arg0) {
    s32 var_r31;
    var_r31 = arg0;
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() == 0) {
        M2C_FIELD(&(*(RecoveredGlobal_80070BE8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x2C) = 0;
        return;
    }
    if ((var_r31 != 1) && (var_r31 != 0)) {
        var_r31 = 0;
    }
    M2C_FIELD(&(*(RecoveredGlobal_80070BE8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x2C) = var_r31;
}
void TLobby__sub_80070C50(void) {
    s32 i;
    H_80070C50 *q;
    H_80070C50 *p = lbl_805D4E28;
    if (p != NULL) {
        (*(G_80070C50 *)&challenge_mode_state).fc = 0;
        (*(G_80070C50 *)&challenge_mode_state).f20 = 0;
        (*(G_80070C50 *)&challenge_mode_state).f24 = -1;
        (*(G_80070C50 *)&challenge_mode_state).f28 = 0;
        (*(G_80070C50 *)&challenge_mode_state).f30 = 0;
        for (i = 0; i < 4; i++) {
            (*(G_80070C50 *)&challenge_mode_state).a38[i] = 0;
            (*(G_80070C50 *)&challenge_mode_state).a680[i] = 0;
        }
        p->f20 = 0;
        lbl_805D4E28->f24 = 0;
        q = lbl_805D4E28;
        q->f28 = 1;
        TLobby__sub_8026A328(q);
    }
}

}

#undef lbl_805D4E28

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

struct RecoveredGlobal_800710D8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

typedef s32 M2C_UNK;
struct Entry_800712D8 {
    s32 value;
    s32 arg;
    u8 pad[0x14];
};

struct Table_800712D8 {
    u8 pad[0x21C];
    Entry_800712D8 entries[3];
};

struct Tbl_80070DCC { u8 pad[0x680]; s32 f680[4]; };

extern "C" {
int check_player_state_flag_2__6TLobbyFPv(void *);
s32 get_player_by_client_id(u32);
extern M2C_UNK challenge_mode_state[];
extern u32 lbl_805D4E28;
s32 TLobby__sub_80070F4C(void);
int check_player_state_flag_2__6TLobbyFPv(void *);
s32 get_player_by_client_id(u32);
extern M2C_UNK challenge_mode_state[];
extern u32 lbl_805D4E28;
s32 TLobby__sub_80070FD8(void);
s32 get_card_window__17TWindowSubComCardFUi(u32);
M2C_UNK decode_obfuscated_string__6TLobbyFPvPvi(void *, void *, int, int);
extern RecoveredGlobal_800713C8_lbl_804FF82C lbl_804FF82C;
M2C_UNK *TLobby__sub_800713C8(void);
extern M2C_UNK challenge_mode_state[];
s32 TLobby__sub_80070DA8(void);
f32 get_random_float__8TObjFishFv(f32);

M2C_UNK TObjCHTimeWin__sub_80071DF4(void *);
extern M2C_UNK challenge_mode_state[];
void TLobby__sub_80071064(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 check_challenge_time_range__6TLobbyFi(s32);
M2C_UNK send_seed_state__6TLobbyFi(void *);
extern M2C_UNK challenge_mode_state[];
void TLobby__sub_80070EE4(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 check_challenge_time_range__6TLobbyFi(s32);
s32 TLobby__sub_8006F6B0(int);

s32 calc_remaining_char_slots__6TLobbyFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern M2C_UNK challenge_mode_state[];
s32 TLobby__sub_8007119C(s32 arg0);
M2C_UNK **TWindowSubStatusDisp__sub_8006F134(s32, s32);
s32 forward_to_global_instance__23TAdSinglePlyChrSelectGCFi(int);
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern M2C_UNK challenge_mode_state[];
s32 TLobby__sub_800710D8(s32 arg0);
s32 calc_layout_hash__20TWindowSubStatusDispFv(int);
s32 calc_entry_offset__20TWindowSubStatusDispFv(int);
extern M2C_UNK challenge_mode_state[];
s32 TLobby__sub_800712D8(s32 idx, s32 value, s32 arg);
s32 calc_challenge_time_limit__6TLobbyFv();
s32 check_challenge_time_range__6TLobbyFi(s32);
s32 get_valid_slot__6TLobbyFi(s32);
s32 get_player_by_client_id(u32);
extern M2C_UNK challenge_mode_state[];
extern s32 lbl_805D4E38;
extern s8 lbl_805D4E3C;
s32 get_max_challenge_time__6TLobbyFv(void);
}

extern "C" {

void update_dead_list_win__6TLobbyFv(void);
void draw_if_ready__6TLobbyFv(void);
s32 check_ready_state__6TLobbyFv(void);

s32 is_ready_to_draw__6TLobbyFv();
M2C_UNK fn_800733C4(void*);
M2C_UNK create__15TObjDeadListWinFPv(void*);

extern u32 lbl_805D4E28;

void update_dead_list_win__6TLobbyFv(void) {
    if ((((s32 (*)(void))is_flag_set__6TLobbyFv)() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        create__15TObjDeadListWinFPv((void*)lbl_805D4E28);
    }
}

extern u32 lbl_805D4E28;

void draw_if_ready__6TLobbyFv(void) {
    if ((((s32 (*)(void))is_flag_set__6TLobbyFv)() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_800733C4((void*)lbl_805D4E28);
    }
}

extern M2C_UNK challenge_mode_state[];

s32 check_ready_state__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80070DA8();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(challenge_mode_state, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}
typedef char RecoveredGlobal_80070F4C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070F4C_lbl_8048C9D8) == 0x748 ? 1 : -1];

typedef char RecoveredGlobal_80070DA8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070DA8_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 TLobby__sub_80070DA8(void) {
    if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80070DA8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x20) != 0) {
        return M2C_FIELD(&(*(RecoveredGlobal_80070DA8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x24);
    }
    return 0;
}

typedef char RecoveredGlobal_80070EE4_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070EE4_lbl_8048C9D8) == 0x748 ? 1 : -1];

s32 get_max_challenge_time__6TLobbyFv(void) {
    s32 times[4];
    s32 i;
    s32 best;
    s32 t;
    for (i = 0; i < 4; i++) {
        times[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        if (((u32 (*)(u32))get_player_by_client_id)(i) != 0) {
            s32 v = ((Tbl_80070DCC *)challenge_mode_state)->f680[i];
            if (v == 0) {
                return -1;
            }
            t = get_valid_slot__6TLobbyFi(v);
            if (check_challenge_time_range__6TLobbyFi(t) != 0) {
                return -2;
            }
            times[i] = t;
        }
    }
    if (lbl_805D4E3C == 0) {
        lbl_805D4E38 = calc_challenge_time_limit__6TLobbyFv() - 1;
        lbl_805D4E3C = 1;
    }
    best = lbl_805D4E38;
    for (i = 0; i < 4; i++) {
        if (times[i] != 0 && best < times[i]) {
            best = times[i];
        }
    }
    if (best == lbl_805D4E38) {
        return -2;
    }
    return best;
}

void TLobby__sub_80070EE4(s32 arg0) {
    check_challenge_time_range__6TLobbyFi(arg0);
    get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80070EE4_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0xC)));
    send_seed_state__6TLobbyFi((void *) (arg0));
}

s32 TLobby__sub_80070F4C(void) {
    u32 var_r31;
    u8 *temp_r3;
    if (((void *) (*(u8 * *)&lbl_805D4E28) == NULL) || ((s32) M2C_FIELD((*(u8 * *)&lbl_805D4E28), s32 *, 0x1C) != 2)) {
        return 0;
    }
    var_r31 = 0;
loop_4:
    temp_r3 = (u8 *)(get_player_by_client_id(var_r31));
    if ((temp_r3 != NULL) && (check_player_state_flag_2__6TLobbyFPv(temp_r3) != 0)) {
        M2C_FIELD(&(*(RecoveredGlobal_80070F4C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x20) = 1;
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
    temp_r3 = (u8 *)(get_player_by_client_id(var_r31));
    if ((temp_r3 != NULL) && (check_player_state_flag_2__6TLobbyFPv(temp_r3) == 0)) {
        return 0;
    }
    var_r31 += 1;
    if ((s32) var_r31 >= 4) {
        M2C_FIELD(&(*(RecoveredGlobal_80070FD8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x20) = 1;
        return 1;
    }
    goto loop_4;
}
typedef char RecoveredGlobal_800713C8_lbl_804FF82C_size[sizeof(RecoveredGlobal_800713C8_lbl_804FF82C) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80071064_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80071064_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80071064(s32 arg0) {
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() != 0) {
        get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80071064_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0xC)));
        M2C_FIELD(&(*(RecoveredGlobal_80071064_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0xC) = arg0;
        TObjCHTimeWin__sub_80071DF4((void *) (arg0));
    }
}

typedef char RecoveredGlobal_8007119C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8007119C_lbl_8048C9D8) == 0x748 ? 1 : -1];

typedef char RecoveredGlobal_800710D8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_800710D8_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 TLobby__sub_800710D8(s32 arg0) {
    M2C_UNK **temp_r3;
    M2C_UNK *var_r31;
    M2C_UNK *var_r4;
    s32 var_r30;
    s32 var_r3;
    s32 var_r5;
    var_r4 = (M2C_UNK *)(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value);
    var_r31 = (M2C_UNK *)(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value);
    var_r30 = arg0;
    if (((s32) M2C_FIELD(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) < 0) || ((s32) M2C_FIELD(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) > 2)) {
        var_r3 = 0;
        return 0;
    }
    var_r3 = 0x10000;
    var_r3 = 0xFFFF;
    if (((u32)get_card_window__17TWindowSubComCardFUi((u32)((int) (0xFFFF)))) == 0U) {
        var_r3 = 0;
        return 0;
    }
    var_r3 = var_r30;
    if (forward_to_global_instance__23TAdSinglePlyChrSelectGCFi((int) (var_r3)) != 0) {
        var_r4 = (M2C_UNK *)(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value);
        var_r3 = 0x10000;
        var_r5 = M2C_FIELD(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) * 0x1C;
        var_r3 = 0xFFFF;
        var_r4 = (M2C_UNK *)((u8 *)(&(*(RecoveredGlobal_800710D8_lbl_8048C9D8 *)&challenge_mode_state).value) + var_r5);
        var_r31 = (M2C_UNK *)((u8 *)(var_r4) + 0x21C);
        var_r3 = ((u32)get_card_window__17TWindowSubComCardFUi((u32)((int) (0xFFFF)))) + 0x21C4;
        var_r4 = (M2C_UNK *)((u8 *)((M2C_UNK *)-1));
        temp_r3 = (M2C_UNK **)(TWindowSubStatusDisp__sub_8006F134(var_r3, -1));
        var_r4 = (M2C_UNK *)(M2C_FIELD(temp_r3, M2C_UNK **, 0));
        M2C_FIELD(temp_r3, M2C_UNK **, 0) = (M2C_UNK *) ((s32) var_r4 | M2C_FIELD(var_r31, s32 *, 4));
        var_r3 = 1;
        return 1;
    }
    var_r3 = 0;
    return 0;
}

s32 TLobby__sub_8007119C(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;
    var_r31 = arg0;
    if ((((s32 (*)(void))is_flag_set__6TLobbyFv)() == 0) || ((s32) M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0) == -1) || (((u32)get_card_window__17TWindowSubComCardFUi((u32)((int) (0xFFFF)))) == 0U)) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) = -4;
        return -4;
    }
    get_random_float__8TObjFishFv((f32) (var_r31 - M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0xC)));
    if (check_challenge_time_range__6TLobbyFi((s32)((int) (var_r31))) != 0) {
        var_r31 = 0x8C9F;
    }
    temp_r3 = TLobby__sub_8006F6B0((int) (var_r31));
    if (temp_r3 == -1) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) = -1;
        return -1;
    }
    if (temp_r3 < 0) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) = -2;
        return -2;
    }
    if (calc_remaining_char_slots__6TLobbyFv() == 0) {
        M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) = -3;
        return -3;
    }
    M2C_FIELD(&(*(RecoveredGlobal_8007119C_lbl_8048C9D8 *)&challenge_mode_state).value, s32 *, 0x14) = temp_r3;
    return temp_r3;
}

#define TBL_800712D8 (*(Table_800712D8 *)challenge_mode_state)
s32 TLobby__sub_800712D8(s32 idx, s32 value, s32 arg) {
    s32 prev;
    Entry_800712D8 *e;
    Entry_800712D8 *p;
    Entry_800712D8 *end;
    if (idx < 0 || idx >= 3 || value < calc_entry_offset__20TWindowSubStatusDispFv(-1)) {
        return 0;
    }
    if (idx == 0) {
        value = calc_layout_hash__20TWindowSubStatusDispFv(-1);
    }
    e = &TBL_800712D8.entries[idx];
    if (e->value != 0) {
        return 0;
    }
    e->value = value;
    e->arg = arg;
    prev = 0x7FFFFFFF;
    end = &TBL_800712D8.entries[3];
    for (p = TBL_800712D8.entries; p < end; p++) {
        s32 v = p->value;
        if (v != 0) {
            if (prev <= v) {
                return 0;
            }
            prev = v;
        }
    }
    return 1;
}

M2C_UNK *TLobby__sub_800713C8(void) {
    s32 temp_r3;
    temp_r3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
    decode_obfuscated_string__6TLobbyFPvPvi((void *) (&lbl_804FF82C.value), (void *) (temp_r3 + 0x229C), (int) (0xC), (int) (temp_r3));
    return &lbl_804FF82C.value;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80292574_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80291F9C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_802925C4_lbl_80540968 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80292200_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80292604_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
M2C_UNK encode_name_xor__6TLobbyFPvPvi(void *, void *, int);
#define challenge_mode_state (*(s8 (*)[1])challenge_mode_state)
void set_player_name_and_color__6TLobbyFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK encode_name_xor__6TLobbyFPvPvi(void *, void *, int);

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r30;

    if ((((s32 (*)(void))is_flag_set__6TLobbyFv)() == 0) || ((s32) M2C_FIELD(challenge_mode_state, s32 *, 0x1C) < 0) || ((s32) M2C_FIELD(challenge_mode_state, s32 *, 0x1C) >= 0x10)) {
        return 0;
    }
    temp_r30 = (unsigned char *) (challenge_mode_state + (M2C_FIELD(challenge_mode_state, s32 *, 0x1C) * 0x1C) + 0x5C);
    encode_name_xor__6TLobbyFPvPvi((void *) (temp_r30), (void *) (arg0), (int) (0xC));
    encode_name_xor__6TLobbyFPvPvi((void *) (temp_r30 + 0xC), (void *) (arg1), (int) (0xC));
    M2C_FIELD(temp_r30, s32 *, 0x18) = arg2;
    M2C_FIELD(challenge_mode_state, s32 *, 0x1C) = (s32) (M2C_FIELD(challenge_mode_state, s32 *, 0x1C) + 1);
    return 1;
}
typedef char RecoveredGlobal_80291F9C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291F9C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
typedef char RecoveredGlobal_80292200_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292200_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
typedef char RecoveredGlobal_80292574_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292574_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void set_player_name_and_color__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    encode_name_xor__6TLobbyFPvPvi((void *)((u8 *)&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&challenge_mode_state).value + 0x50), (void *)(arg0), (int)(0xC));
    M2C_FIELD(&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&challenge_mode_state).value, s32 *, 0x18) = (s32) (arg1 | 0xFF000000);
}
typedef char RecoveredGlobal_802925C4_lbl_80540968_size[sizeof(RecoveredGlobal_802925C4_lbl_80540968) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80292604_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292604_lbl_804DB1F0) == 0x6B0 ? 1 : -1];

}

#undef challenge_mode_state

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_remaining_char_slots__6TLobbyFv(void);
void set_selected_layout__6TLobbyFi(s32 arg0);
u8 *get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);

extern s32 challenge_mode_state[];

void set_selected_layout__6TLobbyFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    challenge_mode_state[0] = var_r31;
}

s32 calc_remaining_char_slots__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = 0x1E - *get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80071698 { s32 f0; u8 pad[0x100]; };

struct G_80071698 { u8 pad[0x270]; E_80071698 e[4]; };

extern "C" {
u32 TLobby__sub_80071640(u32 c);
s32 count_set_bits__6TLobbyFUi(u32 x);

s32 TLobby__sub_80071B30(s32, s32);

extern M2C_UNK challenge_mode_state[];
s32 get_party_min_tier__6TLobbyFi(s32 arg0);
}

extern "C" {

s32 TLobby__sub_80071654(s32 arg0);
s32 set_split_screen_flag__6TLobbyFi(s32 arg0);
s32 try_set_value__6TLobbyFf(f32 farg0);

extern M2C_UNK challenge_mode_state[];
extern f32 lbl_805D9108;
extern f32 lbl_805D910C;

s32 try_set_value__6TLobbyFf(f32 farg0) {
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805D9108) || (farg0 > lbl_805D910C)) {
        return 0;
    }
    M2C_FIELD(&challenge_mode_state, f32 *, 4) = farg0;
    return 1;
}

extern s32 game_difficulty_selection;

s32 set_split_screen_flag__6TLobbyFi(s32 arg0) {
    if (((s32 (*)(void))is_flag_set__6TLobbyFv)() == 0) {
        return 0;
    }
    game_difficulty_selection = arg0;
    return 1;
}

u32 TLobby__sub_80071640(u32 c) {
    return ((c >> 9) & 0x7C00) | ((c >> 6) & 0x3E0) | ((c >> 3) & 0x1F);
}

s32 TLobby__sub_80071654(s32 arg0) {
    return ((arg0 * 8) & 0xF8) | (((arg0 << 9) & 0xF80000) | 0xFF000000 | ((arg0 << 6) & 0xF800));
}
s32 count_set_bits__6TLobbyFUi(u32 x) {
    s32 n = 0;
    while (x != 0) {
        if (x & 1) {
            n++;
        }
        x >>= 1;
    }
    return n;
}
s32 get_party_min_tier__6TLobbyFi(s32 arg0) {
    s32 best;
    s32 i;
    s32 t;
    best = ((s32 (*)(void))get_layout_id__20TWindowSubStatusDispFv)();
    for (i = 0; i < 4; i++) {
        if (((u32 (*)(s32))get_player_by_client_id)(i) != 0U) {
            if (((G_80071698 *)challenge_mode_state)->e[i].f0 == 0) {
                return -1;
            }
            t = TLobby__sub_80071B30(i, arg0);
            if (best > t) {
                best = t;
            }
        }
    }
    return best;
}

}
