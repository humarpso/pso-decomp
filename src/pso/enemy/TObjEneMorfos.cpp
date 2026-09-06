#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_6eb1ad { char pad[0x18]; };

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
int TObjEneDD__sub_800BBA18(void*, void*);
s32 TObjEneMorfos__sub_80334884(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 TObjEneMorfos__sub_803348F0(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv(void);
int set_player_state_default__12TBoss8DragonFPv(void *);
void TObjPlayer__sub_8023DEE0(void *, s16, s16, u16);
void TObjEneMorfos__sub_80332594(void *);
void set_hover_target_position__13TObjEneMorfosFPv(void *);
extern s32 lbl_805D53A4;
extern u8 *lbl_805D6D20;
extern u8 *lbl_805D6D24;
extern s32 lbl_805D6D28;
extern s32 lbl_805D6D2C;
extern const f32 lbl_805DF894;
void run_task__13TObjEneMorfosFv(u8 *arg0);
}

extern "C" {

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2);
void TObjEneMorfos__vt26(void);
void TObjEneMorfos__vt59(void);
void TObjEneMorfos__vt61(void* p);
s32 approach_value__13TObjEneMorfosFPvii(void *arg0, s32 arg1, s32 arg2);
void *create__13TObjEneMorfosFPv(void *arg0);
void unload_static_data__13TObjEneMorfosFv(void);
s32 TBoss4Type2__sub_80141FA8(s32);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneMorfosArm__sub_8033542C();
void TObjEneMorfos__sub_8033471C(void *);
void TObjEneMorfos__sub_80334D74(void *);
void __construct_array(void *, void *, void *, int, int);
void *__nw__7TObjectFUl(int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

s32 approach_value__13TObjEneMorfosFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

s32 TObjEneMorfos__sub_80334884(u8 *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3E4))) {
        TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (9)));
        return 1;
    }
    return 0;
}

s32 TObjEneMorfos__sub_803348F0(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x10) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3E0))) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x10);
        return 1;
    }
    return 0;
}

void TObjEneMorfos__vt59(void) {  }

void TObjEneMorfos__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneMorfos__vt26(void) {  }

extern M2C_UNK __vt__13TObjEneMorfos[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D4230;

void run_task__13TObjEneMorfosFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_6eb1ad *)(arg0))->m103();
        return;
    }
    if (((VObj_18_6eb1ad *)(arg0))->m81() != 4) {
        ((VObj_18_6eb1ad *)(arg0))->m83();
        if ((s32) lbl_805D6D28 != (s32) lbl_805D53A4) {
            lbl_805D6D28 = lbl_805D53A4;
            TObjPlayer__sub_8023DEE0(lbl_805D6D20, (s16) M2C_FIELD(arg0, s32 *, 0x3D4), 0, 2U);
        }
        if ((s32) lbl_805D6D2C != (s32) lbl_805D53A4) {
            lbl_805D6D2C = lbl_805D53A4;
            TObjPlayer__sub_8023DEE0(lbl_805D6D24, 0, (s16) ((f32) M2C_FIELD(arg0, s32 *, 0x3D4) * lbl_805DF894), 0U);
        }
    }
    set_hover_target_position__13TObjEneMorfosFPv(arg0);
    set_player_state_default__12TBoss8DragonFPv(arg0);
    ((VObj_18_6eb1ad *)(arg0))->m98();
    TObjEneMorfos__sub_80332594(arg0);
}

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneMorfos;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1004));
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1032));
    __construct_array((void *)((char *)arg0 + 1060), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4230;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneMorfos__sub_8033471C(arg0);
    TObjEneMorfos__sub_80334D74(arg0);
    M2C_FIELD(arg0, u32 *, 0x494) = 0;
    return arg0;
}

extern u32 TObjEneMorfos__data_805D6D14;

void unload_static_data__13TObjEneMorfosFv(void) {
    TObjEneMorfosArm__sub_8033542C();
    if ((u32) TObjEneMorfos__data_805D6D14 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMorfos__data_805D6D14, 1);
        TObjEneMorfos__data_805D6D14 = 0U;
    }
}

extern void *tl_04;

void *create__13TObjEneMorfosFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneMorfos__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

}
