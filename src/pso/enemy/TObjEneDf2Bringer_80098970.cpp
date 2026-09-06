#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern "C" {
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 TObjEneEpsilon__sub_800B96A4(void *);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
s32 update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
extern const f64 TObjEneDf2Bringer__data_8043A0F8;
extern const f32 TObjEneDf2Bringer__data_805D9820;
void TObjEneDf2Bringer__sub_80098BAC(u8 *arg0, s32 arg1);
}

extern "C" {

struct TBase_80098970 { char pad[0x18]; };
struct TObj_80098970 : TBase_80098970 {
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
struct SubBase_80098970 { char pad[0x14]; };
struct SubObj_80098970 : SubBase_80098970 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
};

void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
void handle_state__17TObjEneDf2BringerFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneDf2Bringer__sub_80098EB4(void *);
M2C_UNK TObjEneDf2Bringer__sub_80099148(void *);
M2C_UNK TObjEneDf2Bringer__sub_80099188(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);

extern const f32 TObjEneDf2Bringer__data_805D9820;
extern const f32 lbl_805D9824;

void exec__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((TObj_80098970 *)arg0)->v93();
        ((SubObj_80098970 *)(arg0 + 0x3C4))->v3();
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
        if (((SubObj_80098970 *)(arg0 + 0x3C4))->v5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((TObj_80098970 *)arg0)->v94();
            ((TObj_80098970 *)arg0)->v87();
            return;
        }
        break;
    case 5:
        ((TObj_80098970 *)arg0)->v94();
        break;
    }
}

void TObjEneDf2Bringer__sub_80098BAC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((s32)set_field_378__9TObjEneDDFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (1))));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 1);
        ((VObj_18_599a64 *)(arg0))->m93();
        return;
    case 3:
        if (((s32)update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneDf2Bringer__data_805D9820))) != 0) {
            TObjEneEpsilon__sub_800B96A4((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (TObjEneDf2Bringer__data_8043A0F8 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
            TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (2)));
        }
    case 5:
    case 0:
        return;
    }
}

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
