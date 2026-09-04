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

extern "C" {
s32 objInBand__FP7GameObjf(f32);
M2C_UNK TObjEneDellBiter__sub_80305B60(void *);
extern const f32 lbl_805DF008;
void TObjEneDellBiter__sub_803058DC(s32 arg0);
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
    if (objInBand__FP7GameObjf((f32) (lbl_805DF008)) != 0) {
        TObjEneDellBiter__sub_80305B60((void *) (arg0));
    }
}

}
