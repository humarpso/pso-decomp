#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern u8 lbl_80437F40[];
extern void *lbl_805D4DC8;
void TBoss8Dragon__sub_80066A50(void *self);
void queue_destruction__7TObjectFv(void *);
s32 get_bml_motion(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
s32 get_flag_bit6__12TBoss8DragonFPv(s32);
M2C_UNK TBoss8Dragon__sub_80064114(M2C_UNK, void *);
M2C_UNK get_instance_count__12TBoss8DragonFv();
M2C_UNK attach_particle_model(s32, s32, s32, s32, M2C_UNK, f32);
s32 spawn_particle_effect_with_flags(void *, s32, M2C_UNK);
u32 spawn_continuous_particle_effect_with_flags(void *, s32, M2C_UNK);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK eval_bezier_curve__12TBoss8DragonFPviiPvf(void *, M2C_UNK, M2C_UNK, void *, f32);
M2C_UNK fn_80355970(s32, s32, void *, u16);
extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern void *lbl_805D4DC8;
extern const f32 lbl_805D8EE8;
void run_task__22TBoss5GryphonShockWaveFv(u8 *arg0);
}

extern "C" {

u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6);
void TBoss8Dragon__sub_80066A4C(void);
void *__dt__22TBoss5GryphonShockWaveFv(void *arg0, s16 arg1);
void render__22TBoss5GryphonShockWaveFv(void);
M2C_UNK vec3_add_to(void *, s32);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);

void render__22TBoss5GryphonShockWaveFv(void) {  }

extern M2C_UNK __vt__22TBoss5GryphonShockWave[];

void run_task__22TBoss5GryphonShockWaveFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    if (get_flag_bit6__12TBoss8DragonFPv(M2C_FIELD(arg0, s32 *, 0x38)) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    case 1:
        eval_bezier_curve__12TBoss8DragonFPviiPvf(arg0 + 0x40, 3, 0, arg0 + 0x2C, (f32) M2C_FIELD(arg0, s32 *, 0x20) / (f32) M2C_FIELD(arg0, s32 *, 0x24));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x3C) = spawn_continuous_particle_effect_with_flags(arg0 + 0x2C, M2C_FIELD((*(u8 * *)&lbl_805D4DC8), s32 *, 0), 0x40);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x3C), arg0 + 0x2C);
        }
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r3 + 1);
        if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        break;
    case 2:
        temp_r3_2 = spawn_particle_effect_with_flags(arg0 + 0x2C, M2C_FIELD((*(u8 * *)&lbl_805D4DC8), s32 *, 4), 0x40);
        if (temp_r3_2 != 0) {
            attach_particle_model(temp_r3_2, get_bml_model(lbl_805D4DA4, 0), lbl_805D4DA8, get_bml_motion(lbl_805D4DA4, 0), 0, lbl_805D8EE8);
        }
        spawn_particle_effect_with_flags(arg0 + 0x2C, M2C_FIELD((*(u8 * *)&lbl_805D4DC8), s32 *, 8), 0x40);
        play_sound_effect(0x40033C13, arg0 + 0x2C, 0, 0);
        TBoss8Dragon__sub_80064114(get_instance_count__12TBoss8DragonFv(), arg0 + 0x2C);
        fn_80355970(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x38), arg0 + 0x2C, M2C_FIELD(arg0, u16 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        queue_destruction__7TObjectFv(arg0);
        break;
    case 3:
        break;
    }
}

void *__dt__22TBoss5GryphonShockWaveFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TBoss5GryphonShockWave;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__22TBoss5GryphonShockWave[];
extern s32 lbl_805D2818;
extern const f32 lbl_805D8EEC;
extern const f32 lbl_805D8EF0;

u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6) {
    M2C_UNK sp8[4];

    __ct__7TObjectFP7TObject(arg0, arg1_parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TBoss5GryphonShockWave;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2818;
    VecCopy__FP3VecPC3Vec(arg0 + 0x40, arg3);
    VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg3);
    vec3_add_to(arg0 + 0x50, arg5);
    VecCopy__FP3VecPC3Vec(arg0 + 0x60, arg4);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805D8EEC;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg0 + 0x40);
    M2C_FIELD(arg0, s16 *, 0x28) = arg6;
    M2C_FIELD(arg0, s32 *, 0x38) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    VecCopy__FP3VecPC3Vec(sp8, arg0 + 0x2C);
    subtract_vector(sp8, arg4);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (lbl_805D8EF0 * update_scale__15TObjBoss2TunnelFPv(sp8));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) < 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x1E;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void TBoss8Dragon__sub_80066A4C(void) {  }
void TBoss8Dragon__sub_80066A50(void *self) {
    switch (TBoss8Dragon__sub_8005D700(self)) {
    case 0:
        lbl_805D4DC8 = lbl_80437F40;
        break;
    }
}

}
