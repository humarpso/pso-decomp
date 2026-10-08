#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredFields_8003A6F4_arg0 {
 s32 field_0;
 u8 unknown_4[0x14];
 M2C_UNK *unk18;
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
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk {
    M2C_UNK value;
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
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 rand_signed_unit();
s32 calc_random_scaled__10TObjPlayerFv();
s32 spawn_effect__15TObjBoss2TunnelFiPvPv(void *, void *, void *, f32, f32);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
s32 rand();
extern RecoveredGlobal_8003A6F4_lbl_80435BD8 lbl_80435BD8;
extern M2C_UNK __vt__17TObjBoss2CeilJunk[];
extern s32 lbl_805D26E8;
u8 *TObjBoss2CeilJunk__ct(struct RecoveredFields_8003A6F4_arg0 *arg0, s32 arg1, s32 arg2);
M2C_UNK draw_oriented_shadow__9TObjEneDDFiiiUi(void *, void *, int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_ginja_object(s32);
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK set_chunk_blend(int);
extern s32 lbl_80435BC0[];
extern f32 lbl_80435BF0[];
extern Color_8003A1B4 lbl_80435C1C;
extern Holder_8003A1B4 *lbl_805D4BE8;
extern s32 lbl_805D4BEC;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void render__17TObjBoss2CeilJunkFv(Obj_8003A1B4 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_game_mode__6TLobbyFv();
M2C_UNK TBoss2DeRolLe__sub_80034DCC(void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(void *, int);
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 is_valid_target__9TObjEneDDFPv(void *);
M2C_UNK play_sound_effect(int, void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK subtract_vector(void *, void *);
extern RecoveredGlobal_8003A6F4_lbl_80435BD8 lbl_80435BD8;
extern f32 lbl_80435BF0[];
extern const f32 lbl_805D4BE0;
void run_task__17TObjBoss2CeilJunkFv(Junk_8003A314 *o);
}

extern "C" {

void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__17TObjBoss2CeilJunk[];

typedef struct Color_8003A1B4 Color_8003A1B4;
typedef struct Holder_8003A1B4 Holder_8003A1B4;
typedef struct Mdl_8003A1B4 Mdl_8003A1B4;
typedef struct Obj_8003A1B4 Obj_8003A1B4;
typedef struct Vec_8003A1B4 Vec_8003A1B4;
void render__17TObjBoss2CeilJunkFv(Obj_8003A1B4 *self) {
  float new_var;
  if (self->fA8 == 2)
  {
    Vec_8003A1B4 s;
    f32 t = lbl_80435BF0[self->fAC];
    new_var = (0.2f) * t;
    s.y = (1.0f);
    s.x = (s.z = new_var);
    draw_oriented_shadow__9TObjEneDDFiiiUi(self->f44, self->f9C, 0, &s);
  }
  lbl_805D5660 = some_id_805c6f74;
  if (self->fB4 < (1.0f))
  {
    some_id_805c6f74 = lbl_805D5660 | 0x8820;
    {
      Color_8003A1B4 c = lbl_80435C1C;
      c.a = (-1.0f) + self->fB4;
      set_chunk_material_color(&c);
    }
    set_chunk_material_override_pair(0xFF00, 0x800);
    set_chunk_blend(0x2500);
  }
  push_matrix();
  set_global_param__8TObjFishFi(lbl_805D4BEC);
  post_translate_matrix(self->pos);
  rotate_matrix_y(0, self->f60);
  rotate_matrix_x(0, self->f5C);
  draw_ginja_object(lbl_805D4BE8->mdls[lbl_80435BC0[self->fAC]].f8);
  pop_matrix();
  some_id_805c6f74 = lbl_805D5660;
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
            VecCopy__FP3VecPC3Vec(&p, &o->pos);
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
            n = get_game_mode__6TLobbyFv();
            top = o->pos.y - o->vel.y;
            bottom = o->pos.y - ((f32 *)&lbl_80435BD8)[o->fAC];
            rad = (1e+01f) + lbl_80435BF0[o->fAC];
            for (i = 0; i < n; i++) {
                pl = get_player_data__10TObjPlayerFi(i);
                if (is_valid_target__9TObjEneDDFPv(pl) != 0) {
                    h = M2C_FIELD(pl, f32 *, 0xD48) + M2C_FIELD(pl, f32 *, 0x3C);
                    if (top > h && bottom < h) {
                        VecCopy__FP3VecPC3Vec(&d, pl + 0x38);
                        subtract_vector(&d, &o->pos);
                        if (clamp_velocity__15TObjBoss2TunnelFPv(&d) < rad) {
                            hit = 1;
                            TBoss2DeRolLe__sub_80034DCC(pl);
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
                set_shake_preset__11TCameraCtrlFi(0);
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss2CeilJunk;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
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
    TPhotonMagicSquare__sub_801A2640();
    arg0->unk18 = &(*(RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk *)&__vt__17TObjBoss2CeilJunk).value;
    arg0->field_0 = lbl_805D26E8;
    VecCopy__FP3VecPC3Vec(&arg0->unknown_1C[0x1C], (void *) arg2);
    temp_f2 = (f32) rand();
    temp_f1 = (3.0517578e-05f) * temp_f2;
    arg0->field_AC = (s32) (*(const volatile f32 *)&lbl_805D85A0 * temp_f1);
    if (spawn_effect__15TObjBoss2TunnelFiPvPv(&arg0->unknown_1C[0x1C], &arg0->unknown_1C[0x28], arg0->unknown_9C, temp_f1, temp_f2) == 0) {
        arg0->field_A8 = 0;
    } else {
        arg0->field_A8 = 2;
        arg0->field_54 = arg0->field_48 + M2C_FIELD(((u8 *)(&lbl_80435BD8.value) + (arg0->field_AC * 4)), f32 *, 0);
    }
    arg0->field_60 = calc_random_scaled__10TObjPlayerFv();
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
