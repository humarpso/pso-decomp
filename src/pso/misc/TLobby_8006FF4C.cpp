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

struct G_80070024 { u8 pad[0x48]; s32 x48; };

struct O_80070600 { u8 pad[0x1c]; s32 x1c; };

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk5C_800703D0 { u32 w[23]; };

struct Blk50_800703D0 { u32 w[20]; };

struct Blk18_800703D0 { u32 w[6]; };

struct Blk14_800703D0 { u32 w[5]; };

struct Pair_800703D0 { u8 bytes[8]; };

struct Info_800703D0 {
    u16 a;
    s16 b;
    Blk5C_800703D0 c;
    Blk50_800703D0 d;
    Pair_800703D0 xB0;
    Pair_800703D0 xB8;
    Blk18_800703D0 e;
    Pair_800703D0 xD8;
    s32 xE0;
    Pair_800703D0 xE4;
    Blk14_800703D0 f;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u32 w[2]; };

struct M2CCopy_1C4 { u32 a; struct { u32 w[0x70]; } b; };

struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

struct M2CCopy_18 { u8 bytes[0x18]; };

struct M2CCopy_50 { u8 bytes[0x50]; };

struct M2CCopy_54 { u8 bytes[0x54]; };

struct M2CCopy_1C0 { u8 bytes[0x1c0]; };

struct M2CCopy_410 { u8 bytes[0x410]; };

struct E_80070254 { u8 pad[0x104]; };

struct G_80070254 { u8 pad[0x270]; E_80070254 e[4]; };

struct L_80070254 { u8 pad[0x24]; s32 x24; };

class TLobby_80070674 {
public:
    u8 pad0[0x1C];
    s32 state;
    s32 count;
    void step0(void);
    void step1(void);
    void step2(void);
};

typedef void (TLobby_80070674::*Step_80070674)(void);
struct Q_80070078 { u8 pad[0x48]; s32 x48; };
struct L_80070078 { u8 pad[0x2C]; s32 x2C; };
extern "C" {
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern s32 lbl_805D53A0;
void TLobby__sub_80070358(void);
void clear_four_slots__6TLobbyFv(void);
void TLobby__sub_800738F4(void *, s32);
void set_challenge_record_page__6TLobbyFPvi(void *self, s32 v);
s32 get_main_phase(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void create_obj_tag_challenge(s32);
void create__14TObjBagWarnWinFPv(s32);
extern s32 tl_07;
void TLobby__sub_80070600(O_80070600 *self);
s32 get_main_phase(void);
void queue_destruction__7TObjectFv(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 destroy_on_phase_change__6TLobbyFPv(void *self);
s32 get_current_floor(void);
void create_time_window__6TLobbyFv(void *);
void create_obj_tag_challenge(s32);
M2C_UNK create_ch_time_win(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern s32 tl_07;
void TLobby__sub_80070170(void *arg0);
Info_800703D0 *TLobby__sub_800703D0(Info_800703D0 *dst, Info_800703D0 *src);
void copy_challenge_settings__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK send_6x7c_reset__6TLobbyFv(void *);
u32 get_player_by_client_id(s32);
extern void *challenge_mode_state[];
extern s32 lbl_805D53A0;
void TLobby__sub_80070254(L_80070254 *arg0);
}

extern "C" {

void TLobby__sub_80070550(void);
void TLobby__sub_80070598(u8 *arg0);
void cleanup_if_inactive__6TLobbyFPv(void* p);
void update_battle_cleanup_flag__6TLobbyFPv(void *arg0);
s32 is_quest_active();
M2C_UNK update_card_save_info__6TLobbyFv(void *);
M2C_UNK spawn_player_tombstones__6TLobbyFv();
void update_quest_challenge_state__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_800722AC(s32);
M2C_UNK TLobby__sub_80072618();
s32 TLobby__sub_800739BC(void *);
M2C_UNK create_new_floor_windows__6TLobbyFi(s32);
s32 TLobby__sub_8026A328();
u32 get_player_by_client_id(s32);
s32 check_player_state_flag_2__6TLobbyFPv();
M2C_UNK create_ch_time_win(s32);
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
s32 fn_80076B14(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();

extern s32 tl_07;

extern "C" {
void run_step_table__6TLobbyFPv(TLobby_80070674 *);
}
struct Obj_80070774 { u8 pad0[0x18]; void *vt; };
Obj_80070774 *TLobby__sub_80070774(Obj_80070774 *arg0, s16 arg1);
extern "C" {
extern u8 lbl_805D90D0[];
}
extern "C" {
extern u8 lbl_805D90D4[];
}
extern "C" {
extern u8 lbl_805D90D8[];
}
extern "C" {
extern u8 lbl_805D90DC[];
}
extern "C" {
extern u8 lbl_805D90E0[];
}
extern "C" {
extern u8 lbl_805D90E4[];
}
extern "C" {
extern u8 lbl_805D90E8[];
}
extern "C" {
extern u8 lbl_805D90EC[];
}
extern "C" {
extern u8 lbl_805D90F0[];
}
extern "C" {
extern u8 lbl_805D90F4[];
}
extern "C" {
extern u8 lbl_805D90F8[];
}
extern "C" {
extern u8 lbl_805D90FC[];
}
extern "C" {
void render_shadows__7TObjectFv();
}
void *challenge_settings_defaults[420] = {
    (void *)0xffffffff, (void *)0x3f800000, (void *)0xffffffff, (void *)0x0,
    (void *)0x39383814, (void *)0xfffffff6, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *challenge_mode_state[420] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
#define challenge_mode_state (*(M2C_UNK (*)[466])challenge_mode_state)

void create_time_window__6TLobbyFv(void * _w0) {
    spawn_player_tombstones__6TLobbyFv();
    create_ch_time_win(tl_07);
    create_new_floor_windows__6TLobbyFi(tl_07);
    if ((s32) M2C_FIELD(challenge_mode_state, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

extern s32 lbl_805D53A0;

void update_battle_cleanup_flag__6TLobbyFPv(void *arg0) {
    if (get_player_by_client_id(lbl_805D53A0) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return;
    }
    if (check_player_state_flag_2__6TLobbyFPv() != 0) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && ((s32) M2C_FIELD(&challenge_mode_state, s32 *, 0x34) == 0)) {
            update_card_save_info__6TLobbyFv(arg0);
            TLobby__sub_800722AC(lbl_805D53A0);
            TLobby__sub_80072618();
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

typedef char RecoveredGlobal_80070358_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070358_lbl_8048C9D8) == 0x748 ? 1 : -1];

void set_challenge_record_page__6TLobbyFPvi(void *self, s32 v) {
    if (v < 0 || v >= 0x11) {
        return;
    }
    if ((*(G_80070024 *)&challenge_mode_state).x48 != v) {
        TLobby__sub_800738F4(self, v);
        (*(G_80070024 *)&challenge_mode_state).x48 = v;
    }
}

M2C_UNK send_challenge_with_value__6TLobbyFii(void *, s32);
s32 get_selected_quest_id__6TLobbyFPv();
s32 get_list_state__16TQuestListOnlineFv();
extern s32 TLobby__data_805D53AC;

#define arg0 ((L_80070078 *)arg0_)
void update_quest_challenge_state__6TLobbyFPv(void *arg0_) {
    s32 id;
    s32 n;

    n = 0;
    if (lbl_805D53A0 == TLobby__data_805D53AC) {
        switch (get_list_state__16TQuestListOnlineFv()) {
        case 1:
            break;
        case 2:
            id = get_selected_quest_id__6TLobbyFPv();
            n = 1;
            if (id >= 0x33 && id <= 0x3B) {
                n = id - 0x30;
            }
            break;
        case 3:
            id = get_selected_quest_id__6TLobbyFPv();
            n = 2;
            if (id >= 0x3D && id <= 0x41) {
                n = id - 0x31;
            }
            break;
        }
        if (n == 0) {
            if (--arg0->x2C < 0) {
                arg0->x2C = 0;
            }
        } else {
            arg0->x2C = 30;
        }
        if ((arg0->x2C <= 0 || n != 0) && n != ((Q_80070078 *)challenge_mode_state)->x48) {
            send_challenge_with_value__6TLobbyFii(arg0, n);
        }
    }
}
#undef arg0

void TLobby__sub_80070170(void *arg0) {
    s32 old;
    s32 v;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
    case 18:
        old = challenge_mode_state[2];
        challenge_mode_state[2] = -1;
        if (old != -1) {
            create_obj_tag_challenge(tl_07);
            if (challenge_mode_state[8] == 0) {
                create_ch_time_win(tl_07);
            }
        }
        break;
    case 15:
        challenge_mode_state[2] = -1;
        break;
    case 16:
    case 17:
        challenge_mode_state[2] = -1;
        break;
    default:
        v = get_current_floor();
        if (challenge_mode_state[2] != v) {
            challenge_mode_state[2] = v;
            create_time_window__6TLobbyFv((void *)(arg0));
        }
        break;
    }
}

void TLobby__sub_80070254(L_80070254 *arg0) {
    s32 found;
    s32 i;
    s32 *p;
    found = 0;
    for (i = 0; i < 4; i++) {
        if (i != lbl_805D53A0) {
            p = (s32 *)&((G_80070254 *)challenge_mode_state)->e[i];
            if (get_player_by_client_id(i) == 0) {
                if (*p != 0) {
                    *p = 0;
                }
            } else if (*p == 0) {
                found = 1;
            }
        }
    }
    if (found != 0) {
        arg0->x24++;
        if (arg0->x24 % 30 == 0) {
            send_6x7c_reset__6TLobbyFv(arg0);
        }
    } else {
        arg0->x24 = 0;
    }
}

void clear_four_slots__6TLobbyFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        *(s32 *)&(*(G_8007032C *)&challenge_mode_state).e[i] = 0;
    }
}

void TLobby__sub_80070358(void) {
    s32 *temp_r31;
    clear_four_slots__6TLobbyFv();
    temp_r31 = (s32 *)((u8 *)(((u8 *)(&(*(RecoveredGlobal_80070358_lbl_8048C9D8 *)&challenge_mode_state).value) + (lbl_805D53A0 * 0x104))) + 0x270);
    if (get_card_window__17TWindowSubComCardFUi(0xFFFFU) != 0U) {
        M2C_FIELD(temp_r31, s32 *, 0) = 1;
        TLobby__sub_800703D0((Info_800703D0 *)((void *)((void *) ((u8 *)(temp_r31) + 4))), (Info_800703D0 *)((void *)((void *) (get_card_window__17TWindowSubComCardFUi(0xFFFFU) + 0x21C4))));
    }
}

Info_800703D0 *TLobby__sub_800703D0(Info_800703D0 *dst, Info_800703D0 *src) {
    *dst = *src;
    return dst;
}

s32 destroy_on_phase_change__6TLobbyFPv(void *self) {
    switch (get_main_phase()) {
    case 15:
        if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
            queue_destruction__7TObjectFv(self);
            return 1;
        }
        break;
    case 14:
        queue_destruction__7TObjectFv(self);
        return 1;
    default:
        queue_destruction__7TObjectFv(self);
        return 1;
    }
    return 0;
}

void TLobby__sub_80070550(void) {  }
void cleanup_if_inactive__6TLobbyFPv(void* p) { if (destroy_on_phase_change__6TLobbyFPv((void *)((void*)(p))) == 0) { TLobby__sub_80070170((void *)(p)); update_battle_cleanup_flag__6TLobbyFPv((void *)(p)); } }
void TLobby__sub_80070598(u8 *arg0) {
    if (((s32)destroy_on_phase_change__6TLobbyFPv((void *)((void*)((void*)(arg0))))) == 0) {
        update_quest_challenge_state__6TLobbyFPv((void *) (arg0));
        if (is_quest_active() != 0) {
            ((M2C_UNK)init__23TAdSinglePlyChrSelectGCFv());
            ((M2C_UNK)TLobby__sub_800739BC((void *) (arg0)));
            ((M2C_UNK)TLobby__sub_8026A328());
            ((M2C_UNK)fn_80076B14((void *) (arg0)));
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
}
void TLobby__sub_80070600(O_80070600 *self) {
    s32 flag = 0;
    switch (get_main_phase()) {
    case 0xf:
        if (get_global_state__14TOKeyMachine01Fv() != 0xf) {
            flag = 1;
        }
        break;
    default:
        flag = 1;
        break;
    }
    if (flag != 0) {
        create_obj_tag_challenge(tl_07);
        create__14TObjBagWarnWinFPv(tl_07);
        self->x1c = 1;
    }
}
s32 TAdPlayerLoadGC__sub_801E1510(void *);

void run_step_table__6TLobbyFPv(TLobby_80070674 *self) {
    if (TAdPlayerLoadGC__sub_801E1510(self) == 1) {
        return;
    }
    TLobby__sub_80070254((L_80070254 *)self);
    static Step_80070674 table[3] = {
        &TLobby_80070674::step0,
        &TLobby_80070674::step1,
        &TLobby_80070674::step2,
    };
    Step_80070674 step = table[self->state];
    if (step) {
        (self->*step)();
    } else {
        return;
    }
    self->count++;
}

void *lbl_8048D0B0[22] = {
    (void *)0x6368616c, (void *)0x6c656e67, (void *)0x65000000, (void *)0x53004300,
    (void *)0x51000000, (void *)&lbl_805D90D0, (void *)&lbl_805D90D4, (void *)&lbl_805D90D8,
    (void *)&lbl_805D90DC, (void *)&lbl_805D90E0, (void *)&lbl_805D90E4, (void *)&lbl_805D90E8,
    (void *)&lbl_805D90EC, (void *)&lbl_805D90F0, (void *)&lbl_805D90F4, (void *)&lbl_805D90F8,
    (void *)&lbl_805D90FC, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_8048D108[6] = {
    (void *)0x0, (void *)0x0, (void *)&TLobby__sub_80070774, (void *)&run_step_table__6TLobbyFPv,
    (void *)&TLobby__sub_80070550, (void *)&render_shadows__7TObjectFv,
};

void copy_challenge_settings__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    u8 *temp_r6;
    u8 *temp_r8;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    *(M2CCopy_10 *)((s32) arg0 + 0x38) = *(const M2CCopy_10 *)((s32) arg1 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg1, s32 *, 0x4C);
    *(M2CCopy_8 *)((s32) arg0 + 0x50) = *(const M2CCopy_8 *)((s32) arg1 + 0x50);
    {
        const M2CCopy_1C4 *src = (const M2CCopy_1C4 *)(arg1 + 0x58);
        M2CCopy_1C4 *dst = (M2CCopy_1C4 *)(arg0 + 0x58);
        *dst = *src;
    }
    temp_r8 = (u8 *)(arg0 + 0x218);
    temp_r6 = (u8 *)(arg1 + 0x218);
    *(M2CCopy_54 *)((s32) temp_r8 + 4) = *(const M2CCopy_54 *)((s32) temp_r6 + 4);
    *(M2CCopy_410 *)((s32) (arg0 + 0x26C) + 4) = *(const M2CCopy_410 *)((s32) (arg1 + 0x26C) + 4);
    *(M2CCopy_10 *)((s32) arg0 + 0x680) = *(const M2CCopy_10 *)((s32) arg1 + 0x680);
}

void __dt__7TObjectFv(void *, s32);
void destroy__13TObjTombstoneFv();
void __dl__7TObjectFPv(void *);
extern s32 lbl_805D4E28;

Obj_80070774 *TLobby__sub_80070774(Obj_80070774 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vt = lbl_8048D108;
        destroy__13TObjTombstoneFv();
        ((void (*)(void *))clear_four_slots__6TLobbyFv)(arg0);
        copy_challenge_settings__6TLobbyFPvPv((u8 *)challenge_mode_state, (u8 *)challenge_settings_defaults);
        lbl_805D4E28 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct Obj_80070944 { s32 f0; u8 pad4[0x14]; void *vt; s32 f1C, f20, f24, f28, f2C; };
void send_challenge_records__6TLobbyFUi(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_805D2850;

Obj_80070944 *TChallenge__ct(Obj_80070944 *arg0, void *parent) {
    __ct__7TObjectFP7TObject(arg0, parent);
    arg0->vt = lbl_8048D108;
    arg0->f0 = lbl_805D2850;
    copy_challenge_settings__6TLobbyFPvPv((u8 *)challenge_mode_state, (u8 *)challenge_settings_defaults);
    ((void (*)(void *))TLobby__sub_80070358)(arg0);
    send_challenge_records__6TLobbyFUi(arg0);
    arg0->f20 = 0;
    arg0->f24 = 0;
    arg0->f28 = 1;
    arg0->f2C = 0;
    arg0->f1C = 0;
    return arg0;
}

}
