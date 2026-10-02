#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_801ACD14 { f32 x, y, z; } Vec_801ACD14;

struct Params_801ACD14 {
    Vec_801ACD14 pos;
    Vec_801ACD14 dir;
    f32 scale;
    f32 f1C;
};

struct Line_801ACD14 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x38 - 0x1C];
    Vec_801ACD14 f38;
    u8 pad44[0x50 - 0x44];
    Vec_801ACD14 f50;
    u8 pad5C[0x334 - 0x5C];
    Vec_801ACD14 f334;
    u8 pad340[4];
    f32 f344;
    u8 pad348[0x350 - 0x348];
    void *f350;
    u16 f354[10];
    s16 f368;
};

extern "C" {
void TObjPlayer__sub_80019038(void *, void *);
Vec_801ACD14 *VecCopy__FP3VecPC3Vec(Vec_801ACD14 *, const Vec_801ACD14 *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void *find_entity_by_id(u16);
void TObjPlayer__sub_80154E3C(void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
extern u8 lbl_804C37D8[];
extern M2C_UNK __vt__11TPhotonLine[];
extern s32 lbl_805D3500;
Line_801ACD14 *TPhotonLine__ct(Line_801ACD14 *self, Params_801ACD14 *p, void *parent, u16 arg3);
}

extern "C" {

void *__dt__11TPhotonLineFv(void *arg0, s16 arg1);
void render__11TPhotonLineFv(void);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
int begin_effect_render__13TParticleCtrlFv(void);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
int end_effect_render__13TParticleCtrlFv(void);

void render__11TPhotonLineFv(void) { begin_effect_render__13TParticleCtrlFv(); end_effect_render__13TParticleCtrlFv(); }

extern M2C_UNK __vt__11TPhotonLine[];

void *__dt__11TPhotonLineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TPhotonLine;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Line_801ACD14 *TPhotonLine__ct(Line_801ACD14 *self, Params_801ACD14 *p, void *parent, u16 arg3) {
    s32 i;
    TObjPlayer__sub_80019038(self, parent);
    self->vt18 = ((s32 *)&__vt__11TPhotonLine);
    self->f0 = lbl_805D3500;
    VecCopy__FP3VecPC3Vec(&self->f50, VecCopy__FP3VecPC3Vec(&self->f38, &p->pos));
    VecCopy__FP3VecPC3Vec(&self->f334, &p->dir);
    self->f334.x *= p->scale;
    self->f334.y *= p->scale;
    self->f334.z *= p->scale;
    self->f344 = p->f1C;
    self->f350 = find_entity_by_id(arg3);
    TObjEneGibbles__sub_80156780(self, lbl_804C37D8, 1);
    TObjPlayer__sub_80154E3C(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    for (i = 0; i < 10; i++) {
        self->f354[i] = 0xFFFF;
    }
    self->f368 = 0;
    return self;
}

}
