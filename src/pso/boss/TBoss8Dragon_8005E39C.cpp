#include "types.h"
struct Obj_8005E4D4 { u8 pad[0x734]; void *parts[16]; };

struct Obj_8005E52C { u8 pad[0x734]; void *parts[16]; };

struct Vec_8005E39C { f32 x, y, z; };

struct IVec_8005E39C { s32 x, y, z; };

struct Res_8005E39C { u8 pad[0x18]; s32 f18; s32 f1C; s32 f20; };

struct Obj_8005E39C {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x444 - 0x64];
    Vec_8005E39C pos;
    u8 pad450[0x5F0 - 0x450];
    Res_8005E39C *res;
    u8 pad5F4[0x724 - 0x5F4];
    void *eff[3];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void enable__13TParticleCtrlFPv(void *);
extern u8 lbl_804882B0[];
void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self);
void *spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805D8D8C;
void TBoss8Dragon__sub_8005E39C(Obj_8005E39C *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005E39C(Obj_8005E39C *self) {
    Vec_8005E39C pos;
    IVec_8005E39C rot;
    pos.x = lbl_805D8D8C * TBoss8Dragon__sub_803D64C0(self->ang) + self->pos.x;
    pos.y = self->pos.y;
    pos.z = lbl_805D8D8C * TBoss8Dragon__sub_803D64DC(self->ang) + self->pos.z;
    rot.x = 0;
    rot.y = self->ang;
    rot.x = 0x4000;
    if (self->eff[0] == NULL) {
        self->eff[0] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f18, 0x2040);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[0], &rot);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[0], &pos);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[0], &rot);
    }
    if (self->eff[1] == NULL) {
        self->eff[1] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f1C, 0x40);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[1], &pos);
    }
    if (self->eff[2] == NULL) {
        self->eff[2] = spawn_continuous_particle_effect_with_flags(&pos, self->res->f20, 0x40);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[2], &rot);
    } else {
        copy_pos__11TNowLoadingFPvPv(self->eff[2], &pos);
        copy_vec3__11TBoss4Type2FPvPv(self->eff[2], &rot);
    }
}
#pragma pop

void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self) {
    s32 i;
    for (i = 15; i >= 0; i--) {
        if (self->parts[i] != 0) {
            queue_destruction__7TObjectFv(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}
void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (self->parts[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(self->parts[i], lbl_804882B0);
            enable__13TParticleCtrlFPv(self->parts[i]);
        }
    }
}

}
