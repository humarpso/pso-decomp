#include "pso/TTecZondeEff.h"

TTecZondeEff::~TTecZondeEff() {}

#include "types.h"
#include "pso/TObject.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TWindowDD.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8023D988___vt__12TTecZondeEff {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8023DADC___vt__12TTecZondeEff {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8023DA10___vt__12TTecZondeEff {
    s32 value;
    u8 remaining[0x14];
};

struct P_8023DBB4 { void *vt; s32 n; u8 pad[4]; };

struct C_8023DBB4 { s32 v; };

struct B_8023DBB4 { u8 pad[0xc]; C_8023DBB4 *c; };

struct A_8023DBB4 { u8 pad[0xc8]; B_8023DBB4 *b; };

struct Rec_8023D4A8 { f32 a, b, c; };

struct Obj_8023D4A8 {
    u8 pad0[0x38];
    s32 count;
    u8 pad3c[0x174 - 0x3C];
    Rec_8023D4A8 recs[1];
    u8 pad180[0x210 - 0x180];
    f32 w[1];
};

struct Rec_8023D568 { f32 x, y, z; };

struct Obj_8023D568 {
    u8 pad0[0x1C];
    Rec_8023D568 a;
    Rec_8023D568 d;
    f32 len;
    s32 count;
    Rec_8023D568 pts[1];
};

struct C_8023D7A0 { s32 v; };

struct B_8023D7A0 { u8 pad[0xc]; C_8023D7A0 *c; };

struct E_8023D7A0 { u8 pad[8]; B_8023D7A0 *b; };

struct V_8023D7A0 { f32 x, y, z; };

struct Zonde_8023D7A0 {
    u8 pad0[0x38];
    s32 count;
    V_8023D7A0 base[(0xD8 - 0x3C) / 12];
    V_8023D7A0 pos[(0x174 - 0xD8) / 12];
    V_8023D7A0 dir[(0x210 - 0x174) / 12];
    f32 w[(0x248 - 0x210) / 4];
    s32 timer;
    u32 power;
    s32 idx;
    u32 decay;
    s32 start;
    u8 pad25c[2];
    s16 active;
};

struct Zonde_8023D6B0 {
    u8 pad[0x38];
    s32 count;
    u8 pad3c[0x25e - 0x3c];
    s16 active;
};

struct Vec_8023D128
{
  f32 x;
  f32 y;
  f32 z;
};

struct Cam_8023D128
{
  u8 pad0[8];
  f32 cx;
  f32 cy;
  u8 pad10[8];
  f32 sx;
  f32 sy;
};

struct Obj_8023D128
{
  u8 pad0[0x38];
  s32 count;
  u8 pad3c[0xD8 - 0x3C];
  Vec_8023D128 pts[16];
  u8 pad198[0x244 - 0x198];
  f32 f244;
};

struct Vec_8023CED4
{
  f32 x;
  f32 y;
  f32 z;
};

struct Vtx_8023CED4
{
  f32 x;
  f32 y;
  f32 z;
  f32 u;
  f32 v;
  u32 color;
};

struct Obj_8023CED4
{
  u8 pad0[0x38];
  s32 count;
  u8 pad3C[0x24C - 0x3C];
  u32 color;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8023D988___vt__12TTecZondeEff __vt__12TTecZondeEff;
extern s32 TTecZondeEff_class_name;
u8 *__ct__12TTecZondeEffFv(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, f32 farg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8023D988___vt__12TTecZondeEff __vt__12TTecZondeEff;
extern s32 TTecZondeEff_class_name;
extern const f32 TTecZondeEff__data_805DC994;
u8 *construct__12TTecZondeEffFPvPvPvPvf(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 farg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8023D988___vt__12TTecZondeEff __vt__12TTecZondeEff;
extern s32 TTecZondeEff_class_name;
u8 *construct_bolt_effect__9TTecZondeFPvPvPvPviiff(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
extern P_8023DBB4 tec_zonde_effect_task_list;
extern char lbl_804CC8C8[];
extern A_8023DBB4 *shared_effect_texture_list[];
extern s32 TTecZondeEff__beam_vertex_data;
f32 rand_signed_unit();
void calc_lightning_scatter_direction(void *, s32, void *);
extern const f32 TTecZondeEff__data_805DC990;
extern const f32 lbl_805DC9A4;
void randomize_bolt_jitter__12TTecZondeEffFPv(Obj_8023D4A8 *arg0);
s32 is_split_screen(void);
void spawn_particle_effect(Rec_8023D568 *, s32);
void queue_destruction__7TObjectFv(void *);
extern P_8023DBB4 tec_zonde_effect_task_list;
extern s32 TTecZondeEff__beam_vertex_data;
extern const f32 TTecZondeEff__data_805DC990;
void set_depth_buffer_settings_1__Fv();
void restore_saved_depth_alpha_state();
void set_chunk_material_color(f32 *argb);
extern f32 chunk_material_color_half_alpha_f32[];
extern u32 lbl_805D5660;
extern s32 TTecZondeEff__beam_vertex_data;
extern u32 model_render_flags;
void matrix_mult_vec(s32, Vec_8023D128 *, Vec_8023D128 *);
extern Cam_8023D128 lbl_8058D4F8;
extern const f32 TTecZondeEff__data_805DC994;
extern const f32 lbl_805DC998;
extern const f32 lbl_805DC99C;
s32 project_lightning_points(Obj_8023D128 *self, Vec_8023D128 *out, f32 *a, f32 *b);
f32 newton_sqrtf(f32);
extern const f32 TTecZondeEff__data_805DC994;
s32 build_lightning_strip__12TTecZondeEffFPvPvPfPf(Obj_8023CED4 *self, Vtx_8023CED4 *out, Vec_8023CED4 *pts, f32 *widths, f32 *heights);
}

extern "C" {

void clear_zonde_beam_vertex_pointer(void);
f32 fabs_float(f32);

struct Vec_8023D294 { f32 x, y, z; };
struct Obj_8023D294 { u8 pad[0x28]; Vec_8023D294 d; };

extern "C" {

f32 rand_signed_unit();
extern const f32 TTecZondeEff__data_805DC994;
extern const f32 lbl_805DC9A0;

#pragma push
#pragma fp_contract on
typedef struct Cam_8023D128 Cam_8023D128;
typedef struct Obj_8023D128 Obj_8023D128;
typedef struct Vec_8023D128 Vec_8023D128;

typedef struct Obj_8023CED4 Obj_8023CED4;
typedef struct Vec_8023CED4 Vec_8023CED4;
typedef struct Vtx_8023CED4 Vtx_8023CED4;
#pragma fp_contract on
s32 TTecZondeEff::build_lightning_strip(void *out_arg, void *pts_arg, f32 *widths, f32 *heights) {
    Vtx_8023CED4 *out = (Vtx_8023CED4 *)out_arg;
    Vec_8023CED4 *pts = (Vec_8023CED4 *)pts_arg;
  f32 px;
  f32 py;
  f32 pz;
  f32 nx;
  f32 ny;
  f32 dx;
  f32 dy;
  f32 v;
  f32 inv;
  f32 ox;
  f32 oy;
  u32 color;
  Vtx_8023CED4 *o;
  Vec_8023CED4 *p;
  s32 i;
  v = TTecZondeEff__data_805DC990;
  px = pts->x;
  py = pts->y;
  pz = pts->z;
  color = 0xFFFFFF | ((Obj_8023CED4 *)this)->color;
  p = pts + 1;
  o = out;
  for (i = 0; i < (((Obj_8023CED4 *)this)->count - 1); i++)
  {
    ny = p->y;
    nx = p->x;
    dy = ny - py;
    dx = nx - px;
    if (((dx * dx) + (dy * dy)) == TTecZondeEff__data_805DC990)
    {
      return 0;
    }
    inv = TTecZondeEff__data_805DC994 / newton_sqrtf((dx * dx) + (dy * dy));
    dx *= inv;
    p->z = p->z;
    dy *= inv;
    ox = TTecZondeEff__data_805DC994 * (dy * widths[i]);
    oy = TTecZondeEff__data_805DC994 * ((-dx) * heights[i]);
    o[0].x = px + ox;
    o[0].y = py + oy;
    o[0].z = pz;
    o[0].u = TTecZondeEff__data_805DC990;
    o[0].v = v;
    o[0].color = color;
    o[1].x = px - ox;
    o[1].y = py - oy;
    o[1].z = pz;
    o[1].u = TTecZondeEff__data_805DC994;
    o[1].v = v;
    v += TTecZondeEff__data_805DC994;
    o[1].color = color;
    o += 2;
    px = nx;
    py = ny;
    pz = p->z;
    p++;
  }
  ox = TTecZondeEff__data_805DC994 * (dy * widths[((Obj_8023CED4 *)this)->count - 1]);
  oy = TTecZondeEff__data_805DC994 * ((-dx) * heights[((Obj_8023CED4 *)this)->count - 1]);
  o[0].x = px + ox;
  o[0].y = py + oy;
  o[0].z = pz;
  o[0].u = TTecZondeEff__data_805DC990;
  o[0].v = v;
  o[0].color = color;
  o[1].x = px - ox;
  o[1].y = py - oy;
  o[1].z = pz;
  o[1].u = TTecZondeEff__data_805DC994;
  o[1].v = v;
  o[1].color = color;
  return 1;
}

s32 project_lightning_points(Obj_8023D128 *self, Vec_8023D128 *out, f32 *a, f32 *b) {
  f32 sy0;
  f32 sx0;
  f32 cx;
  f32 cy;
  s32 i;
  sy0 = lbl_8058D4F8.sx;
  sx0 = lbl_8058D4F8.sx * (lbl_805DC998 / (lbl_805DC998 * lbl_8058D4F8.sy));
  cx = lbl_8058D4F8.cx;
  cy = lbl_8058D4F8.cy;
  for (i = 0; i < self->count; i++)
  {
    Vec_8023D128 v;
    f32 w;
    f32 sx;
    f32 sy;
    matrix_mult_vec(0, &self->pts[i], &v);
    if (v.z >= TTecZondeEff__data_805DC994)
    {
      self->f244 = self->f244;
      v.z = TTecZondeEff__data_805DC994;
    }
    w = TTecZondeEff__data_805DC994 / (-v.z);
    v.y = -v.y;
    sx = sx0 * w;
    sy = sy0 * w;
    out[i].x = (v.x * sx) + cx;
    out[i].y = (v.y * sy) + cy;
    out[i].z = w;
    a[i] = sx * self->f244;
    b[i] = lbl_805DC99C * sy;
  }
  return 1;
}
#pragma pop

#pragma push
#pragma fp_contract on
void calc_lightning_scatter_direction(void *arg0, s32 axis, void *arg2) {
    Obj_8023D294 *o = (Obj_8023D294 *)arg0;
    Vec_8023D294 *out = (Vec_8023D294 *)arg2;

    switch (axis) {
    case 0: {
        f32 a, inv, q, p, b;
        inv = TTecZondeEff__data_805DC994 / o->d.x;
        p = o->d.y;
        q = o->d.z;
        a = lbl_805DC9A0 * rand_signed_unit();
        b = lbl_805DC9A0 * rand_signed_unit();
        out->y = a;
        out->z = b;
        out->x = inv * (a * p + b * q);
        ((TObjBoss2Tunnel *)out)->update_scale();
        break;
    }
    case 1: {
        f32 a, inv, q, p, b;
        inv = TTecZondeEff__data_805DC994 / o->d.y;
        p = o->d.z;
        q = o->d.x;
        a = lbl_805DC9A0 * rand_signed_unit();
        b = lbl_805DC9A0 * rand_signed_unit();
        out->z = a;
        out->x = b;
        out->y = inv * (a * p + b * q);
        ((TObjBoss2Tunnel *)out)->update_scale();
        break;
    }
    case 2: {
        f32 a, inv, q, p, b;
        inv = TTecZondeEff__data_805DC994 / o->d.z;
        p = o->d.x;
        q = o->d.y;
        a = lbl_805DC9A0 * rand_signed_unit();
        b = lbl_805DC9A0 * rand_signed_unit();
        out->x = a;
        out->y = b;
        out->z = inv * (a * p + b * q);
        ((TObjBoss2Tunnel *)out)->update_scale();
        break;
    }
    }
}
#pragma pop

}

s32 TTecZondeEff::calc_dominant_axis() {
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fabs_float(*(f32 *)((s8 *)this + 0x28));
    temp_f31 = fabs_float(*(f32 *)((s8 *)this + 0x2C));
    temp_f1 = fabs_float(*(f32 *)((s8 *)this + 0x30));
    if (temp_f30 > temp_f31) {
        if (temp_f30 > temp_f1) {
            return 0;
        }
        return 2;
    }
    if (temp_f31 > temp_f1) {
        return 1;
    }
    return 2;
}

extern s32 TTecZondeEff__beam_vertex_data;

typedef char RecoveredGlobal_8023D988___vt__12TTecZondeEff_size[sizeof(RecoveredGlobal_8023D988___vt__12TTecZondeEff) == 0x18 ? 1 : -1];

void randomize_bolt_jitter__12TTecZondeEffFPv(Obj_8023D4A8 *arg0) {
    Rec_8023D4A8 *p;
    s32 axis;
    s32 i;
    f32 k;
    axis = ((TTecZondeEff *)arg0)->calc_dominant_axis();
    p = arg0->recs;
    for (i = 0; i < arg0->count; i++, p++) {
        calc_lightning_scatter_direction(arg0, axis, p);
    }
    k = lbl_805DC9A4;
    for (i = 1; i < arg0->count - 1; i++) {
        arg0->w[i] = k * rand_signed_unit();
    }
    arg0->w[0] = TTecZondeEff__data_805DC990;
    arg0->w[arg0->count - 1] = TTecZondeEff__data_805DC990;
}

#pragma push
#pragma fp_contract on
void TTecZondeEff::init_bolt_points() {
    Obj_8023D568 *o = (Obj_8023D568 *)this;
    f32 x0 = o->a.x;
    f32 y0 = o->a.y;
    f32 z0 = o->a.z;
    f32 dx = o->d.x;
    f32 dy = o->d.y;
    f32 dz = o->d.z;
    s32 i;
    for (i = 0; i < o->count; i++) {
        f32 t = (o->len * (f32)i) / (f32)(o->count - 1);
        o->pts[i].x = dx * t + x0;
        o->pts[i].y = dy * t + y0;
        o->pts[i].z = dz * t + z0;
        if (is_split_screen() == 0) {
            spawn_particle_effect(&o->pts[i], 0x1F0);
        }
    }
}
#pragma pop

void TTecZondeEff::render() {
    Zonde_8023D6B0 *self = (Zonde_8023D6B0 *)this;
    u32 verts[0x270 / 4];
    u32 m70[0x9c / 4];
    u32 m3c[0x34 / 4];
    u32 m8[0x34 / 4];
    u32 id;
    if (self->active == 0 || TOKeyMachine01::get_global_state() == 0 || TOKeyMachine01::get_global_state() == 0xF) {
        return;
    }
    if (((TObject *)self)->all_parents_unqueued_for_destruction() == 0) {
        return;
    }
    id = model_render_flags;
    lbl_805D5660 = id;
    model_render_flags = id | 0x10;
    TParticleCtrl::begin_effect_render();
    set_depth_buffer_settings_1__Fv();
    if (project_lightning_points((Obj_8023D128 *)(self), (Vec_8023D128 *)(m70), (f32 *)(m3c), (f32 *)(m8)) != 0 && build_lightning_strip__12TTecZondeEffFPvPvPfPf((Obj_8023CED4 *)(self), (Vtx_8023CED4 *)(verts), (Vec_8023CED4 *)(m70), (f32 *)(m3c), (f32 *)(m8)) != 0) {
        TObjPlayer::init_xyz_limits();
        ((TWindowDD *)verts)->draw_transformed_primitive((void*)(self->count * 2), (void*)TTecZondeEff__beam_vertex_data, (void*)1);
        TObjPlayer::reset_transform_state();
    }
    TParticleCtrl::end_effect_render();
    set_chunk_material_color(chunk_material_color_half_alpha_f32);
    model_render_flags = lbl_805D5660;
    restore_saved_depth_alpha_state();
}

#pragma push
#pragma fp_contract on
void TTecZondeEff::run_task() {
    Zonde_8023D7A0 *arg0 = (Zonde_8023D7A0 *)this;
    s32 i;
    f32 s;
    E_8023D7A0 *e;
    e = (E_8023D7A0 *)tec_zonde_effect_task_list.vt;
    e += arg0->idx;
    TTecZondeEff__beam_vertex_data = e->b->c->v;
    if (arg0->timer > 0x78) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    for (i = 0; i < arg0->count; i++) {
        arg0->w[i] -= 0.05f;
        if (arg0->w[i] <= 1.0f) {
            arg0->w[i] = 1.0f;
        }
    }
    for (i = 0; i < arg0->count; i++) {
        s = arg0->w[i];
        arg0->pos[i].x = arg0->dir[i].x * s + arg0->base[i].x;
        arg0->pos[i].y = arg0->dir[i].y * s + arg0->base[i].y;
        arg0->pos[i].z = arg0->dir[i].z * s + arg0->base[i].z;
    }
    arg0->active = 1;
    if (arg0->timer > arg0->start) {
        if (arg0->power > arg0->decay) {
            arg0->power -= arg0->decay;
            if ((f32)arg0->power <= TTecZondeEff__data_805DC990) {
                arg0->power = 0;
            }
        } else {
            arg0->power = 0;
            arg0->timer = 0x79;
        }
    }
    arg0->timer++;
}
#pragma pop

u8 *__ct__12TTecZondeEffFv(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__12TTecZondeEff.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TTecZondeEff_class_name;
    *(f32 *)((s8 *)arg0 + 0x244) = farg0;
    *(s32 *)((s8 *)arg0 + 0x254) = arg2;
    *(s32 *)((s8 *)arg0 + 0x258) = arg3;
    *(s32 *)((s8 *)arg0 + 0x250) = 0;
    *(s16 *)((s8 *)arg0 + 0x25C) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0xD;
    *(s32 *)((s8 *)arg0 + 0x248) = 0;
    *(s32 *)((s8 *)arg0 + 0x24C) = 0xFF000000;
    *(s16 *)((s8 *)arg0 + 0x25E) = 0;
    return arg0;
}

typedef char RecoveredGlobal_8023DADC___vt__12TTecZondeEff_size[sizeof(RecoveredGlobal_8023DADC___vt__12TTecZondeEff) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8023DA10___vt__12TTecZondeEff_size[sizeof(RecoveredGlobal_8023DA10___vt__12TTecZondeEff) == 0x18 ? 1 : -1];
u8 *construct_bolt_effect__9TTecZondeFPvPvPvPviiff(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8023DA10___vt__12TTecZondeEff *)&__vt__12TTecZondeEff).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TTecZondeEff_class_name;
    *(f32 *)((s8 *)arg0 + 0x244) = farg1;
    *(s32 *)((s8 *)arg0 + 0x254) = arg4;
    *(s32 *)((s8 *)arg0 + 0x258) = arg5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    *(f32 *)((s8 *)arg0 + 0x34) = farg0;
    *(s32 *)((s8 *)arg0 + 0x250) = 0;
    *(s16 *)((s8 *)arg0 + 0x25C) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0xD;
    ((TTecZondeEff *)arg0)->init_bolt_points();
    randomize_bolt_jitter__12TTecZondeEffFPv((Obj_8023D4A8 *)(arg0));
    *(s32 *)((s8 *)arg0 + 0x248) = 0;
    *(s32 *)((s8 *)arg0 + 0x24C) = 0xFF000000;
    *(s16 *)((s8 *)arg0 + 0x25E) = 0;
    return arg0;
}

u8 *construct__12TTecZondeEffFPvPvPvPvf(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8023DADC___vt__12TTecZondeEff *)&__vt__12TTecZondeEff).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TTecZondeEff_class_name;
    *(f32 *)((s8 *)arg0 + 0x244) = (f32) TTecZondeEff__data_805DC994;
    *(s32 *)((s8 *)arg0 + 0x254) = 0x08000000;
    *(s32 *)((s8 *)arg0 + 0x258) = 0x14;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    *(f32 *)((s8 *)arg0 + 0x34) = farg0;
    *(s32 *)((s8 *)arg0 + 0x250) = 0;
    *(s16 *)((s8 *)arg0 + 0x25C) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0xD;
    ((TTecZondeEff *)arg0)->init_bolt_points();
    randomize_bolt_jitter__12TTecZondeEffFPv((Obj_8023D4A8 *)(arg0));
    *(s32 *)((s8 *)arg0 + 0x248) = 0;
    *(s32 *)((s8 *)arg0 + 0x24C) = 0xFF000000;
    *(s16 *)((s8 *)arg0 + 0x25E) = 0;
    return arg0;
}

void clear_zonde_beam_vertex_pointer(void) {
    TTecZondeEff__beam_vertex_data = 0;
}
void TTecZondeEff::init_resources() {
    tec_zonde_effect_task_list.vt = lbl_804CC8C8;
    tec_zonde_effect_task_list.n = 0x10;
    TTecZondeEff__beam_vertex_data = shared_effect_texture_list[0]->b->c->v;
}

}
