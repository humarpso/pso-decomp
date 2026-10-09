#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_8019527C { u8 pad[0x90]; u32 f90; };

struct Vec_80195400 { f32 x, y, z; };

struct Src_80195400 {
    u8 pad0[0xC];
    Vec_80195400 pos;
    Vec_80195400 ang;
    f32 params[3];
    s32 ints[3];
};

struct Part_80195400 {
    s32 f0;
    u8 pad4[0x14];
    M2C_UNK *vt;
    u8 pad1c[0x38 - 0x1C];
    Vec_80195400 pos;
    u8 pad44[0x5C - 0x44];
    Vec_80195400 ang;
    f32 params[3];
    u8 pad74[0x84 - 0x74];
    s32 ints[3];
    s32 emitter;
    s32 sel;
};

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjParticle__create(u8 *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void render__12TObjParticleFv(P_8019527C *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 spawn_particle_effect_with_rotation(void *, void *, s32, u16);
s32 spawn_continuous_particle_with_direction(void *, void *, s32);
M2C_UNK TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__12TObjParticle[];
extern s32 obj_particle_class_name;
extern const f32 lbl_805DBEEC;
Part_80195400 *TObjParticle__ct(Part_80195400 *arg0, M2C_UNK arg1, Src_80195400 *arg2);
}

extern "C" {

void *__dt__12TObjParticleFv(void *arg0, s16 arg1);
void run_task__12TObjParticleFv(u8 *arg0);
void __dl__7TObjectFPv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, void *);
M2C_UNK copy_vec3__11TBoss4Type2FPvPv(u32, void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
f32 xyz_distance_squared(void *, s32);
void mask_object_set_row_flags(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
void queue_destruction__7TObjectFv(void *);

extern s32 camera_ctrl_instance;
extern const f32 lbl_805DBEE0;
extern const f32 lbl_805DBEE4;
extern const f32 lbl_805DBEE8;

void render__12TObjParticleFv(P_8019527C *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0) {
        if (arg0->f90 == 0) {
            return;
        }
    }
}

void run_task__12TObjParticleFv(u8 *arg0) {
    f32 var_f31;

    if (((get_global_state__14TOKeyMachine01Fv() == 0xE) || ((s32) M2C_FIELD(arg0, s32 *, 0x84) == 1)) && ((s32) M2C_FIELD(arg0, s32 *, 0x8C) != 1)) {
        var_f31 = lbl_805DBEE0;
    } else {
        var_f31 = lbl_805DBEE4;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x84) == 1)) {
        var_f31 = lbl_805DBEE8;
    }
    if (xyz_distance_squared(arg0 + 0x38, camera_ctrl_instance + 0x178) > var_f31) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x90), arg0 + 0x38);
        copy_vec3__11TBoss4Type2FPvPv(M2C_FIELD(arg0, u32 *, 0x90), arg0 + 0x5C);
    }
}

extern M2C_UNK __vt__12TObjParticle[];

void *__dt__12TObjParticleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjParticle;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x90))); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        mask_object_set_row_flags(arg0, -3);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Part_80195400 *TObjParticle__ct(Part_80195400 *arg0, M2C_UNK arg1, Src_80195400 *arg2) {
    u32 i;
    s32 entry;
    u16 flags;
    u16 base;
    u16 other;
    TPhotonMagicSquare__sub_801A2640(arg0, (void *) arg1);
    arg0->vt = __vt__12TObjParticle;
    other = 0;
    arg0->f0 = obj_particle_class_name;
    VecCopy__FP3VecPC3Vec(&arg0->pos, &arg2->pos);
    copy_xyz__10TObjPlayerFPvPv(&arg0->ang, &arg2->ang);
    VecCopy__FP3VecPC3Vec(arg0->params, arg2->params);
    for (i = 0; i < 3; i++) {
        arg0->ints[i] = arg2->ints[i];
    }
    arg0->sel = (s32) arg2->params[0];
    arg0->emitter = 0;
    entry = (s32) arg0->params[0];
    if (entry < 0) {
        entry = 0;
    }
    if (arg0->params[2] < lbl_805DBEEC) {
        base = 2;
        if (arg0->ints[0] == 1) {
            base = 0x42;
        }
        flags = base;
        if (arg0->ints[1] == 1) {
            flags = base | 0x2000;
        }
        arg0->emitter = spawn_particle_effect_with_rotation(&arg0->pos, &arg0->ang, entry, flags);
    } else if ((s32) arg0->params[2] == 2) {
        flags = 8;
        if (arg0->ints[0] == 1) {
            flags = 0x48;
        }
        if (arg0->ints[1] == 1) {
            flags |= 0x2000;
        }
        arg0->emitter = spawn_particle_effect_with_rotation(&arg0->pos, &arg0->ang, entry, flags);
    } else if ((s32) arg0->params[2] == 3) {
        flags = 4;
        if (arg0->ints[0] == 1) {
            flags = 0x44;
        }
        if (arg0->ints[1] == 1) {
            flags |= 0x2000;
        }
        arg0->emitter = spawn_particle_effect_with_rotation(&arg0->pos, &arg0->ang, entry, flags);
    } else {
        if (arg0->ints[0] == 1) {
            other = 0x40;
        }
        if (arg0->ints[1] == 1) {
            other |= 0x2000;
        }
        if (arg0->ints[0] == 1 || arg0->ints[1] == 1) {
            arg0->emitter = spawn_particle_effect_with_rotation(&arg0->pos, &arg0->ang, entry, (u16)other);
        } else {
            arg0->emitter = spawn_continuous_particle_with_direction(&arg0->pos, &arg0->ang, entry);
        }
    }
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

u8 *TObjParticle__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x98));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjParticle__ct((Part_80195400 *)(temp_r3), (M2C_UNK)(tl_05), (Src_80195400 *)(arg0)));
    }
    return var_r0;
}

}
