#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0);
void TObjEneBm9Mericarol__sub_802D093C(void);
void TObjEneBm9Mericarol__sub_802D0940(void);
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);

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

}
#else
#if PSO_CLASS_PACKAGE == 0x802CECE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_particle_effect__19TObjEneBm9MericarolFv(void);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern s32 lbl_805D686C;

void update_particle_effect__19TObjEneBm9MericarolFv(void) {
    switch (lbl_805D686C) {
    case 0x21:
    case 0x2B:
    case 0x64:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D686C += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CED3C
#include "types.h"

extern "C" {

void TObjEneBm9Mericarol__sub_802CED3C(void);
void TObjEneBm9Mericarol__sub_802CED40(void* p);

void TObjEneBm9Mericarol__sub_802CED3C(void) {  }
void TObjEneBm9Mericarol__sub_802CED40(void* p) { *(u32*)((char*)p + 0x438) |= 0x2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CF040
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_802cf040 { char pad[0x18]; };
struct V_A_802cf040 : Base_A_802cf040 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43();
    virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47();
    virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51();
    virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55();
    virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
    virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67();
    virtual void p68(); virtual void p69(); virtual void p70(); virtual void p71();
    virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75();
    virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
    virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83();
    virtual void p84(); virtual void p85();
    virtual void m86();
    virtual void p87(); virtual void p88(); virtual void p89(); virtual void p90();
    virtual void p91(); virtual void p92(); virtual void p93();
    virtual void m94();
    virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98();
    virtual void p99();
    virtual void m100();
};

extern "C" {

void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *, s32);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(f32);

extern const f32 lbl_805DE6F4;

void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((V_A_802cf040 *) arg0)->m94();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r5 & ~0x28);
        set_field_378__9TObjEneDDFPvi(arg0, 3, temp_r5);
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0F), arg0 + 0x38, 0, 0);
        return;
    case 3:
        if (objInBand__FP7GameObjf(M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DE6F4) != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        ((V_A_802cf040 *) arg0)->m100();
        ((V_A_802cf040 *) arg0)->m86();
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x490);
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) (temp_r4 + 1);
        TObjEneBm9Mericarol__sub_802D073C(arg0, temp_r4);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFFD);
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D05BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm9Mericarol__sub_802D05BC(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK fn_800B98C0(void *);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *);

struct TBase_802d05bc { char pad[0x18]; };
struct TObj_802d05bc : TBase_802d05bc {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
};

struct SubBase_802d05bc { char pad[0x14]; };
struct SubObj_802d05bc : SubBase_802d05bc {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual M2C_UNK v5();
    virtual void v6();
};

void TObjEneBm9Mericarol__sub_802D05BC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        ((TObj_802d05bc *)arg0)->v93();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x28);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFEF);
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        fn_800B98C0(arg0);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x46C);
        TBoss3Volopt__sub_800D8E80(arg0 + 0x38);
        return;
    case 3:
        if (((SubObj_802d05bc *)(arg0 + 0x46C))->v5() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 2);
        }
    case 1:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        ((TObj_802d05bc *)arg0)->v100();
        ((TObj_802d05bc *)arg0)->v86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & ~0x28);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D06E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_action__19TObjEneBm9MericarolFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);

struct Base_802D06E0 { char pad[0x18]; };
struct VObj_802D06E0 : Base_802D06E0 {
#define VM(n) virtual void m##n();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)
    VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)VM(16)VM(17)VM(18)VM(19)
    VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)
    VM(30)VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)
    VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)VM(46)VM(47)VM(48)VM(49)
    VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)
    VM(60)VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)
    VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)VM(76)VM(77)VM(78)VM(79)
    VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)
    VM(90)VM(91)VM(92)
    virtual void m93();
#undef VM
};

void handle_action__19TObjEneBm9MericarolFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_802D06E0 *)arg0)->m93();
        return;
    case 3:
        TObjEneDD__sub_800BBA18(arg0, 1);
    case 5:
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D0784
#include "types.h"

extern "C" {

s32 get_phase__19TObjEneBm9MericarolFPv(void* p);

s32 get_phase__19TObjEneBm9MericarolFPv(void* p) { return *(s32*)((char*)p + 0x45c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D09AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm9Mericarol__sub_802D09AC(void);
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0);
void change_state__19TObjEneBm9MericarolFPv(void *arg0);
void TObjEneBm9Mericarol__sub_802D0A2C(void);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
s32 TBoss8Dragon__sub_800BB780(void);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D1070
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_instances__19TObjEneBm9MericarolFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
M2C_UNK fn_802D1C84();

extern u32 lbl_805D6860;
extern u32 lbl_805D6864;
extern u32 lbl_805D6868;

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D10E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TObjEneBm9MericarolFPv(void *arg0);
void *TObjEneBm9Mericarol__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__19TObjEneBm9MericarolFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4B0);
    if (o != NULL) {
        o = TObjEneBm9Mericarol__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D17F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E18A8[];

void *dt__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E18A8;
        if (M2C_FIELD(arg0, void **, 0x110) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x110)); M2C_FIELD(arg0, M2C_UNK *, 0x110) = 0; }
        if (M2C_FIELD(arg0, void **, 0x114) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x114)); M2C_FIELD(arg0, M2C_UNK *, 0x114) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D1B94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E1908[];

void *destroy__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1908;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D1C08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *construct__19TObjEneBm9MericarolFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TBoss8Dragon__sub_8008741C(s32, M2C_UNK, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
s32 is_alive__9TObjEneDDFPv(s32);

extern M2C_UNK lbl_804E1908[];
extern s32 lbl_805D3F38;

void *construct__19TObjEneBm9MericarolFPvii(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1908;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F38;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = TBoss8Dragon__sub_8008741C(M2C_FIELD(arg0, s32 *, 0x20) + 0x38, 0x20D, 0x40);
    }
    return arg0;
}

}
#endif
#endif
