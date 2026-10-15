#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80335354_lbl_804EE3B0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80335354_lbl_804EE3B0_size[sizeof(RecoveredGlobal_80335354_lbl_804EE3B0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80335354___vt__16TObjEneMorfosArm { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80335354___vt__16TObjEneMorfosArm_size[sizeof(RecoveredGlobal_80335354___vt__16TObjEneMorfosArm) == 0x38 ? 1 : -1];

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u8 * TObjEneMorfosArm__sub_803326B4(void *);
s32 TObjEneMorfosArm__sub_803326BC(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK advance_animation_playback();
void run_task__16TObjEneMorfosArmFv(u8 *arg0);
u16 obj_getField1c(void *);
u8 * TObjMotion__ct(void *);
u8 * TObjEneMorfosArm__sub_803326B4(void *);
s32 TObjEneMorfosArm__sub_803326BC(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
extern RecoveredGlobal_80335354_lbl_804EE3B0 morfos_arm_motion_params;
extern M2C_UNK __vt__16TObjEneMorfosArm[];
extern s32 TObjEneMorfosArm__name;
extern u32 TObjEneMorfosArm__parent_morfos_instance;
u8 *TObjEneMorfosArm__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
}

extern "C" {

void *__dt__16TObjEneMorfosArmFv(void *arg0, s16 arg1);
void render__16TObjEneMorfosArmFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern u32 TObjEneMorfosArm__parent_morfos_instance;

void render__16TObjEneMorfosArmFv(u8 *arg0) {
    if ((u32) TObjEneMorfosArm__parent_morfos_instance == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

extern M2C_UNK __vt__16TObjEneMorfosArm[];

void run_task__16TObjEneMorfosArmFv(u8 *arg0) {
    u8 *temp_r3;
    advance_animation_playback();
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xFC));
    if (temp_r3 == NULL) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (int) (TObjEneMorfosArm__sub_803326B4(temp_r3)));
    M2C_FIELD(arg0, s32 *, 0x60) = TObjEneMorfosArm__sub_803326BC(M2C_FIELD(arg0, u8 **, 0xFC));
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

void *__dt__16TObjEneMorfosArmFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMorfosArm;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjEneMorfosArm__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    u8 *temp_r5;
    TObjMotion__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80335354___vt__16TObjEneMorfosArm *)&__vt__16TObjEneMorfosArm).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjEneMorfosArm__name;
    M2C_FIELD(arg0, u8 **, 0xFC) = arg2;
    M2C_FIELD(arg0, u16 *, 0x100) = obj_getField1c(M2C_FIELD(arg0, u8 **, 0xFC));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (int)((void *) (((s32)TObjEneMorfosArm__sub_803326B4((void *)((s32) M2C_FIELD(arg0, u8 **, 0xFC)))))));
    M2C_FIELD(arg0, s32 *, 0x60) = TObjEneMorfosArm__sub_803326BC(M2C_FIELD(arg0, u8 **, 0xFC));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjEneMorfosArm__parent_morfos_instance), u8 **, 0x42C), s32 *, 8);
    temp_r5 = (u8 *)(M2C_FIELD((*(u8 * *)&TObjEneMorfosArm__parent_morfos_instance), u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r5, s32 *, 0xC);
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (&morfos_arm_motion_params.value), (int) (temp_r5));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD((*(u8 * *)&TObjEneMorfosArm__parent_morfos_instance), s32 *, 0x430)));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    return arg0;
}

}
