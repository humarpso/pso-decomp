#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800EB3D4 {
    s32 sp8;
    u8 pad_C[0x2];
    s16 spE;
    u8 trailing_storage[0x4];
};

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Stack_800EB4A0 {
    s32 sp8;
    u8 pad_C[0x2];
    s16 spE;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
M2C_UNK TObjEneSlimeOne__sub_800EB654(int, void *);
s16 check_player_field_7cc__15TObjEneSlimeOneFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern s32 lbl_805D586C;
void TObjEneSlimeOne__vt60(u8 *arg0);
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
void TObjEneSlimeOne__vt59(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 TLobby__sub_8002AFD4(void *, void *, int);
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
s32 TObjEneSlimeOne__sub_800EB1B4(void *);
s32 initialize__9TObjEnemyFPv(void *);
extern M2C_UNK __vt__15TObjEneSlimeOne[];
extern s32 lbl_805D2ADC;
u8 *TObjEneSlimeOne__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
s32 add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 TLobby__sub_8002AFD4(void *, void *, int);
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
s32 TObjEneSlimeOne__sub_800EB1B4(void *);
s32 initialize__9TObjEnemyFPv(void *);
s32 TObjPlayer__sub_80156844(void *, void *, int);
extern M2C_UNK __vt__15TObjEneSlimeOne[];
extern s32 lbl_805D2ADC;
u8 *TObjEneSlimeOne__sub_800EB4A0(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TObjEneSlimeOne__vt61(void* p);
void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1);
void clear_child_flag__15TObjEneSlimeOneFPv(void *arg0);
s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1);
s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2);
void init_state__15TObjEneSlimeOneFPv(void* a0);
void reset_display__15TObjEneSlimeOneFPv(void* a0);
void set_display_mode__15TObjEneSlimeOneFPvi(void *arg0, s32 arg1);
void set_random_timer_15__15TObjEneSlimeOneFPv(void* p);
void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2);
void set_target_flag_bit0__15TObjEneSlimeOneFPv(void *arg0);
void update_wait_search__15TObjEneSlimeOneFPv(void *arg0);
s32 TObjControl__ct(s32, s32);
void TObjEneGibbles__sub_80156720(void *);
int TObjEneSlimeOne__sub_800EAD84(void);
int TObjEneSlimeOne__sub_800EAE78(void*, void*);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEneSlimeOneFis(void *, int);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();
void request_destroy__11TBoss4Type2FUi(void *);

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void reset_display__15TObjEneSlimeOneFPv(void* a0) { set_display_mode__15TObjEneSlimeOneFPvi((void *)((void*)(a0)), (s32)((void*)(0))); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffbffff); *(float*)((char*)a0 + 0x398) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; }

extern f32 lbl_805DA6DC;

void update_wait_search__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4(arg0, 0, lbl_805DA6DC) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C8) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C8) = 5;
            }
            set_random_timer_15__15TObjEneSlimeOneFPv((void*)((void*)(arg0)));
            return;
        }
        TObjEneSlimeOne__sub_800EAE78((void*)(arg0), (void*)(1));
    }
}

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void init_state__15TObjEneSlimeOneFPv(void* a0) { TObjEneSlimeOne__sub_800EAD84(); *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; *(float*)((char*)a0 + 0x3b0) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3ac) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a8) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a0) = lbl_805DA6B4; *(int*)((char*)a0 + 0x3c8) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); set_display_mode__15TObjEneSlimeOneFPvi((void *)((void*)(a0)), (s32)((void*)((void*)0))); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000); set_random_timer_15__15TObjEneSlimeOneFPv((void*)((void*)(a0))); }

void set_random_timer_15__15TObjEneSlimeOneFPv(void* p) { set_random_timer__15TObjEneSlimeOneFPvii((void *)(p), (s32)(15), (s32)(15)); }

void TObjEneSlimeOne__vt59(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0xB) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        TObjEneSlimeOne__sub_800EAE78((void*)(arg0), (void*)(0xB));
    }
}

void TObjEneSlimeOne__vt60(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0xC) {
        if (((s32) M2C_FIELD(arg0, u16 *, 0x2D4) < (s32) lbl_805D586C) && (TPlayerBattleCtrl4P__sub_801BA74C() != 0U) && (check_player_field_7cc__15TObjEneSlimeOneFPv() == 2) && ((u32) M2C_FIELD(arg0, u32 *, 0x3F0) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) M2C_FIELD(arg0, u32 *, 0x3F0)) != 0)) {
            TObjEneSlimeOne__sub_800EB654((int) (M2C_FIELD(arg0, u32 *, 0x3F0)), (void *) (arg0 + 0x38));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        TObjEneSlimeOne__sub_800EAE78((void*)((void *) (arg0)), (void*)((int) (0xC)));
    }
}

void TObjEneSlimeOne__vt61(void* p) { if (*(int*)((char*)p + 0x384) != 13) { TObjEneSlimeOne__sub_800EAE78((void*)(p), (void*)((void*)13)); } }

void clear_child_flag__15TObjEneSlimeOneFPv(void *arg0) {
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x3EC) == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

void set_target_flag_bit0__15TObjEneSlimeOneFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x38C);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

void set_display_mode__15TObjEneSlimeOneFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x38C);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000 | 0x528);
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 1:
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x38C);
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x0A000000 | 0x28);
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3EC) = 1;
        return;
    }
}

extern M2C_UNK lbl_8043D288;

void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (arg1 + (s32) ((f32) arg2 * calc_boss4_scale__10TObjPlayerFi()));
}

extern M2C_UNK __vt__15TObjEneSlimeOne[];

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneSlimeOne;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0;
        if (M2C_FIELD(arg0, void **, 0x3E8) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3E8)); M2C_FIELD(arg0, M2C_UNK *, 0x3E8) = 0; }
        __dt__15TObjEneSlimeOneFis(M2C_FIELD(arg0, void **, 0x388), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

typedef char RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne_size[sizeof(RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne) == 0x14C ? 1 : -1];
u8 *TObjEneSlimeOne__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    typedef char sp8_offset[(offsetof(Stack_800EB3D4, sp8) == 0x0) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_800EB3D4, spE) == 0x6) ? 1 : -1];
    Stack_800EB3D4 stack;
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800EB3D4___vt__15TObjEneSlimeOne *)&__vt__15TObjEneSlimeOne).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2ADC;
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (2));
    ((VObj_18_aa4667 *)(arg0))->m79(arg3);
    if (TLobby__sub_8002AFD4((void *) (arg0), (void *) (&stack.sp8), (int) (1)) != 0) {
        stack.sp8 = 0;
        stack.spE = 0;
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3DC), (void *) (arg4));
    TObjEneSlimeOne__sub_800EB1B4((void *) (arg0));
    TObjEneSlimeOne__sub_800EAE78((void*)((void *) (arg0)), (void*)((int) (0xE)));
    return arg0;
}

typedef char RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne_size[sizeof(RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne) == 0x14C ? 1 : -1];
u8 *TObjEneSlimeOne__sub_800EB4A0(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    typedef char sp8_offset[(offsetof(Stack_800EB4A0, sp8) == 0x0) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_800EB4A0, spE) == 0x6) ? 1 : -1];
    Stack_800EB4A0 stack;
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800EB4A0___vt__15TObjEneSlimeOne *)&__vt__15TObjEneSlimeOne).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2ADC;
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (2));
    ((VObj_18_aa4667 *)(arg0))->m79(arg3);
    if (TLobby__sub_8002AFD4((void *) (arg0), (void *) (&stack.sp8), (int) (1)) != 0) {
        stack.sp8 = 0;
        stack.spE = 0;
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    TObjEneSlimeOne__sub_800EB1B4((void *) (arg0));
    TObjPlayer__sub_80156844((void *) (arg0), (void *) (arg0 + 0x38), (int) (0));
    TObjEneSlimeOne__sub_800EAE78((void*)((void *) (arg0)), (void*)((int) (0)));
    return arg0;
}

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = ((s32)TObjEneSlimeOne__ct((u8 *)(var_r31), (M2C_UNK)(var_r4), (s32)(arg0), (s32)(arg1), (s32)(arg2)));
    }
    return var_r31;
}

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = ((s32)TObjEneSlimeOne__sub_800EB4A0((u8 *)(var_r31), (M2C_UNK)(var_r4), (s32)(arg0), (s32)(arg1)));
    }
    return var_r31;
}

}
