#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GibBase_802da394_802D87D8 { char pad[0x14]; };
struct GibVObj_802da394_802D87D8 : GibBase_802da394_802D87D8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};
struct VBase802DAAC8_802daac8_802D87D8 { char pad[0x14]; };
struct VObj802DAAC8_802daac8_802D87D8 : VBase802DAAC8_802daac8_802D87D8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct E_802DBC94 { s32 a; s32 b; s32 c; s32 d; };

struct G_802DBC94 { u8 pad[0x42c]; E_802DBC94 *e; };

struct O_802DBC94 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct VBase800A64E8_800a64e8_800A4288 { char pad[0x14]; };

struct VObj800A64E8_800a64e8_800A4288 : VBase800A64E8_800a64e8_800A4288 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct RecoveredGlobal_800A6BE0_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800A6BE0_lbl_80500978 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_800A6B14 { f32 x, y, z; };

struct Tgt_800A6B14 { u8 pad[0x2fc]; Vec_800A6B14 pos; };

struct Obj_800A6B14 {
    u8 pad[0x60]; s32 angle;
    u8 pad2[0x2a8 - 0x64]; Tgt_800A6B14 *target;
    u8 pad3[0x2fc - 0x2ac]; Vec_800A6B14 pos;
};

struct Vec_800A6B14;
struct Vec_802D8828 { f32 x, y, z; };

struct Vec_802D9D64 { f32 x, y, z; };

extern "C" {
f32 enemy_wander_home(void *, s32, f32, f32, f32);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK advance_animation_playback(int);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(int);
M2C_UNK check_enemy_body_collisions(int);
M2C_UNK check_object_collisions__10TObjPlayerFPv(int);
M2C_UNK submit_cursor_candidate(int, int);
M2C_UNK TObjEneGibbles__sub_802D7DAC(int);
extern f32 lbl_805DE878;
void TObjEneGibbles__sub_802DA96C(u8 *arg0);
extern u32 TObjEneGibbles__data_805D68B8;
void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i);
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
f32 subtract_vector(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1);
extern const f64 TObjEneGibbles__data_80472798;
void TObjEneGibbles__sub_802DB0F4(Obj_800A6B14 *self);
f32 TObjPlayer__sub_80018780(void *, u16, Vec_802D8828 *);
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
u8 *get_player_data__10TObjPlayerFi(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TLobby__sub_800822E8(void *, int);
s32 angle_difference_abs(s32, s32);
f32 subtract_vector(void *, void *);
extern const f64 TObjEneGibbles__data_80472798;
extern s32 lbl_805D586C;
extern const f32 lbl_805DE824;
s32 TObjEneGibbles__sub_802D8828(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_800A6B14 *dst, const Vec_800A6B14 *src);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
f32 subtract_vector(void *, void *);
extern const f64 TObjEneGibbles__data_80472798;
extern u32 TObjEneGibbles__data_805D68AC;
void TObjEneGibbles__sub_802D9D64(u8 *arg0);
void copy_position__20TBoss3VoloptHiraisinFi(u8 *);
s32 check_demo_mode__10TObjPlayerFv();
void TObjEneGibbles__sub_802D7E3C(u8 *);
void update_shadow_height__14TObjEneGibblesFPv(u8 *);
void update_position__14TObjEneGibblesFPv(u8 *);
void sync_state__14TObjEneGibblesFPv(u8 *);
void TObjEneGibbles__sub_802D8140(u8 *);
void update_action_state__14TObjEneGibblesFPv(u8 *);
void TObjEneGibbles__sub_802D8580(u8 *);
void TObjEneGibbles__sub_802D8984(u8 *);
void TObjEneGibbles__sub_802D8E8C(u8 *);
void TObjEneGibbles__sub_802D9110(u8 *);
void TObjEneGibbles__sub_802DA0BC(u8 *);
void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0);
void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0);
void TObjEneGibbles__sub_802DA7A4(u8 *);
void TObjEneGibbles__sub_802DA96C(u8 *arg0);
void init_state__14TObjEneGibblesFPv(u8 *arg0);
extern const f32 TObjEneGibbles__data_805DE7EC;
void TObjEneGibbles__sub_802DB50C(u8 *arg0);
}

extern "C" {

void TObjEneGibbles__sub_802DAAC8(u8 *arg0);
void* TObjEneGibbles__sub_802DBC8C(void* p);
void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1);
void * create__14TObjEneGibblesFPv(void *arg0);
void free_static__14TObjEneGibblesFv(void);
void init_params__14TObjEneGibblesFPv(void *arg0);
void init_state__14TObjEneGibblesFPv(u8 *arg0);
void set_state_dead__14TObjEneGibblesFPv(void *arg0);
void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0);
void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0);
void update_spawn_timer__14TObjEneGibblesFv(void);
M2C_UNK play_sound_effect(void *, void *, int, int);
M2C_UNK TBoss4DarkFalz__sub_8004C220(void *, void *);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
void *TObjControl__ct(void *, void *);
void *TObjEneGibbles__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_800D8988(void *);
M2C_UNK TObjEneGibbles__sub_802D7A54(void *);
M2C_UNK TObjEneGibbles__sub_802D7F94(void *, int);
s32 TObjEneGibbles__sub_802D9A04(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK apply_actor_gravity(void *, int, f32);
f32 horizontal_distance_squared(int, void *);
M2C_UNK refresh_collision_body_centers(void *);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 objInBand__FP7GameObjf(void *, f32, f32);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);

void set_state_dead__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 7) && (temp_r0 != 6)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
}

extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE830;
extern const f32 lbl_805DE868;
extern const f32 lbl_805DE86C;

s32 TObjEneGibbles__sub_802D8828(u8 *arg0) {
    Vec_802D8828 v;
    u8 *pl;
    s32 i;
    s32 flags;
    flags = M2C_FIELD(arg0, s32 *, 0x374);
    if (flags & 0x20) {
        return 1;
    }
    if ((flags & 4) && M2C_FIELD(arg0, s16 *, 0x326) != 6 && M2C_FIELD(arg0, s16 *, 0x388) > 0) {
        for (i = 0; i < lbl_805D586C; i++) {
            pl = get_player_data__10TObjPlayerFi(i);
            if (pl != NULL && !(M2C_FIELD(pl, s32 *, 0x30) & 0x800)
                && TObjPlayer__sub_80018780(arg0, i, &v) < lbl_805DE824
                && angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) < 0x2AAA
                && TLobby__sub_800822E8(pl, 0xE0) != 0) {
                VecCopy__FP3VecPC3Vec((Vec_800A6B14 *) &v, (Vec_800A6B14 *) (arg0 + 0x2FC));
                subtract_vector(&v, pl + 0x2FC);
                if (angle_difference_abs(M2C_FIELD(pl, s32 *, 0x60), (s32) (TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) < 0x2AAA) {
                    M2C_FIELD(arg0, u8 **, 0x3B0) = pl;
                    M2C_FIELD(arg0, s32 *, 0x374) |= 0x20;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void TObjEneGibbles__sub_802D9D64(u8 *arg0) {
    Vec_802D9D64 v;
    switch (M2C_FIELD(arg0, s16 *, 0x37C)) {
    case 0:
    default: {
        VecCopy__FP3VecPC3Vec((Vec_800A6B14 *) &v, (Vec_800A6B14 *) (M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC));
        subtract_vector(&v, arg0 + 0x2FC);
        f64 t = get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        if ((s32) (TObjEneGibbles__data_80472798 * t) < 0x10) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        }
        break;
    }
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 6;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFFFF7F);
        break;
    }
    bind_enemy_combat_stats(arg0, 0, ((s32 *) TObjEneGibbles__data_805D68AC)[M2C_FIELD(arg0, s16 *, 0x37C)], 0);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) |= 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
}

void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    advance_animation_playback((int)((int) (arg0)));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3C0));
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805DE868;
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE830;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (((struct GibVObj_802da394_802D87D8 *) (arg0 + 0x3C0))->m5() != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) - M2C_FIELD(arg0, f32 *, 0x390));
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) + TObjEneGibbles__data_805DE830);
        } else {
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE86C;
        }
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((temp_f2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) TObjEneGibbles__data_805DE7E4;
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE7E4;
            temp_r3 = TObjEneGibbles__sub_802D9A04((void *) (arg0));
            switch (temp_r3) {
            case 0:
                TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
                break;
            default:
            case 1:
                play_sound_effect((void *) TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3AD32)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                break;
            }
            TObjEneGibbles__sub_802D7A54((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((temp_f2_2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2_2)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 4);
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE870;

void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0xFFFFFFFE);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) arg0, (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        return;
    case 1:
        if (horizontal_distance_squared((int) (M2C_FIELD(arg0, s32 *, 0x2A8) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805DE870) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
    case 2:
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 2);
        break;
    }
}

void update_state__14TObjEneGibblesFPv(void *arg0)
{
  s16 temp_r0;
  s32 temp_r4;
  void *temp_r3;
  void *temp_r3_2;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  switch (temp_r0)
  {
    default:
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x374));
      if (temp_r4 & 4)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xF9FBFFFF);
    }
    else
      if (temp_r4 & 1)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
    }
      temp_r3 = *((void **) (((s8 *) arg0) + 0xA4));
      *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) | 1);
      return;

    case 1:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 2)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
    }
      return;

    case 2:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 4)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xF9FBFFFF);
      return;
    }
      break;

    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 3)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
      *((s32 *) (((s8 *) arg0) + 0x374)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x374))) & 0xFFFF0000);
      *((s32 *) (((s8 *) arg0) + 0x374)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x374))) | 1);
      temp_r3_2 = *((void **) (((s8 *) arg0) + 0xA4));
      *((s32 *) (((s8 *) temp_r3_2) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3_2) + 0x18))) | 1);
      return;
    }
      break;

  }

  return;
}

void TObjEneGibbles__sub_802DA96C(u8 *arg0) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    s32 var_r5;
    s32 var_r6;
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r4;
    var_r31 = (u8 *)(arg0);
    advance_animation_playback((int)(arg0));
    if ((u32) M2C_FIELD(var_r31, u32 *, 0x2A8) != 0U) {
        var_r3 = (u8 *)((void *)3);
        M2C_FIELD(var_r31, s16 *, 0x326) = 3;
        var_r3 = (u8 *)(var_r31);
        var_r4 = (u8 *)((void *)0x06240000);
        M2C_FIELD(var_r31, s16 *, 0x328) = 0;
        obj_clearFlags30((void *)((int) (var_r3)), (int)((int) (0x06240000)));
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (M2C_FIELD(var_r31, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (M2C_FIELD(var_r31, s32 *, 0x374) | 4);
        var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xA4));
        M2C_FIELD(var_r3, s32 *, 0x18) = (s32) (M2C_FIELD(var_r3, s32 *, 0x18) | 1);
    } else {
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (M2C_FIELD(var_r31, s32 *, 0x374) & 0xFFFFFFFB);
    }
    var_f2 = (*(const f32 *)&lbl_805DE878);
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x350));
    var_f3 = var_f2;
    var_f1 = M2C_FIELD(var_r4, f32 *, 4);
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 8));
    enemy_wander_home(var_r3, (s32) var_r4, var_f1, var_f2, var_f3);
    var_r3 = (u8 *)(var_r31);
    refresh_collision_body_centers((void *)((int) (var_r3)));
    var_r3 = (u8 *)(var_r31);
    check_object_collisions__10TObjPlayerFPv((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    check_enemy_body_collisions((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    update_enemy_collision_flags__10TObjPlayerFPv((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)((void *)0x200000);
    obj_clearFlags30((void *)((int) (var_r3)), (int)((int) (0x200000)));
    var_r3 = (u8 *)(var_r31);
    TObjEneGibbles__sub_802D7DAC((int) (var_r3));
    var_r3 = (u8 *)(var_r31 + 0x38);
    var_r4 = (u8 *)((void *)-0x5DB4);
    var_r5 = 1;
    var_r6 = 0;
    minimap_render_dot((void *)(var_r3), (int)(-0x5DB4), (int)(1), (int)(0));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)((void *)-1);
    submit_cursor_candidate((int) (var_r3), (int) (-1));
}

void init_state__14TObjEneGibblesFPv(u8 *arg0) {
    u8 *temp_r3;

    TBoss4DarkFalz__sub_8004C220((void *) arg0, (void *) (arg0 + 0x50));
    refresh_collision_body_centers((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
}

void TObjEneGibbles__sub_802DAAC8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj802DAAC8_802daac8_802D87D8 *)(arg0 + 0x3C0))->m8() != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        }
    case 6:
    case 11:
        return;
    case 10:
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 0x40)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            return;
        }
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
        break;
    }
}

void TObjEneGibbles__sub_802DB0F4(Obj_800A6B14 *self) {
    Vec_800A6B14 d;
    VecCopy__FP3VecPC3Vec(&d, &self->target->pos);
    subtract_vector(&d, &self->pos);
    clamp_angle__14TObjEneGibblesFPvi(self,
        TBoss4Type2__sub_80141FA8(self->angle, (s32)(TObjEneGibbles__data_80472798 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z))));
}
typedef char RecoveredGlobal_800A6BE0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800A6BE0_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800A6BE0_lbl_80500978_size[sizeof(RecoveredGlobal_800A6BE0_lbl_80500978) == 0x10 ? 1 : -1];

void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    M2C_FIELD(arg0, s32 *, 0x3BC) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x3BC), var_r4);
}

extern s32 TObjEneGibbles__data_805D68BC;
extern s32 TObjEneGibbles__data_805D68C0;

void update_spawn_timer__14TObjEneGibblesFv(void) {
    if ((s32) TObjEneGibbles__data_805D68BC == 0x18) {
        rotate_matrix_x(0, TObjEneGibbles__data_805D68C0);
    }
    TObjEneGibbles__data_805D68BC += 1;
}

extern f32 lbl_805DE878;

void TObjEneGibbles__sub_802DB50C(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneGibbles__sub_802D7E3C(arg0);
        return;
    }
    {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            init_state__14TObjEneGibblesFPv(arg0);
            break;
        case 1:
            update_spawn_state__14TObjEneGibblesFPv(arg0);
            break;
        case 2:
            update_death_sequence__14TObjEneGibblesFPv(arg0);
            break;
        case 3:
            TObjEneGibbles__sub_802DA0BC(arg0);
            break;
        case 4:
            TObjEneGibbles__sub_802D9110(arg0);
            break;
        case 5:
            TObjEneGibbles__sub_802D8E8C(arg0);
            break;
        case 6:
            TObjEneGibbles__sub_802D8984(arg0);
            break;
        case 7:
            TObjEneGibbles__sub_802D8580(arg0);
            break;
        case 8:
            update_action_state__14TObjEneGibblesFPv(arg0);
            break;
        case 9:
            TObjEneGibbles__sub_802D8140(arg0);
            break;
        case 10:
            TObjEneGibbles__sub_802DA7A4(arg0);
            break;
        case 11:
            TObjEneGibbles__sub_802DA96C(arg0);
            break;
        }
    }
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s16 *, 0x37E) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    update_position__14TObjEneGibblesFPv(arg0);
    update_shadow_height__14TObjEneGibblesFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    sync_state__14TObjEneGibblesFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x2B4) + TObjEneGibbles__data_805DE7EC);
}

void init_params__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s16) (lbl_805DE878 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s16 *, 0x388) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x38A) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x39C);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    } else if (temp_r0_2 > 8) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 8;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = (s32) (M2C_FIELD(arg0, s32 *, 0x378) | (1 << M2C_FIELD(arg0, s32 *, 0x39C)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x35C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x360);
}

extern void *tl_04;

void * create__14TObjEneGibblesFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x44C);
    if (o2 != NULL) {
        o2 = TObjEneGibbles__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneGibbles__data_805D68AC;
extern u32 TObjEneGibbles__data_805D68B8;

void free_static__14TObjEneGibblesFv(void) {
    if ((u32) TObjEneGibbles__data_805D68AC != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneGibbles__data_805D68AC);
        TObjEneGibbles__data_805D68AC = 0U;
    }
    if ((u32) TObjEneGibbles__data_805D68B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneGibbles__data_805D68B8, 1);
        TObjEneGibbles__data_805D68B8 = 0U;
    }
}

void* TObjEneGibbles__sub_802DBC8C(void* p) { return (char*)p + 0x2fc; }
void TObjEneGibbles__sub_802DBC94(O_802DBC94 *self, s32 i) {
    self->f34 = (*(G_802DBC94 * *)&TObjEneGibbles__data_805D68B8)->e[i].c;
    self->f24 = (*(G_802DBC94 * *)&TObjEneGibbles__data_805D68B8)->e[i].d;
}

}
