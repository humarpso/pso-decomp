#include "types.h"
#include "pso/system/vector.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEneMe1GiGueBarrier.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80325BCC_lbl_804ECD40 { s32 value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80325BCC_lbl_804ECD40_size[sizeof(RecoveredGlobal_80325BCC_lbl_804ECD40) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier_size[sizeof(RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier) == 0x38 ? 1 : -1];

struct VBase_18_ca64a0 { char pad[0x18]; };

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

extern "C" {
void *__nw__7TObjectFUl(int);
s32 advance_animation_playback(void *);
s32 play_sound_effect(int, void *, int, int);
s32 is_active_state__22TObjEneMe1GiGueBarrierFv(int);
u16 obj_getField1c(void *);
u8 * TObjMotion__ct(void *);
s32 set_field_d8__10TObjPlayerFl(void *, void *, int);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 TObjEneMe1GiGueBarrier__sub_802CABF4(void *);
extern RecoveredGlobal_80325BCC_lbl_804ECD40 TObjEneMe1GiGueBarrier__animation_definitions;
extern s32 __vt__22TObjEneMe1GiGueBarrier[];
extern s32 lbl_805D4198;
extern s32 TObjEneMe1GiGueBarrier__barrier_resource_object;
u8 *TObjEneMe1GiGueBarrier__ct(u8 *arg0, s32 arg1, u8 *arg2);
s32 queue_destruction__7TObjectFv(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
extern const f32 lbl_805DF620;
extern const f32 lbl_805DF624;
extern const f32 lbl_805DF628;
extern const f32 lbl_805DF62C;
void TObjEneMe1GiGueBarrier__sub_80325CC0(void);
void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

#pragma push
#pragma opt_common_subs off
void TObjEneMe1GiGueBarrier::render() {
    u8 *arg0 = (u8 *)this;
    if ((u32) (*(u32 *)&TObjEneMe1GiGueBarrier__barrier_resource_object) == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    if (TOKeyMachine01::get_global_state() == 0x23) {
        if (((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DF620, lbl_805DF620, lbl_805DF624) == 0) {
            return;
        }
        goto block_6;
    }
    if (((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DF628, lbl_805DF62C, lbl_805DF624) != 0) {
block_6:
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) == 0) {
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (this->rotation_y));
            TObjFish::set_global_param((int) (this->texture_id));
            TParticleCtrl::end_effect_render();
            ((TObjEneRe7Berura *)arg0)->draw();
            pop_matrix();
        }
    }
}
#pragma pop

void TObjEneMe1GiGueBarrier::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0_2;
    u32 temp_r0;
    temp_r0 = this->m_fc;
    if (temp_r0 == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(((TObjEneMe1GiGueBarrier *)temp_r0)->update_and_get_pos()));
    this->rotation_y = ((TObjEneMe1GiGueBarrier *)(this->m_fc))->get_timer();
    advance_animation_playback((void *) (arg0));
    *(s32 *)&this->m_108 = (s32) (*(s32 *)&this->m_108 - 1);
    temp_r0_2 = *(s32 *)&this->m_104;
    switch (temp_r0_2) {
    case 0:
        if (*(s32 *)&this->animationFlags & 0x10) {
            *(s32 *)&this->m_104 = 1;
            this->m_b8 = 1;
            if (TOKeyMachine01::get_global_state() == 0x23) {
                play_sound_effect((int) (0x4003A316), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            } else {
                play_sound_effect((int) (0x3A346), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
        }
        break;
    case 2:
        if (*(s32 *)&this->animationFlags & 0x10) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
        break;
    default:
    case 1:
        if (((s32) *(s32 *)&this->m_108 <= 0) || (is_active_state__22TObjEneMe1GiGueBarrierFv((int) (this->m_fc)) != 0)) {
            *(s32 *)&this->m_104 = 2;
            this->m_b8 = 2;
        }
        break;
    }
}

void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjEneMe1GiGueBarrier;
        if (*(void **)((s8 *)arg0 + 0xFC) != NULL) { ((TObjEneMe1GiGueBarrier *)(*(void **)((s8 *)arg0 + 0xFC)))->clear_flag388_bit80000(); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneMe1GiGueBarrier__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 *temp_r5;
    TObjMotion__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier *)&__vt__22TObjEneMe1GiGueBarrier).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D4198;
    *(u8 **)((s8 *)arg0 + 0xFC) = arg2;
    ((TObjEneMe1GiGueBarrier *)arg0)->m_100 = obj_getField1c(*(u8 **)((s8 *)arg0 + 0xFC));
    VecCopy((Vec *)((void *) (arg0 + 0x38)), (const Vec *)((void *) (((TObjEneMe1GiGueBarrier *)((s32) *(u8 **)((s8 *)arg0 + 0xFC)))->update_and_get_pos())));
    ((TObjEneMe1GiGueBarrier *)arg0)->rotation_y = ((TObjEneMe1GiGueBarrier *)(*(u8 **)((s8 *)arg0 + 0xFC)))->get_timer();
    *(s32 *)&((TObjEneMe1GiGueBarrier *)arg0)->m_108 = ((TObjEneMe1GiGueBarrier *)(*(u8 **)((s8 *)arg0 + 0xFC)))->get_field_44c();
    TObjEneMe1GiGueBarrier__sub_802CABF4((void *) (*(u8 **)((s8 *)arg0 + 0xFC)));
    *(s32 *)&((TObjEneMe1GiGueBarrier *)arg0)->m_104 = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjEneMe1GiGueBarrier__barrier_resource_object) + 0x42C)) + 0x28);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjEneMe1GiGueBarrier__barrier_resource_object) + 0x42C));
    ((TObjEneMe1GiGueBarrier *)arg0)->texture_id = (s32) *(s32 *)((s8 *)temp_r5 + 0x2C);
    set_field_d8__10TObjPlayerFl((void *) (arg0), (void *) (&TObjEneMe1GiGueBarrier__animation_definitions.value), (int) (temp_r5));
    ((TObjPlayer *)arg0)->set_field_dc((int) (*(s32 *)((s8 *)(*(u8 * *)&TObjEneMe1GiGueBarrier__barrier_resource_object) + 0x430)));
    ((TObjEneMe1GiGueBarrier *)arg0)->m_b8 = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (((TObjEneMe1GiGueBarrier *)arg0)->m_b8));
    ((TObjMotion *)arg0)->set_field_b8((int) (((TObjEneMe1GiGueBarrier *)arg0)->m_b8));
    return arg0;
}

void TObjEneMe1GiGueBarrier__sub_80325CC0(void) {  }

void *TObjEneMe1GiGueBarrier::create(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjEneMe1GiGueBarrier__ct((u8 *)(o), (s32)(arg0), (u8 *)(arg1));
    }
    return o;
}

void TObjEneMe1GiGueBarrier::init_global() {
    TObjEneMe1GiGueBarrier__barrier_resource_object = TObjEneMe1GiGue::get_barrier_count();
}

}
