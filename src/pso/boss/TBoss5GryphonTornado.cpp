#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_80355570 { f32 x, y, z; };

struct Inner_80355570 { u8 pad[4]; f32 f4; };

struct Res_80355570 { u8 pad[4]; Inner_80355570 *inner; };

struct Tornado_80355570 {
    u8 pad0[0x1C];
    s32 state;
    s32 timer;
    u8 pad24[0x28 - 0x24];
    Vec_80355570 pos;
    f32 f34;
    f32 f38;
    f32 f3C;
    u8 pad40[0x4C - 0x40];
    s32 f4C;
    void *p50;
    void *p54;
    void *p58;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__20TBoss5GryphonTornado[];
extern s32 lbl_805D4398;
extern const f32 lbl_805DFFA8;
u8 *TBoss5GryphonTornado__ct(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, s16 arg4);
void queue_destruction__7TObjectFv(void *);
s32 TObjFish__sub_8001ED9C(s32, s32);
s32 get_bml_model(s32, s32);
s32 get_flag_bit6__12TBoss8DragonFPv(s32);
void TBoss8Dragon__sub_800640A4(s32, Vec_80355570 *);
s32 get_instance_count__12TBoss8DragonFv();
void attach_particle_model(void *, s32, s32, s32, s32, f32);
Res_80355570 *csnVecterUnder(Vec_80355570 *, s32);
void *spawn_continuous_particle_effect_with_flags(Vec_80355570 *, s32, s32);
void copy_pos__11TNowLoadingFPvPv(void *, Vec_80355570 *);
void enable__13TParticleCtrlFPv(void *);
void add_radar_scaled_marker(Vec_80355570 *, s32, s32, s32, f32);
void play_persistent_sound(s32, void *, Vec_80355570 *, s32, s32);
void fn_803554F0(void *, Vec_80355570 *);
extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern s32 *lbl_805D6F10;
extern const f32 lbl_805D8D48;
extern const f32 lbl_805DFFAC;
extern const f32 lbl_805DFFB0;
extern const f32 lbl_805DFFB4;
extern const f32 lbl_805DFFB8;
void run_task__20TBoss5GryphonTornadoFv(Tornado_80355570 *o);
}

extern "C" {

void *__dt__20TBoss5GryphonTornadoFv(void *arg0, s16 arg1);
void render__20TBoss5GryphonTornadoFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__20TBoss5GryphonTornadoFv(void) {  }

extern M2C_UNK __vt__20TBoss5GryphonTornado[];

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void run_task__20TBoss5GryphonTornadoFv(Tornado_80355570 *o) {
    Vec_80355570 v;
    Res_80355570 *r;
    f32 h;
    if (get_flag_bit6__12TBoss8DragonFPv(o->f4C) != 0) {
        queue_destruction__7TObjectFv(o);
        return;
    }
    switch (o->state) {
    case 0:
        o->state = 1;
    case 1:
        o->pos.y = lbl_805D8D48;
        r = csnVecterUnder(&o->pos, 0x16EF);
        if (r == NULL) {
            queue_destruction__7TObjectFv(o);
            return;
        }
        h = r->inner->f4;
        if (h > lbl_805D8D48) {
            o->pos.y = lbl_805D8D48;
        } else {
            o->pos.y = h;
        }
        if (o->p50 == NULL) {
            o->p50 = spawn_continuous_particle_effect_with_flags(&o->pos, lbl_805D6F10[0], 0x40);
        }
        if (o->p54 == NULL) {
            o->p54 = spawn_continuous_particle_effect_with_flags(&o->pos, lbl_805D6F10[1], 0x40);
            if (o->p54 != NULL) {
                attach_particle_model(o->p54, get_bml_model(lbl_805D4DA4, 0), lbl_805D4DA8, TObjFish__sub_8001ED9C(lbl_805D4DA4, 0), 0, lbl_805DFFAC);
            }
        }
        if (o->p58 == NULL) {
            o->p58 = spawn_continuous_particle_effect_with_flags(&o->pos, lbl_805D6F10[2], 0x40);
        }
        if (o->p50 != NULL) {
            copy_pos__11TNowLoadingFPvPv(o->p50, &o->pos);
        }
        if (o->p54 != NULL) {
            copy_pos__11TNowLoadingFPvPv(o->p54, &o->pos);
        }
        if (o->p58 != NULL) {
            copy_pos__11TNowLoadingFPvPv(o->p58, &o->pos);
        }
        if (o->timer > 0x168) {
            o->state = 2;
            o->timer = 0;
        }
        TBoss8Dragon__sub_800640A4(get_instance_count__12TBoss8DragonFv(), &o->pos);
        fn_803554F0(o, &v);
        o->f34 = lbl_805DFFB0 * v.x + o->f34;
        o->f3C = lbl_805DFFB0 * v.z + o->f3C;
        o->f34 *= lbl_805DFFB4;
        o->f3C *= lbl_805DFFB4;
        o->pos.x += o->f34;
        o->pos.z += o->f3C;
        add_radar_scaled_marker(&o->pos, -0x5DB4, 1, 1, lbl_805DFFB8);
        play_persistent_sound(0x40032D05, o, &o->pos, 0, 0);
        o->timer++;
        break;
    case 2:
        if (o->p50 != NULL) {
            enable__13TParticleCtrlFPv(o->p50);
        }
        if (o->p54 != NULL) {
            enable__13TParticleCtrlFPv(o->p54);
        }
        if (o->p58 != NULL) {
            enable__13TParticleCtrlFPv(o->p58);
        }
        if (o->timer > 0x3C) {
            queue_destruction__7TObjectFv(o);
        } else {
            o->timer++;
        }
        break;
    }
}
#pragma pop

void *__dt__20TBoss5GryphonTornadoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TBoss5GryphonTornado;
        if (M2C_FIELD(arg0, void **, 0x58) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x58)); M2C_FIELD(arg0, M2C_UNK *, 0x58) = 0; }
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50)); M2C_FIELD(arg0, M2C_UNK *, 0x50) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado_size[sizeof(RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado) == 0x18 ? 1 : -1];
u8 *TBoss5GryphonTornado__ct(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, s16 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado *)&__vt__20TBoss5GryphonTornado).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4398;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    M2C_FIELD(arg0, s16 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DFFA8;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DFFA8;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DFFA8;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
