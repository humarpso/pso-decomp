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
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct SubBase { char pad[0x14]; };

struct VSub : SubBase { virtual void m0(); virtual void m1(); virtual void m2(); };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DE704;
void TObjEneBm9Mericarol__sub_802D095C(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
s32 TObjEneDD__sub_800BBA18(void * a0, s32 a1);
void TObjEneBm9Mericarol__sub_802D095C(u8 *arg0);
void TObjEneBm9Mericarol__sub_802D0B04(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TOTrapAncient01__sub_80226578(void *, void *, void *, int, int);
void TObjEneBm9Mericarol__sub_802D073C(s32 arg0);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
extern const f32 lbl_805DE6F4;
extern const f32 lbl_805DE714;
extern const f32 lbl_805DE728;
extern const f32 lbl_805DE740;
extern const f32 lbl_805DE744;
extern const f32 lbl_805DE748;
void TObjEneBm9Mericarol__sub_802D078C(u8 *arg0);
}

extern "C" {

void TObjEneBm9Mericarol__sub_802D093C(void);
void TObjEneBm9Mericarol__sub_802D0940(void);
void TObjEneBm9Mericarol__sub_802D09AC(void);
void TObjEneBm9Mericarol__sub_802D0A2C(void);
void TObjPlayer__sub_802D14B4(u8 *arg0);
void change_state__19TObjEneBm9MericarolFPv(void *arg0);
void *create__19TObjEneBm9MericarolFPv(void *arg0);
void free_shared_instances__19TObjEneBm9MericarolFv(void);
s32 get_phase__19TObjEneBm9MericarolFPv(void* p);
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0);
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0);
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0);
s32 TBoss8Dragon__sub_800BB780(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneBm9Mericarol__ct(void *, void *, void *);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_802D1C84();

void TObjEneBm9Mericarol__sub_802D073C(s32 arg0) {
    TOTrapAncient01__sub_80226578((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3A810))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

s32 get_phase__19TObjEneBm9MericarolFPv(void* p) { return *(s32*)((char*)p + 0x45c); }

#pragma push
#pragma opt_common_subs off
void TObjEneBm9Mericarol__sub_802D078C(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x45C) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x45C);
    if ((temp_r0 < 0) || (temp_r0 > 2)) {
        temp_f1 = calc_boss4_scale__10TObjPlayerFi((s32) arg0);
        if (temp_f1 > lbl_805DE728) {
            M2C_FIELD(arg0, s32 *, 0x45C) = 2;
        } else if (temp_f1 > lbl_805DE740) {
            M2C_FIELD(arg0, s32 *, 0x45C) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x45C) = 0;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x440) = (f32) (lbl_805DE744 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, f32 *, 0x444) = (f32) (lbl_805DE748 + M2C_FIELD(arg0, f32 *, 0x358));
    if (M2C_FIELD(arg0, f32 *, 0x444) < lbl_805DE6F4) {
        M2C_FIELD(arg0, f32 *, 0x444) = (f32) lbl_805DE6F4;
    }
    M2C_FIELD(arg0, f32 *, 0x448) = (f32) (lbl_805DE714 + M2C_FIELD(arg0, f32 *, 0x35C));
}
#pragma pop

s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x438) & 2) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return 1;
    }
    return 0;
}
void TObjEneBm9Mericarol__sub_802D093C(void) {  }
void TObjEneBm9Mericarol__sub_802D0940(void) {  }
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void TObjEneBm9Mericarol__sub_802D095C(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DE704);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneBm9Mericarol__sub_802D09AC(void) {  }
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        if (M2C_FIELD(arg0, s32 *, 0x438) & 0x20) {
            TBoss8Dragon__sub_800BB780();
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void change_state__19TObjEneBm9MericarolFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xB) && (temp_r0 != 0xC)) {
        TObjEneDD__sub_800BBA18(arg0, 0xB);
    }
}
void TObjEneBm9Mericarol__sub_802D0A2C(void) {  }

extern u32 lbl_805D6860;
extern u32 lbl_805D6864;
extern u32 lbl_805D6868;

#pragma push
#pragma fp_contract on
void TObjEneBm9Mericarol__sub_802D0B04(u8 *arg0) {
    s16 temp_r3_2;
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x438);
    if (temp_r3 & 0x10) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r3 & 0xFFFFFFEF);
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x390) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r3 | 0x10);
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r3_2 == 0) || (temp_r3_2 == 1)) {
            ((VSub *)(arg0 + 0x46C))->m2();
            TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (s32)((int) (2)));
        }
    }
    TObjEneBm9Mericarol__sub_802D095C((u8 *)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}
#pragma pop

void free_shared_instances__19TObjEneBm9MericarolFv(void) {
    if ((u32) lbl_805D6864 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6864, 1);
        lbl_805D6864 = 0U;
    }
    if ((u32) lbl_805D6860 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6860, 1);
        lbl_805D6860 = 0U;
    }
    fn_802D1C84();
    if ((u32) lbl_805D6868 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6868, 1);
        lbl_805D6868 = 0U;
    }
}

extern void *tl_04;

void *create__19TObjEneBm9MericarolFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4B0);
    if (o != NULL) {
        o = TObjEneBm9Mericarol__ct(o, tl_04, arg0);
    }
    return o;
}

void TObjPlayer__sub_802D14B4(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10C) != 0) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xD8, 0, 0);
    }
}

}
