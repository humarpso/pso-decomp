#include "types.h"

struct RecoveredGlobal_80335354_lbl_804EE3B0 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80335354_lbl_804EE3B0_size[sizeof(RecoveredGlobal_80335354_lbl_804EE3B0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80335354___vt__16TObjEneMorfosArm { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80335354___vt__16TObjEneMorfosArm_size[sizeof(RecoveredGlobal_80335354___vt__16TObjEneMorfosArm) == 0x38 ? 1 : -1];

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
u8 * TObjEneMorfosArm__sub_803326B4(void *);
s32 TObjEneMorfosArm__sub_803326BC(void *);
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 advance_animation_playback();
void run_task__16TObjEneMorfosArmFv(u8 *arg0);
u16 obj_getField1c(void *);
u8 * TObjMotion__ct(void *);
u8 * TObjEneMorfosArm__sub_803326B4(void *);
s32 TObjEneMorfosArm__sub_803326BC(void *);
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 set_field_dc__10TObjPlayerFPvi(void *, int);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *, int);
s32 set_animation__10TObjPlayerFPvs(void *, int);
extern RecoveredGlobal_80335354_lbl_804EE3B0 morfos_arm_motion_params;
extern s32 __vt__16TObjEneMorfosArm[];
extern s32 TObjEneMorfosArm__name;
extern u32 TObjEneMorfosArm__parent_morfos_instance;
u8 *TObjEneMorfosArm__ct(u8 *arg0, s32 arg1, u8 *arg2);
}

extern "C" {

void *__dt__16TObjEneMorfosArmFv(void *arg0, s16 arg1);
void render__16TObjEneMorfosArmFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(int);
s32 toggle_particle_effect__10TObjPlayerFv();

extern u32 TObjEneMorfosArm__parent_morfos_instance;

void render__16TObjEneMorfosArmFv(u8 *arg0) {
    if ((u32) TObjEneMorfosArm__parent_morfos_instance == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

extern s32 __vt__16TObjEneMorfosArm[];

void run_task__16TObjEneMorfosArmFv(u8 *arg0) {
    u8 *temp_r3;
    advance_animation_playback();
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xFC));
    if (temp_r3 == NULL) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (int) (TObjEneMorfosArm__sub_803326B4(temp_r3)));
    *(s32 *)((s8 *)arg0 + 0x60) = TObjEneMorfosArm__sub_803326BC(*(u8 **)((s8 *)arg0 + 0xFC));
    if (*(s32 *)((s8 *)arg0 + 0xB0) & 0x10) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

void *__dt__16TObjEneMorfosArmFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjEneMorfosArm;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjEneMorfosArm__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 *temp_r5;
    TObjMotion__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80335354___vt__16TObjEneMorfosArm *)&__vt__16TObjEneMorfosArm).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEneMorfosArm__name;
    *(u8 **)((s8 *)arg0 + 0xFC) = arg2;
    *(u16 *)((s8 *)arg0 + 0x100) = obj_getField1c(*(u8 **)((s8 *)arg0 + 0xFC));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (int)((void *) (((s32)TObjEneMorfosArm__sub_803326B4((void *)((s32) *(u8 **)((s8 *)arg0 + 0xFC)))))));
    *(s32 *)((s8 *)arg0 + 0x60) = TObjEneMorfosArm__sub_803326BC(*(u8 **)((s8 *)arg0 + 0xFC));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjEneMorfosArm__parent_morfos_instance) + 0x42C)) + 8);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjEneMorfosArm__parent_morfos_instance) + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)temp_r5 + 0xC);
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (&morfos_arm_motion_params.value), (int) (temp_r5));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (*(s32 *)((s8 *)(*(u8 * *)&TObjEneMorfosArm__parent_morfos_instance) + 0x430)));
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (*(s16 *)((s8 *)arg0 + 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (*(s16 *)((s8 *)arg0 + 0xB8)));
    return arg0;
}

}
