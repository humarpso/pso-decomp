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

struct RecoveredGlobal_80334CC8___vt__13TObjEneMorfos {
    M2C_UNK value;
    u8 remaining[0x1A8];
};

struct Vec_8033496C { f32 x, y, z; };

struct Obj_8033496C { u8 pad[0x60]; s32 f60; u8 pad1[0x2D4 - 0x64]; u16 f2D4; u8 pad2[0x2FC - 0x2D6]; Vec_8033496C pos; u8 pad3[0x326 - 0x308]; s16 f326; u8 pad4[0x3C0 - 0x328]; s32 f3C0; };

struct Pl_8033496C { u8 pad[0x2FC]; Vec_8033496C pos; };

struct Vec_80334A4C { f32 x, y, z; };

struct Obj_80334A4C { u8 pad[0x60]; s32 f60; u8 pad1[0x2FC - 0x64]; Vec_80334A4C pos; u8 pad4[0x3C0 - 0x308]; s32 f3C0; u8 pad5[0x498 - 0x3C4]; u8 snd[4]; };

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
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800A05B8(void *, int);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
M2C_UNK __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __destroy_arr(void *, void *, int, int);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK __vt__13TObjEneMorfos[];
u8 *__dt__13TObjEneMorfosFv(u8 *arg0, s16 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
s32 TObjPlayer__sub_80141F84(s32, s32);
Pl_8033496C *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjEneMorfos__sub_80334884(u8 *arg0);
s32 TObjEneMorfos__sub_803348F0(u8 *arg0);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 TObjEneMorfos__data_80477610;
void TObjEneMorfos__vt60(Obj_8033496C *arg0);
f32 TObjPlayer__sub_80014108(void *, void *, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TObjEneDellBiter__sub_80087350(void *, int);
s32 TObjPlayer__sub_80141F84(s32, s32);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 TObjEneMorfos__data_80477610;
extern const f32 TObjEneMorfos__data_805DF874;
f32 TObjEneMorfos__vt20(Obj_80334A4C *arg0, Obj_80334A4C *arg1, f32 farg0);
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

void TObjEneMorfos__vt60(Obj_8033496C *arg0) {
    Vec_8033496C v;
    Pl_8033496C *pl;
    s32 d;
    if (arg0->f326 == 0xA) {
        return;
    }
    pl = TPlayerBattleCtrl4P__sub_801BA74C(arg0->f2D4);
    if (pl != 0) {
        VecCopy__FP3VecPC3Vec(&v, &pl->pos);
        TBoss6Type1__sub_803D9370(&v, &arg0->pos);
        d = TObjPlayer__sub_80141F84(arg0->f60, (s32)(TObjEneMorfos__data_80477610 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
    } else {
        d = 0;
    }
    if (d < 0x4000) {
        TBoss8Dragon__sub_800BB780(arg0);
        if (TObjEneMorfos__sub_803348F0((u8 *)arg0) == 0) {
            TObjEneMorfos__sub_80334884((u8 *)arg0);
        }
    } else if (arg0->f3C0 & 4) {
        TBoss8Dragon__sub_800BB780(arg0);
    } else {
        TObjEneDD__sub_800BBA18(arg0, (void *)0xA);
    }
}

f32 TObjEneMorfos__vt20(Obj_80334A4C *arg0, Obj_80334A4C *arg1, f32 farg0) {
    Vec_80334A4C v;
    f32 ret = TObjEneMorfos__data_805DF874;
    s32 d;
    if (arg1 != 0) {
        VecCopy__FP3VecPC3Vec(&v, &arg1->pos);
        TBoss6Type1__sub_803D9370(&v, &arg0->pos);
        d = TObjPlayer__sub_80141F84(arg0->f60, (s32)(TObjEneMorfos__data_80477610 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
    } else {
        d = 0;
    }
    if (arg0->f3C0 & 0x10) {
        if (d < 0x4000) {
            TObjEneDellBiter__sub_80087350(arg0->snd, 0x214);
            TObjEneDellBiter__sub_80087350(arg0->snd, 0x21A);
        } else {
            arg0->f3C0 &= ~0x10;
            arg0->f3C0 |= 0x20;
            ret = TObjPlayer__sub_80014108(arg0, arg1, farg0);
        }
    } else {
        ret = TObjPlayer__sub_80014108(arg0, arg1, farg0);
    }
    return ret;
}

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

typedef char RecoveredGlobal_80334CC8___vt__13TObjEneMorfos_size[sizeof(RecoveredGlobal_80334CC8___vt__13TObjEneMorfos) == 0x1AC ? 1 : -1];
u8 *__dt__13TObjEneMorfosFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80334CC8___vt__13TObjEneMorfos *)&__vt__13TObjEneMorfos).value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x494) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x494));
            M2C_FIELD(arg0, u32 *, 0x494) = 0U;
        }
        TObjEneGibbles__sub_80156720((void *) (arg0));
        __destroy_arr((void *) (arg0 + 0x424), (void *) (&TObjPlayer__sub_800D7C58), (int) (0x1C), (int) (4));
        __dt__18TObjEneMe3SinowZoaFPvs((void *) (arg0 + 0x408), (int) (-1));
        TObjPlayer__sub_800A05B8((void *) (arg0 + 0x3EC), (int) (-1));
        __dt__9TObjEneDDFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
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
