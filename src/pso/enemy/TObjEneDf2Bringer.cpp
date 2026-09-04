#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneDf2Bringer__sub_800994F8(void);
void TObjEneDf2Bringer__vt86(void);

void TObjEneDf2Bringer__sub_800994F8(void) {  }
void TObjEneDf2Bringer__vt86(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80097274
#include "types.h"

extern "C" {

void TObjEneDf2Bringer__vt103(void* p);

int TObjEneDf2Bringer__sub_800994F8(void*);
int get_target_info__9TObjEneDDFPv(void*);

void TObjEneDf2Bringer__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneDf2Bringer__sub_800994F8(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80097D54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
u32 TBoss4Type2__sub_800874F4(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK enable__13TParticleCtrlFPv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK queue_destruction__7TObjectFv(void *);

struct TBase { char pad[0x18]; };
struct TObj : TBase {
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
    virtual M2C_UNK v87();
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
    virtual M2C_UNK v100();
};

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x484) <= 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        M2C_FIELD(arg0, s32 *, 0x484) = (s32) (M2C_FIELD(arg0, s32 *, 0x484) - 1);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C4) = TBoss4Type2__sub_800874F4(arg0 + 0x450, 0x100);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x4C4));
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x484) & 1) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x450);
        } else {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x45C);
        }
        ((TObj *)arg0)->v100();
        ((TObj *)arg0)->v87();
        TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD0F), arg0, arg0 + 0x38, 0, 0);
        return;
    case 5:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C4));
            M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80098970
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneDf2Bringer__sub_80098EB4(void *);
M2C_UNK TObjEneDf2Bringer__sub_80099148(void *);
M2C_UNK TObjEneDf2Bringer__sub_80099188(void *);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 TObjEneDf2Bringer__data_805D9820;
extern const f32 lbl_805D9824;

struct TBase { char pad[0x18]; };
struct TObj : TBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
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
};

struct SubBase { char pad[0x14]; };
struct SubObj : SubBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
};

void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((TObj *)arg0)->v93();
        ((SubObj *)(arg0 + 0x3C4))->v3();
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3640D), arg0 + 0x38, 0, 0);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        M2C_FIELD(arg0, s32 *, 0x494) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4B0) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneDf2Bringer__data_805D9820);
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B0);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4AC) > 0x14) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B40E), arg0 + 0x38, 0, 0);
                play_effect_if_v2__10TObjPlayerFi(-0x200);
            }
            TObjEneDf2Bringer__sub_80099188(arg0);
            TObjEneDD__sub_800BACE0(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805D9824);
            TObjEneDf2Bringer__sub_80098EB4(arg0);
            break;
        case 1:
            TObjEneDf2Bringer__sub_80099148(arg0);
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 2;
            }
            break;
        }
        if (((SubObj *)(arg0 + 0x3C4))->v5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((TObj *)arg0)->v94();
            ((TObj *)arg0)->v87();
            return;
        }
        break;
    case 5:
        ((TObj *)arg0)->v94();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80098C7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1);

M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        return;
    case 3:
        TObjEneDD__sub_800BBA18(arg0, 1);
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) + 1);
    case 5:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80098DB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x494) >= 5) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80098E4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);

struct Base_80098E4C { char pad[0x18]; };
struct VObj_80098E4C : Base_80098E4C {
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
    virtual int m97();
};

void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0) {
    if (((VObj_80098E4C *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800990F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0);
s32 TObjEneEpsilon__sub_800B95E0();
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

extern f32 TObjEneDf2Bringer__data_805D9820;

void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        update_linked_position__14TObjEneEpsilonFPv(TObjEneDf2Bringer__data_805D9820);
        return;
    }
    if (TObjEneEpsilon__sub_800B95E0() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80099550
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneDf2Bringer__vt61(void* p);
void TObjEneDf2Bringer__vt59(void);
void TObjEneDf2Bringer__vt26(void);

void TObjEneDf2Bringer__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800995C4
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneDf2Bringer__vt61(void* p);
void TObjEneDf2Bringer__vt59(void);
void TObjEneDf2Bringer__vt26(void);

void TObjEneDf2Bringer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 10) { TObjEneDD__sub_800BBA18(p, (void*)10); } }
void TObjEneDf2Bringer__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80099A60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDf2Bringer__sub_800994F8(void *);
void TObjEneDf2Bringer__sub_80099800(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

extern M2C_UNK __vt__17TObjEneDf2Bringer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D29A0;

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 964));
    __construct_array((void *)((char *)arg0 + 992), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29A0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneDf2Bringer__sub_800994F8(arg0);
    TObjEneDf2Bringer__sub_80099800(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80099B14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__17TObjEneDf2BringerFv(void);
void *create__17TObjEneDf2BringerFPv(void *arg0);
void *TObjEneDf2Bringer__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009A7A0();
void destroy_buffer_pair(void*, int);

extern u32 TObjEneDf2Bringer__data_805D4FB8;
extern u32 TObjEneDf2Bringer__data_805D4FC8;
extern u32 TObjEneDf2Bringer__data_805D4FCC;

void free_resources__17TObjEneDf2BringerFv(void) {
    TObjEneMe1CanadinLeader__sub_8009A7A0();
    if ((u32) TObjEneDf2Bringer__data_805D4FCC != 0U) {
        destroy_buffer_pair((void*)TObjEneDf2Bringer__data_805D4FCC, 1);
        TObjEneDf2Bringer__data_805D4FCC = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FC8 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDf2Bringer__data_805D4FC8, 1);
        TObjEneDf2Bringer__data_805D4FC8 = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDf2Bringer__data_805D4FB8, 1);
        TObjEneDf2Bringer__data_805D4FB8 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneDf2BringerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C8);
    if (o != NULL) {
        o = TObjEneDf2Bringer__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009A11C
#include "types.h"

extern "C" {

void TObjEneDf2Bringer__sub_8009A11C(void* p);

void TObjEneDf2Bringer__sub_8009A11C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009A128
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, const void *);
M2C_UNK fn_8002B094(int);

extern const f32 lbl_805D9860;

void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, f32 *, 0xB8) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xC0) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0xC4)));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0x19;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009A1BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);

extern M2C_UNK lbl_8048FE08[];

void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE08;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009A214
#include "types.h"

extern "C" {

void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3);
int fn_800BC4C8(void);

    extern unsigned char lbl_8048FE08[];
    extern int lbl_805D29AC;
    extern const float lbl_805D9860;
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3) { fn_800BC4C8(); *(int*)((char*)a0 + 0x18) = (int)lbl_8048FE08; *(int*)((char*)a0 + 0x0) = lbl_805D29AC; *(int*)((char*)a0 + 0xb0) = 0; *(float*)((char*)a0 + 0xd0) = lbl_805D9860; *(float*)((char*)a0 + 0xc8) = lbl_805D9860; *(float*)((char*)a0 + 0xcc) = lbl_805D9860; *(int*)((char*)a0 + 0xb4) = 0; *(float*)((char*)a0 + 0x38) = lbl_805D9860; *(float*)((char*)a0 + 0x3c) = lbl_805D9860; *(float*)((char*)a0 + 0x40) = lbl_805D9860; *(float*)((char*)a0 + 0xb8) = lbl_805D9860; *(float*)((char*)a0 + 0xbc) = lbl_805D9860; *(float*)((char*)a0 + 0xc0) = lbl_805D9860; *(int*)((char*)a0 + 0xc4) = a3; *(int*)((char*)*(int*)((char*)a0 + 0xa4) + 0x14) = 1; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009A2A0
#include "types.h"

extern "C" {

void TObjEneDf2Bringer__sub_8009A2A0(void);

void TObjEneDf2Bringer__sub_8009A2A0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8009A340
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_8048FE64[];

void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE64;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
