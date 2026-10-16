#include "types.h"

#include <dolphin/mtx.h>
#include <stddef.h>
#include "pso/boss/TBoss4Type2.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEnePanarmsAtkColli.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Stack_800DDFDC
{
  s32 sp8;
  f32 spC;
};

struct Stack_800DD9A0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    s32 sp14;
    f32 sp18;
};

struct RecoveredGlobal_800DD9A0_lbl_80494F4C {
    s32 value;
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

struct Sub_800DD690 { u8 b[0xC]; };

struct Obj_800DD690 { u8 pad0[0xB0]; u32 flags; u8 padb4[0xC0 - 0xB4]; f32 fc0; u8 padc4[0x394 - 0xC4]; u32 items[2]; u8 pad39c[4]; Sub_800DD690 subs[1]; };

struct Sub_800DD8AC { u8 b[0xC]; };

struct Obj_800DD8AC { u8 pad0[0xB0]; u32 flags; u8 padb4[0xC0 - 0xB4]; f32 fc0; u8 padc4[0x394 - 0xC4]; u32 items[2]; u8 pad39c[4]; Sub_800DD8AC subs[1]; };

struct Vec_800DDC30 { f32 x, y, z; };

struct Obj_800DDC30 {
    u8 pad0[0x38]; Vec_800DDC30 pos; u8 pad44[0x60 - 0x44]; s32 f60;
    u8 pad64[0xC0 - 0x64]; f32 fc0; u8 padc4[0x32C - 0xC4]; s16 f32C;
    u8 pad32e[0x388 - 0x32E]; s32 f388; s32 f38C; u8 pad390[0x3EC - 0x390];
    s32 f3EC; s32 f3F0; s32 f3F4; s32 f3F8; s32 f3FC;
};

extern "C" {
void obj_clearFlags30(void *, u32);
void set_flags_and_field_b8__14TObjEnePanarmsFPv(u8 *arg0);
void obj_clearFlags30(void *, u32);
void set_state_flags_6__14TObjEnePanarmsFPv(u8 *arg0);
void obj_clearFlags30(void *, u32);
void enter_down_state__14TObjEnePanarmsFPv(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 obj_setFlags30(void *, int);
int TObjEnePanarms__sub_800E1D94(void *);
void merge_halves__14TObjEnePanarmsFPv(u8 *arg0);
s32 spawn_particle_effect(void *, int);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void update_state_effect__14TObjEnePanarmsFPv(u8 *arg0);
s32 spawn_particle_effect(void *, int);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void update_hit_effect__14TObjEnePanarmsFPv(u8 *arg0);
extern const f32 TObjEnePanarms__data_805DA49C;
void update_wait_then_set_state__14TObjEnePanarmsFPv(u8 *arg0);
extern const f32 TObjEnePanarms__data_805DA49C;
void update_destroy_child__14TObjEnePanarmsFPv(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 obj_setFlags30(void *, int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4DC;
void set_hidden_flags__14TObjEnePanarmsFPv(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 spawn_continuous_particle_with_direction(void *, void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD7F4(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 spawn_directional_particle(void *, void *, int);
s32 spawn_continuous_particle_with_direction(void *, void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD5C8(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 obj_setFlags30(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void TObjEnePanarms__sub_800DCFE0(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 obj_setFlags30(void *, int);
void set_field_b8__14TObjEnePanarmsFs(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void TObjEnePanarms__sub_800DD488(u8 *arg0);
void obj_clearFlags30(void *, u32);
s32 obj_setFlags30(void *, int);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800E1E14(int);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void TObjEnePanarms__sub_800DD368(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 fn_80086B64(void *, void *, int, void *, void *);
extern const f32 TObjEnePanarms__data_805DA4A4;
void TObjEnePanarms__sub_800DE430(s32 arg0, s32 arg1, s32 arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect(void *, int);
f32 vec3_add_to(void *, void *);
extern const f32 TObjEnePanarms__data_805DA49C;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4D8;
void update_fall__14TObjEnePanarmsFPv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800DFB74(void *);
s32 TObjEnePanarms__sub_800DFB9C(void *);
s32 TObjEnePanarms__sub_800DFBB0(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
extern const f32 lbl_805DA498;
void update_separated_parts__14TObjEnePanarmsFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 spawn_particle_effect(void *, int);
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
void snap_to_ground__14TObjEnePanarmsFPv(Obj_800DECC4 *self);
void destroy_handles__14TObjEnePanarmsFPv(Obj_800DF1B8 *self);
u16 find_nearest_visible_player(void *, f32 *, f32);
f64 atan2_float(f32, f32);
extern const f64 TObjEnePanarms__data_8043CD20;
void TObjEnePanarms__sub_800DE124(Obj_800DE124 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void vfunc_62__14TObjEnePanarmsFv(Obj_800DE2D0 *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800DE390(Obj_800DE390 *arg0);
f64 atan2_float(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
extern const f64 TObjEnePanarms__data_8043CD20;
extern const f32 lbl_805DA4F0;
void turn_toward_target__14TObjEnePanarmsFPvi(Obj_800DE9F0 *arg0, s32 arg1);
u16 find_nearest_visible_player(void *, f32 *, f32);
f64 atan2_float(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
f32 vector_length(void *);
extern const f64 TObjEnePanarms__data_8043CD20;
extern const f32 lbl_805DA4B4;
extern const f32 lbl_805DA4F4;
u16 turn_to_nearest_player__14TObjEnePanarmsFPvii(Obj_800DEA88 *arg0, s32 arg1, s32 arg2);
void destroy_handles__14TObjEnePanarmsFPv(Obj_800DF1B8 *self);
extern Ent_800DED30 lbl_8049515C[];
void set_state__14TObjEnePanarmsFPvi(Obj_800DED30 *arg0, s32 arg1);
Obj_800DF634 *load_resource_from_descriptor(Obj_800DF634 *, s32, void *, s32, s32, s32);
s32 spawn_npc_enemy__6TLobbyFslllff(s32, s32, s32, void *, s32, void *, f32, f32);
extern S_800DF634 panarms_npc_spawn_descriptor[];
extern u8 lbl_80494F10[];
extern u32 TObjEnePanarms__entry_params_resource;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA51C;
void load_and_spawn_npc__14TObjEnePanarmsFv(void);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void obj_clearFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFs(void *, int);
extern const f32 lbl_805DA4BC;
extern const f32 lbl_805DA4D4;
void TObjEnePanarms__sub_800DDED8(u8 *arg0);
u16 find_nearest_visible_player(void *, f32 *, f32);
void set_field_b8__14TObjEnePanarmsFs(void *, int);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800E1D38(s32);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
s32 refresh_lobby_state__10TObjPlayerFv();
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 play_sound_effect(s32, void *, s32, s32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4B4;
void TObjEnePanarms__sub_800DDAD8(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 project_actor_to_ground(void *, void *, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 TObjEnePanarms__data_805DA4A4;
extern const f32 lbl_805DA4E8;
extern const f32 lbl_805DA4EC;
s32 TObjEnePanarms__sub_800DE528(void *arg0, Vec_800DE528 *arg1);
s32 project_actor_to_ground(void *, void *, int);
f32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
s32 normalize_vector(void *);
extern const f32 TObjEnePanarms__data_805DA4A0;
s32 check_ground_along_path__14TObjEnePanarmsFPvPvPvff(void *arg0, Vec_800DE6A8 *arg1, Vec_800DE6A8 *arg2, f32 step, f32 dy);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnLookAt(void *, void *);
f32 horizontal_distance_squared(void *, void *);
s32 project_actor_to_ground(void *, void *, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
f32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 TObjEnePanarms__data_805DA4A4;
extern const f32 lbl_805DA4E4;
s32 try_warp_to_position__14TObjEnePanarmsFPvPv(u8 *arg0, Vec_800DEB48 *arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 TObjEnePanarms__sub_800DE528(void *arg0, Vec_800DE528 *arg1);
s32 check_ground_along_path__14TObjEnePanarmsFPvPvPvff(void *arg0, Vec_800DE6A8 *arg1, Vec_800DE6A8 *arg2, f32 step, f32 dy);
s32 project_actor_to_ground(void *, void *, int);
f32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
s32 normalize_vector(void *);
extern const f64 TObjEnePanarms__data_8043CD20;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 TObjEnePanarms__data_805DA4A4;
extern const f32 lbl_805DA4AC;
s32 find_combine_position__14TObjEnePanarmsFPv(void *p);
u32 create_particle_emitter(void *, s32);
void set_state__14TObjEnePanarmsFPvi(Obj_800DED30 *arg0, s32 arg1);
extern s32 lbl_8043CD04[];
extern s32 lbl_8043CD0C[];
extern const f32 TObjEnePanarms__data_805DA4A4;
void update_particle_emitters__14TObjEnePanarmsFPv(Obj_800DD690 *arg0);
u32 create_particle_emitter(void *, s32);
void set_state__14TObjEnePanarmsFPvi(Obj_800DED30 *arg0, s32 arg1);
extern s32 lbl_8043CCF4[];
extern s32 lbl_8043CCFC[];
extern const f32 TObjEnePanarms__data_805DA4A4;
void update_particle_emitters_set2__14TObjEnePanarmsFPv(Obj_800DD8AC *arg0);
s32 TObjEnePanarms__sub_800DE494(void *);
s32 TObjEnePanarms__sub_800DE528(void *arg0, Vec_800DE528 *arg1);
void turn_toward_target__14TObjEnePanarmsFPvi(Obj_800DE9F0 *arg0, s32 arg1);
u16 turn_to_nearest_player__14TObjEnePanarmsFPvii(Obj_800DEA88 *arg0, s32 arg1, s32 arg2);
s32 try_warp_to_position__14TObjEnePanarmsFPvPv(u8 *arg0, Vec_800DEB48 *arg1);
void set_state__14TObjEnePanarmsFPvi(Obj_800DED30 *arg0, s32 arg1);
s32 TObjEnePanarms__sub_800DFBC4(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4B8;
extern const f32 lbl_805DA4BC;
extern const f32 lbl_805DA4C4;
extern const f32 lbl_805DA4C8;
extern const f32 lbl_805DA4CC;
extern const f32 lbl_805DA4D0;
void TObjEnePanarms__sub_800DDC30(Obj_800DDC30 *o);
s32 queue_destruction__7TObjectFv(void *);
void destroy_handles__14TObjEnePanarmsFPv(Obj_800DF1B8 *self);
u8 * __dt__9TObjEnemyFv(void *, s16);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(s32);
s32 __destroy_arr(void *, void *, int, int);
extern s32 TObjPlayer__sub_800D7C58[];
extern s32 __vt__14TObjEnePanarms[];
u8 *__dt__14TObjEnePanarmsFv(u8 *arg0, s16 arg1);
}

extern "C" {

void TObjEnePanarms__sub_800DE2B0(void* p);
void vfunc_61__14TObjEnePanarmsFv(void* p);
void TObjEnePanarms__sub_800DEEF8(void* p);
void free_data__14TObjEnePanarmsFv(void);
void init_state__14TObjEnePanarmsFPv(u8 *arg0);
void vfunc_63__14TObjEnePanarmsFv(void* p);
void try_activate__14TObjEnePanarmsFPv(void* p);
void update_spin__14TObjEnePanarmsFPv(void *arg0);
void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0);
s32 play_sound_effect(s32, void *, s32, s32);
void TLobby__sub_8001FE7C(void*, int);
int post_translate_matrix(void*);
s32 TObjEnePanarms__sub_800DFB44(s32);
int rotate_matrix_y(void*, void*);
int push_matrix(void*);
int pop_matrix(void);
typedef struct { f32 x, y, z; } Vec_800DEDC4;
s32 draw_blob_shadow(int);
s32 direction_to_rotation_xz(void *, s32 *, s32 *);
s32 rotate_matrix_z(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 rotate_matrix_x(int, int);
s32 scale_current_matrix(Vec_800DEDC4 *);
extern const f32 lbl_805DA4F8;
extern const f32 lbl_805DA4FC;
extern const f32 lbl_805DA500;
extern const f32 lbl_805DA504;
extern const f32 lbl_805DA508;
extern const f32 lbl_805DA50C;
extern const f32 lbl_805DA510;
extern const f32 lbl_805DA514;
extern const f32 lbl_805DA518;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
int check_demo_mode__10TObjPlayerFv(void*);
int clear_render_callback__8TObjFishFv(void*);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);

void update_spin__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;

    if (*(s32 *)((s8 *)arg0 + 0x3EC) & 2) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) + 0x111);
    } else {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) - 0x111);
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388) - 1;
    *(s32 *)((s8 *)arg0 + 0x388) = temp_r0;
    if (temp_r0 < 0) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)(7)));
    }
}

void enter_down_state__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    *(s32 *)((s8 *)arg0 + 0x388) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x3F0) = (s32) (*(s32 *)((s8 *)arg0 + 0x3F0) + 1);
    set_field_b8__14TObjEnePanarmsFs(arg0, 0xB);
}

void update_state_effect__14TObjEnePanarmsFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (*(s32 *)((s8 *)arg0 + 0xB0) & 0x10) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (3))));
    }
}

void TObjEnePanarms__sub_800DCFE0(u8 *arg0) {
    u8 *temp_r5;
    *(s32 *)((s8 *)arg0 + 0x3DC) = 1;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003BC31)))))), (void *)((void *) (arg0 + 0x3AC)), (s32)((int) (0)), (s32)((int) (0)));
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003BC30)))))), (void *)((void *) (arg0 + 0x3C4)), (s32)((int) (0)), (s32)((int) (0)));
    ((TObjEnePanarms *)arg0)->init((void*)0xA);
}

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(*(s32 *)((s8 *)arg0 + 0x3E4)) != 0) || (TObjEnePanarms__sub_800DFB44(*(s32 *)((s8 *)arg0 + 0x3E8)) != 0)) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)(0xA)));
        return;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388) - 1;
    *(s32 *)((s8 *)arg0 + 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)(0xC)));
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x388) == 0x13) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DA4E0;

void merge_halves__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r5;
    *(s32 *)((s8 *)arg0 + 0x3DC) = 0;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
    TObjEnePanarms__sub_800DE430((s32)((void *) (arg0)), (s32)((int) (0x2D)), (s32)((int) (0x25)));
    *(s16 *)((s8 *)arg0 + 0x32C) = (s16) (*(s16 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x3E4)) + 0x32C) + *(s16 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x3E8)) + 0x32C));
    TObjEnePanarms__sub_800E1D94(*(u8 **)((s8 *)arg0 + 0x3E4));
    TObjEnePanarms__sub_800E1D94(*(u8 **)((s8 *)arg0 + 0x3E8));
    *(s32 *)((s8 *)arg0 + 0x388) = 0x40;
}

void update_separated_parts__14TObjEnePanarmsFPv(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r0;
    temp_r4 = *(s16 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x3E4)) + 0x32C);
    *(s16 *)((s8 *)arg0 + 0x32C) = (s16) (temp_r4 + *(s16 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x3E8)) + 0x32C));
    if ((TObjEnePanarms__sub_800DFBB0((void *) (*(u8 **)((s8 *)arg0 + 0x3E4))) != 0) && (TObjEnePanarms__sub_800DFBB0((void *) (*(u8 **)((s8 *)arg0 + 0x3E8))) != 0)) {
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (TObjEnePanarms__sub_800DFB44((s32)((void *) (*(u8 **)((s8 *)arg0 + 0x3E4)))) == 0) {
        switch (TObjEnePanarms__sub_800DFB44((s32)((void *) (*(u8 **)((s8 *)arg0 + 0x3E8))))) {
        case 0:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) - 1);
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x388);
        if (temp_r0 == 0) {
            if ((TObjEnePanarms__sub_800DFB9C((void *) (*(u8 **)((s8 *)arg0 + 0x3E4))) != 0) || (TObjEnePanarms__sub_800DFB9C((void *) (*(u8 **)((s8 *)arg0 + 0x3E8))) != 0)) {
                *(s32 *)((s8 *)arg0 + 0x388) = (s32) ((f32) *(s32 *)((s8 *)arg0 + 0x388) + lbl_805DA498);
                return;
            }
            find_combine_position__14TObjEnePanarmsFPv((void *)((void *) (arg0)));
            ((TObjEnePanarms *)(*(u8 **)((s8 *)arg0 + 0x3E4)))->init_state();
            ((TObjEnePanarms *)(*(u8 **)((s8 *)arg0 + 0x3E8)))->init_state();
            return;
        }
        if (temp_r0 < 0) {
            if ((TObjEnePanarms__sub_800DFB74((void *) (*(u8 **)((s8 *)arg0 + 0x3E4))) != 0) && (TObjEnePanarms__sub_800DFB74((void *) (*(u8 **)((s8 *)arg0 + 0x3E8))) != 0)) {
                if ((((TObjEnePanarms *)(*(u8 **)((s8 *)arg0 + 0x3E4)))->get_state_flag() != 0) || (((TObjEnePanarms *)(*(u8 **)((s8 *)arg0 + 0x3E8)))->get_state_flag() != 0)) {
                    *(s32 *)((s8 *)arg0 + 0x388) = -1;
                    return;
                }
                set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xB))));
                return;
            }
            if ((s32) *(s32 *)((s8 *)arg0 + 0x388) < -0x12C) {
                TObjEnePanarms::do_action_2((void *) (*(u8 **)((s8 *)arg0 + 0x3E4)));
                TObjEnePanarms::do_action_2((void *) (*(u8 **)((s8 *)arg0 + 0x3E8)));
                *(s32 *)((s8 *)arg0 + 0x388) = 0x384;
            }
        }
        break;
        }
    }
}

void TObjEnePanarms__sub_800DD368(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    *(s32 *)((s8 *)arg0 + 0x3DC) = 0;
    *(s32 *)((s8 *)arg0 + 0x388) = 0x384;
    *(s32 *)((s8 *)arg0 + 0x3F8) = 1;
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003BC2E)))))), (void *)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    if (TObjEnePanarms__sub_800DFB44((s32)((int) (*(s32 *)((s8 *)arg0 + 0x3E4)))) == 0) {
        TObjEnePanarms__sub_800E1E14((int) (*(s32 *)((s8 *)arg0 + 0x3E4)));
    }
    if (TObjEnePanarms__sub_800DFB44((s32)((int) (*(s32 *)((s8 *)arg0 + 0x3E8)))) == 0) {
        TObjEnePanarms__sub_800E1E14((int) (*(s32 *)((s8 *)arg0 + 0x3E8)));
    }
}

void update_hit_effect__14TObjEnePanarmsFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (*(s32 *)((s8 *)arg0 + 0xB0) & 0x10) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xA))));
    }
}

void TObjEnePanarms__sub_800DD488(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    TObjEnePanarms__sub_800DE430((s32)((void *) (arg0)), (s32)((int) (0x22)), (s32)((int) (0x3C)));
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003BC2D)))))), (void *)((void *) (arg0 + 0x3AC)), (s32)((int) (0)), (s32)((int) (0)));
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003BC2C)))))), (void *)((void *) (arg0 + 0x3C4)), (s32)((int) (0)), (s32)((int) (0)));
    set_field_b8__14TObjEnePanarmsFs((void *) (arg0), (int) (0xA));
}

void update_wait_then_set_state__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (*(f32 *)((s8 *)arg0 + 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x394);
        if (temp_r3 != 0) {
            TBoss4Type2::request_destroy(temp_r3);
            *(u32 *)((s8 *)arg0 + 0x394) = 0U;
        }
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388) - 1;
    *(s32 *)((s8 *)arg0 + 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        if (!(*(s32 *)((s8 *)arg0 + 0x3EC) & 1) && ((s32) *(s32 *)((s8 *)arg0 + 0x3F0) < 4)) {
            set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (0xD))));
            return;
        }
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (3))));
    }
}

void TObjEnePanarms__sub_800DD5C8(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    spawn_directional_particle((void *) (arg0 + 0x3D0), (void *) (arg0 + 0x5C), (int) (0x109));
    temp_r6 = *(s32 *)((s8 *)arg0 + 0x60) - 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    *(s32 *)((s8 *)arg0 + 0x394) = spawn_continuous_particle_with_direction((void *) (arg0 + 0x3D0), (void *) (&buffer_14[0]), (int) (0x108), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    buffer_8[2] = cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    ((TObjEnePanarmsAtkColli *)arg0)->create(arg0 + 0x3D0, &buffer_8[0], (void *)1);
    set_field_b8__14TObjEnePanarmsFs(arg0, 9);
    *(s32 *)((s8 *)arg0 + 0x388) = 0x5A;
}

void update_particle_emitters__14TObjEnePanarmsFPv(Obj_800DD690 *arg0) {
    s32 i;
    if (arg0->fc0 >= TObjEnePanarms__data_805DA4A4) {
        for (i = 0; i < 2; i++) {
            u32 *slot = &arg0->items[i];
            if (*slot == 0) {
                *slot = create_particle_emitter(&arg0->subs[lbl_8043CD0C[i]], lbl_8043CD04[i]);
            }
        }
    }
    if (arg0->flags & 0x10) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)arg0, 8);
    }
}

void set_flags_and_field_b8__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFs(arg0, 8);
}

void update_destroy_child__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (*(f32 *)((s8 *)arg0 + 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x394);
        if (temp_r3 != 0) {
            TBoss4Type2::request_destroy(temp_r3);
            *(u32 *)((s8 *)arg0 + 0x394) = 0U;
        }
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388) - 1;
    *(s32 *)((s8 *)arg0 + 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) (arg0))), (s32)((void*)((int) (3))));
    }
}

void TObjEnePanarms__sub_800DD7F4(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    temp_r6 = *(s32 *)((s8 *)arg0 + 0x60) + 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    *(s32 *)((s8 *)arg0 + 0x394) = spawn_continuous_particle_with_direction((void *) (arg0 + 0x3B8), (void *) (&buffer_14[0]), (int) (0x105), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    buffer_8[2] = cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
    ((TObjEnePanarmsAtkColli *)arg0)->create(arg0 + 0x3B8, &buffer_8[0], NULL);
    set_field_b8__14TObjEnePanarmsFs(arg0, 7);
    *(s32 *)((s8 *)arg0 + 0x388) = 0x5A;
}

void update_particle_emitters_set2__14TObjEnePanarmsFPv(Obj_800DD8AC *arg0) {
    s32 i;
    if (arg0->fc0 >= TObjEnePanarms__data_805DA4A4) {
        for (i = 0; i < 2; i++) {
            u32 *it = &arg0->items[i];
            if (*it == 0) {
                *it = create_particle_emitter(&arg0->subs[lbl_8043CCFC[i]], lbl_8043CCF4[i]);
            }
        }
    }
    if (arg0->flags & 0x10) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)arg0, 6);
    }
}

void set_state_flags_6__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFs(arg0, 6);
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
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) - 1);
    if ((s8) lbl_805D5280 == 0) {
        lbl_805D5280 = 1;
        lbl_805D527C = *(f32 *)((s8 *)(&lbl_80494F4C.value) + 0x48);
    }
    temp_f2 = *(f32 *)((s8 *)arg0 + 0xC0);
    if ((temp_f2 >= lbl_805DA4A8) && (temp_f2 < (lbl_805DA4A8 + lbl_805D527C))) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 0x2FC));
        stack.sp18 += TObjEnePanarms__data_805DA49C;
        spawn_particle_effect((void *) (&stack.sp14), (int) (0xF0));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x388);
    if (temp_r0 <= 0x78) {
        if (temp_r0 == 0x78) {
            stack.sp8 = (lbl_805DA4AC * *(f32 *)((s8 *)arg0 + 0x38)) + (lbl_805DA4AC * *(f32 *)((s8 *)arg0 + 0x3A0));
            stack.spC = *(f32 *)((s8 *)arg0 + 0x3C);
            stack.sp10 = (lbl_805DA4AC * *(f32 *)((s8 *)arg0 + 0x40)) + (lbl_805DA4AC * *(f32 *)((s8 *)arg0 + 0x3A8));
            ((TObjPlayer *)(&stack.sp8))->spawn_ground_effect((int) (0x78));
            TObjPlayer::spawn_dead_spot_default((s32)((void *) (&stack.sp8)), (s32)((int) (6)));
        }
        if ((s32) *(s32 *)((s8 *)arg0 + 0x388) == 0x5A) {
            *(s32 *)((s8 *)arg0 + 0x3E0) = 0;
        }
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) - lbl_805DA4B0);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x388) <= 0) {
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
    *(s32 *)((s8 *)arg0 + 0x388) = 0xA4;
    refresh_lobby_state__10TObjPlayerFv();
    send_entity_set_flags__6TLobbyFPv(arg0);
    st = 5;
    if (find_nearest_visible_player(arg0, &v.x, lbl_805DA4B4) != 0xFFFF) {
        if (v.x * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x60)) + v.z * cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x60)) < TObjEnePanarms__data_805DA4A0) {
            st = 4;
        }
    }
    set_field_b8__14TObjEnePanarmsFs(arg0, st);
    play_sound_effect(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003B836), arg0 + 0x3AC, 0, 0);
    play_sound_effect(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003BB35), arg0 + 0x3C4, 0, 0);
    if (*(s32 *)((s8 *)arg0 + 0x3DC) != 0) {
        if (TObjEnePanarms__sub_800DFB44(*(s32 *)((s8 *)arg0 + 0x3E4)) == 0) {
            ((TObjEnePanarms *)(*(s32 *)((s8 *)arg0 + 0x3E4)))->reset_split();
        }
        if (TObjEnePanarms__sub_800DFB44(*(s32 *)((s8 *)arg0 + 0x3E8)) == 0) {
            ((TObjEnePanarms *)(*(s32 *)((s8 *)arg0 + 0x3E8)))->reset_split();
        }
    } else {
        if (TObjEnePanarms__sub_800DFB44(*(s32 *)((s8 *)arg0 + 0x3E4)) == 0) {
            TObjEnePanarms__sub_800E1D38(*(s32 *)((s8 *)arg0 + 0x3E4));
        }
        if (TObjEnePanarms__sub_800DFB44(*(s32 *)((s8 *)arg0 + 0x3E8)) == 0) {
            TObjEnePanarms__sub_800E1D38(*(s32 *)((s8 *)arg0 + 0x3E8));
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
struct Vec_800DEB48;
struct Obj_800DE9F0;
struct Obj_800DEA88;
void TObjEnePanarms__sub_800DDC30(Obj_800DDC30 *o) {
    f32 s;
    if (o->fc0 >= TObjEnePanarms__data_805DA4A0 && o->fc0 <= lbl_805DA4B8) {
        s32 mode = 1;
        if ((f32)o->f388 < lbl_805DA4BC) {
            mode = 0;
        }
        if (TObjEnePanarms__sub_800DFBC4(o) != 0) {
            turn_toward_target__14TObjEnePanarmsFPvi((Obj_800DE9F0 *)o, 0x100);
        } else {
            turn_to_nearest_player__14TObjEnePanarmsFPvii((Obj_800DEA88 *)o, 0x100, mode);
        }
    }
    if (o->fc0 >= 14.0f && o->fc0 <= 20.0f) {
        s = sin_table_lookup((s32)(lbl_805DA4C4 * (o->fc0 - 14.0f) / lbl_805DA4C8));
    } else {
        s = TObjEnePanarms__data_805DA4A0;
    }
    if (s > TObjEnePanarms__data_805DA4A0) {
        Vec_800DDC30 pos = o->pos;
        f32 r = lbl_805DA4CC * s;
        if (o->f38C == 1) {
            r *= lbl_805DA4D0;
        }
        pos.x += r * cos_table_lookup(o->f60);
        pos.z += -r * sin_table_lookup(o->f60);
        try_warp_to_position__14TObjEnePanarmsFPvPv((u8 *)o, (Vec_800DEB48 *)&pos);
    }
    if (TObjEnePanarms__sub_800DFBC4(o) == 0) {
        if (TObjEnePanarms__sub_800DE494(o) != 0) {
            set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)o, 1);
            return;
        }
        if (o->f3F8 == 0 && o->f32C <= o->f3F4 / 3 &&
            TObjEnePanarms__sub_800DE528(o, (Vec_800DE528 *)&o->pos) != 0) {
            set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)o, 9);
            return;
        }
    }
    if (--o->f388 > 0) {
        return;
    }
    if (TObjEnePanarms__sub_800DFBC4(o) == 0 && o->f3FC >= 3 &&
        TObjEnePanarms__sub_800DE528(o, (Vec_800DE528 *)&o->pos) != 0) {
        o->f3FC = 0;
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)o, 9);
        return;
    }
    switch (o->f38C) {
    case 0:
        o->f3EC++;
        o->f3F0 = 0;
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)o, 7);
        break;
    case 1:
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)o, 5);
        break;
    }
}
#pragma pop

void TObjEnePanarms__sub_800DDED8(u8 *arg0) {
    s16 var_r30;
    switch (*(s32 *)((s8 *)arg0 + 0x38C)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x38C) = 1;
        var_r30 = 2;
        break;
    case 1:
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        var_r30 = 1;
        break;
    default:
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x3FC) += 1;
    *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x390)) + 0x18) &= ~0x08000000;
    *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x390)) + 0x18) |= 1;
    obj_clearFlags30(arg0, 0x04040000);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (lbl_805DA4BC * (f32) ((s32) (lbl_805DA4D4 * calc_boss4_scale__10TObjPlayerFi(arg0)) + 1));
    set_field_b8__14TObjEnePanarmsFs(arg0, var_r30);
}

void update_fall__14TObjEnePanarmsFPv(u8 *arg0) {
  Stack_800DDFDC stack;
  f32 temp_f1;
  *((f32 *) (((s8 *) arg0) + 0x37C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x37C))) + lbl_805DA4D8);
  vec3_add_to((void *) (arg0 + 0x38), (void *) (arg0 + 0x378));
  if ((*((f32 *) (((s8 *) arg0) + 0x37C))) <= TObjEnePanarms__data_805DA4A0)
  {
    ;
    if ((*((f32 *) (((s8 *) arg0) + 0x3C))) <= (*((f32 *) (((s8 *) arg0) + 0x384))))
    {
      *((f32 *) (((s8 *) arg0) + 0x3C)) = *((f32 *) (((s8 *) arg0) + 0x384));
      spawn_particle_effect((void *) (arg0 + 0x38), (int) 0xF0);
      set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)((void *) arg0)), (s32)((void*)((int) 3)));
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

void set_hidden_flags__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r5;
    *(f32 *)((s8 *)arg0 + 0x378) = (f32) TObjEnePanarms__data_805DA4A0;
    *(f32 *)((s8 *)arg0 + 0x37C) = (f32) lbl_805DA4DC;
    *(f32 *)((s8 *)arg0 + 0x380) = (f32) TObjEnePanarms__data_805DA4A0;
    *(s32 *)((s8 *)arg0 + 0x3E0) = 1;
    *(s32 *)((s8 *)arg0 + 0x3DC) = 1;
    temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r5 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x18) & 0xFFFFFFFE);
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
        arg0->f60 = (s32) (TObjEnePanarms__data_8043CD20 * atan2_float(sp[0], sp[2]));
        r = 1;
    }
    if (r != 0) {
        set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)((void *)2)));
    }
}

void init_state__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *temp_r4_2;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
    snap_to_ground__14TObjEnePanarmsFPv((Obj_800DECC4 *)((void *) (arg0)));
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (lbl_805DA4E0 + *(f32 *)((s8 *)arg0 + 0x384));
    obj_setFlags30((void *) (arg0), (int) (0x04040000));
    temp_r4 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
    temp_r4_2 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x390));
    *(s32 *)((s8 *)temp_r4_2 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4_2 + 0x18) | 0x08000000);
    *(s32 *)((s8 *)arg0 + 0x3E0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3DC) = 0;
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) *(s32 *)((s8 *)arg0 + 0x478);
}

void try_activate__14TObjEnePanarmsFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(p)), (s32)((void*)((void*)1))); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms::vfunc_61() { *(u32*)((char*)this + 0x30) &= 0xfffffeff; }

void TObjEnePanarms::vfunc_62() {
    Obj_800DE2D0 *arg0 = (Obj_800DE2D0 *)this;
    switch (arg0->f374) {
    case 1:
    case 2:
        return;
    default:
        arg0->f30 &= 0xFFFFFDFF;
        play_sound_effect((s32)(((int)copy_target_state__14TObjEnePanarmsFPv((void *)(arg0), (s32)(0x4003BC34)))), (void *)(arg0->f3AC), (s32)(0), (s32)(0));
        play_sound_effect((s32)(((int)copy_target_state__14TObjEnePanarmsFPv((void *)(arg0), (s32)(0x4003BC33)))), (void *)(arg0->f3C4), (s32)(0), (s32)(0));
        break;
    }
}

void TObjEnePanarms::vfunc_63() { if (*(int*)((char*)this + 0x374) != 4) { set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(this)), (s32)((void*)((void*)4))); } }

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
            set_state__14TObjEnePanarmsFPvi((Obj_800DED30 *)((void*)(arg0)), (s32)((void*)((void *)10)));
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
            v.x += r * sin_table_lookup(a);
            v.y += TObjEnePanarms__data_805DA4A4;
            v.z += r * cos_table_lookup(a);
            if (project_actor_to_ground(arg0, &v, 0) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
#pragma pop

s32 check_ground_along_path__14TObjEnePanarmsFPvPvPvff(void *arg0, Vec_800DE6A8 *arg1, Vec_800DE6A8 *arg2, f32 step, f32 dy) {
    Vec_800DE6A8 p = *arg1;
    Vec_800DE6A8 d = *arg2;
    f32 len;
    f32 t;
    subtract_vector(&d, &p);
    len = vector_length(&d);
    if (len < step) {
        return 1;
    }
    normalize_vector(&d);
    d.x *= step;
    d.y *= step;
    d.z *= step;
    for (t = TObjEnePanarms__data_805DA4A0; t < len; ) {
        p.y += dy;
        if (project_actor_to_ground(arg0, &p, 0) == 0) {
            return 0;
        }
        t += step;
        vec3_add_to(&p, &d);
    }
    return 1;
}

#pragma push
#pragma opt_common_subs off
struct Vec_800DE528;
struct Vec_800DE6A8;
#define arg0 ((u8 *)p)
s32 find_combine_position__14TObjEnePanarmsFPv(void *p) {
    Vec_800DE7EC sp14;
    Vec_800DE7EC sp8;
    f32 dist;
    f32 t;
    VecCopy__FP3VecPC3Vec(&sp14, *(u8 **)((s8 *)arg0 + 0x3E4) + 0x38);
    vec3_add_to(&sp14, *(u8 **)((s8 *)arg0 + 0x3E8) + 0x38);
    sp14.x *= lbl_805DA4AC;
    sp14.y *= lbl_805DA4AC;
    sp14.z *= lbl_805DA4AC;
    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x38);
    subtract_vector(&sp8, &sp14);
    dist = vector_length(&sp8);
    if (dist >= TObjEnePanarms__data_805DA4A4) {
        normalize_vector(&sp8);
        sp8.x *= TObjEnePanarms__data_805DA4A4;
        sp8.y *= TObjEnePanarms__data_805DA4A4;
        sp8.z *= TObjEnePanarms__data_805DA4A4;
    }
    t = TObjEnePanarms__data_805DA4A0;
    while (t < dist) {
        sp14.y += TObjEnePanarms__data_805DA4A4;
        if (project_actor_to_ground(arg0, &sp14, 0) != 0 &&
            TObjEnePanarms__sub_800DE528(arg0, (Vec_800DE528 *) &sp14) != 0 &&
            check_ground_along_path__14TObjEnePanarmsFPvPvPvff(arg0, (Vec_800DE6A8 *) (*(u8 **)((s8 *)arg0 + 0x3E4) + 0x38), (Vec_800DE6A8 *) &sp14, TObjEnePanarms__data_805DA4A4, TObjEnePanarms__data_805DA4A4) != 0 &&
            check_ground_along_path__14TObjEnePanarmsFPvPvPvff(arg0, (Vec_800DE6A8 *) (*(u8 **)((s8 *)arg0 + 0x3E8) + 0x38), (Vec_800DE6A8 *) &sp14, TObjEnePanarms__data_805DA4A4, TObjEnePanarms__data_805DA4A4) != 0) {
            u8 *a;
            u8 *b;
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &sp14);
            a = *(u8 **)((s8 *)arg0 + 0x3E4);
            b = *(u8 **)((s8 *)arg0 + 0x3E8);
            *(s32 *)((s8 *)arg0 + 0x60) = (s32) (TObjEnePanarms__data_8043CD20 * atan2_float(
                *(f32 *)((s8 *)b + 0x38) - *(f32 *)((s8 *)a + 0x38),
                *(f32 *)((s8 *)b + 0x40) - *(f32 *)((s8 *)a + 0x40))) + 0x4000;
            return 1;
        }
        t += TObjEnePanarms__data_805DA4A4;
        vec3_add_to(&sp14, &sp8);
    }
    return 0;
}
#undef arg0
#pragma pop

void turn_toward_target__14TObjEnePanarmsFPvi(Obj_800DE9F0 *arg0, s32 arg1) {
    f32 sp[3];
    if (((TObjEnePanarms *)arg0)->find_nearest_enemy_with_flag((s32)sp, (f32)lbl_805DA4F0) == 0xFFFF) {
        if (arg0->f1C & 1) {
            arg1 *= -1;
        }
        arg0->f60 = arg0->f60 + arg1;
        return;
    }
    arg0->f60 = approach_angle_limited(arg0->f60, (s32) (TObjEnePanarms__data_8043CD20 * atan2_float(sp[0], sp[2])), arg1);
}

u16 turn_to_nearest_player__14TObjEnePanarmsFPvii(Obj_800DEA88 *arg0, s32 arg1, s32 arg2) {
    f32 sp[3];
    s32 t;
    s32 var;
    if ((t = find_nearest_visible_player(arg0, sp, lbl_805DA4B4)) != 0xFFFF) {
        if (arg2 == 0 || vector_length(sp) < lbl_805DA4F4) {
            var = 0;
        } else {
            var = -0x1800;
            if (arg0->f38C == 1) {
                var *= -1;
            }
        }
        arg0->f60 = approach_angle_limited(arg0->f60, var + (s32) (TObjEnePanarms__data_8043CD20 * atan2_float(sp[0], sp[2])), arg1);
    }
    return t;
}

#pragma push
#pragma fp_contract on
s32 try_warp_to_position__14TObjEnePanarmsFPvPv(u8 *arg0, Vec_800DEB48 *arg1) {
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
        subtract_vector(&d, arg0 + 0x38);
        if (TObjEnePanarms__data_805DA4A0 != vector_length(&d)) {
            i = 1;
            do {
                VecCopy__FP3VecPC3Vec(&p, arg0 + 0x38);
                vec3_add_to(&p, &d);
                p.y += TObjEnePanarms__data_805DA4A4;
                if (((s32 (*)(void *, void *, void *))project_actor_to_ground)(arg0, &p, &hit) != 0 && csnLookAt(arg0 + 0x38, &p) == 0) {
                    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
                    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &p);
                    *(f32 *)((s8 *)arg0 + 0x384) = p.y;
                    VecCopy__FP3VecPC3Vec(arg0 + 0x248, &hit);
                    ok = 1;
                    break;
                }
                ang = i << 12;
                if (i & 1) {
                    ang *= -1;
                }
                c = sin_table_lookup(ang);
                s = cos_table_lookup(ang);
                i++;
                x = s * d.x - c * d.z;
                d.x = x;
                d.z = c * x + s * d.z;
            } while (i < 0x10);
        }
    }
    ((TObjPlayer *)arg0)->update_collisions();
    return ok;
}
#pragma pop

void snap_to_ground__14TObjEnePanarmsFPv(Obj_800DECC4 *self) {
    Vec_800DECC4 v = self->pos;
    v.y += TObjEnePanarms__data_805DA4A4;
    if (project_actor_to_ground(self, &v, (int)self->f248) != 0) {
        self->f384 = v.y;
    }
}

void set_state__14TObjEnePanarmsFPvi(Obj_800DED30 *arg0, s32 arg1) {
    arg0->f374 = arg1;
    if (arg0->f374 < 0 || arg0->f374 >= 14) {
        return;
    }
    destroy_handles__14TObjEnePanarmsFPv((Obj_800DF1B8 *)(arg0));
    PMF_800DED30 p = lbl_8049515C[arg0->f374].fn;
    if (p) {
        (arg0->*p)();
    }
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void draw_shadow__14TObjEnePanarmsFPv(u8 *arg0) {
    Vec_800DEDC4 v;
    s32 spC;
    s32 sp8;
    f32 d;
    f32 k;
    f32 t;

    if (!(*(f32 *)((s8 *)arg0 + 0x384) > lbl_805DA4F8 + *(f32 *)((s8 *)arg0 + 0x3C))) {
        push_matrix(arg0);
        translate_matrix(0, lbl_805DA4FC * *(f32 *)((s8 *)arg0 + 0x38) + lbl_805DA500 * *(f32 *)((s8 *)arg0 + 0x3A0), lbl_805DA504 + *(f32 *)((s8 *)arg0 + 0x384), lbl_805DA4FC * *(f32 *)((s8 *)arg0 + 0x40) + lbl_805DA500 * *(f32 *)((s8 *)arg0 + 0x3A8));
        direction_to_rotation_xz(arg0 + 0x248, &spC, &sp8);
        rotate_matrix_z(0, sp8);
        rotate_matrix_y((void *) 0, *(void **)((s8 *)arg0 + 0x60));
        rotate_matrix_x(0, spC + 0x4000);
        d = *(f32 *)((s8 *)arg0 + 0x3C) - *(f32 *)((s8 *)arg0 + 0x384);
        if (d > lbl_805DA508) {
            d = lbl_805DA508;
        } else if (d < TObjEnePanarms__data_805DA4A0) {
            d = TObjEnePanarms__data_805DA4A0;
        }
        t = lbl_805DA514 - d / lbl_805DA508;
        k = lbl_805DA510 * t + lbl_805DA50C;
        v.z = lbl_805DA514;
        v.x = TObjEnePanarms__data_805DA49C * k;
        v.y = lbl_805DA518 * k;
        scale_current_matrix(&v);
        draw_blob_shadow(0);
        pop_matrix();
    }
}

#pragma pop

void TObjEnePanarms__sub_800DEEF8(void* p) { push_matrix(p); post_translate_matrix((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); TObjFish::set_global_param((s32)(*(void**)((char*)p + 0x24))); ((TObjFish *)(*(void**)((char*)p + 0x39c)))->set_draw_callback_list(); ((TObjEneRe7Berura *)p)->draw(); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x39c)); pop_matrix(); }

extern u32 TObjEnePanarms__entry_params_resource;

void destroy_handles__14TObjEnePanarmsFPv(Obj_800DF1B8 *self) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (self->handles[i] != 0) {
            TBoss4Type2::request_destroy(self->handles[i]);
            self->handles[i] = 0;
        }
    }
}

u8 *__dt__14TObjEnePanarmsFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjEnePanarms;
        TObjFish::init_state_1(*(u8 **)((s8 *)arg0 + 0x39C));
        queue_destruction__7TObjectFv(*(u8 **)((s8 *)arg0 + 0x3E4));
        queue_destruction__7TObjectFv(*(u8 **)((s8 *)arg0 + 0x3E8));
        free_collision_body_parts(arg0);
        *(s32 *)((s8 *)arg0 + 0x390) = 0;
        destroy_handles__14TObjEnePanarmsFPv((Obj_800DF1B8 *)(arg0));
        __destroy_arr((void *) ((u8 *)(arg0) + 0x400), (void *) (TObjPlayer__sub_800D7C58), (int) (0x1C), (int) (4));
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void free_data__14TObjEnePanarmsFv(void) {
    if ((u32) TObjEnePanarms__entry_params_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEnePanarms__entry_params_resource, 1);
        TObjEnePanarms__entry_params_resource = 0U;
    }
}
void load_and_spawn_npc__14TObjEnePanarmsFv(void) {
    Obj_800DF634 *o = (Obj_800DF634 *) ((TAdSinglePlyChrSelectGC *)0x440)->alloc();
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, lbl_80494F10, 0, 0, 0);
    }
    TObjEnePanarms__entry_params_resource = (u32) o;
    if (o != NULL) {
        S_800DF634 sp = panarms_npc_spawn_descriptor[0];
        sp.a = o->f430;
        spawn_npc_enemy__6TLobbyFslllff(0x23, *(s32 *)(o->f42C + 8), *(s32 *)(o->f42C + 0xC), &sp, panarms_npc_spawn_descriptor[0].a, panarms_npc_spawn_descriptor, lbl_805DA51C, TObjEnePanarms__data_805DA4A0);
        TObjEnePanarms::spawn_npc_pair();
    }
}

}
