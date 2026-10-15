#include "types.h"

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

#include <stddef.h>
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
s32 snap_to_ground__21TObjEneRe7BeruraPunchFPv(void *);
extern const f32 lbl_805D979C;
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
void update_velocity_and_snap__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
u8 * csnVector(s32, s32, s32);
u8 *find_entity_by_id(u16);
s32 TObjEneRe7Berura__sub_80094D98();
s32 snap_to_ground__21TObjEneRe7BeruraPunchFPv(void *);
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
extern const f32 lbl_805D97A4;
extern const f32 lbl_805D97A8;
void update_flight__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
s32 TObjEneRe7Berura__sub_80094C68(u8 *);
s32 reload_stats_from_tables__16TObjEneRe7BeruraFPv(u8 *);
s32 check_v2_mode__9TObjEneDDFv(void);
u8 *find_entity_by_id(u16);
s32 refresh_collision_body_centers(void *, void *, f32, f32);
s32 update_enemy_collision_flags__10TObjPlayerFPv(void *);
extern Pair_80096150 lbl_80439F28[];
extern const f32 lbl_805D97AC;
extern const f32 lbl_805D97B0;
s32 TObjEneRe7BeruraPunch__sub_80096150(void *arg0);
}

extern "C" {

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

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2);
void render__21TObjEneRe7BeruraPunchFv(u8 *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 post_translate_matrix(void *);
s32 scale_matrix(s32, f32, f32, f32);
s32 draw_oriented_shadow__9TObjEneDDFiiiUi(void *, void *, s32, s32);
s32 snap_to_ground__21TObjEneRe7BeruraPunchFPv(void *);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
u8 *find_entity_by_id(u16);
s32 VecCopy__FP3VecPC3Vec(void *, s32);
s32 clear_global_flag_400__9TObjEneDDFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 init_part__16TObjEneRe7BeruraFi(s32);
s32 reset__21TObjEneRe7BeruraPunchFPv(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 toggle_particle_effect__10TObjPlayerFv();

extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) != 0) {
        lbl_805D5660 = model_render_flags;
        clear_global_flag_400__9TObjEneDDFv();
        if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                model_render_flags = lbl_805D5660;
                return;
            }
        }
        draw_oriented_shadow__9TObjEneDDFiiiUi(arg0 + 0x38, arg0 + 0xE8, 0, 0);
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        translate_matrix(0, lbl_805D9794, *(f32 *)((s8 *)arg0 + 0xCC), lbl_805D9794);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        temp_f1 = *(f32 *)((s8 *)arg0 + 0xF4);
        scale_matrix(0, temp_f1, temp_f1, lbl_805D9798);
        init_part__16TObjEneRe7BeruraFi(*(s32 *)((s8 *)arg0 + 0xB8));
        pop_matrix();
        if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        model_render_flags = lbl_805D5660;
    }
}

extern const f32 lbl_805D9794;
extern const f32 lbl_805D97B4;

#pragma push
#pragma fp_contract on
void update_velocity_and_snap__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    if (((VObj_14_c1c33b *)((u8 *)(arg0) + (248)))->m4() != 0) {
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0xDC) = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)((s8 *)arg0 + 0xBC))) + *(f32 *)((s8 *)arg0 + 0xDC));
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)((s8 *)arg0 + 0xC4))) + *(f32 *)((s8 *)arg0 + 0xE4));
    snap_to_ground__21TObjEneRe7BeruraPunchFPv((void *) (arg0));
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
void update_flight__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80096030, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80096030, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80096030, sp10) == 0x8) ? 1 : -1];
    Stack_80096030 stack;
    s32 var_r31;
    u8 *temp_r3;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) (*(f32 *)((s8 *)arg0 + 0xF4) + lbl_805D97A4);
    if (*(f32 *)((s8 *)arg0 + 0xF4) > lbl_805D97A8) {
        *(f32 *)((s8 *)arg0 + 0xF4) = (f32) lbl_805D97A8;
    }
    var_r31 = 0;
    *(f32 *)((s8 *)arg0 + 0x114) = (f32) (*(f32 *)((s8 *)arg0 + 0x114) + TObjEneRe7BeruraPunch__data_805D97A0);
    stack.sp8 = (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)((s8 *)arg0 + 0xBC)) + *(f32 *)((s8 *)arg0 + 0x38);
    stack.spC = *(f32 *)((s8 *)arg0 + 0xE0);
    stack.sp10 = (TObjEneRe7BeruraPunch__data_805D97A0 * *(f32 *)((s8 *)arg0 + 0xC4)) + *(f32 *)((s8 *)arg0 + 0x40);
    temp_r3 = (u8 *)(csnVector((s32) (arg0 + 0xDC), (s32) &stack.sp8, 0x88E0));
    if (temp_r3 != NULL) {
        var_r31 = 1;
        *(f32 *)((s8 *)arg0 + 0xDC) = (f32) **(f32 **)((s8 *)temp_r3 + 4);
        *(f32 *)((s8 *)arg0 + 0xDC) = (f32) **(f32 **)((s8 *)temp_r3 + 4);
    } else {
        *(f32 *)((s8 *)arg0 + 0xDC) = stack.sp8;
        *(f32 *)((s8 *)arg0 + 0xE4) = stack.sp10;
    }
    snap_to_ground__21TObjEneRe7BeruraPunchFPv((void *) (arg0));
    if ((var_r31 != 0) || (TObjEneRe7BeruraPunch__sub_80096150((void *)(arg0)) != 0) || (*(f32 *)((s8 *)arg0 + 0x114) > *(f32 *)((s8 *)arg0 + 0xC8))) {
        *(s32 *)((s8 *)arg0 + 0xB4) = 2;
        if (find_entity_by_id(*(u16 *)((s8 *)arg0 + 0xB0)) != NULL) {
            TObjEneRe7Berura__sub_80094D98();
        }
    }
}
#pragma pop

s32 TObjEneRe7BeruraPunch__sub_80096150(void *arg0) {
    u8 *temp_r31;
    void *temp_r4_2;
    temp_r31 = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0xB0));
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 4) = *(f32 *)((s8 *)arg0 + 0xCC);
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x30) = *(f32 *)((s8 *)arg0 + 0xCC);
    temp_r4_2 = *(void **)((s8 *)arg0 + 0xA4);
    *(f32 *)((s8 *)temp_r4_2 + 0x34) = lbl_805D97AC * (lbl_805D97B0 * *(f32 *)((s8 *)arg0 + 0xF4));
    refresh_collision_body_centers(arg0, temp_r4_2, lbl_805D97B0, lbl_805D97AC);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
    temp_r4_2 = *(void **)((s8 *)arg0 + 0xA4);
    if ((*(s32 *)((s8 *)temp_r4_2 + 0x18) | *(s32 *)((s8 *)temp_r4_2 + 0x44)) & 0x200000) {
        return 1;
    }
    if (temp_r31 != 0) {
        reload_stats_from_tables__16TObjEneRe7BeruraFPv(temp_r31);
    }
    Pair_80096150 p = lbl_80439F28[0];
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        p.b &= ~2;
    }
    ((VObj_80096150 *)arg0)->m15(&p, *(s32 *)((s8 *)arg0 + 0xD8));
    if (temp_r31 != 0) {
        TObjEneRe7Berura__sub_80094C68(temp_r31);
    }
    return 0;
}

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;

    *(s32 *)((s8 *)arg0 + 0xB8) = arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0xDC, arg2);
    snap_to_ground__21TObjEneRe7BeruraPunchFPv(arg0);
    temp_r3 = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0xB0));
    if (temp_r3 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) *(s32 *)((s8 *)temp_r3 + 0x60);
    } else {
        *(s32 *)((s8 *)arg0 + 0x60) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0xBC) = sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x60));
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805D9794;
    *(f32 *)((s8 *)arg0 + 0xC4) = cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x60));
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805D97B4;
    reset__21TObjEneRe7BeruraPunchFPv(arg0);
    *(s32 *)((s8 *)arg0 + 0xB4) = 1;
}

}
