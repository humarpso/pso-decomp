#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E8560_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E85B4_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801E9C40_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9EE4_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9EFC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F14_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F2C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F50_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F74_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

union U_801E8784 { s32 i; f32 f; };

union U_801E871C { s32 i; f32 f; };

union U_801E8750 { s32 i; f32 f; };

union U_801E87EC { s32 i; f32 f; };

union U_801E8854 { s32 i; f32 f; };

union U_801E87B8 { s32 i; f32 f; };

struct E_801E93B4 { u8 pad[0x20]; s32 f20; u8 pad24[4]; s32 f28; u8 pad2c[0x24]; };

union U_801E8888 { s32 i; f32 f; };

union U_801E8820 { s32 i; f32 f; };

struct Glob_801E8684 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Glob_801E86D0 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Vec_801E9400 { f32 x, y, z; };

struct Glob_801E9400 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Vec_801E945C { f32 x, y, z; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_801E9AF8 { u8 bytes[0x14]; };

struct Glob_801E915C {
    s32 count;
    f32 f4;
    f32 f8;
    s32 fC;
    s32 out;
    u32 id;
};

struct Vec3_801E915C { f32 x, y, z; };

struct Glob_801E9274 {
    s32 count;
    f32 f4;
    f32 f8;
    s32 fC;
    s32 out;
    u32 id;
};

struct Vec3_801E9274 { f32 x, y, z; };

extern "C" {
M2C_UNK TWindowCtrl__sub_8024B328(int, void *);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9580(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E95F4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9624(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9654(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9684(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E96B4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E96E4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9714(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9744(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9774(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E97A4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E97D4(s32 arg0);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void TLobby__sub_801E9804(s32 arg0);
M2C_UNK TNpcPlayer__sub_8034EE3C(int, void *);
void TLobby__sub_801E9834(s32 arg0);
M2C_UNK update_player_field__10TNpcPlayerFUsi(int, int, void *);
void TLobby__sub_801E9864(s32 arg0, s32 arg1);
M2C_UNK TNpcPlayer__sub_8034EEB4(int, void *);
void TLobby__sub_801E9970(s32 arg0);
M2C_UNK apply_to_battle_player_slot__10TNpcPlayerFUss(int, int, void *);
void TLobby__sub_801E99A0(s32 arg0, s32 arg1);
s32 TChallenge4PResult__sub_8034B498();
void TLobby__sub_801E9A50(s32 arg0);
s32 get_field_6CE8__6TLobbyFv();
s32 get_lobby_count__6TLobbyFv();
void TLobby__sub_801E9BC8(s32 arg0);
s32 is_split_screen();
M2C_UNK TLobby__sub_80070B34(int);
M2C_UNK TLobby__sub_80291DF8(int);
void TLobby__sub_801E9D94(s32 arg0);
M2C_UNK get_unit_list__6TLobbyFv();
s32 strcmp(void *, void *);
extern M2C_UNK TLobby__data_805DC4A0;
void TLobby__sub_801E9F9C(s32 arg0);
M2C_UNK TLobby__sub_80070ACC();
s32 strcmp(void *, void *);
void TLobby__sub_801E9FFC(s32 arg0);
s32 TObjPlayer__sub_801AEF80();
u32 get_player_by_client_id(int);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8560(void);
f64 get_ad_end_text_start__10TObjPlayerFv(void *, f32, f32);
extern const f64 lbl_80449CC0;
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E85B4(void);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E88BC(s32 arg0, s32 arg1);
M2C_UNK clear_all_flag3__9TMainTaskFv(M2C_UNK *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 main_task;
void TLobby__sub_801E905C(void);
M2C_UNK update_all_task_lists__9TMainTaskFv(M2C_UNK *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 main_task;
void TLobby__sub_801E9084(void);
M2C_UNK fn_801DA140(int, int, int);
M2C_UNK TLobby__sub_801F3614();
M2C_UNK TLobby__sub_8032CDEC();
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5580;
void TLobby__sub_801E9C40(void);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
void TLobby__sub_801E9EE4(void);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
void TLobby__sub_801E9EFC(void);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
void TLobby__sub_801E9F14(void);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9F2C(void);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9F50(void);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9F74(void);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8784(u8 reg, s32 val);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E871C(u8 reg, s32 val);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8750(u8 reg, u8 src);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E87EC(u8 reg, s32 val);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8854(u8 reg, s32 val);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E87B8(u8 reg, u8 src);
extern E_801E93B4 lbl_8050E208[];
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9388(u8 a0, u8 a1);
void TLobby__sub_801E93B4(u8 src, u8 dst);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8888(u8 reg, u8 src);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8820(u8 reg, u8 src);
f32 cos_table_lookup(int);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E8684(void);
f32 sin_table_lookup(int);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E86D0(void);
u32 get_indexed_offset__6TLobbyFi(void *, int);
s32 set_partner_dialogue_override(u32, int, int);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9104(u8 a0, u8 a1, void *a2);
void TCameraCtrl__sub_8006CD2C(Vec_801E9400 *, int, Vec_801E9400 *, int *);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9400(void);
void TCameraCtrl__sub_8006CD78(Vec_801E945C *, Vec_801E945C *, Vec_801E945C *);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E945C(void);
s32 create__18TChallenge4PResultFii(int, int);
s32 TChallenge4PResult__sub_8034B66C();
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9AA8(u8 arg0);
s32 TLobby__sub_801F34F8();
void TLobby__sub_8032CC24();
extern Tbl_801E9AF8 lbl_80449B18[];
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9AF8(s32 idx);
u32 get_indexed_offset__6TLobbyFi(void *, int);
void bswap_4x32__6TLobbyFPv(void *);
s32 fn_8034D3D0(u8 *, f32, s32, s32, s32, Vec3_801E915C *, s32);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E915C(void);
u32 get_indexed_offset__6TLobbyFi(void *, int);
void bswap_4x32__6TLobbyFPv(void *);
s32 fn_8034D790(u8 *, f32, s32, s32, s32, Vec3_801E9274 *);
extern RecoveredGlobal_801E8560_TLobby__data_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9274(void);
s32 fn_80077788(void);
s32 fn_80077790(void);
s32 get_drop_flag__6TLobbyFv(void);
u32 get_player_by_client_id(int);
u32 TObjPlayer__sub_801BFFA0(void *);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E9DEC(u8 out);
}

extern "C" {

int TLobby__sub_801E93E0(void* p);
int TLobby__sub_801E95B0(void* p);
int TLobby__sub_801E9CD0(void* p);
void cache_player_field__6TLobbyFv(void);
void clear_flag3__6TLobbyFv(void);
void clear_flag__6TLobbyFv(void);
void create_hunter_guild_seq__6TLobbyFv(void);
int find_player_143__6TLobbyFv(void);
void free_child__6TLobbyFv(void);
void free_static__6TLobbyFv(void);
void reset_random_enemies_mode__6TLobbyFv(void);
void set_story_select__6TLobbyFi(s32 arg0);
void update_and_apply_alloc__6TLobbyFv(void);
void update_by_screen_mode__6TLobbyFv(void);
void update_split_screen__6TLobbyFv(void);
s32 is_quest_active();
int TCameraCtrl__sub_8006CCEC(void*);
int TKeyBoardControl__sub_8000F950(void);
M2C_UNK TLobby__sub_80070AFC();
int TLobby__sub_801EA5FC(void*);
int TLobby__sub_801F3568(void*);
M2C_UNK TLobby__sub_80291DC0();
int TLobby__sub_8032CD7C(void*, void*);
M2C_UNK TMainTask__sub_801F34D0(void *);
u32 __nw__7TObjectFUl(M2C_UNK);
int clear_counter__6TLobbyFv(void);
M2C_UNK clear_flag_3__7TObjectFv(void *);
void *get_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, M2C_UNK *);
s32 is_split_screen();
int set_active_player__10TObjPlayerFi(void*);
s32 set_state__16TAdStorySelectGCFi(s32);
int update_alloc_size__6TLobbyFv(void*);
M2C_UNK update_dead_list_win__6TLobbyFv();
M2C_UNK update_screen__6TLobbyFPv();

extern void *tl_03;

void clear_flag3__6TLobbyFv(void) {
    void *self = tl_03;
    if (self != NULL) {
        clear_flag_3__7TObjectFv(self);
    }
}

extern void *tl_03;

void free_static__6TLobbyFv(void) {
    void *temp = tl_03;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

extern void *tl_04;

typedef char RecoveredGlobal_801E8560_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E8560_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E8560(void) {
    u8 temp_r31;
    temp_r31 = (u8) M2C_FIELD(&TLobby__data_80512220.value, s32 *, 4);
    if (get_player_by_client_id((int) (M2C_FIELD(&TLobby__data_80512220.value, s32 *, 0))) != 0U) {
        M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = TObjPlayer__sub_801AEF80();
    }
}

typedef char RecoveredGlobal_801E85B4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E85B4_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E85B4(void) {
    u8 temp_r31;
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0);
    M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = (s32) (lbl_80449CC0 * get_ad_end_text_start__10TObjPlayerFv((void *) (&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__data_80512220).value), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__data_80512220).value, f32 *, 4)), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__data_80512220).value, f32 *, 8))));
}

void TLobby__sub_801E8684(void) {
    u8 idx = (*(Glob_801E8684 *)&TLobby__data_80512220).f0;
    f32 v = cos_table_lookup((*(Glob_801E8684 *)&TLobby__data_80512220).f4);
    (*(s32 * *)&TLobby__data_805D5E78)[idx] = *(s32 *)&v;
}

void TLobby__sub_801E86D0(void) {
    u8 idx = (*(Glob_801E86D0 *)&TLobby__data_80512220).f0;
    f32 v = sin_table_lookup((*(Glob_801E86D0 *)&TLobby__data_80512220).f4);
    (*(s32 * *)&TLobby__data_805D5E78)[idx] = *(s32 *)&v;
}

void TLobby__sub_801E871C(u8 reg, s32 val) {
    U_801E871C b;
    U_801E871C a;
    a.i = val;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f /= a.f;
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E8750(u8 reg, u8 src) {
    U_801E8750 b;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f /= *(f32 *)(TLobby__data_805D5E78 + src * 4);
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E8784(u8 reg, s32 val) {
    U_801E8784 b;
    U_801E8784 a;
    a.i = val;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f *= a.f;
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E87B8(u8 reg, u8 src) {
    U_801E87B8 b;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f *= *(f32 *)(TLobby__data_805D5E78 + src * 4);
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E87EC(u8 reg, s32 val) {
    U_801E87EC b;
    U_801E87EC a;
    a.i = val;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f -= a.f;
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E8820(u8 reg, u8 src) {
    U_801E8820 b;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f -= *(f32 *)(TLobby__data_805D5E78 + src * 4);
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E8854(u8 reg, s32 val) {
    U_801E8854 b;
    U_801E8854 a;
    a.i = val;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f += a.f;
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E8888(u8 reg, u8 src) {
    U_801E8888 b;
    b.f = *(f32 *)(TLobby__data_805D5E78 + reg * 4);
    b.f += *(f32 *)(TLobby__data_805D5E78 + src * 4);
    *(s32 *)(TLobby__data_805D5E78 + reg * 4) = b.i;
}

void TLobby__sub_801E88BC(s32 arg0, s32 arg1) {
    M2C_FIELD((TLobby__data_805D5E78 + ((arg0 * 4) & 0x3FC)), s32 *, 0) = (s32) M2C_FIELD((TLobby__data_805D5E78 + ((arg1 * 4) & 0x3FC)), f32 *, 0);
}

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void TLobby__sub_801E905C(void) {
    clear_all_flag3__9TMainTaskFv((M2C_UNK *)(&main_task.value));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

void TLobby__sub_801E9084(void) {
    update_all_task_lists__9TMainTaskFv((M2C_UNK *)(&main_task.value));
}

void clear_flag__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        clear_flag_3__7TObjectFv(temp);
    }
}

extern void *tl_04;

void free_child__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

void TLobby__sub_801E915C(void) {
    Vec3_801E915C v;
    Glob_801E915C *g = (Glob_801E915C *)&TLobby__data_80512220;
    s32 count = g->count;
    f32 f4 = g->f4;
    f32 f8 = g->f8;
    s32 fC = g->fC;
    s32 out = g->out;
    u8 *pts;
    s32 i;
    s32 ret;
    s32 j;
    Vec3_801E915C *dst;
    pts = (u8 *)get_indexed_offset__6TLobbyFi((void *)(u16)g->id, (int)g);
    if (pts == NULL) {
        return;
    }
    for (i = 0; i < count; i++) {
        bswap_4x32__6TLobbyFPv(pts + i * 0x10);
    }
    ret = fn_8034D3D0(pts, f4, count, f8, fC, &v, 100);
    dst = (Vec3_801E915C *)&((s32 *)TLobby__data_805D5E78)[out];
    dst->x = v.x;
    dst->y = v.y;
    dst->z = v.z;
    *(s32 *)&((f32 *)TLobby__data_805D5E78)[out + 3] = ret;
    for (j = 0; j < count; j++) {
        bswap_4x32__6TLobbyFPv(pts + j * 0x10);
    }
    return;
}

void TLobby__sub_801E9274(void) {
    Vec3_801E9274 v;
    Glob_801E9274 *g = (Glob_801E9274 *)&TLobby__data_80512220;
    s32 count = g->count;
    f32 f4 = g->f4;
    f32 f8 = g->f8;
    s32 fC = g->fC;
    s32 out = g->out;
    u8 *pts;
    s32 i;
    s32 ret;
    s32 j;
    Vec3_801E9274 *dst;
    pts = (u8 *)get_indexed_offset__6TLobbyFi((void *)(u16)g->id, (int)g);
    if (pts == NULL) {
        return;
    }
    for (i = 0; i < count; i++) {
        bswap_4x32__6TLobbyFPv(pts + i * 0x10);
    }
    ret = fn_8034D790(pts, f4, count, f8, fC, &v);
    dst = (Vec3_801E9274 *)&((s32 *)TLobby__data_805D5E78)[out];
    dst->x = v.x;
    dst->y = v.y;
    dst->z = v.z;
    *(s32 *)&((f32 *)TLobby__data_805D5E78)[out + 3] = ret;
    for (j = 0; j < count; j++) {
        bswap_4x32__6TLobbyFPv(pts + j * 0x10);
    }
    return;
}

void TLobby__sub_801E9388(u8 a0, u8 a1) {
    ((s32 *)TLobby__data_805D5E78)[a1] = lbl_8050E208[((s32 *)TLobby__data_805D5E78)[a0]].f28;
}

void TLobby__sub_801E9104(u8 a0, u8 a1, void *a2) {
    s32 x = (*(s32 * *)&TLobby__data_805D5E78)[a0];
    s32 v = (*(s32 * *)&TLobby__data_805D5E78)[a1];
    u16 y = x;
    u32 r = get_indexed_offset__6TLobbyFi(a2, x);
    if (r != 0U) {
        set_partner_dialogue_override(r, v, y);
    }
}

void TLobby__sub_801E93B4(u8 src, u8 dst) {
    *(s32 *)(TLobby__data_805D5E78 + dst * 4) = lbl_8050E208[*(s32 *)(TLobby__data_805D5E78 + src * 4)].f20;
}

int TLobby__sub_801E93E0(void* p) { return TCameraCtrl__sub_8006CCEC(p); }

void TLobby__sub_801E9400(void) {
    Vec_801E9400 *p = (Vec_801E9400 *)((*(int * *)&TLobby__data_805D5E78) + (*(Glob_801E9400 *)&TLobby__data_80512220).f4);
    Vec_801E9400 v;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    TCameraCtrl__sub_8006CD2C(&v, (u16)(*(Glob_801E9400 *)&TLobby__data_80512220).f0, p, (*(int * *)&TLobby__data_805D5E78));
}

void TLobby__sub_801E945C(void) {
    Vec_801E945C a;
    Vec_801E945C b;
    Vec_801E945C *p = (Vec_801E945C *)((*(int * *)&TLobby__data_805D5E78) + ((s32 *)&TLobby__data_80512220)[0]);
    a.x = p[0].x;
    a.y = p[0].y;
    a.z = p[0].z;
    b.x = p[1].x;
    b.y = p[1].y;
    b.z = p[1].z;
    TCameraCtrl__sub_8006CD78(&a, &b, p);
}

void TLobby__sub_801E9580(s32 arg0) {
    TWindowCtrl__sub_8024B328((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

int TLobby__sub_801E95B0(void* p) { return TLobby__sub_801F3568(p); }
int find_player_143__6TLobbyFv(void) { return set_active_player__10TObjPlayerFi((void*)(143)); }

    extern int evt2_random_enemies_mode;

void TLobby__sub_801E95F4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0xB), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9624(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0xA), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9654(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (9), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9684(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (8), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E96B4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (7), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E96E4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (6), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9714(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (5), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9744(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (4), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9774(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (3), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E97A4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (2), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E97D4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (1), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9804(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9834(s32 arg0) {
    TNpcPlayer__sub_8034EE3C((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9864(s32 arg0, s32 arg1) {
    update_player_field__10TNpcPlayerFUsi((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg1 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E9970(s32 arg0) {
    TNpcPlayer__sub_8034EEB4((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void TLobby__sub_801E99A0(s32 arg0, s32 arg1) {
    apply_to_battle_player_slot__10TNpcPlayerFUss((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((s16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg1 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}

void reset_random_enemies_mode__6TLobbyFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

extern s32 tl_00;

void create_hunter_guild_seq__6TLobbyFv(void) {
    void *temp_r3;
    if ((is_quest_active() == 1) && ((temp_r3 = (void*)__nw__7TObjectFUl(0x28)) != 0U)) {
        init__22THunterGuildSeqOfflineFPvPvPv(temp_r3, tl_00, (M2C_UNK *)reset_random_enemies_mode__6TLobbyFv);
    }
}

    extern int TLobby__data_805D6CC0;
    extern int TLobby__data_805D6CC8;

void TLobby__sub_801E9A50(s32 arg0) {
    if (TChallenge4PResult__sub_8034B498() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void TLobby__sub_801E9AA8(u8 arg0) {
    s32 i;
    TChallenge4PResult__sub_8034B66C();
    i = 0;
    do {
        create__18TChallenge4PResultFii((u16)i, (*(s32 * *)&TLobby__data_805D5E78)[arg0]);
        i += 1;
    } while (i < 4);
}

void TLobby__sub_801E9AF8(s32 idx) {
    s32 tbl[5];
    s32 n;
    *(Tbl_801E9AF8 *)tbl = *lbl_80449B18;
    TLobby__sub_8032CC24();
    n = TLobby__sub_801F34F8();
    if (n >= 0 && n < 5) {
        (*(s32 * *)&TLobby__data_805D5E78)[(u8)idx] = tbl[n];
    } else {
        (*(s32 * *)&TLobby__data_805D5E78)[(u8)idx] = 2;
    }
}

void update_and_apply_alloc__6TLobbyFv(void) { update_alloc_size__6TLobbyFv((void*)0); TLobby__sub_8032CD7C((void*)(TLobby__data_805D6CC0), (void*)(TLobby__data_805D6CC8)); }

void TLobby__sub_801E9BC8(s32 arg0) {
    if (get_lobby_count__6TLobbyFv() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    if (get_field_6CE8__6TLobbyFv() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 2;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}

typedef char RecoveredGlobal_801E9C40_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9C40_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E9C40(void) {
    fn_801DA140((int) (TLobby__data_805D5580), (int) ((u8) M2C_FIELD(&(*(RecoveredGlobal_801E9C40_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801E9C40_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4)));
    TLobby__sub_801F3614();
    TLobby__sub_8032CDEC();
}

void set_story_select__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        set_state__16TAdStorySelectGCFi(0);
        return;
    case 1:
        set_state__16TAdStorySelectGCFi(1);
        return;
    default:
        set_state__16TAdStorySelectGCFi(0);
        return;
    }
}
int TLobby__sub_801E9CD0(void* p) { return TLobby__sub_801EA5FC(p); }

extern s32 TLobby__data_805D5EC4;

void cache_player_field__6TLobbyFv(void) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 0xE284);
    } else {
        var_r0 = 0;
    }
    TLobby__data_805D5EC4 = var_r0;
}

void update_by_screen_mode__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        update_screen__6TLobbyFPv();
        return;
    }
    update_dead_list_win__6TLobbyFv();
}

void update_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291DC0();
        return;
    }
    TLobby__sub_80070AFC();
}
void TLobby__sub_801E9D94(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291DF8((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80070B34((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

typedef char RecoveredGlobal_801E9EE4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9EE4_TLobby__data_80512220) == 0x20 ? 1 : -1];

void TLobby__sub_801E9DEC(u8 out) {
    u32 *p;
    s16 i;
    u8 *player;
    ((s32 *)TLobby__data_805D5E78)[out] = 0;
    p = (u32 *)0x8C007220;
    for (i = 0; i < 0xC0U; i++) {
        if (*p++ != 0) {
            ((s32 *)TLobby__data_805D5E78)[out] |= 1;
        }
    }
    if (fn_80077790() == 1) {
        ((s32 *)TLobby__data_805D5E78)[out] |= 2;
    }
    if (fn_80077788() == 1) {
        ((s32 *)TLobby__data_805D5E78)[out] |= 4;
    }
    if (get_drop_flag__6TLobbyFv() == 1) {
        ((s32 *)TLobby__data_805D5E78)[out] |= 8;
    }
    player = ((u8 *)get_player_by_client_id((int)(lbl_805D53A0)));
    if (player != NULL && TObjPlayer__sub_801BFFA0(player + 0x41C) != 0) {
        ((s32 *)TLobby__data_805D5E78)[out] |= 0x10;
    }
}

void TLobby__sub_801E9EE4(void) {
    *M2C_FIELD(&(*(RecoveredGlobal_801E9EE4_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 **, 0) = M2C_FIELD(&(*(RecoveredGlobal_801E9EE4_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
}

typedef char RecoveredGlobal_801E9EFC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9EFC_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E9EFC(void) {
    *M2C_FIELD(&(*(RecoveredGlobal_801E9EFC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s16 **, 0) = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E9EFC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
}

typedef char RecoveredGlobal_801E9F14_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F14_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E9F14(void) {
    *M2C_FIELD(&(*(RecoveredGlobal_801E9F14_TLobby__data_80512220 *)&TLobby__data_80512220).value, s8 **, 0) = (s8) M2C_FIELD(&(*(RecoveredGlobal_801E9F14_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
}

typedef char RecoveredGlobal_801E9F2C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F2C_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E9F2C(void) {
    M2C_FIELD((TLobby__data_805D5E78 + ((M2C_FIELD(&(*(RecoveredGlobal_801E9F2C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0) * 4) & 0x3FC)), s32 *, 0) = M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_801E9F2C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 **, 4), s32 *, 0);
}

typedef char RecoveredGlobal_801E9F50_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F50_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E9F50(void) {
    M2C_FIELD((TLobby__data_805D5E78 + ((M2C_FIELD(&(*(RecoveredGlobal_801E9F50_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0) * 4) & 0x3FC)), s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_801E9F50_TLobby__data_80512220 *)&TLobby__data_80512220).value, s16 **, 4), s16 *, 0);
}

typedef char RecoveredGlobal_801E9F74_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F74_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E9F74(void) {
    M2C_FIELD((TLobby__data_805D5E78 + ((M2C_FIELD(&(*(RecoveredGlobal_801E9F74_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0) * 4) & 0x3FC)), s32 *, 0) = (s32) (s8) M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_801E9F74_TLobby__data_80512220 *)&TLobby__data_80512220).value, u8 **, 4), u8 *, 0);
}

void TLobby__sub_801E9F9C(s32 arg0) {
    if (strcmp((void *)(get_unit_list__6TLobbyFv()), (void *) (&TLobby__data_805DC4A0)) == 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}
void TLobby__sub_801E9FFC(s32 arg0) {
    if (strcmp((void *)(TLobby__sub_80070ACC()), (void *) (&TLobby__data_805DC4A0)) == 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}

}
