#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_690 { u8 bytes[0x690]; };

struct RecoveredGlobal_8029379C_lbl_804DAB60 {
    M2C_UNK value;
    u8 remaining[0x68C];
};

struct RecoveredGlobal_8029379C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct Rec_802934E0 { s32 f; u8 pad[0x100]; };

struct G_802934E0 { u8 pad[0x270]; Rec_802934E0 r[4]; };

struct Rec_80293218 {
    s32 f0;
    u8 pad[0xB0];
    u8 out[0x50];
};

struct G_80293218 {
    s32 f0;
    s32 f4;
    s32 f8;
    u8 pad[0x270 - 0xC];
    Rec_80293218 r[4];
};

struct Rec_8029350C {
    s32 f0;
    u8 pad[0x100];
};

struct G_8029350C {
    u8 pad[0x270];
    Rec_8029350C r[4];
};

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct RecoveredGlobal_80070358_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct E_8007032C { u8 pad[0x104]; };

struct G_8007032C { u8 pad[0x270]; E_8007032C e[4]; };

struct G_80070024 { u8 pad[0x48]; s32 x48; };

struct O_80070600 { u8 pad[0x1c]; s32 x1c; };

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

struct Tag_802932EC {
    s8 phase;
    s8 layout;
    s8 slot;
};

struct Rec_802932EC {
    s32 active;
    u8 pad[0xB0];
    Tag_802932EC tag;
    u8 pad2[0x104 - 0xB7];
};

struct G_802932EC {
    s32 layout;
    s32 f4;
    s32 slot;
    u8 pad[0x270 - 0xC];
    Rec_802932EC recs[4];
};

extern "C" {
void TLobby__sub_802932B0(u8 *arg0, u8 *arg1);
void TLobby__sub_8029379C(void);
void TLobby__sub_802934E0(void);
s32 get_main_phase();
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_destruction_by_phase__6TLobbyFPv(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32);
u32 get_player_by_client_id(u32);
u8 *get_card_window__17TWindowSubComCardFUi(s32);
void TLobby__sub_802932B0(u8 *arg0, u8 *arg1);
void TLobby__sub_80293218(s32 arg0);
u32 get_player_by_client_id(u32);
u8 *get_card_window__17TWindowSubComCardFUi(s32);
void TLobby__sub_800703D0(void *, void *);
void TLobby__sub_802934E0(void);
void snapshot_player_card_status__6TLobbyFv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void create_obj_tag_challenge(s32);
extern s32 tl_07;
s32 get_current_floor(void);
void create_time_window2__6TLobbyFv(void *);
M2C_UNK create_ch_time_win(s32);
void create_time_window2__6TLobbyFv(void * _w0);
void TLobby__sub_802933FC(void *arg0);
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32);
void reset_tombstone_values__6TLobbyFv(void);
void create_tombstone__6TLobbyFPvPvPv(s32, s32, Tag_802932EC *);
u32 get_player_by_client_id(u32);
extern s32 tl_07;
void spawn_player_tombstones2__6TLobbyFv();
}

extern "C" {

void maybe_handle_destruction__6TLobbyFPv(void* p);
void setup_split_screen(void);
void update_destruction_countdown__6TLobbyFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1510();
M2C_UNK create_new_floor_windows__6TLobbyFi(s32);
M2C_UNK set_split_screen_name__6TLobbyFi(void *);
M2C_UNK export_character_data__10TObjPlayerFPvPv(u32, u32);
u32 get_player_by_client_id(u32);
M2C_UNK create_ch_time_win(s32);
u32 create_challenge4p__6TLobbyFv();
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_80464E58[];
extern u32 lbl_805D6580;
extern s32 lbl_805D6584;
extern s32 lbl_805D6588;

extern "C" void *TLobby__sub_802936AC(void *arg0, s16 arg1);
extern "C" void render__7TObjectFv();
extern "C" void render_shadows__7TObjectFv();
void *lbl_804DAB60[420] = {
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
void *lbl_804DB1F0[422] = {
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
    (void *)0x74686542, (void *)0x65737400,
};
void *lbl_804DB888[6] = {
    (void *)0x0, (void *)0x0, (void *)&TLobby__sub_802936AC, (void *)&update_destruction_countdown__6TLobbyFPv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
#define lbl_804DAB60 (*(RecoveredGlobal_8029379C_lbl_804DAB60 *)lbl_804DAB60)
#define lbl_804DB1F0 (*(M2C_UNK (*)[422])lbl_804DB1F0)

void setup_split_screen(void) {
    u32 var_r31;
    u32 temp_r30;
    u32 temp_r4;

    lbl_805D6588 = 1;
    lbl_805D6584 = 0;
    if ((u32) lbl_805D6580 != 0U) {
        lbl_805D6588 = 0;
        return;
    }
    if (is_split_screen() == 0) {
        lbl_805D6588 = 0;
        return;
    }
    if ((s32) lbl_805D6588 != 0) {
        lbl_805D6580 = create_challenge4p__6TLobbyFv();
        lbl_805D6584 = 1;
        lbl_805D6588 = 0;
        set_split_screen_name__6TLobbyFi(lbl_80464E58);
        var_r31 = 0U;
        do {
            temp_r30 = get_player_by_client_id(var_r31);
            temp_r4 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
            if ((temp_r30 != 0U) && (temp_r4 != 0U)) {
                export_character_data__10TObjPlayerFPvPv(temp_r30, temp_r4);
            }
            var_r31 += 1;
        } while (var_r31 != 4U);
    }
}

extern s32 tl_07;

void TLobby__sub_80293218(s32 arg0) {
    u8 *p = (u8 *)get_player_by_client_id(arg0);
    if (p != NULL) {
        Rec_80293218 *r = &(*(G_80293218 *)&lbl_804DB1F0).r[arg0];
        if (r->f0 != 0) {
            u8 *o = r->out;
            o[0] = resolve_player_slot__20TWindowSubStatusDispFi(-1);
            o[1] = (*(G_80293218 *)&lbl_804DB1F0).f0;
            o[2] = (*(G_80293218 *)&lbl_804DB1F0).f8;
            VecCopy__FP3VecPC3Vec(o + 4, p + 0x38);
            u8 *w = get_card_window__17TWindowSubComCardFUi(arg0) + 0x2274;
            TLobby__sub_802932B0(w, o);
        }
    }
}

void TLobby__sub_802932B0(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

void spawn_player_tombstones2__6TLobbyFv() {
    s32 i;
    Rec_802932EC *r;
    Tag_802932EC *t;
    reset_tombstone_values__6TLobbyFv();
    for (i = 0; i < 4; i++) {
        r = &((G_802932EC *)lbl_804DB1F0)->recs[i];
        if (r->active != 0 && get_player_by_client_id(i) != 0) {
            t = &r->tag;
            if (t->phase == resolve_player_slot__20TWindowSubStatusDispFi(-1) &&
                t->layout == ((G_802932EC *)lbl_804DB1F0)->layout &&
                t->slot == ((G_802932EC *)lbl_804DB1F0)->slot) {
                create_tombstone__6TLobbyFPvPvPv(tl_07, i, t);
            }
        }
    }
}

void create_time_window2__6TLobbyFv(void * _w0) {
    spawn_player_tombstones2__6TLobbyFv();
    create_ch_time_win(tl_07);
    create_new_floor_windows__6TLobbyFi(tl_07);
    if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

typedef char RecoveredGlobal_80070358_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070358_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_802933FC(void *arg0) {
    s32 old;
    s32 v;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
    case 18:
        old = lbl_804DB1F0[2];
        lbl_804DB1F0[2] = -1;
        if (old != -1) {
            create_obj_tag_challenge(tl_07);
            if (lbl_804DB1F0[8] == 0) {
                create_ch_time_win(tl_07);
            }
        }
        break;
    case 15:
        lbl_804DB1F0[2] = -1;
        break;
    case 16:
    case 17:
        lbl_804DB1F0[2] = -1;
        break;
    default:
        v = get_current_floor();
        if (lbl_804DB1F0[2] != v) {
            lbl_804DB1F0[2] = v;
            create_time_window2__6TLobbyFv((void *)((void *)(arg0)));
        }
        break;
    }
}

void TLobby__sub_802934E0(void) {
    s32 i;
    for (i = 0; i < 4; i++) (*(G_802934E0 *)&lbl_804DB1F0).r[i].f = 0;
}

void snapshot_player_card_status__6TLobbyFv(void) {
    s32 i;
    TLobby__sub_802934E0();
    for (i = 0; i < 4; i++) {
        if (get_player_by_client_id(i) != 0 && get_card_window__17TWindowSubComCardFUi(i) != NULL) {
            Rec_8029350C *r = &(*(G_8029350C *)&lbl_804DB1F0).r[i];
            r->f0 = 1;
            TLobby__sub_800703D0((u8 *)r + 4, get_card_window__17TWindowSubComCardFUi(i) + 0x21C4);
        }
    }
}

s32 check_destruction_by_phase__6TLobbyFPv(void *arg0) {
    switch (get_main_phase()) {
    case 15:
        queue_destruction__7TObjectFv(arg0);
        return 1;
    case 14:
        return is_split_screen() != 1 ? 1 : 0;
    default:
        queue_destruction__7TObjectFv(arg0);
        return 1;
    }
}

void maybe_handle_destruction__6TLobbyFPv(void* p) { if (check_destruction_by_phase__6TLobbyFPv((void *)((void*)(p))) == 0) { TLobby__sub_802933FC((void *)(p)); } }

void update_destruction_countdown__6TLobbyFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1510() != 1) {
        if (check_destruction_by_phase__6TLobbyFPv((void *)((void*)(arg0))) == 1) {
            queue_destruction__7TObjectFv(arg0);
        }
        maybe_handle_destruction__6TLobbyFPv((void*)((void*)(arg0)));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    }
}
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
void copy_challenge_settings__6TLobbyFPvPv(void *, void *);
void *TLobby__sub_802936AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x18) = (void *)lbl_804DB888;
        copy_challenge_settings__6TLobbyFPvPv(lbl_804DB1F0, &lbl_804DAB60);
        lbl_805D6580 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
struct C_80293720 { s32 f0; u8 pad4[0x14]; void *f18; s32 f1c; s32 f20; s32 f24; s32 f28; };
void __ct__7TObjectFP7TObject(void *, void *);
void copy_challenge_settings__6TLobbyFPvPv(void *, void *);
void fn_80076B14(void *);
extern s32 lbl_805D3CA8;
C_80293720 *TChallenge4P__ct(C_80293720 *arg0, void *parent) {
    __ct__7TObjectFP7TObject(arg0, parent);
    arg0->f18 = lbl_804DB888;
    arg0->f0 = lbl_805D3CA8;
    copy_challenge_settings__6TLobbyFPvPv(lbl_804DB1F0, &lbl_804DAB60);
    ((void (*)(void *))snapshot_player_card_status__6TLobbyFv)(arg0);
    arg0->f1c = 0;
    arg0->f20 = 0;
    arg0->f24 = 1;
    arg0->f28 = 0;
    fn_80076B14(arg0);
    return arg0;
}
typedef char RecoveredGlobal_8029379C_lbl_804DAB60_size[sizeof(RecoveredGlobal_8029379C_lbl_804DAB60) == 0x690 ? 1 : -1];
typedef char RecoveredGlobal_8029379C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_8029379C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_8029379C(void) {
    *(M2CCopy_690 *)(&(*(RecoveredGlobal_8029379C_lbl_804DB1F0 *)&lbl_804DB1F0).value) = *(const M2CCopy_690 *)(&lbl_804DAB60.value);
}

}
