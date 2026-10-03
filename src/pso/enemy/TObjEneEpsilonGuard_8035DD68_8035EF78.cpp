#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
};

struct VBase_18_599a64 { char pad[0x18]; };

struct VObj_18_599a64 : VBase_18_599a64 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct Rec_8035F4B4 { u8 b[0x1C]; };

struct Self_8035F4B4 { u8 pad[0x3C0]; Rec_8035F4B4 recs[4]; };

typedef s32 M2C_UNK;
struct VBase_8035F234 { char pad[0x18]; };

struct VObj_8035F234 : VBase_8035F234 {
    virtual void m0(int);
};

extern "C" {
M2C_UNK handle_message__19TObjEneEpsilonGuardFPvi(void *, s32);
M2C_UNK TObjEneEpsilonGuard__sub_8035E430(void *, s32);
M2C_UNK TObjEneEpsilonGuard__sub_8035E578(void *, s32);
M2C_UNK state_orbit__19TObjEneEpsilonGuardFPvi(void *, s32);
M2C_UNK TObjEneEpsilonGuard__sub_8035E8C0(void *, s32);
M2C_UNK handle_event__19TObjEneEpsilonGuardFPvi(void *, s32);
void TObjEneEpsilonGuard__vt85(void *arg0, s32 arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK transition_enemy_state(void *, int);
s32 find_entity_by_id(int);
M2C_UNK update_guard_state__19TObjEneEpsilonGuardFPv(void *);
M2C_UNK update_center_position__19TObjEneEpsilonGuardFPv(void *);
void run_task__19TObjEneEpsilonGuardFv(u8 *arg0);
M2C_UNK enemy_copy_target_destination(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern f32 *TObjEneEpsilonGuard__data_805D6F74;
void TObjEneEpsilonGuard__sub_8035EFD8(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK activate_and_dispatch__10TObjPlayerFPv(void *);
M2C_UNK TObjEneEpsilonGuard__sub_8035F2F4(void *);
M2C_UNK TObjEneEpsilon__ct();
extern void *__vt__19TObjEneEpsilonGuard[];
extern s32 lbl_805D4458;
void *TObjEneEpsilonGuard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjEneEpsilon__vt0(void *, int);
extern void *__vt__19TObjEneEpsilonGuard[];
u8 *__dt__19TObjEneEpsilonGuardFv(u8 *arg0, s16 arg1);
}

extern "C" {

void TObjEneEpsilonGuard__vt26(void);
void TObjEneEpsilonGuard__vt59(void);
void TObjEneEpsilonGuard__vt60(void);
void TObjEneEpsilonGuard__vt61(void);
s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0);
void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__nw__7TObjectFUl(int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

extern const f64 lbl_80479C88;

s32 calc_angle_to_target__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f3;

    enemy_copy_target_destination((void *)(arg0));
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
    return (s32) (lbl_80479C88 * get_ad_end_text_start__10TObjPlayerFv((f32) (temp_f3 - M2C_FIELD(arg0, f32 *, 0x394)), (f32) (M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x39C)), (f32) (temp_f3)));
}

#pragma push
#pragma fp_contract on
void TObjEneEpsilonGuard__sub_8035EFD8(u8 *arg0, s32 arg1) {
    enemy_copy_target_destination((void *)(arg0));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0) * sin_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((M2C_FIELD(TObjEneEpsilonGuard__data_805D6F74, f32 *, 0) * cos_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x39C));
}
#pragma pop

void TObjEneEpsilonGuard__vt59(void) {  }
void TObjEneEpsilonGuard__vt60(void) {  }
void TObjEneEpsilonGuard__vt61(void) {  }
void TObjEneEpsilonGuard__vt26(void) {  }

extern void *tl_04;

void TObjEneEpsilonGuard__vt85(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        handle_event__19TObjEneEpsilonGuardFPvi((void *) (arg0), arg2);
        return;
    case 1:
        TObjEneEpsilonGuard__sub_8035E8C0((void *) (arg0), arg2);
        return;
    case 2:
        state_orbit__19TObjEneEpsilonGuardFPvi((void *) (arg0), arg2);
        return;
    case 3:
        TObjEneEpsilonGuard__sub_8035E578((void *) (arg0), arg2);
        return;
    case 4:
        TObjEneEpsilonGuard__sub_8035E430((void *) (arg0), arg2);
        return;
    case 5:
        handle_message__19TObjEneEpsilonGuardFPvi((void *) (arg0), arg2);
        return;
    }
}

#pragma push
#pragma fp_contract on
void run_task__19TObjEneEpsilonGuardFv(u8 *arg0) {
    s32 temp_r3;
    if (((VObj_18 *)(arg0))->m81() != 4) {
        update_guard_state__19TObjEneEpsilonGuardFPv((void *) (arg0));
        ((VObj_18 *)(arg0))->m83();
        if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x10)) {
            ((VObj_18 *)(arg0))->m86();
            update_center_position__19TObjEneEpsilonGuardFPv((void *) (arg0));
            set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
            ((VObj_18 *)(arg0))->m98();
            return;
        }
        temp_r3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x470)));
        if (temp_r3 != 0) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r3 + 0x38));
            update_center_position__19TObjEneEpsilonGuardFPv((void *) (arg0));
        }
    } else if (M2C_FIELD(arg0, s16 *, 0x326) == 0) {
        transition_enemy_state((void *) (arg0), (int) (0));
    }
}
#pragma pop

void * create__19TObjEneEpsilonGuardFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneEpsilonGuard__ct((void *)(o), (void *)(tl_04), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3), (void *)(arg4));
    }
    return o;
}

u8 *__dt__19TObjEneEpsilonGuardFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x18) = __vt__19TObjEneEpsilonGuard;
        if (M2C_FIELD(arg0, void **, 0x440) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x440));
            M2C_FIELD(arg0, void **, 0x440) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x45C) != NULL) {
            free_collision_body_parts(M2C_FIELD(arg0, void **, 0x45C));
            if (M2C_FIELD(arg0, VObj_8035F234 **, 0x45C) != NULL) {
                M2C_FIELD(arg0, VObj_8035F234 **, 0x45C)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x45C) = NULL;
        }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs(arg0 + 0x4BC, -1);
        TObjEneEpsilon__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjEneEpsilonGuard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    s32 var_r30;
    TObjEneEpsilon__ct();
    M2C_FIELD(arg0, void ***, 0x18) = __vt__19TObjEneEpsilonGuard;
    init_common__18TObjEneMe3SinowZoaFPv((void *) ((u8 *)(arg0) + 0x4BC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4458;
    M2C_FIELD(arg0, s16 *, 0x470) = obj_getField1c((void *) (arg2));
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16)(s32)arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16)(s32)arg4;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg2, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg2, s16 *, 0x2A);
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x50), (void *) ((u8 *)(arg2) + 0x50));
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32)arg6;
    TObjEneEpsilonGuard__sub_8035F2F4((void *) (arg0));
    ((VObj_18_599a64 *)(arg0))->m93();
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
    for (var_r30 = 0; var_r30 < 4; var_r30++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Self_8035F4B4 *)arg0)->recs[var_r30]);
    }
    return arg0;
}

}
