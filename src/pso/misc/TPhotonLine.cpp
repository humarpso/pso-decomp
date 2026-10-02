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

struct Flags_801ACB14 {
    u8 pad0[0x18];
    u32 f18;
};

struct Line_801ACB14 {
    u8 pad0[0x38];
    Vec_801ACD14 pos;
    u8 pad44[0xA4 - 0x44];
    Flags_801ACB14 *fA4;
    u8 padA8[0x2FC - 0xA8];
    Vec_801ACD14 f2FC;
    u8 pad308[0x334 - 0x308];
    Vec_801ACD14 vel;
    u8 pad340[4];
    f32 f344;
    u8 pad348[0x354 - 0x348];
    u16 ids[10];
    u16 count;
};

extern "C" {
void TObjPlayer__sub_80019038(void *, void *);
Vec_801ACD14 *VecCopy__FP3VecPC3Vec(Vec_801ACD14 *, const Vec_801ACD14 *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void *find_entity_by_id(u16);
void refresh_collision_body_centers(void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
extern u8 lbl_804C37D8[];
extern M2C_UNK __vt__11TPhotonLine[];
extern s32 lbl_805D3500;
Line_801ACD14 *TPhotonLine__ct(Line_801ACD14 *self, Params_801ACD14 *p, void *parent, u16 arg3);
s32 check_path_obstructed(void *, Vec_801ACD14 *);
Vec_801ACD14 *VecCopy__FP3VecPC3Vec(Vec_801ACD14 *, const Vec_801ACD14 *);
u16 obj_getField1c(void *);
void queue_destruction__7TObjectFv(void *);
u8 *get_battle_param__10TObjPlayerFi(s32);
s32 spawn_particle_effect(void *, s32);
void init_all_slots__10TObjPlayerFv(void);
void mark_enemy_body_contacts(void *);
void queue_photon_blast_hit(s32, s32, s32, f32);
void TBoss4Zako__sub_803D8910(Vec_801ACD14 *, Vec_801ACD14 *);
extern const f32 lbl_805DC1D8;
void run_task__11TPhotonLineFv(Line_801ACB14 *self);
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

void run_task__11TPhotonLineFv(Line_801ACB14 *self) {
    Vec_801ACD14 v = self->pos;
    s32 i;
    u8 *p;
    s32 j;
    TBoss4Zako__sub_803D8910(&v, &self->vel);
    VecCopy__FP3VecPC3Vec(&self->f2FC, &self->pos);
    self->f2FC.y += lbl_805DC1D8;
    v.y += lbl_805DC1D8;
    if (check_path_obstructed(self, &v) == 1) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    init_all_slots__10TObjPlayerFv();
    mark_enemy_body_contacts(self);
    if (self->fA4->f18 & 0x100000) {
        for (i = 0; i < 16; i++) {
            p = get_battle_param__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            for (j = 0; j < self->count; j++) {
                if (self->ids[j] == obj_getField1c(p)) {
                    break;
                }
            }
            if (j == self->count) {
                self->ids[self->count++] = obj_getField1c(p);
                if ((s32)self->count >= 9) {
                    break;
                }
                queue_photon_blast_hit(obj_getField1c(p), 1, 0, self->f344);
                spawn_particle_effect(p + 0x38, 0x162);
                spawn_particle_effect(p + 0x38, 0x163);
            }
        }
    }
    self->pos.x += self->vel.x;
    self->pos.z += self->vel.z;
}

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
    refresh_collision_body_centers(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    for (i = 0; i < 10; i++) {
        self->f354[i] = 0xFFFF;
    }
    self->f368 = 0;
    return self;
}

}
