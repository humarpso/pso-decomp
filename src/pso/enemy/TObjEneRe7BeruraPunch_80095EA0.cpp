#include "types.h"
#include "pso/system/vector.h"
#include "pso/enemy/TObjEneRe7BeruraPunch.h"

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

#include <stddef.h>
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/player/TObjPlayer.h"
struct Stack_80096030 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Pair_80096150 { s32 a; s32 b; };

struct VBase_80096150 { char pad[0x18]; };

struct VObj_80096150 : VBase_80096150 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(Pair_80096150 *, s32);
};

extern "C" {
extern const f32 lbl_805D979C;
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
u8 * csnVector(s32, s32, s32);
u8 *find_entity_by_id(u16);
s32 TObjEneRe7Berura__sub_80094D98();
extern const f32 lbl_805D97A4;
extern const f32 lbl_805D97A8;
s32 TObjEneRe7Berura__sub_80094C68(u8 *);
s32 refresh_collision_body_centers__13TUnk_804AF8A0Fv(void *, void *, f32, f32);
extern Pair_80096150 lbl_80439F28[];
extern const f32 lbl_805D97AC;
extern const f32 lbl_805D97B0;
struct VObjHang_80095EA0 {
    char pad[0x14];
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
};

f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 post_translate_matrix(void *);
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);

extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

void TObjEneRe7BeruraPunch::render() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;

    if ((s32) *(s32 *)&this->m_b4 != 0) {
        lbl_805D5660 = model_render_flags;
        TObjEneDD::clear_global_flag_400();
        if ((s32) *(s32 *)&this->m_b4 == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                model_render_flags = lbl_805D5660;
                return;
            }
        }
        ((TObjEneDD *)(arg0 + 0x38))->draw_oriented_shadow((s32)(arg0 + 0xE8), (s32)0, (u32)0);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        translate_matrix(0, lbl_805D9794, *(f32 *)&this->unk_CC, lbl_805D9794);
        rotate_matrix_y(0, this->rotation_y);
        temp_f1 = this->m_f4;
        scale_matrix(0, temp_f1, temp_f1, lbl_805D9798);
        TObjEneRe7Berura::init_part(*(s32 *)&this->m_b8);
        pop_matrix();
        if ((s32) *(s32 *)&this->m_b4 == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m7();
        }
        TParticleCtrl::end_effect_render();
        model_render_flags = lbl_805D5660;
    }
}

extern const f32 lbl_805D97B4;

#pragma push
#pragma fp_contract on
void TObjEneRe7BeruraPunch::update_velocity_and_snap() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_14_c1c33b *)((u8 *)(arg0) + (248)))->m4() != 0) {
        *(s32 *)&this->m_b4 = 0;
    }
    *(f32 *)&this->m_dc = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)&this->unk_BC)) + *(f32 *)&this->m_dc);
    this->m_e4 = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)&this->unk_C4)) + this->m_e4);
    ((TObjEneRe7BeruraPunch *)arg0)->snap_to_ground();
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
void TObjEneRe7BeruraPunch::update_flight() {
    typedef char sp8_offset[(offsetof(Stack_80096030, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80096030, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80096030, sp10) == 0x8) ? 1 : -1];
    Stack_80096030 stack;
    s32 var_r31;
    u8 *temp_r3;
    this->m_f4 = (f32) (this->m_f4 + lbl_805D97A4);
    if (this->m_f4 > lbl_805D97A8) {
        this->m_f4 = (f32) lbl_805D97A8;
    }
    var_r31 = 0;
    this->m_114 = (f32) (this->m_114 + TObjEneRe7BeruraPunch__data_805D97A0);
    stack.sp8 = (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)&this->unk_BC) + *(f32 *)((s8 *)((u8 *)this) + 0x38);
    stack.spC = *(f32 *)&this->unk_E0;
    stack.sp10 = (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)&this->unk_C4) + *(f32 *)((s8 *)((u8 *)this) + 0x40);
    temp_r3 = (u8 *)(csnVector((s32) (((u8 *)this) + 0xDC), (s32) &stack.sp8, 0x88E0));
    if (temp_r3 != NULL) {
        var_r31 = 1;
        *(f32 *)&this->m_dc = (f32) **(f32 **)((s8 *)temp_r3 + 4);
        *(f32 *)&this->m_dc = (f32) **(f32 **)((s8 *)temp_r3 + 4);
    } else {
        *(f32 *)&this->m_dc = stack.sp8;
        this->m_e4 = stack.sp10;
    }
    ((TObjEneRe7BeruraPunch *)((u8 *)this))->snap_to_ground();
    if ((var_r31 != 0) || (sub_80096150() != 0) || (this->m_114 > this->m_c8)) {
        *(s32 *)&this->m_b4 = 2;
        if (find_entity_by_id(this->m_b0) != NULL) {
            TObjEneRe7Berura__sub_80094D98();
        }
    }
}
#pragma pop

s32 TObjEneRe7BeruraPunch::sub_80096150() {
    u8 *entity;
    void *temp_r4_2;
    entity = find_entity_by_id(this->m_b0);
    *(f32 *)((s8 *)(this->m_a4) + 4) = *(f32 *)&this->unk_CC;
    *(f32 *)((s8 *)(this->m_a4) + 0x30) = *(f32 *)&this->unk_CC;
    temp_r4_2 = this->m_a4;
    *(f32 *)((s8 *)temp_r4_2 + 0x34) = lbl_805D97AC * (lbl_805D97B0 * this->m_f4);
    refresh_collision_body_centers__13TUnk_804AF8A0Fv(this, temp_r4_2, lbl_805D97B0, lbl_805D97AC);
    ((TObjPlayer *)this)->update_enemy_collision_flags();
    temp_r4_2 = this->m_a4;
    if ((*(s32 *)((s8 *)temp_r4_2 + 0x18) | *(s32 *)((s8 *)temp_r4_2 + 0x44)) & 0x200000) {
        return 1;
    }
    if (entity != 0) {
        ((TObjEneRe7Berura *)entity)->reload_stats_from_tables();
    }
    Pair_80096150 p = lbl_80439F28[0];
    if (TObjEneDD::check_v2_mode() != 0) {
        p.b &= ~2;
    }
    ((VObj_80096150 *)this)->m15(&p, *(s32 *)&this->_padD8);
    if (entity != 0) {
        TObjEneRe7Berura__sub_80094C68(entity);
    }
    return 0;
}

void TObjEneRe7BeruraPunch::launch(s32 arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    u8 *entity;

    *(s32 *)&this->m_b8 = arg1;
    VecCopy((Vec *)&this->m_dc, (const Vec *)arg2);
    ((TObjEneRe7BeruraPunch *)arg0)->snap_to_ground();
    entity = find_entity_by_id(this->m_b0);
    if (entity != NULL) {
        this->rotation_y = (s32) *(s32 *)((s8 *)entity + 0x60);
    } else {
        this->rotation_y = 0;
    }
    *(f32 *)&this->unk_BC = sin_table_lookup(this->rotation_y);
    this->m_c0 = (f32) lbl_805D9794;
    *(f32 *)&this->unk_C4 = cos_table_lookup(this->rotation_y);
    this->m_c8 = (f32) lbl_805D97B4;
    ((TObjEneRe7BeruraPunch *)arg0)->reset();
    *(s32 *)&this->m_b4 = 1;
}

}
