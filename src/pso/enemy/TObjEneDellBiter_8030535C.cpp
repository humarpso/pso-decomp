#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8030561C_8030535C { char pad[0x18]; };
struct VObj_8030561C_8030535C : Base_8030561C_8030535C {
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
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
};

struct Stack_80305B60 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
extern const f32 lbl_805DF008;
void TObjEneDellBiter__sub_803058DC(s32 arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneDellBiter__sub_803054A8(u8 *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneDellBiter__sub_803054FC(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneDellBiter__sub_80305550(u8 *arg0);
void TBoss2DeRolLe__sub_800B98D8(void *, u32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
void TObjEneDellBiter__sub_803055C8(u8 *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007E7D8(void *, void *, int, f32, f32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 TObjEneDellBiter__sub_803059BC(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 TObjEneDellBiter__data_805DEFF4;
extern const f32 lbl_805DF004;
extern const f32 lbl_805DF024;
void TObjEneDellBiter__sub_80305B60(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 fn_800D8830(void *, void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 TOTrapAncient01__sub_80226578(void *, void *, void *, int, int);
s32 TObjEneDellBiter__sub_803059BC(void *, void *);
extern const f32 TObjEneDellBiter__data_805DEFF4;
extern const f32 lbl_805DF01C;
void TObjEneDellBiter__sub_8030591C(s32 arg0);
s32 TObjEneDellBiter__sub_8030390C(void *, void *);
s32 TObjEneDellBiter__sub_80303AA0(void *, void *);
s32 TObjEneDellBiter__sub_80303BC0(void *, void *);
s32 TObjEneDellBiter__sub_80303F04(void *, void *);
s32 TObjEneDellBiter__sub_803040D0(void *, void *);
s32 handle_attack_event__16TObjEneDellBiterFPvi(void *, void *);
s32 TObjEneDellBiter__sub_803044AC(void *, void *);
s32 TObjEneDellBiter__sub_8030492C(void *, void *);
s32 TObjEneDellBiter__sub_80304B88(void *, void *);
s32 TObjEneDellBiter__sub_80304D10(void *, void *);
s32 run_task__16TObjEneDellBiterFPvi(void *, void *);
s32 handle_movement_event__16TObjEneDellBiterFPvi(void *, void *);
void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1);
void TObjEneDellBiter__vt85(s32 arg0, u32 arg1, s32 arg2);
}

extern "C" {

void TObjEneDellBiter__vt102(void *arg0, f32 farg0);
void clear_active_flag__16TObjEneDellBiterFPv(void *arg0);
void noop__16TObjEneDellBiterFv(void);
void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneEpsilon__sub_800B95E0();
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

void update_state__16TObjEneDellBiterFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        TObjEneDD__sub_800BBA18(arg0, 1);
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
    case 5:
        return;
    }
}

void TObjEneDellBiter__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        update_state__16TObjEneDellBiterFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        handle_movement_event__16TObjEneDellBiterFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        run_task__16TObjEneDellBiterFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneDellBiter__sub_80304D10((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneDellBiter__sub_80304B88((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneDellBiter__sub_8030492C((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneDellBiter__sub_803044AC((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        handle_attack_event__16TObjEneDellBiterFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        TObjEneDellBiter__sub_803040D0((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        TObjEneDellBiter__sub_80303BC0((void *) (arg0), (void *) (arg2));
        return;
    case 12:
        TObjEneDellBiter__sub_80303F04((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        TObjEneDellBiter__sub_80303AA0((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        TObjEneDellBiter__sub_8030390C((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

s32 TObjEneDellBiter__sub_803054A8(u8 *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi((s32)(arg0)) <= M2C_FIELD(arg0, f32 *, 0x4A8)) {
        TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (8)));
        return 1;
    }
    return 0;
}

s32 TObjEneDellBiter__sub_803054FC(u8 *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi((s32)(arg0)) <= M2C_FIELD(arg0, f32 *, 0x4B4)) {
        TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (9)));
        return 1;
    }
    return 0;
}

s32 TObjEneDellBiter__sub_80305550(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x10) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) && (calc_boss4_scale__10TObjPlayerFi((s32)((s32) arg0)) <= M2C_FIELD(arg0, f32 *, 0x4B8))) {
        TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (0xC)));
        return 1;
    }
    return 0;
}

void TObjEneDellBiter__sub_803055C8(u8 *arg0) {
    s32 temp_r3_2;
    u16 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x2D4);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C((u32) temp_r3);
        if (temp_r3_2 != 0) {
            TBoss2DeRolLe__sub_800B98D8(arg0, (u32) temp_r3_2);
        }
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 8);
    }
}

void TObjEneDellBiter__vt102(void *arg0, f32 farg0) {
    if (((VObj_8030561C_8030535C *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

void noop__16TObjEneDellBiterFv(void) {  }

extern f32 TObjEneDellBiter__data_805DF00C;

void clear_active_flag__16TObjEneDellBiterFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        update_linked_position__14TObjEneEpsilonFPv(TObjEneDellBiter__data_805DF00C);
        return;
    }
    if (TObjEneEpsilon__sub_800B95E0() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

void TObjEneDellBiter__sub_803058DC(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, lbl_805DF008) != 0) {
        TObjEneDellBiter__sub_80305B60((u8 *)((void *) (arg0)));
    }
}

void TObjEneDellBiter__sub_8030591C(s32 arg0) {
    if ((objInBand__FP7GameObjf((void *)((void *) (arg0)), (f32) (TObjEneDellBiter__data_805DEFF4)) != 0) || (objInBand__FP7GameObjf((void *)((void *) (arg0)), (f32) (lbl_805DF01C)) != 0)) {
        if (TObjEneDellBiter__sub_803059BC((void *) (arg0), (void *) (arg0 + 0x38)) != 0) {
            fn_800D8830((void *) (arg0), (void *) (arg0 + 0x38));
            return;
        }
        TOTrapAncient01__sub_80226578((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039E13))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF0));
    }
}

void TObjEneDellBiter__sub_80305B60(u8 *arg0) {
    Stack_80305B60 stack;
    stack.sp8 = lbl_805DF024;
    stack.spC = TObjEneDellBiter__data_805DEFF4;
    stack.sp10 = lbl_805DF004;
    TObjBoss2Tunnel__sub_8007E7D8((void *) (&stack.sp8), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (f32) (TObjEneDellBiter__data_805DEFF4), (f32) (lbl_805DF024));
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    if (TObjEneDellBiter__sub_803059BC((void *) (arg0), (void *) (&stack.sp8)) == 0) {
        TObjEneDellBiter__sub_80087350((void *) (&stack.sp8), (int) (0xF3));
    }
}

}
