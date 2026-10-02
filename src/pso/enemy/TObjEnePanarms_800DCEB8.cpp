#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <dolphin/mtx.h>
#include <stddef.h>

struct Stack_800DDFDC
{
  M2C_UNK sp8;
  f32 spC;
};

struct Stack_800DD9A0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    M2C_UNK sp14;
    f32 sp18;
};

struct RecoveredGlobal_800DD9A0_lbl_80494F4C {
    M2C_UNK value;
    u8 remaining[0x20C];
};

struct Vec_800DECC4 { f32 x; f32 y; f32 z; };

struct Obj_800DECC4 { u8 pad[0x38]; Vec_800DECC4 pos; u8 pad2[0x248 - 0x44]; u8 f248[0x384 - 0x248]; f32 f384; };

struct Obj_800DF1B8 { u8 pad[0x394]; u32 handles[2]; };

struct Obj_800DE124 { u8 pad0[0x60]; s32 f60; u8 pad1[0x388 - 0x64]; s32 f388; u8 pad2[0x474 - 0x38C]; s32 f474; };

struct Obj_800DE2D0 { u8 pad0[0x30]; u32 f30; u8 pad1[0x374 - 0x34]; s32 f374; u8 pad2[0x3AC - 0x378]; u8 f3AC[0x18]; u8 f3C4[4]; };

struct Obj_800DE390 { u8 pad0[0x374]; s32 f374; u8 pad1[0x3E4 - 0x378]; s32 f3E4; s32 f3E8; };

struct Obj_800DE9F0 { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x60 - 0x1E]; s32 f60; };

struct Obj_800DEA88 { u8 pad0[0x60]; s32 f60; u8 pad1[0x38C - 0x64]; s32 f38C; };

struct Obj_800DED30;
typedef void (Obj_800DED30::*PMF_800DED30)();
struct Obj_800DED30 {
    u8 pad0[0x374]; s32 f374;
    void m();
};

struct Ent_800DED30 { PMF_800DED30 fn; u32 rest[3]; };

struct Obj_800DF634 { u8 pad0[0x42C]; u8 *f42C; s32 f430; };

struct S_800DF634 { s32 a, b, c, d; };

struct Vec_800DDAD8 { f32 x, y, z; };

struct Vec_800DE528 { f32 x, y, z; };

struct Vec_800DE6A8 { f32 x, y, z; };

struct Vec_800DEB48 { f32 x, y, z; };

struct Vec_800DE7EC { f32 x, y, z; };

extern "C" {
void obj_clearFlags30(void *, u32);
void TObjEnePanarms__sub_800DD738(u8 *arg0);
void obj_clearFlags30(void *, u32);
void TObjEnePanarms__sub_800DD954(u8 *arg0);
void obj_clearFlags30(void *, u32);
void TObjEnePanarms__sub_800DCF14(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
int TObjEnePanarms__sub_800E1D94(void *);
void TObjEnePanarms__sub_800DD124(u8 *arg0);
M2C_UNK spawn_particle_effect(void *, int);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void TObjEnePanarms__sub_800DCF74(u8 *arg0);
M2C_UNK spawn_particle_effect(void *, int);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void TObjEnePanarms__sub_800DD41C(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(u32);
extern const f32 TObjEnePanarms__data_805DA49C;
void TObjEnePanarms__sub_800DD530(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(u32);
extern const f32 TObjEnePanarms__data_805DA49C;
void TObjEnePanarms__sub_800DD784(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4DC;
void TObjEnePanarms__sub_800DE0B8(u8 *arg0);
void obj_clearFlags30(void *, u32);
u8 * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *, void *, void *, void *);
s32 fn_800871A0(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD7F4(u8 *arg0);
void obj_clearFlags30(void *, u32);
u8 * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *, void *, void *, void *);
M2C_UNK fn_80086D50(void *, void *, int);
s32 fn_800871A0(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD5C8(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
s32 init__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DCFE0(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
void set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DD488(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800E1E14(int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DD368(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 fn_80086B64(void *, void *, int, void *, void *);
extern const f32 TObjEnePanarms__data_805DA4A4;
void TObjEnePanarms__sub_800DE430(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK spawn_particle_effect(void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 TObjEnePanarms__data_805DA49C;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4D8;
void TObjEnePanarms__sub_800DDFDC(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 get_state_flag__14TObjEnePanarmsFPv(void *);
s32 TObjEnePanarms__sub_800DFB74(void *);
s32 TObjEnePanarms__sub_800DFB9C(void *);
s32 TObjEnePanarms__sub_800DFBB0(void *);
M2C_UNK do_action_2__14TObjEnePanarmsFPv(void *);
M2C_UNK init_state__14TObjEnePanarmsFi(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
extern const f32 lbl_805DA498;
void TObjEnePanarms__sub_800DD1B8(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_default__10TObjPlayerFii(void *, int);
extern RecoveredGlobal_800DD9A0_lbl_80494F4C lbl_80494F4C;
extern f32 lbl_805D527C;
extern u8 lbl_805D5280;
extern const f32 TObjEnePanarms__data_805DA49C;
extern const f32 lbl_805DA4A8;
extern const f32 lbl_805DA4AC;
extern const f32 lbl_805DA4B0;
void TObjEnePanarms__sub_800DD9A0(u8 *arg0);
s32 project_actor_to_ground(void *, void *, int);
extern const f32 TObjEnePanarms__data_805DA4A4;
void TObjEnePanarms__sub_800DECC4(Obj_800DECC4 *self);
void request_destroy__11TBoss4Type2FUi(u32);
void TObjEnePanarms__sub_800DF1B8(Obj_800DF1B8 *self);
u16 find_nearest_visible_player(void *, f32 *, f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
extern const f64 TObjEnePanarms__data_8043CD20;
void TObjEnePanarms__sub_800DE124(Obj_800DE124 *arg0);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DE2D0(Obj_800DE2D0 *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800DE390(Obj_800DE390 *arg0);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjEnePanarms__sub_800DFBD0(void *, f32 *, f32);
s32 approach_angle_limited(s32, s32, s32);
extern const f64 TObjEnePanarms__data_8043CD20;
extern const f32 lbl_805DA4F0;
void TObjEnePanarms__sub_800DE9F0(Obj_800DE9F0 *arg0, s32 arg1);
u16 find_nearest_visible_player(void *, f32 *, f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f64 TObjEnePanarms__data_8043CD20;
extern const f32 lbl_805DA4B4;
extern const f32 lbl_805DA4F4;
u16 TObjEnePanarms__sub_800DEA88(Obj_800DEA88 *arg0, s32 arg1, s32 arg2);
void TObjEnePanarms__sub_800DF1B8(Obj_800DF1B8 *self);
extern Ent_800DED30 lbl_8049515C[];
void TObjEnePanarms__sub_800DED30(Obj_800DED30 *arg0, s32 arg1);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Obj_800DF634 *TLobby__sub_80020004(Obj_800DF634 *, s32, void *, s32, s32, s32);
void TObjEnePanarms__sub_800DFC18(void);
s32 spawn_npc_enemy__6TLobbyFsiiiff(s32, s32, s32, void *, s32, void *, f32, f32);
extern S_800DF634 lbl_8043CCE4[];
extern u8 lbl_80494F10[];
extern u32 TObjEnePanarms__data_805D5278;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA51C;
void TObjEnePanarms__sub_800DF634(void);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, int);
extern const f32 lbl_805DA4BC;
extern const f32 lbl_805DA4D4;
void TObjEnePanarms__sub_800DDED8(u8 *arg0);
u16 find_nearest_visible_player(void *, f32 *, f32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK TObjEnePanarms__sub_800E1D38(s32);
M2C_UNK reset_split__14TObjEnePanarmsFPv(s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4B4;
void TObjEnePanarms__sub_800DDAD8(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 project_actor_to_ground(void *, void *, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 TObjEnePanarms__data_805DA4A4;
extern const f32 lbl_805DA4E8;
extern const f32 lbl_805DA4EC;
s32 TObjEnePanarms__sub_800DE528(void *arg0, Vec_800DE528 *arg1);
s32 project_actor_to_ground(void *, void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const f32 TObjEnePanarms__data_805DA4A0;
s32 TObjEnePanarms__sub_800DE6A8(void *arg0, Vec_800DE6A8 *arg1, Vec_800DE6A8 *arg2, f32 step, f32 dy);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnLookAt(void *, void *);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
s32 project_actor_to_ground(void *, void *, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 TObjEnePanarms__data_805DA4A4;
extern const f32 lbl_805DA4E4;
s32 TObjEnePanarms__sub_800DEB48(u8 *arg0, Vec_800DEB48 *arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjEnePanarms__sub_800DE528(void *arg0, Vec_800DE528 *arg1);
s32 TObjEnePanarms__sub_800DE6A8(void *arg0, Vec_800DE6A8 *arg1, Vec_800DE6A8 *arg2, f32 step, f32 dy);
s32 project_actor_to_ground(void *, void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const f64 TObjEnePanarms__data_8043CD20;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 TObjEnePanarms__data_805DA4A4;
extern const f32 lbl_805DA4AC;
M2C_UNK TObjEnePanarms__sub_800DE7EC(void *p);
}

extern "C" {

void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);
void TObjEnePanarms__sub_800DEEF8(void* p);
void free_data__14TObjEnePanarmsFv(void);
void init_state__14TObjEnePanarmsFPv(u8 *arg0);
void set_state__14TObjEnePanarmsFPv(void* p);
void try_activate__14TObjEnePanarmsFPv(void* p);
void update_spin__14TObjEnePanarmsFPv(void *arg0);
void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
int TOHangerMachine01__sub_803D9C00(void*);
s32 TObjEnePanarms__sub_800DFB44(s32);
int TObjFish__sub_800E3074(void*);
int rotate_matrix_y(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int pop_matrix(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int check_demo_mode__10TObjPlayerFv(void*);
int clear_render_callback__8TObjFishFv(void*);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
int draw__16TObjEneRe7BeruraFPv(void*);
int set_global_param__8TObjFishFi(void*);

void update_spin__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x3EC) & 2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x111);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 0x111);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)(7)));
    }
}

void TObjEnePanarms__sub_800DCF14(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + 1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 0xB);
}

void TObjEnePanarms__sub_800DCF74(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (3))));
    }
}

void TObjEnePanarms__sub_800DCFE0(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    play_sound_effect((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC31)))))), (void *)((void *) (arg0 + 0x3AC)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    play_sound_effect((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC30)))))), (void *)((void *) (arg0 + 0x3C4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    init__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0xA));
}

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) != 0) || (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) != 0)) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)(0xA)));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)(0xC)));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x13) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DA4E0;

void TObjEnePanarms__sub_800DD124(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
    TObjEnePanarms__sub_800DE430((s32)((void *) (arg0)), (s32)((int) (0x2D)), (s32)((int) (0x25)));
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E4), s16 *, 0x32C) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E8), s16 *, 0x32C));
    TObjEnePanarms__sub_800E1D94(M2C_FIELD(arg0, u8 **, 0x3E4));
    TObjEnePanarms__sub_800E1D94(M2C_FIELD(arg0, u8 **, 0x3E8));
    M2C_FIELD(arg0, s32 *, 0x388) = 0x40;
}

void TObjEnePanarms__sub_800DD1B8(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r0;
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E4), s16 *, 0x32C);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (temp_r4 + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E8), s16 *, 0x32C));
    if ((TObjEnePanarms__sub_800DFBB0((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) && (TObjEnePanarms__sub_800DFBB0((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (TObjEnePanarms__sub_800DFB44((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x3E4)))) == 0) {
        switch (TObjEnePanarms__sub_800DFB44((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))))) {
        case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
        if (temp_r0 == 0) {
            if ((TObjEnePanarms__sub_800DFB9C((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) || (TObjEnePanarms__sub_800DFB9C((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x388) + lbl_805DA498);
                return;
            }
            TObjEnePanarms__sub_800DE7EC((void *)((void *) (arg0)));
            init_state__14TObjEnePanarmsFi((void *) (M2C_FIELD(arg0, u8 **, 0x3E4)));
            init_state__14TObjEnePanarmsFi((void *) (M2C_FIELD(arg0, u8 **, 0x3E8)));
            return;
        }
        if (temp_r0 < 0) {
            if ((TObjEnePanarms__sub_800DFB74((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) && (TObjEnePanarms__sub_800DFB74((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
                if ((get_state_flag__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) || (get_state_flag__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
                    M2C_FIELD(arg0, s32 *, 0x388) = -1;
                    return;
                }
                TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xB))));
                return;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x388) < -0x12C) {
                do_action_2__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E4)));
                do_action_2__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E8)));
                M2C_FIELD(arg0, s32 *, 0x388) = 0x384;
            }
        }
        break;
        }
    }
}

void TObjEnePanarms__sub_800DD368(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = 0x384;
    M2C_FIELD(arg0, s32 *, 0x3F8) = 1;
    play_sound_effect((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2E)))))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    if (TObjEnePanarms__sub_800DFB44((s32)((int) (M2C_FIELD(arg0, s32 *, 0x3E4)))) == 0) {
        TObjEnePanarms__sub_800E1E14((int) (M2C_FIELD(arg0, s32 *, 0x3E4)));
    }
    if (TObjEnePanarms__sub_800DFB44((s32)((int) (M2C_FIELD(arg0, s32 *, 0x3E8)))) == 0) {
        TObjEnePanarms__sub_800E1E14((int) (M2C_FIELD(arg0, s32 *, 0x3E8)));
    }
}

void TObjEnePanarms__sub_800DD41C(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xA))));
    }
}

void TObjEnePanarms__sub_800DD488(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    TObjEnePanarms__sub_800DE430((s32)((void *) (arg0)), (s32)((int) (0x22)), (s32)((int) (0x3C)));
    play_sound_effect((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2D)))))), (void *)((void *) (arg0 + 0x3AC)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    play_sound_effect((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2C)))))), (void *)((void *) (arg0 + 0x3C4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xA));
}

void TObjEnePanarms__sub_800DD530(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x394);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3EC) & 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F0) < 4)) {
            TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xD))));
            return;
        }
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (3))));
    }
}

void TObjEnePanarms__sub_800DD5C8(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    fn_80086D50((void *) (arg0 + 0x3D0), (void *) (arg0 + 0x5C), (int) (0x109));
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x60) - 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x394) = fn_800871A0((void *) (arg0 + 0x3D0), (void *) (&buffer_14[0]), (int) (0x108), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    buffer_8[2] = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    create__22TObjEnePanarmsAtkColliFPvPvPvPv(arg0, arg0 + 0x3D0, &buffer_8[0], (void *)1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 9);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x5A;
}

void TObjEnePanarms__sub_800DD738(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 8);
}

void TObjEnePanarms__sub_800DD784(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x394);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (3))));
    }
}

void TObjEnePanarms__sub_800DD7F4(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x60) + 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x394) = fn_800871A0((void *) (arg0 + 0x3B8), (void *) (&buffer_14[0]), (int) (0x105), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    buffer_8[2] = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    create__22TObjEnePanarmsAtkColliFPvPvPvPv(arg0, arg0 + 0x3B8, &buffer_8[0], NULL);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 7);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x5A;
}

void TObjEnePanarms__sub_800DD954(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 6);
}

typedef struct Stack_800DDFDC Stack_800DDFDC;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_800DD9A0_lbl_80494F4C_size[sizeof(RecoveredGlobal_800DD9A0_lbl_80494F4C) == 0x210 ? 1 : -1];
void TObjEnePanarms__sub_800DD9A0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800DD9A0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800DD9A0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800DD9A0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800DD9A0, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800DD9A0, sp18) == 0x10) ? 1 : -1];
    Stack_800DD9A0 stack;
    f32 temp_f2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
    if ((s8) lbl_805D5280 == 0) {
        lbl_805D5280 = 1;
        lbl_805D527C = M2C_FIELD(&lbl_80494F4C.value, f32 *, 0x48);
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f2 >= lbl_805DA4A8) && (temp_f2 < (lbl_805DA4A8 + lbl_805D527C))) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 0x2FC));
        stack.sp18 += TObjEnePanarms__data_805DA49C;
        spawn_particle_effect((void *) (&stack.sp14), (int) (0xF0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r0 <= 0x78) {
        if (temp_r0 == 0x78) {
            stack.sp8 = (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x38)) + (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x3A0));
            stack.spC = M2C_FIELD(arg0, f32 *, 0x3C);
            stack.sp10 = (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x40)) + (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x3A8));
            spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x78));
            spawn_dead_spot_default__10TObjPlayerFii((void *) (&stack.sp8), (int) (6));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
        }
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - lbl_805DA4B0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) <= 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800DDAD8(u8 *arg0) {
    s16 st;
    Vec_800DDAD8 v;
    M2C_FIELD(arg0, s32 *, 0x388) = 0xA4;
    refresh_lobby_state__10TObjPlayerFPv();
    send_entity_set_flags__6TLobbyFPv(arg0);
    st = 5;
    if (find_nearest_visible_player(arg0, &v.x, lbl_805DA4B4) != 0xFFFF) {
        if (v.x * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)) + v.z * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60)) < TObjEnePanarms__data_805DA4A0) {
            st = 4;
        }
    }
    set_field_b8__14TObjEnePanarmsFPvs(arg0, st);
    play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B836), arg0 + 0x3AC, 0, 0);
    play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BB35), arg0 + 0x3C4, 0, 0);
    if (M2C_FIELD(arg0, s32 *, 0x3DC) != 0) {
        if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) == 0) {
            reset_split__14TObjEnePanarmsFPv(M2C_FIELD(arg0, s32 *, 0x3E4));
        }
        if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) == 0) {
            reset_split__14TObjEnePanarmsFPv(M2C_FIELD(arg0, s32 *, 0x3E8));
        }
    } else {
        if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) == 0) {
            TObjEnePanarms__sub_800E1D38(M2C_FIELD(arg0, s32 *, 0x3E4));
        }
        if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) == 0) {
            TObjEnePanarms__sub_800E1D38(M2C_FIELD(arg0, s32 *, 0x3E8));
        }
    }
}
#pragma pop

void TObjEnePanarms__sub_800DDED8(u8 *arg0) {
    s16 var_r30;
    switch (M2C_FIELD(arg0, s32 *, 0x38C)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x38C) = 1;
        var_r30 = 2;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        var_r30 = 1;
        break;
    default:
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3FC) += 1;
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), u32 *, 0x18) &= ~0x08000000;
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), u32 *, 0x18) |= 1;
    obj_clearFlags30(arg0, 0x04040000);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (lbl_805DA4BC * (f32) ((s32) (lbl_805DA4D4 * calc_boss4_scale__10TObjPlayerFi(arg0)) + 1));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, var_r30);
}

void TObjEnePanarms__sub_800DDFDC(u8 *arg0) {
  Stack_800DDFDC stack;
  f32 temp_f1;
  *((f32 *) (((s8 *) arg0) + 0x37C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x37C))) + lbl_805DA4D8);
  TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0x378));
  if ((*((f32 *) (((s8 *) arg0) + 0x37C))) <= TObjEnePanarms__data_805DA4A0)
  {
    ;
    if ((*((f32 *) (((s8 *) arg0) + 0x3C))) <= (*((f32 *) (((s8 *) arg0) + 0x384))))
    {
      *((f32 *) (((s8 *) arg0) + 0x3C)) = *((f32 *) (((s8 *) arg0) + 0x384));
      spawn_particle_effect((void *) (arg0 + 0x38), (int) 0xF0);
      TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)((void *) arg0)), (s32)((void*)((int) 3)));
      return;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x388))) + 1);
  if ((!((*((s32 *) (((s8 *) arg0) + 0x388))) & 7)) && ((*((f32 *) (((s8 *) arg0) + 0x37C))) > TObjEnePanarms__data_805DA4A0))
  {
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
    stack.spC = TObjEnePanarms__data_805DA49C + (*((f32 *) (((s8 *) arg0) + 0x384)));
    spawn_particle_effect((void *) (&stack.sp8), (int) 0xF0);
  }
}

void TObjEnePanarms__sub_800DE0B8(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) TObjEnePanarms__data_805DA4A0;
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) lbl_805DA4DC;
    M2C_FIELD(arg0, f32 *, 0x380) = (f32) TObjEnePanarms__data_805DA4A0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 1;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
}

void TObjEnePanarms__sub_800DE124(Obj_800DE124 *arg0) {
    f32 sp[3];
    s32 r = 0;
    s32 t;
    if (--arg0->f388 < 0) {
        r = 1;
    } else if ((t = find_nearest_visible_player(arg0, sp, (f32) arg0->f474)) != 0xFFFF) {
        arg0->f60 = (s32) (TObjEnePanarms__data_8043CD20 * get_ad_end_text_start__10TObjPlayerFv(sp[0], sp[2]));
        r = 1;
    }
    if (r != 0) {
        TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)((void *)2)));
    }
}

void init_state__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *temp_r4_2;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
    TObjEnePanarms__sub_800DECC4((Obj_800DECC4 *)((void *) (arg0)));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DA4E0 + M2C_FIELD(arg0, f32 *, 0x384));
    obj_setFlags30((void *) (arg0), (int) (0x04040000));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    temp_r4_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x18) | 0x08000000);
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) M2C_FIELD(arg0, s32 *, 0x478);
}

void try_activate__14TObjEnePanarmsFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(p)), (s32)((void*)((void*)1))); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms__sub_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

void TObjEnePanarms__sub_800DE2D0(Obj_800DE2D0 *arg0) {
    switch (arg0->f374) {
    case 1:
    case 2:
        return;
    default:
        arg0->f30 &= 0xFFFFFDFF;
        play_sound_effect((M2C_UNK)(((int)copy_target_state__14TObjEnePanarmsFPvPv((void *)(arg0), (M2C_UNK)(0x4003BC34)))), (void *)(arg0->f3AC), (M2C_UNK)(0), (M2C_UNK)(0));
        play_sound_effect((M2C_UNK)(((int)copy_target_state__14TObjEnePanarmsFPvPv((void *)(arg0), (M2C_UNK)(0x4003BC33)))), (void *)(arg0->f3C4), (M2C_UNK)(0), (M2C_UNK)(0));
        break;
    }
}

void set_state__14TObjEnePanarmsFPv(void* p) { if (*(int*)((char*)p + 0x374) != 4) { TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(p)), (s32)((void*)((void*)4))); } }

s32 TObjEnePanarms__sub_800DE390(Obj_800DE390 *arg0) {
    switch (arg0->f374) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 10:
    case 11:
        return 0;
    default:
        if (TObjEnePanarms__sub_800DFB44(arg0->f3E4) != 0 || TObjEnePanarms__sub_800DFB44(arg0->f3E8) != 0) {
            TObjEnePanarms__sub_800DED30((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)((void *)10)));
            return 1;
        }
        return 0;
    }
}

void TObjEnePanarms__sub_800DE430(s32 arg0, s32 arg1, s32 arg2) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x2FC));
    position.y += TObjEnePanarms__data_805DA4A4;
    fn_80086B64((void *) (&position.x), (void *) (arg0 + 0x5C), (int) (0x106), (void *) (arg1), (void *) (arg2));
}

#pragma push
#pragma fp_contract on
s32 TObjEnePanarms__sub_800DE528(void *arg0, Vec_800DE528 *arg1) {
    Vec_800DE528 v;
    f32 r;
    s32 step;
    s32 a;
    VecCopy__FP3VecPC3Vec(&v, arg1);
    v.y += TObjEnePanarms__data_805DA4A4;
    if (project_actor_to_ground(arg0, &v, 0) == 0) {
        return 0;
    }
    for (r = TObjEnePanarms__data_805DA4A4; r <= TObjEnePanarms__data_805DA490; r += TObjEnePanarms__data_805DA4A4) {
        step = (s32)(lbl_805DA4E8 / (lbl_805DA4EC * r));
        for (a = 0; a < 0x10000; a += step) {
            VecCopy__FP3VecPC3Vec(&v, arg1);
            v.x += r * TBoss8Dragon__sub_803D64C0(a);
            v.y += TObjEnePanarms__data_805DA4A4;
            v.z += r * TBoss8Dragon__sub_803D64DC(a);
            if (project_actor_to_ground(arg0, &v, 0) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
#pragma pop

s32 TObjEnePanarms__sub_800DE6A8(void *arg0, Vec_800DE6A8 *arg1, Vec_800DE6A8 *arg2, f32 step, f32 dy) {
    Vec_800DE6A8 p = *arg1;
    Vec_800DE6A8 d = *arg2;
    f32 len;
    f32 t;
    TBoss6Type1__sub_803D9370(&d, &p);
    len = TBoss6Kakusan__sub_803D8BD8(&d);
    if (len < step) {
        return 1;
    }
    TNpcPlayer__sub_803D97B4(&d);
    d.x *= step;
    d.y *= step;
    d.z *= step;
    for (t = TObjEnePanarms__data_805DA4A0; t < len; ) {
        p.y += dy;
        if (project_actor_to_ground(arg0, &p, 0) == 0) {
            return 0;
        }
        t += step;
        TBoss4Zako__sub_803D8910(&p, &d);
    }
    return 1;
}

#pragma push
#pragma opt_common_subs off
struct Vec_800DE528;
struct Vec_800DE6A8;
#define arg0 ((u8 *)p)
M2C_UNK TObjEnePanarms__sub_800DE7EC(void *p) {
    Vec_800DE7EC sp14;
    Vec_800DE7EC sp8;
    f32 dist;
    f32 t;
    VecCopy__FP3VecPC3Vec(&sp14, M2C_FIELD(arg0, u8 **, 0x3E4) + 0x38);
    TBoss4Zako__sub_803D8910(&sp14, M2C_FIELD(arg0, u8 **, 0x3E8) + 0x38);
    sp14.x *= lbl_805DA4AC;
    sp14.y *= lbl_805DA4AC;
    sp14.z *= lbl_805DA4AC;
    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x38);
    TBoss6Type1__sub_803D9370(&sp8, &sp14);
    dist = TBoss6Kakusan__sub_803D8BD8(&sp8);
    if (dist >= TObjEnePanarms__data_805DA4A4) {
        TNpcPlayer__sub_803D97B4(&sp8);
        sp8.x *= TObjEnePanarms__data_805DA4A4;
        sp8.y *= TObjEnePanarms__data_805DA4A4;
        sp8.z *= TObjEnePanarms__data_805DA4A4;
    }
    t = TObjEnePanarms__data_805DA4A0;
    while (t < dist) {
        sp14.y += TObjEnePanarms__data_805DA4A4;
        if (project_actor_to_ground(arg0, &sp14, 0) != 0 &&
            TObjEnePanarms__sub_800DE528(arg0, (Vec_800DE528 *) &sp14) != 0 &&
            TObjEnePanarms__sub_800DE6A8(arg0, (Vec_800DE6A8 *) (M2C_FIELD(arg0, u8 **, 0x3E4) + 0x38), (Vec_800DE6A8 *) &sp14, TObjEnePanarms__data_805DA4A4, TObjEnePanarms__data_805DA4A4) != 0 &&
            TObjEnePanarms__sub_800DE6A8(arg0, (Vec_800DE6A8 *) (M2C_FIELD(arg0, u8 **, 0x3E8) + 0x38), (Vec_800DE6A8 *) &sp14, TObjEnePanarms__data_805DA4A4, TObjEnePanarms__data_805DA4A4) != 0) {
            u8 *a;
            u8 *b;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &sp14);
            a = M2C_FIELD(arg0, u8 **, 0x3E4);
            b = M2C_FIELD(arg0, u8 **, 0x3E8);
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (TObjEnePanarms__data_8043CD20 * get_ad_end_text_start__10TObjPlayerFv(
                M2C_FIELD(b, f32 *, 0x38) - M2C_FIELD(a, f32 *, 0x38),
                M2C_FIELD(b, f32 *, 0x40) - M2C_FIELD(a, f32 *, 0x40))) + 0x4000;
            return 1;
        }
        t += TObjEnePanarms__data_805DA4A4;
        TBoss4Zako__sub_803D8910(&sp14, &sp8);
    }
    return 0;
}
#undef arg0
#pragma pop

void TObjEnePanarms__sub_800DE9F0(Obj_800DE9F0 *arg0, s32 arg1) {
    f32 sp[3];
    if (TObjEnePanarms__sub_800DFBD0(arg0, sp, lbl_805DA4F0) == 0xFFFF) {
        if (arg0->f1C & 1) {
            arg1 *= -1;
        }
        arg0->f60 = arg0->f60 + arg1;
        return;
    }
    arg0->f60 = approach_angle_limited(arg0->f60, (s32) (TObjEnePanarms__data_8043CD20 * get_ad_end_text_start__10TObjPlayerFv(sp[0], sp[2])), arg1);
}

u16 TObjEnePanarms__sub_800DEA88(Obj_800DEA88 *arg0, s32 arg1, s32 arg2) {
    f32 sp[3];
    s32 t;
    s32 var;
    if ((t = find_nearest_visible_player(arg0, sp, lbl_805DA4B4)) != 0xFFFF) {
        if (arg2 == 0 || TBoss6Kakusan__sub_803D8BD8(sp) < lbl_805DA4F4) {
            var = 0;
        } else {
            var = -0x1800;
            if (arg0->f38C == 1) {
                var *= -1;
            }
        }
        arg0->f60 = approach_angle_limited(arg0->f60, var + (s32) (TObjEnePanarms__data_8043CD20 * get_ad_end_text_start__10TObjPlayerFv(sp[0], sp[2])), arg1);
    }
    return t;
}

#pragma push
#pragma fp_contract on
s32 TObjEnePanarms__sub_800DEB48(u8 *arg0, Vec_800DEB48 *arg1) {
    s32 ok;
    s32 i;
    s32 ang;
    f32 c;
    f32 s;
    f32 x;
    Vec_800DEB48 d;
    Vec_800DEB48 p;
    Vec_800DEB48 hit;
    ok = 0;
    if (!(horizontal_distance_squared(arg0 + 0x38, arg0 + 0x50) > lbl_805DA4E4)) {
        VecCopy__FP3VecPC3Vec(&d, arg1);
        TBoss6Type1__sub_803D9370(&d, arg0 + 0x38);
        if (TObjEnePanarms__data_805DA4A0 != TBoss6Kakusan__sub_803D8BD8(&d)) {
            i = 1;
            do {
                VecCopy__FP3VecPC3Vec(&p, arg0 + 0x38);
                TBoss4Zako__sub_803D8910(&p, &d);
                p.y += TObjEnePanarms__data_805DA4A4;
                if (((s32 (*)(void *, void *, void *))project_actor_to_ground)(arg0, &p, &hit) != 0 && csnLookAt(arg0 + 0x38, &p) == 0) {
                    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
                    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &p);
                    M2C_FIELD(arg0, f32 *, 0x384) = p.y;
                    VecCopy__FP3VecPC3Vec(arg0 + 0x248, &hit);
                    ok = 1;
                    break;
                }
                ang = i << 12;
                if (i & 1) {
                    ang *= -1;
                }
                c = TBoss8Dragon__sub_803D64C0(ang);
                s = TBoss8Dragon__sub_803D64DC(ang);
                i++;
                x = s * d.x - c * d.z;
                d.x = x;
                d.z = c * x + s * d.z;
            } while (i < 0x10);
        }
    }
    update_collisions__10TObjPlayerFPv(arg0);
    return ok;
}
#pragma pop

void TObjEnePanarms__sub_800DECC4(Obj_800DECC4 *self) {
    Vec_800DECC4 v = self->pos;
    v.y += TObjEnePanarms__data_805DA4A4;
    if (project_actor_to_ground(self, &v, (int)self->f248) != 0) {
        self->f384 = v.y;
    }
}

void TObjEnePanarms__sub_800DED30(Obj_800DED30 *arg0, s32 arg1) {
    arg0->f374 = arg1;
    if (arg0->f374 < 0 || arg0->f374 >= 14) {
        return;
    }
    TObjEnePanarms__sub_800DF1B8((Obj_800DF1B8 *)(arg0));
    PMF_800DED30 p = lbl_8049515C[arg0->f374].fn;
    if (p) {
        (arg0->*p)();
    }
}

void TObjEnePanarms__sub_800DEEF8(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x39c)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x39c)); pop_matrix(); }

extern u32 TObjEnePanarms__data_805D5278;

void TObjEnePanarms__sub_800DF1B8(Obj_800DF1B8 *self) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (self->handles[i] != 0) {
            request_destroy__11TBoss4Type2FUi(self->handles[i]);
            self->handles[i] = 0;
        }
    }
}

void free_data__14TObjEnePanarmsFv(void) {
    if ((u32) TObjEnePanarms__data_805D5278 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEnePanarms__data_805D5278, 1);
        TObjEnePanarms__data_805D5278 = 0U;
    }
}
void TObjEnePanarms__sub_800DF634(void) {
    Obj_800DF634 *o = (Obj_800DF634 *) alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != NULL) {
        o = TLobby__sub_80020004(o, 1, lbl_80494F10, 0, 0, 0);
    }
    TObjEnePanarms__data_805D5278 = (u32) o;
    if (o != NULL) {
        S_800DF634 sp = lbl_8043CCE4[0];
        sp.a = o->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x23, *(s32 *)(o->f42C + 8), *(s32 *)(o->f42C + 0xC), &sp, lbl_8043CCE4[0].a, lbl_8043CCE4, lbl_805DA51C, TObjEnePanarms__data_805DA4A0);
        TObjEnePanarms__sub_800DFC18();
    }
}

}
