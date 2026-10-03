#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

#include <stddef.h>
struct Stack_802BDDF8 {
    M2C_UNK sp8;
    s8 spC;
    u8 trailing_storage[0xF];
};

struct RecoveredGlobal_802BC754_lbl_80471080 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredFields_802BC754_arg0 {
    u8 unknown_0[0x4B4];
    s32 field_4B4;
    s32 field_4B8;
    s32 field_4BC;
    s32 field_4C0;
    s32 field_4C4;
    s32 field_4C8;
    s32 field_4CC;
    s32 field_4D0;
    s32 field_4D4;
    f32 field_4D8;
    f32 field_4DC;
    f32 field_4E0;
    f32 field_4E4;
    f32 field_4E8;
    s32 field_4EC;
};

struct RecoveredFields_802BC754_temp_r3 {
    u8 unknown_0[0x4];
    f32 field_4;
    u8 unknown_8[0x8];
    f32 field_10;
    f32 field_14;
    s32 field_18;
    s32 field_1C;
    s32 field_20;
    s32 field_24;
    s32 field_28;
    s32 field_2C;
};

struct RecoveredFields_802BC754_temp_r3_3 {
    f32 field_0;
    f32 field_4;
    f32 field_8;
    f32 field_C;
};

struct RecoveredFields_802BC754_temp_r3_4 {
    u8 unknown_0[0x8];
    f32 field_8;
    f32 field_C;
};

struct Stack_802BD938 {
    u8 sp8;
    u8 sp9;
    u8 pad_A[0x2];
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
};

struct RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C {
    const f32 value;
    u8 remaining[0x8];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk_802BCFD4 { s32 a; s32 b; s32 rest[7]; };

struct Obj_8004D8C8 { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct Obj_8004D92C { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct V_802BD378 { f32 x, y, z; };

struct T2_802BD378 { u8 pad0[0x60]; s32 f60; u8 pad64[0x59C - 0x64]; V_802BD378 v[1]; };

struct T1_802BD68C {
    u8 pad0[0x378];
    s32 v[0x20];
};

struct T2_802BD76C { u8 pad0[0x42C]; s32 f42C; };

struct TBoss6Type2_802BD014;
typedef void (TBoss6Type2_802BD014::*Fn_802BD014)();
struct Tb_802BD014 { s32 f0; s32 f4; s32 f8; Fn_802BD014 fn; u8 pad[0x30 - 0x18]; };
struct TBoss6Type2_802BD014 {
    u8 pad0[0x374];
    s32 a[33];
    u8 pad3F8[0x474 - 0x3F8];
    s32 f474;
};

struct Pkt_802BDD6C { u8 d[0x18]; };

extern "C" {
M2C_UNK play_sound_effect(int, void *, int, int);
s32 add_damage__11TBoss6Type2FPvi(void *, int);
extern const f32 TBoss6Type2__data_805DE40C;
void TBoss6Type2__vt60(u8 *arg0);
void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1);
s32 VecCopy__FP3VecPC3Vec(s32 a0, s32 a1);
void TBoss6Type2__sub_802BD2D0(s32 arg0, s32 arg1, s32 arg2);
void TBoss6Type2__sub_802BB5B4(void *, void *, void *);
s32 TBoss6Type2__sub_802BC23C(void *);
s32 rand(void);
extern const f32 TBoss6Type2__data_805DE468;
extern const f32 lbl_805DE4D0;
void TBoss6Type2__sub_802BDF50(u8 *arg0, u8 *arg1);
s32 update_and_send__11TBoss6Type2FPv(void *);
s32 init_packet__11TBoss6Type2FPv(void *);
s32 is_idle__11TBoss6Type1FPv(int);
void TBoss6Type2__sub_802BDF50(u8 *arg0, u8 *arg1);
void TBoss6Type2__sub_802BDDF8(u8 *arg0, s8 arg1);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
extern const RecoveredGlobal_802BC754_lbl_80471080 lbl_80471080;
extern const f32 TBoss6Type2__data_805DE410;
void TBoss6Type2__sub_802BC754(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(s32 a0, s32 a1);
M2C_UNK get_player_by_client_id(int);
s32 TBoss6Type2__sub_802B9938(void *, void *, void *);
s32 rand(void);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
f32 xyz_distance(void *, void *);
extern RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C TBoss6Type2__data_8047105C;
extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;
extern const f32 lbl_805DE414;
extern const f32 TBoss6Type2__data_805DE41C;
extern const f32 TBoss6Type2__data_805DE45C;
extern const f32 TBoss6Type2__data_805DE468;
extern const f32 lbl_805DE46C;
extern const f32 TBoss6Type2__data_805DE490;
extern const f32 lbl_805DE4C8;
extern const f32 lbl_805DE4CC;
void TBoss6Type2__sub_802BD938(u8 *arg0, u8 *arg1);
extern int lbl_804710BC[];
s32 TBoss6Type2__sub_802BD870(u32 v);
Blk_802BCFD4 *TBoss6Type2__sub_802BCFD4(Blk_802BCFD4 *d, Blk_802BCFD4 *s);
u16 obj_getArrU16_FC(void *obj, s32 i);
void TBoss6Type2__sub_802BD3CC(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out);
s32 VecCopy__FP3VecPC3Vec(s32 a0, s32 a1);
void TBoss6Type2__sub_802BD378(T2_802BD378 *arg0, s32 arg1, void *arg2, s32 *arg3);
s32 TBoss6Type2__sub_802BD68C(T1_802BD68C *arg0, s32 arg1, s32 arg2);
s32 rand(void);
extern const f32 TBoss6Type2__data_805DE468;
extern const f32 lbl_805DE4C4;
s32 TBoss6Type2__sub_802BD76C(T2_802BD76C *arg0);
}

extern "C" {

void TBoss6Type2__sub_802BD340(void);
f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);
void TBoss6Type2__vt61(void* p);
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1);
void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void copy_transform__11TBoss6Type2FPvPv(void* p, void* q);
s32 create__11TBoss6Type2Fi(s32 arg0);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);
int get_table_entry__11TBoss6Type2Fi(int a0);
void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1);
void set_screen_pos__11TBoss6Type2FPv(void *arg0);
void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2);
void update_action_state__11TBoss6Type2FPv(void *arg0);
void update_attack_target__11TBoss6Type2FPv(void *arg0);
s32 TBoss6Type2__ct(s32, s32, s32);
M2C_UNK TBoss6Type2__sub_802B9B20(void *);
M2C_UNK TBoss6Type2__sub_802BA078(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 TBoss6Type2__sub_802BAA74();
u16 TBoss6Type2__sub_802BB694(void *);
M2C_UNK TBoss6Type2__sub_802BC62C(void *);
void TBoss6Type2__sub_802BD014(void*, void*);
void TBoss6Type2__sub_802BDD6C(void *, s32, M2C_UNK *);
extern Tb_802BD014 lbl_804E00DC[];
void TBoss6Type2__sub_802BCC54(void *, int);
s32 TObjControl__ct(s32, s32);
f32 TObjPlayer__sub_80014108(void *, u32, f32);
u8 *get_attribute_entry__10TObjPlayerFPvi(u32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 get_phase__11TBoss6Type2FPv();
s32 get_phase__14TBoss6PlotFalzFv();
s32 is_active__14TBoss6PlotFalzFPv();
u16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
M2C_UNK set_action_field_0x408__11TBoss6Type2FPvs(s32, u16);
M2C_UNK set_target_nodes__11TBoss6Type2FPvPvPv(void *, u32, s32);
M2C_UNK update_segments__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);

extern M2C_UNK TBoss6Type2__data_804DF9D4[];
extern f32 lbl_805DE4B4;

void set_screen_pos__11TBoss6Type2FPv(void *arg0) {
    f32 var_f0;
    f32 var_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E0);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E4);
    } else {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4D8);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4DC);
    }
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0x2C) = var_f1;
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0x3C) = var_f1;
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0xEC) = var_f0;
}

typedef char RecoveredGlobal_802BC754_lbl_80471080_size[sizeof(RecoveredGlobal_802BC754_lbl_80471080) == 0x3C ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4B4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4B4) == 0x4B4 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4B8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4B8) == 0x4B8 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4BC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4BC) == 0x4BC ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4C0_offset[offsetof(RecoveredFields_802BC754_arg0, field_4C0) == 0x4C0 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4C4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4C4) == 0x4C4 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4C8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4C8) == 0x4C8 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4CC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4CC) == 0x4CC ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4D0_offset[offsetof(RecoveredFields_802BC754_arg0, field_4D0) == 0x4D0 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4D4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4D4) == 0x4D4 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4D8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4D8) == 0x4D8 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4DC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4DC) == 0x4DC ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4E0_offset[offsetof(RecoveredFields_802BC754_arg0, field_4E0) == 0x4E0 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4E4_offset[offsetof(RecoveredFields_802BC754_arg0, field_4E4) == 0x4E4 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4E8_offset[offsetof(RecoveredFields_802BC754_arg0, field_4E8) == 0x4E8 ? 1 : -1];
typedef char RecoveredFields_802BC754_arg0_4EC_offset[offsetof(RecoveredFields_802BC754_arg0, field_4EC) == 0x4EC ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_4_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_4) == 0x4 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_10_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_10) == 0x10 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_14_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_14) == 0x14 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_18_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_18) == 0x18 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_1C_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_1C) == 0x1C ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_20_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_20) == 0x20 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_24_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_24) == 0x24 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_28_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_28) == 0x28 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_2C_offset[offsetof(RecoveredFields_802BC754_temp_r3, field_2C) == 0x2C ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_3_0_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_0) == 0x0 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_3_4_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_4) == 0x4 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_3_8_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_8) == 0x8 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_3_C_offset[offsetof(RecoveredFields_802BC754_temp_r3_3, field_C) == 0xC ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_4_8_offset[offsetof(RecoveredFields_802BC754_temp_r3_4, field_8) == 0x8 ? 1 : -1];
typedef char RecoveredFields_802BC754_temp_r3_4_C_offset[offsetof(RecoveredFields_802BC754_temp_r3_4, field_C) == 0xC ? 1 : -1];
void TBoss6Type2__sub_802BC754(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3_2;
    u8 *temp_r3;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    temp_r3 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2C));
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B4 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_4;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B4 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B4 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B8 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_10;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B8 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4B8 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 4);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D4 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_14;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D4 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D4 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x20);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4BC = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_18;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4BC <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4BC = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 8);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C0 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_1C;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C0 <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C0 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0xC);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C4 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_20;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C4 <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C4 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x10);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C8 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_24;
    if ((s32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C8 <= 0) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4C8 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x14);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4CC = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_28;
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D0 = (s32) ((RecoveredFields_802BC754_temp_r3 *)temp_r3)->field_2C;
    temp_r0 = ((RecoveredFields_802BC754_arg0 *)arg0)->field_4CC;
    if ((temp_r0 < 0) || (temp_r0 > 0x64) || (temp_r3_2 = ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D0, ((temp_r3_2 < 0) != 0)) || (temp_r3_2 > 0x64) || ((s32) (temp_r0 + temp_r3_2) > 0x64)) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4CC = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x18);
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D0 = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x1C);
    }
    temp_r3_3 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2F));
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D8 = (f32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_0;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4D8 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4D8 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x24);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4DC = (f32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_4;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4DC <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4DC = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x28);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E8 = (f32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_8;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4E8 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E8 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x34);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4EC = (s32) ((RecoveredFields_802BC754_temp_r3_3 *)temp_r3_3)->field_C;
    if ((f32) ((RecoveredFields_802BC754_arg0 *)arg0)->field_4EC <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4EC = (s32) M2C_FIELD(&lbl_80471080.value, s32 *, 0x38);
    }
    temp_r3_4 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2E));
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E0 = (f32) ((RecoveredFields_802BC754_temp_r3_4 *)temp_r3_4)->field_8;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4E0 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E0 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x2C);
    }
    ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E4 = (f32) ((RecoveredFields_802BC754_temp_r3_4 *)temp_r3_4)->field_C;
    if (((RecoveredFields_802BC754_arg0 *)arg0)->field_4E4 <= TBoss6Type2__data_805DE410) {
        ((RecoveredFields_802BC754_arg0 *)arg0)->field_4E4 = (f32) M2C_FIELD(&lbl_80471080.value, f32 *, 0x30);
    }
}

void copy_transform__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

Blk_802BCFD4 *TBoss6Type2__sub_802BCFD4(Blk_802BCFD4 *d, Blk_802BCFD4 *s) {
    *d = *s;
    return d;
}

void TBoss6Type2__sub_802BD014(void *ov, void *vv) {
#define o ((TBoss6Type2_802BD014 *)ov)
    s32 i;
    Tb_802BD014 *e;
    Fn_802BD014 fn;
    o->a[0] = (s32)vv;
    for (i = 31; i > 0; i--) {
        o->a[i + 1] = o->a[i];
    }
    o->a[1] = o->a[0];
    e = &lbl_804E00DC[o->a[0]];
    TBoss6Type2__sub_802BCC54(o, e->f4);
    o->f474 = e->f8;
    fn = e->fn;
    if (fn) {
        (o->*fn)();
    }
#undef o
}

void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x620);
}

void TBoss6Type2__sub_802BD2D0(s32 arg0, s32 arg1, s32 arg2) {
    VecCopy__FP3VecPC3Vec((s32)((void *) (arg1)), (s32)((void *) (arg0 + 0x5FC)));
    VecCopy__FP3VecPC3Vec((s32)((void *) (arg2)), (s32)((void *) (arg0 + 0x5C0)));
}

void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x59C);
}
void TBoss6Type2__sub_802BD340(void) {  }
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    if ((arg1 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0)) {
        add_damage__11TBoss6Type2FPvi(arg0, arg1);
    }
}

void TBoss6Type2__sub_802BD378(T2_802BD378 *arg0, s32 arg1, void *arg2, s32 *arg3) {
    VecCopy__FP3VecPC3Vec((s32)(arg2), (s32)(&arg0->v[arg1 + 0xE - 0]));
    *arg3 = arg0->f60;
}

s32 get_rotation_timer__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x418); }

extern const f32 TBoss6Type2__data_805DE410;

void TBoss6Type2__sub_802BD3CC(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out) {
    s32 i;
    *a = self->f2d6;
    *b = self->f2d4;
    for (i = 0; i < 4; i++) {
        out[i] = obj_getArrU16_FC(self, i);
    }
}

f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0) {
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    u8 temp_r0;

    var_r31 = 1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && (arg1 != 0U)) {
        var_r30 = 0;
        var_r29 = 0;
        do {
            temp_r0 = *get_attribute_entry__10TObjPlayerFPvi(arg1, var_r29);
            switch ((s32) temp_r0) {
            case 1:
                var_r30 |= 1;
                break;
            case 2:
                var_r30 |= 2;
                break;
            case 3:
                var_r30 |= 4;
                break;
            case 4:
                var_r30 |= 8;
                break;
            }
            var_r29 += 1;
        } while (var_r29 < 3);
        if (!(M2C_FIELD(arg0, s32 *, 0x2E4) & var_r30)) {
            var_r31 = 0;
        }
    }
    if (var_r31 != 0) {
        return TObjPlayer__sub_80014108(arg0, arg1, farg0);
    }
    TBoss6Type2__sub_802BA078(arg0);
    TBoss6Type2__sub_802B9B20(arg0);
    return TBoss6Type2__data_805DE410;
}

void TBoss6Type2__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 35) { TBoss6Type2__sub_802BD014((void*)(p), (void*)((void*)35)); } }

void TBoss6Type2__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4FC) = (f32) TBoss6Type2__data_805DE40C;
    {
        int diff = M2C_FIELD(arg0, s32 *, 0x4F8) - M2C_FIELD(arg0, s16 *, 0x32C);
        if (diff > 0) {
            add_damage__11TBoss6Type2FPvi((void *)(arg0), (int)(diff));
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        play_sound_effect(0x68A24, arg0 + 0x38, 0, 1);
    }
}

s32 TBoss6Type2__sub_802BD68C(T1_802BD68C *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 cnt;
    if (arg2 > 0x20) {
        arg2 = 0x20;
    }
    cnt = 0;
    for (i = 0; i < arg2; i++) {
        if (arg0->v[i] == arg1) {
            cnt++;
        }
    }
    return cnt;
}

void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 0x2E4);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, u32 *, 0x2E4) = get_table_entry__11TBoss6Type2Fi((int)(arg1));
    M2C_FIELD(arg0, s32 *, 0x42C) = arg2;
    update_segments__11TBoss6Type2FPv(arg0);
    if ((temp_r31 != (u32) M2C_FIELD(arg0, u32 *, 0x2E4)) || (temp_r30 != (s32) M2C_FIELD(arg0, s32 *, 0x42C))) {
        TBoss6Type2__sub_802BC62C(arg0);
    }
    if (M2C_FIELD(arg0, void **, 0x410) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x410), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
    if (M2C_FIELD(arg0, void **, 0x414) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x414), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
}

    extern int lbl_804710BC[];

s32 TBoss6Type2__sub_802BD76C(T2_802BD76C *arg0) {
    s32 k = (s32)(lbl_805DE4C4 * (TBoss6Type2__data_805DE468 * (f32)rand())) + 1;
    s32 r = arg0->f42C + k;
    if (r > 4) {
        r -= 4;
    }
    return r;
}

s32 TBoss6Type2__sub_802BD870(u32 v) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (v == ((u32 *)&lbl_804710BC)[i]) return i;
    }
    return 0;
}

int get_table_entry__11TBoss6Type2Fi(int a0) {  return lbl_804710BC[a0]; }

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C_size[sizeof(RecoveredGlobal_802BD938_TBoss6Type2__data_8047105C) == 0xC ? 1 : -1];
void TBoss6Type2__sub_802BD938(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_802BD938, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_802BD938, sp9) == 0x1) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802BD938, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802BD938, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802BD938, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802BD938, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_802BD938, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_802BD938, sp20) == 0x18) ? 1 : -1];
    Stack_802BD938 stack;
    f32 temp_f1;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r3;
    temp_r3 = ((s32)get_player_by_client_id((int) ((s32) M2C_FIELD(arg0, u16 *, 0x466))));
    if (temp_r3 != 0) {
        VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp18)), (s32)((void *) (temp_r3 + 0x38)));
    } else {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        temp_r29 = (s32) ((lbl_805DE4C8 * -((TBoss6Type2__data_805DE468 * (f32) rand()) - lbl_805DE414)) + (f32) M2C_FIELD(arg0, s32 *, 0x60));
        VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp18)), (s32)((void *) (arg0 + 0x38)));
        stack.sp18 += TBoss6Type2__data_805DE45C * TBoss8Dragon__sub_803D64C0((int) (temp_r29));
        stack.sp20 += TBoss6Type2__data_805DE45C * TBoss8Dragon__sub_803D64DC((int) (temp_r29));
        if (xyz_distance((void *) (arg0 + 0x38), (void *) (&TBoss6Type2__data_8047105C.value)) > lbl_805DE4CC) {
            temp_r29_2 = (s32) (lbl_805DE46C * (TBoss6Type2__data_805DE468 * (f32) rand()));
            VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp18)), (s32)((void *) (&TBoss6Type2__data_8047105C.value)));
            stack.sp18 += TBoss6Type2__data_805DE45C * TBoss8Dragon__sub_803D64C0((int) (temp_r29_2));
            stack.sp20 += TBoss6Type2__data_805DE45C * TBoss8Dragon__sub_803D64DC((int) (temp_r29_2));
        }
    }
    stack.sp1C = TBoss6Type2__data_805DE410;
    VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.spC)), (s32)((void *) (&stack.sp18)));
    TBoss6Type1__sub_803D9370((void *) (&stack.spC), (void *) (arg0 + 0x38));
    stack.sp10 = TBoss6Type2__data_805DE410;
    temp_f1 = TBoss6Kakusan__sub_803D8BD8((void *) (&stack.spC));
    if (temp_f1 < TBoss6Type2__data_805DE41C) {
        if (temp_f1 <= TBoss6Type2__data_805DE490) {
            stack.sp18 = TBoss6Type2__data_805DE40C;
        } else {
            TNpcPlayer__sub_803D97B4((void *) (&stack.spC));
        }
        stack.spC *= TBoss6Type2__data_805DE41C;
        stack.sp14 *= TBoss6Type2__data_805DE41C;
        VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp18)), (s32)((void *) (&stack.spC)));
        TBoss4Zako__sub_803D8910((void *) (&stack.sp18), (void *) (arg0 + 0x38));
    }
    TBoss6Type2__sub_802B9938((void *) (&stack.sp18), (void *) (&stack.sp9), (void *) (&stack.sp8));
    M2C_FIELD(arg1, u8 *, 0) = stack.sp9;
    M2C_FIELD(arg1, u8 *, 1) = stack.sp8;
}
#pragma pop

void update_attack_target__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    u16 temp_r31;
    u16 temp_r3;
    u16 var_r30;

    var_r3 = 0x21;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_r3 = 0x1F;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    var_r31 = var_r3;
    switch (temp_r0) {
    case 0x1D:
        return;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        temp_r31 = M2C_FIELD(arg0, u16 *, 0x466);
        temp_r3 = TBoss6Type2__sub_802BB694(arg0);
        var_r30 = temp_r3;
        if ((u16) temp_r3 == 0xFFFF) {
            get_player_by_client_id(temp_r31);
            if (is_active__14TBoss6PlotFalzFPv() != 0) {
                var_r30 = temp_r31;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x466) = var_r30;
        if ((get_phase__14TBoss6PlotFalzFv() == 0) && (M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        }
        var_r31 = M2C_FIELD(arg0, s32 *, 0x374) - 1;
        break;
    }
    TBoss6Type2__sub_802BD938((u8 *)(arg0), (u8 *)(&sp8));
    TBoss6Type2__sub_802BDD6C((void *)(arg0), (s32)(var_r31), (M2C_UNK *)(&sp8));
}

void update_action_state__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r4;

    TBoss6Type2__sub_802BD938((u8 *)(arg0), (u8 *)(&sp8));
    var_r4 = 4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
        var_r4 = 5;
    }
    TBoss6Type2__sub_802BDD6C((void *)(arg0), (s32)(var_r4), (M2C_UNK *)(&sp8));
}

void TBoss6Type2__sub_802BDD6C(void *arg0, s32 arg1, M2C_UNK *arg2) {
    Pkt_802BDD6C p;
    u8 *s; s32 i;
    if (is_idle__11TBoss6Type1FPv(*(s32 *)((u8 *)arg0 + 0x3F8)) != 0) {
        init_packet__11TBoss6Type2FPv(&p);
        TBoss6Type2__sub_802BDF50((u8 *)arg0, (u8 *)&p);
        s = (u8 *)arg2; p.d[4] = arg1;
        for (i = 1; i < 4; i++) {
            p.d[i + 4] = *s++;
        }
        update_and_send__11TBoss6Type2FPv(&p);
    }
}

void TBoss6Type2__sub_802BDDF8(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_802BDDF8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802BDDF8, spC) == 0x4) ? 1 : -1];
    Stack_802BDDF8 stack;
    if (is_idle__11TBoss6Type1FPv((int) (M2C_FIELD(arg0, s32 *, 0x3F8))) != 0) {
        init_packet__11TBoss6Type2FPv((void *) (&stack.sp8));
        TBoss6Type2__sub_802BDF50((u8 *)((void *) (arg0)), (u8 *)((void *) (&stack.sp8)));
        stack.spC = arg1;
        update_and_send__11TBoss6Type2FPv((void *) (&stack.sp8));
    }
}

void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x478) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    set_target_state__11TBoss6Type2FPvii((void *)(arg0), (s32)(M2C_FIELD(arg1, s8 *, 0xA)), (s32)(M2C_FIELD(arg1, s8 *, 0xB)));
    M2C_FIELD(arg0, u16 *, 0x464) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x466) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u16 *, 0x468) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x46A) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xF);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x464) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x466) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x468) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x468) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x46A) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x46A) = 0xFFFFU;
    }
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, u16 *, 0x468));
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x414), M2C_FIELD(arg0, u16 *, 0x46A));
}

extern s32 tl_04;

void TBoss6Type2__sub_802BDF50(u8 *arg0, u8 *arg1) {
    u16 spA;
    u16 sp8;
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) (lbl_805DE4D0 * (TBoss6Type2__data_805DE468 * (f32) rand()));
    M2C_FIELD(arg1, s8 *, 9) = TBoss6Type2__sub_802BC23C(arg0);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) M2C_FIELD(arg0, s32 *, 0x428);
    M2C_FIELD(arg1, s8 *, 0xB) = (s8) M2C_FIELD(arg0, s32 *, 0x430);
    M2C_FIELD(arg1, s8 *, 0xC) = (s8) M2C_FIELD(arg0, u16 *, 0x464);
    M2C_FIELD(arg1, s8 *, 0xD) = (s8) M2C_FIELD(arg0, u16 *, 0x466);
    TBoss6Type2__sub_802BB5B4(arg0, &spA, &sp8);
    M2C_FIELD(arg1, s8 *, 0xE) = (s8) spA;
    M2C_FIELD(arg1, s8 *, 0xF) = (s8) sp8;
}

void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

s32 create__11TBoss6Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x7B4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type2__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss6Type2__vt42(void) {  }
void TBoss6Type2__vt43(void) {  }
void TBoss6Type2__vt44(void) {  }
void TBoss6Type2__vt45(void) {  }
void TBoss6Type2__vt46(void) {  }
void TBoss6Type2__vt47(void) {  }
void TBoss6Type2__vt48(void) {  }

}
