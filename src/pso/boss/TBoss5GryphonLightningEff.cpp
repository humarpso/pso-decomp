#include "pso/TBoss5GryphonLightningEff.h"

TBoss5GryphonLightningEff::~TBoss5GryphonLightningEff() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80325248 { u8 b[0xC]; };

struct Obj_80325248 { u8 pad[0x38]; s32 n; u8 pad2[0xD8 - 0x3C]; Ent_80325248 ents[1]; };

struct Vec_8032537C { f32 x, y, z; };

struct Self_8032537C {
    s32 f0;
    char pad4[0x14];
    void *vt;
    Vec_8032537C v1c;
    Vec_8032537C v28;
    f32 f34;
    s32 n;
    Vec_8032537C pts[13];
    Vec_8032537C pts2[13];
    char pad174[0x25C - 0x174];
    s16 f25c;
    char pad25e[2];
    u8 f260;
};

extern "C" {
void spawn_particle_effect_with_flags(void *, s32, s32);
void run_task__12TTecZondeEffFv(void *);
s32 rand(void);
extern const f32 lbl_805DF5F4;
extern const f32 lbl_805DF5F8;
void run_task__25TBoss5GryphonLightningEffFv(Obj_80325248 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void TTecZondeEff__sub_8023D4A8(void *);
void __ct__12TTecZondeEffFv(void *, void *, s32, s32, f32);
void TBoss8Dragon__sub_8034D500(void *, void *, s32, void *, f32);
void TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK __vt__25TBoss5GryphonLightningEff[];
extern s32 lbl_805D4188;
extern const f32 lbl_805DF5E8;
extern const f32 lbl_805DF5FC;
Self_8032537C *__ct__25TBoss5GryphonLightningEffFv(Self_8032537C *self, void *parent, void *a, void *b, f32 x0, f32 x1, f32 scale);
}

extern "C" {

void TBoss5GryphonLightningEff__sub_80325064(void* p);
void render__25TBoss5GryphonLightningEffFv(void *arg0);
s32 TBoss5GryphonLightningEff__sub_80325070(void *, void *);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK TTecZondeEff__sub_8023CED4(void *, void *, void *, void *, void *);
M2C_UNK TTecZondeEff__sub_8023D128(void *, void *, void *, void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK draw_transformed_primitive__9TWindowDDFPvPvPvPv(void *, s32, s32, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_80141A30();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_1__Fv();

void TBoss5GryphonLightningEff__sub_80325064(void* p) { *(u8*)((char*)p + 0x260) = 1; }

extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__25TBoss5GryphonLightningEffFv(void *arg0) {
    char sp10C[0x270];
    char sp70[0x9C];
    char sp3C[0x34];
    char sp8[0x34];
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x10;
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    init_xyz_limits__10TObjPlayerFv();
    TTecZondeEff__sub_8023D128(arg0, sp70, sp3C, sp8);
    TTecZondeEff__sub_8023CED4(arg0, sp10C, sp70, sp3C, sp8);
    draw_transformed_primitive__9TWindowDDFPvPvPvPv(sp10C, M2C_FIELD(arg0, s32 *, 0x38) * 2, TBoss5GryphonLightningEff__sub_80325070(arg0, sp10C), 1);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x260) == 1) {
        TTecZondeEff__sub_8023CED4(arg0, sp10C, sp70, sp8, sp3C);
        draw_transformed_primitive__9TWindowDDFPvPvPvPv(sp10C, M2C_FIELD(arg0, s32 *, 0x38) * 2, TBoss5GryphonLightningEff__sub_80325070(arg0, sp10C), 1);
    }
    reset_transform_state__10TObjPlayerFv();
    end_effect_render__13TParticleCtrlFv();
    set_chunk_material_color(lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    fn_80141A30();
}
void run_task__25TBoss5GryphonLightningEffFv(Obj_80325248 *arg0) {
    run_task__12TTecZondeEffFv(arg0);
    if (lbl_805DF5F4 * (f32)rand() > lbl_805DF5F8) {
        s32 i = (f32)arg0->n * (lbl_805DF5F4 * (f32)rand());
        spawn_particle_effect_with_flags(&arg0->ents[i], 0x215, 0x40);
    }
    (*(s16 *)((u8 *)arg0 + 0x25C))++;
}
#pragma push
#pragma fp_contract on
Self_8032537C *__ct__25TBoss5GryphonLightningEffFv(Self_8032537C *self, void *parent, void *a, void *b, f32 x0, f32 x1, f32 scale) {
    Vec_8032537C v;
    f32 denom;
    s32 i;
    __ct__12TTecZondeEffFv(self, parent, 0x30000000, 4, scale);
    self->vt = __vt__25TBoss5GryphonLightningEff;
    self->f0 = lbl_805D4188;
    self->f260 = 0;
    self->f25c = 0;
    TBoss8Dragon__sub_8034D500(a, b, 0, &self->v1c, x0);
    TBoss8Dragon__sub_8034D500(a, b, 0, &self->v28, x1);
    TBoss6Type1__sub_803D9370(&self->v28, &self->v1c);
    self->f34 = update_scale__15TObjBoss2TunnelFPv(&self->v28);
    self->n = self->f34 * lbl_805DF5FC;
    self->n = self->n + 1;
    if (self->n < 2) {
        self->n = 2;
    }
    if (self->n > 13) {
        self->n = 13;
    }
    denom = (f32)(self->n - 1);
    x1 -= x0;
    for (i = 0; i < self->n; i++) {
        TBoss8Dragon__sub_8034D500(a, b, 0, &self->pts[i], x0 + x1 * ((f32)i / denom));
    }
    self->f34 = lbl_805DF5E8;
    for (i = 0; (f32)i < denom; i++) {
        VecCopy__FP3VecPC3Vec(&v, &self->pts[i]);
        TBoss6Type1__sub_803D9370(&v, &self->pts[i + 1]);
        self->f34 += update_scale__15TObjBoss2TunnelFPv(&v);
    }
    TTecZondeEff__sub_8023D4A8(self);
    for (i = 0; i < self->n; i++) {
        VecCopy__FP3VecPC3Vec(&self->pts2[i], &self->pts[i]);
    }
    return self;
}
#pragma pop

}
