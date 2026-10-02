#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8032EAE4
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct Stack_8032FE50 {
    s32 sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
};

struct RecoveredGlobal_803300C8_lbl_80477404 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803300C8_lbl_80477428 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_803300C8_lbl_804EDD94 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_8032FF24_lbl_804EDD94 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredFields_8032F174_arg0
{
  u8 unknown_0[0x3C];
  f32 field_3C;
  u8 unknown_40[0x340];
  s32 field_380;
  u8 unknown_384[0x84];
  u16 field_408;
};

#include "pso/boss/TBoss6Type2.h"
union MemberActionStorage_803301B8 { s32 words[3]; void (TBoss6Type2::*action)(); };

struct RecoveredGlobal_803301B8_lbl_804EF028 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct T_8032E748 { u8 pad[0x380]; s32 phase; };

struct T_8032EA10 { u8 pad[0x43C]; s32 arr[4]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct In_80330178 { s32 w[7]; };

struct S_80330178 { s32 a; s32 b; In_80330178 c; };

struct T_8032F2C4 { u8 pad[0x3B8]; f32 v[2]; };

struct V3_8032E7B4 { s32 x; s32 y; s32 z; };

struct O_8032E7B4 { u8 pad[0x38]; V3_8032E7B4 pos; u8 pad2[0x43C - 0x44]; u32 arr[4]; };

struct E_8032E7B4 { s32 a; s32 b; };

struct V3_8032F304 { f32 x; f32 y; f32 z; };

struct O_8032F304 { u8 pad[0x414]; s32 n; V3_8032F304 v[4]; s32 pad2; u8 mine[1]; };

struct V3_8032F360 { f32 x; f32 y; f32 z; };

struct O_8032F360 { u8 pad[0x410]; s32 z; s32 n; V3_8032F360 v[3]; };

struct V3_8032FB84 { f32 x; f32 y; f32 z; };

struct O_8032FB84 { u8 pad[0x38]; V3_8032FB84 pos; u8 pad2[0x60 - 0x44]; s32 f60; u8 pad3[0x378 - 0x64]; void *p378; u8 pad4[0x384 - 0x37C]; s32 f384; };

struct V3_8032E834 { f32 x; f32 y; f32 z; };

struct E_8032E834 { s32 a; s32 b; };

struct O_8032E834 { u8 pad[0x38]; V3_8032E834 pos; u8 pad2[0x43C - 0x44]; u32 h[4]; V3_8032E834 v[4]; };

struct V3_8032F5FC { f32 x; f32 y; f32 z; };

struct O_8032F5FC { u8 pad[0x38]; V3_8032F5FC pos; u8 pad2[0x5C - 0x44]; s32 f5c; s32 f60; u8 pad3[0x378 - 0x64]; s32 f378; u8 pad4[0x3C4 - 0x37C]; f32 f3c4; };

struct Vec_8032EF34 { f32 x, y, z; };

struct Ent_8032FCA4 { s16 f0; s16 v[5]; };

struct Obj_8032FCA4 { u8 pad[0x31C]; Ent_8032FCA4 *ent; u8 pad2[0x394 - 0x320]; u8 local[0x20]; s16 max; s16 min; };

struct T_8032E748;
struct O_8032E7B4;
struct Obj_8032E8DC { u8 pad[0x38]; u8 sw[0x340]; s32 f378; u8 pad2[0x3C8 - 0x37C]; s32 f3C8; };

struct V3_8032EBB4 { f32 x; f32 y; f32 z; };

struct O_8032EBB4 { u8 pad[0x38]; V3_8032EBB4 pos; u8 pad2[0x378 - 0x44]; void *p378; };

struct V3_8032F034 { f32 x; f32 y; f32 z; };

struct O_8032F034 {
    u8 pad[0x60]; s32 f60;
    u8 pad2[0x3B8 - 0x64]; f32 f3b8;
    u8 pad3[0x408 - 0x3BC]; u16 f408;
    u8 pad4[0x44C - 0x40A]; V3_8032F034 home;
};

typedef struct Vec_8032ECE0 { f32 x; f32 y; f32 z; } Vec_8032ECE0;

typedef struct Vec_8032F690 { f32 x; f32 y; f32 z; } Vec_8032F690;

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
f32 TBoss4Zako__sub_803D8910(void *, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, int);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805DF7F0;
extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7F8;
extern const f32 lbl_805DF7FC;
void TBoss6Type2__sub_8032EAE4(u8 *arg0);
void TBoss6Type2__sub_8032F5C4(void *arg0);
void update_segment_angles__11TBoss6Type2FPv(void *arg0);
M2C_UNK apply_damage__11TBoss6Type2FPvi(s32, s32);
void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0);
void sync_hp__11TBoss6Type2FPv(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803E4A94(s32, s32 *, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805DF7FC;
void TObjFish__sub_8032FE50(void *arg0);
s32 TObjFish__sub_8001ED9C(int, int);
extern RecoveredGlobal_803300C8_lbl_80477404 lbl_80477404;
extern RecoveredGlobal_803300C8_lbl_80477428 lbl_80477428;
extern RecoveredGlobal_803300C8_lbl_804EDD94 lbl_804EDD94;
void TBoss6Type2__sub_803300C8(u8 *arg0);
void copy_state__11TBoss6Type2FPvPv(void* p, void* q);
s32 TObjFish__sub_8001ED9C(int, int);
extern RecoveredGlobal_803300C8_lbl_804EDD94 lbl_804EDD94;
extern const f32 lbl_805DF7FC;
void TBoss6Type2__sub_8032FF24(u8 *arg0, s32 arg1);
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF81C;
void TBoss6Type2__sub_8032FD78(void *arg0);
s32 request_destroy__11TBoss4Type2FUi(int);
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1);
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1);
void update_all_parts__11TBoss6Type2FPv(s32 arg0);
extern const f32 lbl_805DF818;
s32 TBoss6Type2__sub_8032F174(u8 *arg0);
void TBoss6Type2__sub_8032FF24(u8 *arg0, s32 arg1);
extern RecoveredGlobal_803301B8_lbl_804EF028 lbl_804EF028;
void TBoss6Type2__sub_803301B8(u8 *arg0, s32 arg1);
s32 TBoss6Type2__sub_8032E748(T_8032E748 *self);
void TBoss6Type2__sub_8032EA10(T_8032EA10 *self);
int TBoss6Type2__sub_80330178(s32 _w0, s32 _w1);
extern void *lbl_804EDDE4[];
void TBoss6Type2__sub_8032F3E0(s32 i, void *pts, s32 n);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);
extern char lbl_80477450[];
void TBoss6Type2__sub_8032F2C4(T_8032F2C4 *self);
u32 create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
extern E_8032E7B4 lbl_804773BC[];
void TBoss6Type2__sub_8032E7B4(O_8032E7B4 *arg0, s32 arg1);
void TBoss6MagMine__sub_80369598(void *, void *);
void TBoss6Type2__sub_8032F304(O_8032F304 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type2__sub_803301B8(u8 *arg0, s32 arg1);
void TBoss6Type2__sub_8032F360(O_8032F360 *arg0, V3_8032F360 *arg1, s32 arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type2__sub_802BD378(void *, s32, void *, void *);
extern const f32 lbl_805DF848;
s32 TBoss6Type2__sub_8032FB84(O_8032FB84 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
extern E_8032E7B4 lbl_804773BC[];
void TBoss6Type2__sub_8032E834(O_8032E834 *arg0);
s32 angle_difference_abs(s32, s32);
s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1);
s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 get_state__11TBoss6Type2FPv(int);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
f32 TBoss4Zako__sub_803D8910(void *, int);
extern const f32 lbl_805DF83C;
void TBoss6Type2__sub_8032F5FC(O_8032F5FC *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TBoss5GryphonLightningWing__sub_80324CEC(f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f64 lbl_80477458[];
extern const f32 lbl_805DF7F8;
extern const f32 lbl_805DF808;
extern const f32 lbl_805DF80C;
s32 TBoss6Type2__sub_8032EF34(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3);
void copy_entry__6TLobbyFPvPv(void *, void *);
void update_segment_angles__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_8032FCA4(Obj_8032FCA4 *arg0);
void spawn_particle_effect_with_flags(void *, s32, s32);
s32 get_state__11TBoss6Type2FPv(int);
s32 is_active__11TBoss6Type2FPv(int);
s32 TBoss6Type2__sub_8032E748(T_8032E748 *self);
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1);
void TBoss6Type2__sub_8032E7B4(O_8032E7B4 *arg0, s32 arg1);
void TBoss6Type2__sub_8032E8DC(Obj_8032E8DC *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss6Type2__sub_802BD2D0(void *, void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, int);
f32 TNpcPlayer__sub_803D97B4(void *);
void TBoss6Type2__sub_8032EBB4(O_8032EBB4 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
u8 *get_player_by_client_id(s32);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
f32 xyz_distance(void *, void *);
extern const f64 lbl_80477458[];
s32 TBoss6Type2__sub_8032F034(O_8032F034 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void copy_pos_59c__11TBoss6Type2Fii(void *, void *);
f32 TBoss4Zako__sub_803D8910(void *, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, int);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7F8;
extern const f32 lbl_805DF800;
void TBoss6Type2__sub_8032ECE0(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 approach_angle_limited(s32, s32, s32);
s32 project_actor_to_ground(void *, void *, s32);
u8 *get_player_by_client_id(s32);
s32 get_state__11TBoss6Type2FPv(int);
s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
s32 TBoss6Type2__sub_8032EF34(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
f32 TBoss6Type1__sub_803D9370(void *, int);
extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF800;
extern const f32 lbl_805DF840;
extern const f32 lbl_805DF844;
void TBoss6Type2__sub_8032F690(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_8032E708(void* p, s32 v);
s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v);
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v);
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2);
void update_rotation_ramp__11TBoss6Type2FPv(void *arg0);
M2C_UNK TBoss6Type2__sub_8032F418(void *);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
s32 TLobby__sub_800C6C10();
f32 get_random_float__8TObjFishFv(f32);
s32 get_rotation_timer__11TBoss6Type2FPv(u32);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; update_segment_angles__11TBoss6Type2FPv((void *)(p)); }
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }

s32 TBoss6Type2__sub_8032E748(T_8032E748 *self) {
    switch (self->phase) {
    case 4:
    case 5:
        return 0;
    }
    return 1;
}

#pragma push
#pragma opt_common_subs off
void TBoss6Type2__sub_8032E770(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0x43C);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0x43C) = 0U;
    }
}
#pragma pop

void TBoss6Type2__sub_8032E7B4(O_8032E7B4 *arg0, s32 arg1) {
    if (arg0->arr[arg1] == 0) {
        V3_8032E7B4 v = arg0->pos;
        arg0->arr[arg1] = create_particle_emitter(&v, lbl_804773BC[arg1].a);
        if (arg0->arr[arg1] != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)arg0->arr[arg1], 0x40);
        }
    }
}

void TBoss6Type2__sub_8032E834(O_8032E834 *arg0) {
    s32 i;
    E_8032E834 *e = ((E_8032E834 *)&lbl_804773BC);
    for (i = 0; i < 4; i++) {
        V3_8032E834 p = arg0->pos;
        E_8032E834 *ep = &e[i];
        if (arg0->h[i] != 0) {
            if (ep->b >= 0) {
                VecCopy__FP3VecPC3Vec(&p, &arg0->v[ep->b]);
            }
            copy_pos__11TNowLoadingFPvPv(arg0->h[i], &p);
        }
    }
}

void TBoss6Type2__sub_8032E8DC(Obj_8032E8DC *arg0) {
    switch (get_state__11TBoss6Type2FPv(arg0->f378)) {
    case 14:
    case 24:
    case 25:
    case 26:
        if (TBoss6Type2__sub_8032E748((T_8032E748 *)arg0) != 0) {
            TBoss6Type2__sub_8032E7B4((O_8032E7B4 *)arg0, 1);
        } else {
            TBoss6Type2__sub_8032E770((s32)arg0, 1);
        }
        TBoss6Type2__sub_8032E770((s32)arg0, 2);
        break;
    case 5:
    case 9:
    case 10:
    case 11:
        TBoss6Type2__sub_8032E770((s32)arg0, 1);
        TBoss6Type2__sub_8032E7B4((O_8032E7B4 *)arg0, 2);
        break;
    default:
        TBoss6Type2__sub_8032E770((s32)arg0, 1);
        TBoss6Type2__sub_8032E770((s32)arg0, 2);
        break;
    }
    if (!(arg0->f3C8 & 0x1F) && is_active__11TBoss6Type2FPv(arg0->f378) != 0) {
        spawn_particle_effect_with_flags(arg0->sw, 0x224, 0x2040);
    }
}

void update_all_parts__11TBoss6Type2FPv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        TBoss6Type2__sub_8032E770(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

void TBoss6Type2__sub_8032EA10(T_8032EA10 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

s32 TBoss6Type2__sub_8032EA34(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;
    TBoss6Type2__sub_8032EAB8(arg0, arg3);
    if (angle_difference_abs(arg2, arg1) <= arg3) {
        return arg2;
    }
    t = arg1 + TBoss6Type2__sub_8032EAB8(arg0, arg3);
    if (angle_difference_abs(arg2, t) <= arg3) {
        return arg2;
    }
    return t;
}

s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0) {
        return arg1;
    }
    return -arg1;
}

f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0) {
        return -farg0;
    }
    return farg0;
}

extern const f32 lbl_805DF7F4;

typedef struct Stack_8032EAE4 Stack_8032EAE4;
void TBoss6Type2__sub_8032EAE4(u8 *arg0) {
  Stack_8032EAE4 stack;
  f32 temp_f1;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0x37C)))) != 0U)
  {
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (int) ((*((u32 *) (((s8 *) arg0) + 0x37C))) + 0x38));
    temp_f1 = TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8));
    if (!(temp_f1 >= lbl_805DF7F0))
    {
      if (temp_f1 <= lbl_805DF7F8)
      {
        stack.sp8 = apply_direction_sign__11TBoss6Type2FPvf((void *) arg0, (f32) lbl_805DF7F4);
      }
      TNpcPlayer__sub_803D97B4((void *) (&stack.sp8));
      stack.sp8 *= lbl_805DF7F0;
      stack.spC = lbl_805DF7FC;
      stack.sp10 *= lbl_805DF7F0;
      TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (int) ((*((u32 *) (((s8 *) arg0) + 0x37C))) + 0x38));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    }
  }
}

void TBoss6Type2__sub_8032EBB4(O_8032EBB4 *arg0) {
    V3_8032EBB4 v;
    V3_8032EBB4 pts[2];
    s32 i;
    f32 len;
    f32 f;
    if (arg0->p378 != 0) {
        TBoss6Type2__sub_802BD2D0(arg0->p378, &pts[0], &pts[1]);
        for (i = 0; i < 2; i++) {
            VecCopy__FP3VecPC3Vec(&v, &pts[i]);
            ((f32 (*)(void *, void *))TBoss6Type1__sub_803D9370)(&v, &arg0->pos);
            if (v.y < 0.0f || v.y > 50.0f) {
                continue;
            }
            v.y = 0.0f;
            len = TBoss6Kakusan__sub_803D8BD8(&v);
            if (len > 50.0f) {
                continue;
            }
            if (len <= 0.00001f) {
                v.x = 1.0f;
            }
            TNpcPlayer__sub_803D97B4(&v);
            f = 50.0f - len;
            if (f > 1.0f) {
                f *= 0.25f;
            }
            v.x *= f;
            v.z *= f;
            ((f32 (*)(void *, void *))TBoss6Type1__sub_803D9370)(&arg0->pos, &v);
        }
    }
}

void TBoss6Type2__sub_8032ECE0(u8 *arg0) {
    Vec_8032ECE0 b;
    Vec_8032ECE0 a;
    Vec_8032ECE0 c;
    Vec_8032ECE0 d;
    f32 dist;
    f32 len;
    if (M2C_FIELD(arg0, void **, 0x378) == NULL) {
        return;
    }
    copy_pos_59c__11TBoss6Type2Fii(M2C_FIELD(arg0, void **, 0x378), &a);
    VecCopy__FP3VecPC3Vec(&b, arg0 + 0x38);
    ((f32 (*)(void *, void *))TBoss6Type1__sub_803D9370)(&b, &a);
    len = TBoss6Kakusan__sub_803D8BD8(&b);
    if (len >= lbl_805DF800) {
        return;
    }
    if (len <= lbl_805DF7F8) {
        b.x = lbl_805DF7F4;
    }
    TNpcPlayer__sub_803D97B4(&b);
    b.x *= lbl_805DF800;
    b.y *= lbl_805DF800;
    b.z *= lbl_805DF800;
    ((f32 (*)(void *, void *))TBoss4Zako__sub_803D8910)(&b, &a);
    VecCopy__FP3VecPC3Vec(&c, arg0 + 0x38);
    ((f32 (*)(void *, void *))TBoss6Type1__sub_803D9370)(&c, arg0 + 0x44);
    dist = TBoss6Kakusan__sub_803D8BD8(&c);
    VecCopy__FP3VecPC3Vec(&d, &b);
    ((f32 (*)(void *, void *))TBoss6Type1__sub_803D9370)(&d, arg0 + 0x44);
    len = TBoss6Kakusan__sub_803D8BD8(&d);
    if (dist <= lbl_805DF7F8 || len <= lbl_805DF7F8) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &b);
        return;
    }
    TNpcPlayer__sub_803D97B4(&c);
    TNpcPlayer__sub_803D97B4(&d);
    ((f32 (*)(void *, void *))TBoss4Zako__sub_803D8910)(&d, &c);
    if (TBoss6Kakusan__sub_803D8BD8(&d) <= lbl_805DF7F8) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &b);
        return;
    }
    TNpcPlayer__sub_803D97B4(&d);
    d.x *= dist;
    d.y *= dist;
    d.z *= dist;
    ((f32 (*)(void *, void *))TBoss4Zako__sub_803D8910)(&d, arg0 + 0x44);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &d);
}

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = -TBoss8Dragon__sub_803D64C0((void *) (arg3));
    temp_f30 = lbl_805DF7F4 - get_random_float__8TObjFishFv((f32) (temp_f31));
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64C0((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64DC((void *) (arg2)));
}

extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF81C;
extern const f32 lbl_805DF820;
extern const f32 lbl_805DF824;

typedef struct RecoveredFields_8032F174_arg0 RecoveredFields_8032F174_arg0;

s32 TBoss6Type2__sub_8032EF34(void *arg0, s32 *arg1, s32 *arg2, Vec_8032EF34 *arg3) {
    Vec_8032EF34 v;
    VecCopy__FP3VecPC3Vec(&v, arg3);
    if (TBoss6Kakusan__sub_803D8BD8(&v) <= lbl_805DF7F8) {
        return 0;
    }
    TNpcPlayer__sub_803D97B4(&v);
    if (v.y < lbl_805DF808) {
        *arg1 = 0;
        *arg2 = 0x7FFF;
        return 1;
    }
    if (v.y > lbl_805DF80C) {
        *arg1 = 0;
        *arg2 = -0x7FFF;
        return 1;
    }
    *arg1 = lbl_80477458[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
    *arg2 = lbl_80477458[0] * TBoss5GryphonLightningWing__sub_80324CEC(-v.y);
    return 1;
}

#pragma push
#pragma fp_contract on
s32 TBoss6Type2__sub_8032F034(O_8032F034 *arg0) {
    u8 *p = 0;
    if (arg0->f408 != 0xFFFF) {
        p = get_player_by_client_id(arg0->f408);
    }
    if (p == 0) {
        return 0;
    }
    V3_8032F034 a;
    VecCopy__FP3VecPC3Vec(&a, p + 0x38);
    a.y = 0.0f;
    V3_8032F034 b = arg0->home;
    if (0.0f == arg0->f3b8) {
        if (angle_difference_abs(arg0->f60, (s32)(lbl_80477458[0] * get_ad_end_text_start__10TObjPlayerFv(a.x - b.x, a.z - b.z))) > 0x2000) {
            return 0;
        }
    }
    V3_8032F034 c;
    VecCopy__FP3VecPC3Vec(&c, &b);
    c.x += 90.0f * TBoss8Dragon__sub_803D64C0((void *)arg0->f60);
    c.y = 0.0f;
    c.z += 90.0f * TBoss8Dragon__sub_803D64DC((void *)arg0->f60);
    if (xyz_distance(&c, &a) <= 100.0f) {
        return 1;
    }
    return 0;
}
#pragma pop

s32 TBoss6Type2__sub_8032F174(u8 *arg0) {
  if (((((RecoveredFields_8032F174_arg0 *) arg0)->field_380 == 2) && (((RecoveredFields_8032F174_arg0 *) arg0)->field_408 != ((-1) & 0xFFFF))) && (((RecoveredFields_8032F174_arg0 *) arg0)->field_3C <= lbl_805DF818))
  {
    return 1;
  }
  return 0;
}

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0) {
    if ((TBoss6Type2__sub_8032F174((u8 *)(arg0)) == 0) || (TBoss6Type2__sub_8032F034((O_8032F034 *)(arg0)) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF81C);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) < lbl_805DF7FC) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
        }
    } else if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3B8)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3BC) + lbl_805DF820);
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7F4;
        }
        if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3BC)) {
            if (TLobby__sub_800C6C10() != 0) {
                u32 tmp378 = (u32) M2C_FIELD(arg0, u32 *, 0x378);
                if (tmp378 != 0U) {
                    if (get_rotation_timer__11TBoss6Type2FPv(tmp378) == 0) {
                        TBoss6Type2__sub_8032F418(arg0);
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF824);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7F4;
        }
    }
}

void TBoss6Type2__sub_8032F2C4(T_8032F2C4 *self) {
    TBoss6Type2__sub_8032F2F0((void*)(self->v), (void*)(lbl_80477450));
}

void TBoss6Type2__sub_8032F2F0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

void TBoss6Type2__sub_8032F304(O_8032F304 *arg0) {
    void *m = arg0->mine;
    s32 i;
    for (i = 0; i < arg0->n; i++) {
        TBoss6MagMine__sub_80369598(m, &arg0->v[i]);
    }
}

void TBoss6Type2__sub_8032F360(O_8032F360 *arg0, V3_8032F360 *arg1, s32 arg2) {
    s32 i;
    s32 n = arg2;
    arg0->z = 0;
    if (n > 3) {
        n = 3;
    }
    for (i = 0; i < n; i++) {
        VecCopy__FP3VecPC3Vec(&arg0->v[i], &arg1[i]);
    }
    arg0->n = n;
    TBoss6Type2__sub_803301B8((u8 *)arg0, 3);
}

void TBoss6Type2__sub_8032F3E0(s32 i, void *pts, s32 n) {
    void *p = lbl_804EDDE4[i];
    if (p != 0) {
        TBoss6Type2__sub_8032F360((O_8032F360 *)((void *)(p)), (V3_8032F360 *)((void *)(pts)), (s32)((s32)(n)));
    }
}

void TBoss6Type2__sub_8032F5C4(void *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4 & ~0xA00);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s32 *, 0x38C);
    sync_hp__11TBoss6Type2FPv((void *)((s32)((s32) arg0)));
}

void TBoss6Type2__sub_8032F5FC(O_8032F5FC *arg0) {
    V3_8032F5FC v;
    f32 k;
    compute_random_dir_vec__11TBoss6Type2FiPvii((s32)arg0, (u8 *)&v, arg0->f60, arg0->f5c);
    k = lbl_805DF83C;
    if (get_state__11TBoss6Type2FPv(arg0->f378) == 0xE) {
        k *= arg0->f3c4;
    }
    v.x = v.x * k;
    v.y = v.y * k;
    v.z = v.z * k;
    TBoss4Zako__sub_803D8910(&arg0->pos, (int)&v);
}

#pragma push
#pragma fp_contract on
struct Vec_8032EF34;
void TBoss6Type2__sub_8032F690(u8 *arg0) {
    Vec_8032F690 v;
    s32 a;
    s32 b;
    s32 turn;
    u8 *p;
    u16 id;
    p = NULL;
    id = M2C_FIELD(arg0, u16 *, 0x408);
    if (id != 0xFFFF) {
        p = ((u8 *(*)(u16))get_player_by_client_id)(id);
    }
    if (p == NULL) {
        if (M2C_FIELD(arg0, u8 **, 0x378) == NULL) {
            VecCopy__FP3VecPC3Vec(&v, arg0 + 0x50);
        } else {
            s32 ang;
            u8 *t;
            ang = (s32)(lbl_805DF840 * apply_direction_sign__11TBoss6Type2FPvf(arg0, lbl_805DF7F4) + (f32)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x378), s32 *, 0x60));
            t = M2C_FIELD(arg0, u8 **, 0x378);
            VecCopy__FP3VecPC3Vec(&v, t + 0x38);
            v.x += lbl_805DF800 * ((f32 (*)(s32))TBoss8Dragon__sub_803D64C0)(ang);
            v.z += lbl_805DF800 * ((f32 (*)(s32))TBoss8Dragon__sub_803D64DC)(ang);
        }
        v.y = lbl_805DF844;
    } else {
        VecCopy__FP3VecPC3Vec(&v, p + 0x38);
        v.y = lbl_805DF844;
    }
    if (project_actor_to_ground(arg0, &v, 0) != 0) {
        v.y += lbl_805DF844;
    }
    ((f32 (*)(void *, void *))TBoss6Type1__sub_803D9370)(&v, arg0 + 0x38);
    turn = 0x1B4;
    if (get_state__11TBoss6Type2FPv(M2C_FIELD(arg0, s32 *, 0x378)) == 0xE) {
        turn = 0x6D0;
    }
    TBoss6Type2__sub_8032EF34((void *)(arg0), (s32 *)(&a), (s32 *)(&b), (Vec_8032EF34 *)((struct Vec_8032EF34 *)&v));
    M2C_FIELD(arg0, s32 *, 0x60) = TBoss6Type2__sub_8032EA34(arg0, M2C_FIELD(arg0, s32 *, 0x60), a, turn);
    M2C_FIELD(arg0, s32 *, 0x5C) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x5C), b, 0x1B4);
}
#pragma pop

s32 TBoss6Type2__sub_8032FB84(O_8032FB84 *arg0) {
    V3_8032FB84 v;
    s32 t;
    if (arg0->p378 == 0) {
        return 0;
    }
    TBoss6Type2__sub_802BD378(arg0->p378, arg0->f384, &v, &t);
    v.y = v.y + lbl_805DF848;
    VecCopy__FP3VecPC3Vec(&arg0->pos, &v);
    arg0->f60 = t;
    return 1;
}

void update_segment_angles__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x3B4);
    M2C_FIELD(arg0, s16 *, 0x39E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x398) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x396) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x396) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x398) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x39A) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x39E) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x396);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x39A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x398);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x39E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x39C);
}

void TBoss6Type2__sub_8032FCA4(Obj_8032FCA4 *arg0) {
    Ent_8032FCA4 *e = arg0->ent;
    s32 lo;
    s32 hi;
    hi = e->v[0];
    lo = hi;
    if (lo > e->v[1]) {
        lo = e->v[1];
    } else if (hi < e->v[1]) {
        hi = e->v[1];
    }
    if (lo > e->v[2]) {
        lo = e->v[2];
    } else if (hi < e->v[2]) {
        hi = e->v[2];
    }
    if (lo > e->v[3]) {
        lo = e->v[3];
    } else if (hi < e->v[3]) {
        hi = e->v[3];
    }
    if (lo > e->v[4]) {
        lo = e->v[4];
    } else if (hi < e->v[4]) {
        hi = e->v[4];
    }
    arg0->min = lo;
    arg0->max = hi;
    copy_entry__6TLobbyFPvPv(arg0->local, arg0->ent);
    arg0->ent = (Ent_8032FCA4 *)arg0->local;
    update_segment_angles__11TBoss6Type2FPv(arg0);
}

#pragma push
#pragma opt_common_subs off
void TBoss6Type2__sub_8032FD78(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) + lbl_805DF81C);
    if (M2C_FIELD(arg0, f32 *, 0x3F8) < lbl_805DF7FC) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805DF7FC;
    }
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) ((f32) M2C_FIELD(arg0, s16 *, 0x32C) / (f32) M2C_FIELD(arg0, s16 *, 0x33E));
}
#pragma pop

void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 != temp_r0) {
        if (temp_r4 < temp_r0) {
            sync_hp__11TBoss6Type2FPv((void *)((s32)(arg0)));
            return;
        }
        apply_damage__11TBoss6Type2FPvi(M2C_FIELD(arg0, s32 *, 0x378), temp_r4 - temp_r0);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}
void sync_hp__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}
void TObjFish__sub_8032FE50(void *arg0) {
    Stack_8032FE50 stack;
    s32 temp_r31;
    s32 temp_r31_2;
    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 1);
    temp_r31_2 = get_bml_model(M2C_FIELD(arg0, s32 *, 0x374), 1);
    set_global_param__8TObjFishFi(temp_r31);
    if (lbl_805DF7FC == M2C_FIELD(arg0, f32 *, 0x3E8)) {
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x458));
        TObjEneSlimeOne__sub_803E4AF4(temp_r31_2, M2C_FIELD(arg0, s32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    } else {
        stack.sp8 = M2C_FIELD(arg0, s32 *, 0x3F0);
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x3F4);
        stack.spC = M2C_FIELD(arg0, s32 *, 0x3DC);
        stack.sp14 = M2C_FIELD(arg0, f32 *, 0x3E0);
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x458));
        TObjPlayer__sub_803E4A94(temp_r31_2, &stack.sp8, M2C_FIELD(arg0, f32 *, 0x3E8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    }
    clear_global_state__10TObjPlayerFv();
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8032FF24_lbl_804EDD94_size[sizeof(RecoveredGlobal_8032FF24_lbl_804EDD94) == 0x50 ? 1 : -1];
void TBoss6Type2__sub_8032FF24(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    if ((arg1 != -1) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x3D4))) {
        M2C_FIELD(arg0, s32 *, 0x3D4) = arg1;
        temp_r31 = arg1 * 0x10;
        M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8032FF24_lbl_804EDD94 *)&lbl_804EDD94).value) + temp_r31), s32 *, 0);
        temp_r3 = TObjFish__sub_8001ED9C((int) (M2C_FIELD(arg0, s32 *, 0x374)), (int) (M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8032FF24_lbl_804EDD94 *)&lbl_804EDD94).value) + temp_r31), s32 *, 8)));
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) M2C_FIELD(arg0, f32 *, 0x3EC);
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(arg0, s32 *, 0x3DC);
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) M2C_FIELD(arg0, f32 *, 0x3E0);
        M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8032FF24_lbl_804EDD94 *)&lbl_804EDD94).value) + temp_r31), f32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x3DC) = temp_r3;
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) lbl_805DF7FC;
    }
}
#pragma pop

void TBoss6Type2__sub_803300C8(u8 *arg0) {
    s32 temp_r3;
    TBoss6Type2__sub_80330178((s32)((s32)((void *) (arg0 + 0x3D4))), (s32)((s32)((void *) (&lbl_80477404.value))));
    copy_state__11TBoss6Type2FPvPv((void*)((void *) (arg0 + 0x3DC)), (void*)((void *) (&lbl_80477428.value)));
    temp_r3 = TObjFish__sub_8001ED9C((int) (M2C_FIELD(arg0, s32 *, 0x374)), (int) (M2C_FIELD(&lbl_804EDD94.value, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x3DC) = temp_r3;
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) M2C_FIELD(&lbl_804EDD94.value, f32 *, 0xC);
}
void copy_state__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

typedef char MemberActionStorage_803301B8_size[sizeof(MemberActionStorage_803301B8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_803301B8_lbl_804EF028_size[sizeof(RecoveredGlobal_803301B8_lbl_804EF028) == 0xD8 ? 1 : -1];

int TBoss6Type2__sub_80330178(s32 _w0, s32 _w1) {
    S_80330178 *d = (S_80330178 *)_w0;
    S_80330178 *s = (S_80330178 *)_w1;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    return _w0;
}

void TBoss6Type2__sub_803301B8(u8 *arg0, s32 arg1) {
    MemberActionStorage_803301B8 member_action;
    u8 *temp_r31;
    M2C_FIELD(arg0, s32 *, 0x380) = arg1;
    temp_r31 = (u8 *)((void *)((u8 *)(&lbl_804EF028.value) + (M2C_FIELD(arg0, s32 *, 0x380) * 0x24)));
    TBoss6Type2__sub_8032FF24((u8 *)((void *) (arg0)), (s32)((int) (M2C_FIELD(temp_r31, s32 *, 4))));
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) M2C_FIELD(temp_r31, s32 *, 8);
    member_action.words[0] = M2C_FIELD(temp_r31, s32 *, 0xC);
    member_action.words[1] = M2C_FIELD(temp_r31, s32 *, 0x10);
    member_action.words[2] = M2C_FIELD(temp_r31, s32 *, 0x14);
    if (member_action.action != 0) {
        (((TBoss6Type2 *)((void *) (arg0)))->*member_action.action)();
    }
}

typedef char RecoveredGlobal_803300C8_lbl_80477404_size[sizeof(RecoveredGlobal_803300C8_lbl_80477404) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_803300C8_lbl_80477428_size[sizeof(RecoveredGlobal_803300C8_lbl_80477428) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_803300C8_lbl_804EDD94_size[sizeof(RecoveredGlobal_803300C8_lbl_804EDD94) == 0x50 ? 1 : -1];

}
