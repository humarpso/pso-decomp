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
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual M2C_UNK m102();
};

extern "C" {
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
void TObjEneBm3FlyNest__sub_800B3ADC(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
void copy_pos__17TObjEneBm3FlyNestFPv(void* p);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
s32 TObjEneDD__sub_800BBA18(void * a0, s32 a1);
void TObjEneBm3FlyNest__sub_800B3D70(u8 *arg0);
}

extern "C" {

void TObjEneBm3FlyNest__sub_800B3BE8(void);
void TObjEneBm3FlyNest__sub_800B3CBC(void);
int TObjEneBm3FlyNest__sub_800B4158(void);
void copy_pos__17TObjEneBm3FlyNestFPv(void* p);
void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p);
void init_params__17TObjEneBm3FlyNestFPv(void *arg0);
void update_state__17TObjEneBm3FlyNestFPv(void *arg0);
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0);
s32 TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BAAE4(void*, void*, void*);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int VecCopy__FP3VecPC3Vec(void*, void*);
s32 check_v2_mode__9TObjEneDDFv();

void init_params__17TObjEneBm3FlyNestFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x390) = 0;
    } else if (temp_r0 > 6) {
        M2C_FIELD(arg0, s32 *, 0x390) = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = (s32) M2C_FIELD(arg0, f32 *, 0x35C);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
        return;
    }
    if (temp_r0_2 > 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0x1E;
    }
}

s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B8) > 0;
}

void TObjEneBm3FlyNest__sub_800B3ADC(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B4);
    switch (temp_r0) {
    case 0:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x3B0) <= (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x390) / 2)) || ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x4B4) = 1;
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        }
        return;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4C0) > 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4BC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) > (s32) M2C_FIELD(arg0, s32 *, 0x4C4)) {
                M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
                var_r5 = M2C_FIELD(arg0, s32 *, 0x4C0);
                temp_r0_2 = 6 - M2C_FIELD(arg0, s32 *, 0x3B0);
                if (temp_r0_2 < var_r5) {
                    var_r5 = temp_r0_2;
                }
                temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x394) - M2C_FIELD(arg0, s32 *, 0x3B4);
                if (temp_r0_3 < var_r5) {
                    var_r5 = temp_r0_3;
                }
                M2C_FIELD(arg0, s32 *, 0x4B8) = var_r5;
                return;
            }
        }
        break;
    }
}

void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p) { TObjEneDD__sub_800BAAE4(p, (char*)p + 0x2fc, (void*)0); }
void copy_pos__17TObjEneBm3FlyNestFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneBm3FlyNest__sub_800B3BE8(void) {  }
void update_state__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) && (check_v2_mode__9TObjEneDDFv() != 0)) {
        TBoss8Dragon__sub_800BB780(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 == 4) {
        TBoss8Dragon__sub_800BB780(arg0);
        return;
    }
    if (temp_r0 != 7) {
        TObjEneDD__sub_800BBA18(arg0, 7);
    }
}
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8) && (temp_r0 != 4)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 8);
    }
}
void TObjEneBm3FlyNest__sub_800B3CBC(void) {  }

    extern int lbl_805D5108;

#pragma push
#pragma fp_contract on
void TObjEneBm3FlyNest__sub_800B3D70(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m102();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    } else if (M2C_FIELD(arg0, s16 *, 0x326) == 0) {
        TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (s32)((int) (1)));
    }
    ((VObj_18 *)(arg0))->m86();
    copy_pos__17TObjEneBm3FlyNestFPv((void*)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}
#pragma pop

int TObjEneBm3FlyNest__sub_800B4158(void) {  return lbl_805D5108; }

}
