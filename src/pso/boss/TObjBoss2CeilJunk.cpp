#include "types.h"
#include "pso/system/vector.h"
#include "pso/boss/TObjBoss2CeilJunk.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredFields_8003A6F4_arg0 {
 s32 field_0;
 u8 unknown_4[0x14];
 s32 *unk18;
 u8 unknown_1C[0x2C];
 f32 field_48;
 u8 unknown_4C[8];
 f32 field_54;
 u8 unknown_58[4];
 s32 field_5C;
 s32 field_60;
 u8 unknown_64[0x2C];
 f32 field_90;
 f32 field_94;
 f32 field_98;
 u8 unknown_9C[0xC];
 s32 field_A8;
 s32 field_AC;
 s32 field_B0;
 f32 field_B4;
};

struct RecoveredGlobal_8003A6F4_lbl_80435BD8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk {
    s32 value;
    u8 remaining[0x34];
};

struct Color_8003A1B4
{
  f32 a;
  s32 b;
  s32 c;
  s32 d;
};

struct Vec_8003A1B4
{
  f32 x;
  f32 y;
  f32 z;
};

struct Mdl_8003A1B4
{
  u8 pad[8];
  s32 f8;
  u8 padC[4];
};

struct Holder_8003A1B4
{
  u8 pad[0x42C];
  Mdl_8003A1B4 *mdls;
};

struct Obj_8003A1B4
{
  u8 pad0[0x38];
  u8 pos[0x44 - 0x38];
  u8 f44[0x5C - 0x44];
  s32 f5C;
  s32 f60;
  u8 pad64[0x9C - 0x64];
  u8 f9C[0xA8 - 0x9C];
  s32 fA8;
  s32 fAC;
  u8 padB0[4];
  f32 fB4;
};

struct Vec_8003A314 { f32 x, y, z; };

struct Junk_8003A314 {
    u8 pad0[0x38];
    Vec_8003A314 pos;
    u8 pad44[0x10];
    f32 f54;
    u8 pad58[4];
    s32 f5C;
    s32 f60;
    u8 pad64[0x2C];
    Vec_8003A314 vel;
    u8 pad9C[0xC];
    s32 fA8;
    s32 fAC;
    s32 fB0;
    f32 fB4;
};

extern "C" {
f32 rand_signed_unit();
s32 spawn_effect__15TObjBoss2TunnelFlPvPv(void *, void *, void *, f32, f32);
s32 construct_world_actor_base();
s32 rand();
extern RecoveredGlobal_8003A6F4_lbl_80435BD8 TObjBoss2CeilJunk__height_offset_table;
extern s32 __vt__17TObjBoss2CeilJunk[];
extern s32 TObjBoss2CeilJunk__name;
u8 *TObjBoss2CeilJunk__ct(struct RecoveredFields_8003A6F4_arg0 *arg0, s32 arg1, s32 arg2);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_chunk_blend(int);
extern s32 boss2_ceil_junk_model_index_table[];
extern f32 TObjBoss2CeilJunk__radius_table[];
extern Color_8003A1B4 boss2_ceil_junk_render_color;
extern Holder_8003A1B4 *boss2_tunnel_instance;
extern s32 lbl_805D4BEC;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
u8 *get_player_data__10TObjPlayerFi(s32);
s32 queue_destruction__7TObjectFv(void *);
s32 forward_switch_phase_stats__13TBoss2DeRolLeFi(void *);
s32 create_particle__17TObjBoss2CeilJunkFv(void *, int);
s32 is_valid_target__9TObjEneDDFv(void *);
s32 play_sound_effect(int, void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 vec3_add_to(void *, void *);
s32 subtract_vector(void *, void *);
extern const f32 lbl_805D4BE0;
void run_task__17TObjBoss2CeilJunkFv(Junk_8003A314 *o);
void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

typedef struct Color_8003A1B4 Color_8003A1B4;
typedef struct Holder_8003A1B4 Holder_8003A1B4;
typedef struct Mdl_8003A1B4 Mdl_8003A1B4;
typedef struct Obj_8003A1B4 Obj_8003A1B4;
typedef struct Vec_8003A1B4 Vec_8003A1B4;
void TObjBoss2CeilJunk::render() {
    Obj_8003A1B4 *self = (Obj_8003A1B4 *)this;
  float new_var;
  if (self->fA8 == 2)
  {
    Vec_8003A1B4 s;
    f32 t = TObjBoss2CeilJunk__radius_table[self->fAC];
    new_var = (0.2f) * t;
    s.y = (1.0f);
    s.x = (s.z = new_var);
    ((TObjEneDD *)(self->f44))->draw_oriented_shadow((s32)(self->f9C), (s32)0, (u32)(&s));
  }
  lbl_805D5660 = model_render_flags;
  if (self->fB4 < (1.0f))
  {
    model_render_flags = lbl_805D5660 | 0x8820;
    {
      Color_8003A1B4 c = boss2_ceil_junk_render_color;
      c.a = (-1.0f) + self->fB4;
      set_chunk_material_color(&c);
    }
    set_chunk_material_override_pair(0xFF00, 0x800);
    set_chunk_blend(0x2500);
  }
  push_matrix();
  TObjFish::set_global_param(lbl_805D4BEC);
  post_translate_matrix(self->pos);
  rotate_matrix_y(0, self->f60);
  rotate_matrix_x(0, self->f5C);
  draw_ginja_object(boss2_tunnel_instance->mdls[boss2_ceil_junk_model_index_table[self->fAC]].f8);
  pop_matrix();
  model_render_flags = lbl_805D5660;
  set_chunk_material_override_pair(0xFF00, 0);
}

void run_task__17TObjBoss2CeilJunkFv(Junk_8003A314 *o) {
    Vec_8003A314 p;
    Vec_8003A314 d;
    s32 id;
    s32 hit;
    s32 n;
    u8 *pl;
    s32 i;
    f32 top;
    f32 bottom;
    f32 rad;
    f32 h;
    switch (o->fA8) {
    case 0:
        o->vel.y += -0.3f;
        if (o->vel.y < -10.0f) {
            o->vel.y = -10.0f;
        }
        o->pos.y += o->vel.y;
        if (o->pos.y <= lbl_805D4BE0) {
            o->fA8 = 1;
            VecCopy((Vec *)&p, (const Vec *)&o->pos);
            switch (o->fAC) {
            case 0:
            case 1:
            case 3:
                id = 0x170;
                break;
            case 2:
            case 4:
            case 5:
                id = 0x171;
                p.y += (5.0f);
                break;
            }
            create_particle__17TObjBoss2CeilJunkFv(&p, id);
        }
        break;
    case 1:
        o->pos.y -= (3.0f);
        if (o->pos.y < (-5e+01f)) {
            queue_destruction__7TObjectFv(o);
        }
        break;
    case 2:
        o->vel.y += -0.3f;
        if (o->vel.y < -10.0f) {
            o->vel.y = -10.0f;
        }
        o->pos.y += o->vel.y;
        if (o->pos.y - o->f54 < (3e+01f)) {
            hit = 0;
            n = TLobby::get_game_mode();
            top = o->pos.y - o->vel.y;
            bottom = o->pos.y - ((f32 *)&TObjBoss2CeilJunk__height_offset_table)[o->fAC];
            rad = (1e+01f) + TObjBoss2CeilJunk__radius_table[o->fAC];
            for (i = 0; i < n; i++) {
                pl = get_player_data__10TObjPlayerFi(i);
                if (is_valid_target__9TObjEneDDFv(pl) != 0) {
                    h = *(f32 *)((s8 *)pl + 0xD48) + *(f32 *)((s8 *)pl + 0x3C);
                    if (top > h && bottom < h) {
                        VecCopy((Vec *)&d, (const Vec *)(pl + 0x38));
                        subtract_vector(&d, &o->pos);
                        if (((TObjBoss2Tunnel *)(&d))->clamp_velocity() < rad) {
                            hit = 1;
                            forward_switch_phase_stats__13TBoss2DeRolLeFi(pl);
                        }
                    }
                }
            }
            if (o->pos.y <= o->f54) {
                o->pos.y = o->f54;
                hit = 1;
                create_particle__17TObjBoss2CeilJunkFv(&o->pos, 0x160);
            }
            if (hit != 0) {
                o->vel.y *= (-0.5f);
                o->vel.x = (2.0f) * sin_table_lookup(o->f60);
                o->vel.z = (2.0f) * cos_table_lookup(o->f60);
                o->fA8 = 3;
                play_sound_effect(0x4003A801, &o->pos, 0, 0);
                TCameraCtrl::set_shake_preset(0);
            }
        }
        break;
    case 3:
        o->vel.y += -0.3f;
        if (o->vel.y < -10.0f) {
            o->vel.y = -10.0f;
        }
        o->f5C += 0x1323;
        vec3_add_to(&o->pos, &o->vel);
        o->fB0++;
        if (o->fB0 >= 10) {
            o->fB4 -= 0.04f;
            if (o->fB4 <= 0.0f) {
                o->fB4 = 0.0f;
                queue_destruction__7TObjectFv(o);
            }
        }
        break;
    }
}

void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjBoss2CeilJunk;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
extern const f32 lbl_805D85A0 = 6.0f;
#pragma push
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8003A6F4_lbl_80435BD8_size[sizeof(RecoveredGlobal_8003A6F4_lbl_80435BD8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk_size[sizeof(RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk) == 0x38 ? 1 : -1];
u8 *TObjBoss2CeilJunk__ct(struct RecoveredFields_8003A6F4_arg0 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f2;
    construct_world_actor_base();
    arg0->unk18 = &(*(RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk *)&__vt__17TObjBoss2CeilJunk).value;
    arg0->field_0 = TObjBoss2CeilJunk__name;
    VecCopy((Vec *)&arg0->unknown_1C[0x1C], (const Vec *)arg2);
    temp_f2 = (f32) rand();
    temp_f1 = (3.0517578e-05f) * temp_f2;
    arg0->field_AC = (s32) (*(const volatile f32 *)&lbl_805D85A0 * temp_f1);
    if (spawn_effect__15TObjBoss2TunnelFlPvPv(&arg0->unknown_1C[0x1C], &arg0->unknown_1C[0x28], arg0->unknown_9C, temp_f1, temp_f2) == 0) {
        arg0->field_A8 = 0;
    } else {
        arg0->field_A8 = 2;
        arg0->field_54 = arg0->field_48 + *(f32 *)((s8 *)((u8 *)(&TObjBoss2CeilJunk__height_offset_table.value) + (arg0->field_AC * 4)) + 0);
    }
    arg0->field_60 = TObjPlayer::calc_random_scaled();
    arg0->field_5C = (s32) ((4096.0f) * rand_signed_unit());
    arg0->field_90 = (0.0f);
    arg0->field_94 = (0.0f);
    arg0->field_98 = (0.0f);
    arg0->field_B0 = 0;
    arg0->field_B4 = (1.0f);
    return (unsigned char *) (arg0);
}
#pragma pop

}
