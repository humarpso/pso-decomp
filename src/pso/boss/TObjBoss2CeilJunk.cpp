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

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 TTecZondeEff__sub_8002DF28();
s32 calc_random_scaled__10TObjPlayerFv();
s32 spawn_effect__15TObjBoss2TunnelFiPvPv(void *, void *, void *, f32, f32);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
s32 rand();
extern RecoveredGlobal_8003A6F4_lbl_80435BD8 lbl_80435BD8;
extern M2C_UNK __vt__17TObjBoss2CeilJunk[];
extern s32 lbl_805D26E8;
extern const f32 lbl_805D856C;
extern const f32 lbl_805D859C;
extern const f32 lbl_805D85A0;
extern const f32 lbl_805D85A4;
extern const f32 lbl_805D85A8;
u8 *TObjBoss2CeilJunk__ct(struct RecoveredFields_8003A6F4_arg0 *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_ginja_object(s32);
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK TObjPlayer__sub_803E38FC(int);
extern s32 lbl_80435BC0[];
extern f32 lbl_80435BF0[];
extern Color_8003A1B4 lbl_80435C1C;
extern Holder_8003A1B4 *lbl_805D4BE8;
extern s32 lbl_805D4BEC;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8568;
extern const f32 lbl_805D856C;
extern const f32 lbl_805D8570;
void render__17TObjBoss2CeilJunkFv(Obj_8003A1B4 *self);
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
    new_var = lbl_805D8568 * t;
    s.y = lbl_805D856C;
    s.x = (s.z = new_var);
    TObjEneDD__sub_800B9D94(self->f44, self->f9C, 0, &s);
  }
  lbl_805D5660 = some_id_805c6f74;
  if (self->fB4 < lbl_805D856C)
  {
    some_id_805c6f74 = lbl_805D5660 | 0x8820;
    {
      Color_8003A1B4 c = lbl_80435C1C;
      c.a = lbl_805D8570 + self->fB4;
      set_chunk_material_color(&c);
    }
    set_chunk_material_override_pair(0xFF00, 0x800);
    TObjPlayer__sub_803E38FC(0x2500);
  }
  TObjPlayer__sub_803D9B2C();
  set_global_param__8TObjFishFi(lbl_805D4BEC);
  TOHangerMachine01__sub_803D9C00(self->pos);
  rotate_matrix_y(0, self->f60);
  rotate_matrix_x(0, self->f5C);
  draw_ginja_object(lbl_805D4BE8->mdls[lbl_80435BC0[self->fAC]].f8);
  pop_matrix();
  some_id_805c6f74 = lbl_805D5660;
  set_chunk_material_override_pair(0xFF00, 0);
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
    temp_f1 = lbl_805D85A4 * temp_f2;
    arg0->field_AC = (s32) (lbl_805D85A0 * temp_f1);
    if (spawn_effect__15TObjBoss2TunnelFiPvPv(&arg0->unknown_1C[0x1C], &arg0->unknown_1C[0x28], arg0->unknown_9C, temp_f1, temp_f2) == 0) {
        arg0->field_A8 = 0;
    } else {
        arg0->field_A8 = 2;
        arg0->field_54 = arg0->field_48 + M2C_FIELD(((u8 *)(&lbl_80435BD8.value) + (arg0->field_AC * 4)), f32 *, 0);
    }
    arg0->field_60 = calc_random_scaled__10TObjPlayerFv();
    arg0->field_5C = (s32) (lbl_805D85A8 * TTecZondeEff__sub_8002DF28());
    arg0->field_90 = lbl_805D859C;
    arg0->field_94 = lbl_805D859C;
    arg0->field_98 = lbl_805D859C;
    arg0->field_B0 = 0;
    arg0->field_B4 = lbl_805D856C;
    return (unsigned char *) (arg0);
}
#pragma pop

}
