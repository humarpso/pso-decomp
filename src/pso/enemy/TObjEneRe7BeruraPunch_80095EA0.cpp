#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
extern const f32 lbl_805D979C;
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
void TObjEneRe7BeruraPunch__sub_80095FAC(u8 *arg0);
u8 * csnVector(s32, s32, s32);
u8 *find_entity_by_id(u16);
M2C_UNK TObjEneRe7Berura__sub_80094D98();
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
extern const f32 lbl_805D97A4;
extern const f32 lbl_805D97A8;
void TObjEneRe7BeruraPunch__sub_80096030(u8 *arg0);
s32 TObjEneRe7Berura__sub_80094C68(u8 *);
s32 TObjEneRe7Berura__sub_80094CD0(u8 *);
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
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2);
void render__21TObjEneRe7BeruraPunchFv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
u8 *find_entity_by_id(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK init_part__16TObjEneRe7BeruraFi(s32);
M2C_UNK reset__21TObjEneRe7BeruraPunchFPv(void *);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m6();
            if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                some_id_805c6f74 = lbl_805D5660;
                return;
            }
        }
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xE8, 0, 0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        translate_matrix(0, lbl_805D9794, M2C_FIELD(arg0, f32 *, 0xCC), lbl_805D9794);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xF4);
        scale_matrix(0, temp_f1, temp_f1, lbl_805D9798);
        init_part__16TObjEneRe7BeruraFi(M2C_FIELD(arg0, s32 *, 0xB8));
        pop_matrix();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
    }
}

extern const f32 lbl_805D9794;
extern const f32 lbl_805D97B4;

#pragma push
#pragma fp_contract on
void TObjEneRe7BeruraPunch__sub_80095FAC(u8 *arg0) {
    if (((VObj_14_c1c33b *)((u8 *)(arg0) + (248)))->m4() != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * M2C_FIELD(arg0, f32 *, 0xBC))) + M2C_FIELD(arg0, f32 *, 0xDC));
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * M2C_FIELD(arg0, f32 *, 0xC4))) + M2C_FIELD(arg0, f32 *, 0xE4));
    TObjEneRe7BeruraPunch__sub_80096300((void *) (arg0));
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
void TObjEneRe7BeruraPunch__sub_80096030(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80096030, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80096030, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80096030, sp10) == 0x8) ? 1 : -1];
    Stack_80096030 stack;
    s32 var_r31;
    u8 *temp_r3;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) (M2C_FIELD(arg0, f32 *, 0xF4) + lbl_805D97A4);
    if (M2C_FIELD(arg0, f32 *, 0xF4) > lbl_805D97A8) {
        M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805D97A8;
    }
    var_r31 = 0;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) (M2C_FIELD(arg0, f32 *, 0x114) + TObjEneRe7BeruraPunch__data_805D97A0);
    stack.sp8 = (TObjEneRe7BeruraPunch__data_805D97A0 * M2C_FIELD(arg0, f32 *, 0xBC)) + M2C_FIELD(arg0, f32 *, 0x38);
    stack.spC = M2C_FIELD(arg0, f32 *, 0xE0);
    stack.sp10 = (TObjEneRe7BeruraPunch__data_805D97A0 * M2C_FIELD(arg0, f32 *, 0xC4)) + M2C_FIELD(arg0, f32 *, 0x40);
    temp_r3 = (u8 *)(csnVector((s32) (arg0 + 0xDC), (s32) &stack.sp8, 0x88E0));
    if (temp_r3 != NULL) {
        var_r31 = 1;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) *M2C_FIELD(temp_r3, f32 **, 4);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) *M2C_FIELD(temp_r3, f32 **, 4);
    } else {
        M2C_FIELD(arg0, f32 *, 0xDC) = stack.sp8;
        M2C_FIELD(arg0, f32 *, 0xE4) = stack.sp10;
    }
    TObjEneRe7BeruraPunch__sub_80096300((void *) (arg0));
    if ((var_r31 != 0) || (TObjEneRe7BeruraPunch__sub_80096150((void *)(arg0)) != 0) || (M2C_FIELD(arg0, f32 *, 0x114) > M2C_FIELD(arg0, f32 *, 0xC8))) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 2;
        if (find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xB0)) != NULL) {
            TObjEneRe7Berura__sub_80094D98();
        }
    }
}
#pragma pop

s32 TObjEneRe7BeruraPunch__sub_80096150(void *arg0) {
    u8 *temp_r31;
    void *temp_r4_2;
    temp_r31 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xB0));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = M2C_FIELD(arg0, f32 *, 0xCC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0x30) = M2C_FIELD(arg0, f32 *, 0xCC);
    temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r4_2, f32 *, 0x34) = lbl_805D97AC * (lbl_805D97B0 * M2C_FIELD(arg0, f32 *, 0xF4));
    refresh_collision_body_centers(arg0, temp_r4_2, lbl_805D97B0, lbl_805D97AC);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
    temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
    if ((M2C_FIELD(temp_r4_2, s32 *, 0x18) | M2C_FIELD(temp_r4_2, s32 *, 0x44)) & 0x200000) {
        return 1;
    }
    if (temp_r31 != 0) {
        TObjEneRe7Berura__sub_80094CD0(temp_r31);
    }
    Pair_80096150 p = lbl_80439F28[0];
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        p.b &= ~2;
    }
    ((VObj_80096150 *)arg0)->m15(&p, M2C_FIELD(arg0, s32 *, 0xD8));
    if (temp_r31 != 0) {
        TObjEneRe7Berura__sub_80094C68(temp_r31);
    }
    return 0;
}

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;

    M2C_FIELD(arg0, s32 *, 0xB8) = arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0xDC, arg2);
    TObjEneRe7BeruraPunch__sub_80096300(arg0);
    temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xB0));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xBC) = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC4) = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D97B4;
    reset__21TObjEneRe7BeruraPunchFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0xB4) = 1;
}

}
