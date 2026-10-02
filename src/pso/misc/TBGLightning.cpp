#include "pso/TBGLightning.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802AA0A4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};
struct Vtx_802A9D40 { f32 x, y, z, u, v; s32 c; };
struct Vec_802A9DF4 { f32 x, y, z; };
struct Obj_802A9DF4 {
    u8 pad0[0x1C];
    s8 f1c;
    s8 f1d;
    u8 pad1e[2];
    Vec_802A9DF4 pos;
    f32 f2c;
};
struct Vec_802A9F48 { f32 x, y, z; };
struct Obj_802A9F48 {
    u8 pad0[0x1C];
    s8 f1c;
    s8 f1d;
    u8 pad1e[2];
    Vec_802A9F48 pos;
    f32 f2c;
};

extern "C" {
void TBGLightningCtrl__sub_802A9A08(void);
void TParticleCtrl__sub_803DA7A8(s32);
void TParticleCtrl__sub_803E2B68(s32 arg0);
u32 __cvt_fp2unsigned(f32);
void fn_802A9D40(void *arg0, f32 *p, f32 *d, s32 c);
void reset_particles__13TParticleCtrlFv(void);
extern s32 lbl_8046FC8C[];
void fn_802A9DF4(Obj_802A9DF4 *self, Vec_802A9DF4 *dir);
void TBGLightningCtrl__sub_802A9A08(void);
void TParticleCtrl__sub_803DA7A8(s32);
void TParticleCtrl__sub_803E2B68(s32 arg0);
u32 __cvt_fp2unsigned(f32);
void fn_802A9D40(void *arg0, f32 *p, f32 *d, s32 c);
void reset_particles__13TParticleCtrlFv(void);
void fn_802A9F48(Obj_802A9F48 *self, Vec_802A9F48 *dir);
}

extern "C" {
void TParticleCtrl__sub_803E2A1C(void *, int);
extern const f32 lbl_805DE030;
extern const f32 lbl_805DE040;
void fn_802A9D40(void *arg0, f32 *p, f32 *d, s32 c);
void TBGLightningCtrl__sub_802A9A08(void);
void TParticleCtrl__sub_803DA7A8(s32);
void TParticleCtrl__sub_803E2B68(s32 arg0);
u32 __cvt_fp2unsigned(f32);
void reset_particles__13TParticleCtrlFv(void);
extern s32 lbl_8046FC8C[];
s32 get_state_flag__9TMainTaskFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern void *lbl_805D4DF0;
extern const f32 lbl_805DE060;
void render__12TBGLightningFv(s32 arg0);
u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBGLightning__sub_802AA164(s32 arg0, s32 arg1, f32 farg0);
struct VTBlob_802AA21C_802AA12C { void *slots[8]; };
void run_task__12TBGLightningFv(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32, s8, f32, f32);
M2C_UNK __ct__7TObjectFP7TObject(u8 *, void *);
M2C_UNK queue_destruction__7TObjectFv();
s32 rand();
extern const f64 lbl_8046FC98;
extern struct VTBlob_802AA21C_802AA12C __vt__12TBGLightning;
extern s32 lbl_805D3E38;
extern const f32 lbl_805DE038;
extern const f32 lbl_805DE064;

void fn_802A9D40(void *arg0, f32 *p, f32 *d, s32 c) {
    Vtx_802A9D40 r[4];
    f32 x;
    f32 lo;
    f32 yd;
    f32 hi;
    f32 z;
    f32 y;
    hi = lbl_805DE040;
    lo = lbl_805DE030;
    r[0].x = x = p[0]; r[0].y = y = p[1]; r[0].z = z = p[2]; r[0].u = hi; r[0].v = hi; r[0].c = c;
    r[1].x = x; r[1].y = yd = y + d[1]; r[1].z = z; r[1].u = hi; r[1].v = lo; r[1].c = c;
    r[2].x = x + d[0]; r[2].y = y; r[2].z = z + d[2]; r[2].u = lo; r[2].v = hi; r[2].c = c;
    r[3].x = x + d[0]; r[3].y = yd; r[3].z = z + d[2]; r[3].u = lo; r[3].v = lo; r[3].c = c;
    TParticleCtrl__sub_803E2A1C(r, 4);
}

#pragma push
#pragma fp_contract on

#pragma pop

#pragma push
#pragma fp_contract on
void fn_802A9DF4(Obj_802A9DF4 *self, Vec_802A9DF4 *dir) {
    Vec_802A9DF4 p;
    Vec_802A9DF4 d;
    f32 scale;
    s32 idx;
    f32 s;
    switch (self->f1d) {
    case 0:
        scale = 1.0f;
        idx = 0;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        scale = 1.0f;
        idx = self->f1d - 1;
        break;
    default:
        idx = 3;
        scale = 0.5f - 0.5f * (f32)(self->f1d - 5) / 7.0f;
        break;
    }
    d.x = dir->x * (64.0f * self->f2c);
    d.y = dir->y * (64.0f * self->f2c);
    d.z = dir->z * (64.0f * self->f2c);
    p.x = self->pos.x - 0.5f * d.x;
    p.y = self->pos.y - d.y;
    p.z = self->pos.z - 0.5f * d.z;
    TBGLightningCtrl__sub_802A9A08();
    TParticleCtrl__sub_803DA7A8(idx + lbl_8046FC8C[self->f1c]);
    TParticleCtrl__sub_803E2B68(1);
    fn_802A9D40((void *)(self), (f32 *)(&p), (f32 *)(&d), (s32)(__cvt_fp2unsigned(4278190080.0f * scale) | 0xFFFFFF));
    reset_particles__13TParticleCtrlFv();
}
#pragma pop

#pragma push
#pragma fp_contract on

#pragma pop

#pragma push
#pragma fp_contract on
void fn_802A9F48(Obj_802A9F48 *self, Vec_802A9F48 *dir) {
    Vec_802A9F48 p;
    Vec_802A9F48 d;
    f32 scale;
    switch (self->f1d) {
    case 0:
    case 2:
        scale = 0.5f;
        break;
    case 1:
    case 3:
        scale = 1.0f;
        break;
    default:
        scale = 0.5f - 0.5f * (f32)(self->f1d - 4) / 8.0f;
        break;
    }
    d.x = dir->x * (64.0f * self->f2c);
    d.y = dir->y * (64.0f * self->f2c);
    d.z = dir->z * (64.0f * self->f2c);
    p.x = self->pos.x + dir->x * (-3.0f * self->f2c) - 0.5f * d.x;
    p.y = self->pos.y + dir->y * (-24.0f * self->f2c) - d.y;
    p.z = self->pos.z + dir->z * (-3.0f * self->f2c) - 0.5f * d.z;
    TBGLightningCtrl__sub_802A9A08();
    TParticleCtrl__sub_803DA7A8(0);
    TParticleCtrl__sub_803E2B68(1);
    fn_802A9D40((void *)(self), (f32 *)(&p), (f32 *)(&d), (s32)(__cvt_fp2unsigned(4278190080.0f * scale) | 0xFFFFFF));
    reset_particles__13TParticleCtrlFv();
}
#pragma pop

void render__12TBGLightningFv(s32 arg0) {
    Stack_802AA0A4 stack;
    s32 temp_r31;
    if (get_state_flag__9TMainTaskFv() != 0) {
        temp_r31 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x194) + 0x4000;
        stack.sp8 = TBoss8Dragon__sub_803D64C0(temp_r31);
        stack.spC = lbl_805DE060;
        stack.sp10 = TBoss8Dragon__sub_803D64DC(temp_r31);
        begin_effect_render__13TParticleCtrlFv();
        init_xyz_limits__10TObjPlayerFv();
        ((M2C_UNK (*)(s32, f32 *))fn_802A9F48)(arg0, &stack.sp8);
        ((M2C_UNK (*)(s32, f32 *))fn_802A9DF4)(arg0, &stack.sp8);
        reset_transform_state__10TObjPlayerFv();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__12TBGLightningFv(void *arg0) {
    int temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x1D) + 1;
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r4;
    if ((s8) temp_r4 >= 0xC) {
        queue_destruction__7TObjectFv();
    }
}

u8 *TBGLightning__sub_802AA164(s32 arg0, s32 arg1, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x30));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__12TBGLightningFv((u8 *)(temp_r3), (void *)(arg0), (s32)(arg1), farg0));
    }
    return var_r0;
}

}

TBGLightning::~TBGLightning() {}

extern "C" {
u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    s8 temp_r5;

    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) &__vt__12TBGLightning;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E38;
    temp_f2 = (f32) rand();
    temp_f1 = lbl_805DE038 * temp_f2;
    temp_r5 = (s8) (lbl_805DE064 * temp_f1);
    M2C_FIELD(arg0, s8 *, 0x1C) = temp_r5;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2, temp_r5, temp_f1, temp_f2);
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    return arg0;
}

}
