#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneBm3Fly__vt87(void* p);

int TObjEneBm3Fly__sub_800B1978(void*);
int TObjEneDD__vt86(void*);

void TObjEneBm3Fly__vt87(void* p) { TObjEneDD__vt86(p); TObjEneBm3Fly__sub_800B1978(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x800AFB60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase800AFB60 { char pad[0x18]; };
struct VObj800AFB60 : VBase800AFB60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjEneBm3Fly__vt104(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, M2C_UNK, M2C_UNK);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

extern const f32 lbl_805D9C68;
extern const f32 TObjEneBm3Fly__data_805D9C6C;

void TObjEneBm3Fly__vt104(u8 *arg0) {
    if (((VObj800AFB60 *) arg0)->m8(lbl_805D9C68, TObjEneBm3Fly__data_805D9C6C) != 0) {
        update_player_state__9TObjEneDDFPv(arg0, 0, 0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800AFD64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm3Fly__vt103(void);
void handle_message__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1);
s32 queue_destruction__7TObjectFv();

void TObjEneBm3Fly__vt103(void) {  }
void handle_message__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 1);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
        return;
    case 3:
        queue_destruction__7TObjectFv();
    case 5:
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B000C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TObjEneBm3FlyNest__sub_800B2A5C(u32, void *);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *, s32);
M2C_UNK TBoss8Dragon__sub_800BB7D8(void *, M2C_UNK, f32);
M2C_UNK TBoss8Dragon__sub_800BB7DC(void *);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, M2C_UNK *, s32, void *, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

struct BaseB0 { char pad[0x18]; };
struct VObjB0 : BaseB0 {
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
};
extern M2C_UNK lbl_8043B0D0[];
extern s32 TObjEneBm3Fly__data_805D50F4;
extern const f32 TObjEneBm3Fly__data_805D9C88;

void action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    u32 temp_ret;

    switch (arg1) {
    case 4:
        ((VObjB0 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD;
        M2C_FIELD(arg0, s32 *, 0x428) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0, temp_r4);
        temp_ret = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x418));
        if (temp_ret != 0U) {
            TObjEneBm3FlyNest__sub_800B2A5C(temp_ret, arg0);
        }
        TBoss8Dragon__sub_800BB7DC(arg0);
        TBoss8Dragon__sub_800BB7D8(arg0, 0xF1, TObjEneBm3Fly__data_805D9C88);
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneBm3Fly__data_805D50F4, lbl_8043B0D0, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) >= 2) {
            TObjEneDD__sub_800BBA18(arg0, 9);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) + 1);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B07D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseB0_800b07d0 { char pad[0x18]; };
struct VObjB0_800b07d0 : VBaseB0_800b07d0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual s32 v18(void *, f32);
    virtual void v19(); virtual void v20(void *, f32);
    virtual void v21(); virtual void v22(); virtual void v23(void *, f32);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93(); virtual void v94();
};

extern "C" {

void execute_action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
M2C_UNK TObjEneBm3Fly__sub_800B15C4(void *);
s32 TObjEneBm3Fly__sub_800B177C(void *);
M2C_UNK TObjEneBm3Fly__sub_800B1978(void *);
M2C_UNK TObjEneDD__sub_800BA3D8(void *, void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 check_v2_mode__9TObjEneDDFv();
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK fn_800B98C0(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK update_collide_flag__13TObjEneBm3FlyFPv(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK update_height_offset__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_state_flag__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern u8 *lbl_805D50EC;
extern const f32 TObjEneBm3Fly__data_805D9C88;
extern const f32 lbl_805D9CAC;
extern const f32 lbl_805D9CB0;
extern const f32 lbl_805D9CB4;
extern const f32 lbl_805D9CB8;

void execute_action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObjB0_800b07d0 *)arg0)->v94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x454) = 1;
        return;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D9CAC) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0) {
        case 0:
        case 1:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) == NULL) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            }
        case 2:
            return;
        case 3:
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (4));
            return;
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (update_death_check__14TObjEneEpsilonFPv((void *) (arg0)) == 0) {
            fn_800B98C0((void *) (arg0));
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0_2) {
        case 0:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) != NULL) {
                update_height_offset__13TObjEneBm3FlyFPv((void *) (arg0));
            }
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x430) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x438) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
            TObjEneBm3Fly__sub_800B1978((void *) (arg0));
            if (TObjEneBm3Fly__sub_800B177C((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) >= (s32) M2C_FIELD(lbl_805D50EC, s32 *, 0x1C)) {
                M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
                M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        case 2:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9CB0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x440) = (s32) (M2C_FIELD(arg0, s32 *, 0x440) + 1);
                temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                if ((temp_r3 != NULL) && (((VObjB0_800b07d0 *)temp_r3)->v18(arg0, TObjEneBm3Fly__data_805D9C88) != 0)) {
                    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_2)->v20(arg0, TObjEneBm3Fly__data_805D9C88);
                    temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_3)->v23(arg0, lbl_805D9CB4);
                    if ((check_v2_mode__9TObjEneDDFv() != 0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D9CB8)) {
                        TObjEneDD__sub_800BA3D8((void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x390)));
                    }
                }
                TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A524)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x440) >= 4) {
                    M2C_FIELD(arg0, s32 *, 0x440) = 0;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                }
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        }
        ((VObjB0_800b07d0 *)arg0)->v87();
        TObjEneBm3Fly__sub_800B15C4((void *) (arg0));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x454) = 0;
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B150C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);

struct Base_800B150C { char pad[0x18]; };
struct VObj_800B150C : Base_800B150C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual int m97();
};

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0) {
    if (((VObj_800B150C *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B1614
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0);

u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x454) != 0) {
        return M2C_FIELD(arg0, u16 *, 0x38C);
    }
    return 0xFFFFU;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B1820
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1);
f32 get_random_float__8TObjFishFv(f32);

extern const f32 TObjEneBm3Fly__data_805D9C78;
extern const f32 lbl_805D9CE0;
extern const f32 lbl_805D9CE4;
extern const f32 lbl_805D9CE8;

f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1) {
    f32 temp_f31;
    f32 var_f1;
    f32 cap;

    temp_f31 = farg1 - farg0;
    if (get_random_float__8TObjFishFv(temp_f31) < lbl_805D9CE0) {
        return farg1;
    }
    var_f1 = TObjEneBm3Fly__data_805D9C78;
    var_f1 = temp_f31 * var_f1;
    if (var_f1 > lbl_805D9CE4) {
        var_f1 = lbl_805D9CE4;
    } else if (var_f1 < lbl_805D9CE8) {
        var_f1 = lbl_805D9CE8;
    }
    return farg0 + var_f1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B19A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void store_position__13TObjEneBm3FlyFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);

void store_position__13TObjEneBm3FlyFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B19E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B1A90 { char pad[0x18]; };
struct VObj_800B1A90 : Base_800B1A90 {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)VV(74)VV(75)VV(76)VV(77)VV(78)VV(79)VV(80)
VV(81)VV(82)VV(83)VV(84)VV(85)VV(86)VV(87)VV(88)VV(89)VV(90)
VV(91)VV(92)VV(93)VV(94)VV(95)VV(96)VV(97)VV(98)VV(99)
#undef VV
    virtual u32 v102();
};

extern "C" {

void update_state_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0);
u32 TObjEneDD__sub_800BAC14();
u32 TObjEneEpsilon__sub_800B92F8(void *, void *, f32);

extern f32 *lbl_805D50EC;

void update_state_flag__13TObjEneBm3FlyFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, M2C_FIELD(temp_r5, void **, 8), *lbl_805D50EC) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (TObjEneDD__sub_800BAC14() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (((VObj_800B1A90 *)arg0)->v102() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B1B5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneEpsilon__sub_800B96A4();
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneBm3Fly__vt60(void* p);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt26(void);

void update_height_offset__13TObjEneBm3FlyFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x450));
}
void update__13TObjEneBm3FlyFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x44C));
}
void TObjEneBm3Fly__vt59(void) {  }
void TObjEneBm3Fly__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { TObjEneDD__sub_800BBA18(p, (void*)6); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B1C74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneEpsilon__sub_800B96A4();
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneBm3Fly__vt60(void* p);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt26(void);

void TObjEneBm3Fly__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B1F04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__13TObjEneBm3Fly[];

void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneBm3Fly;
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B2214
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B2214 { char pad[0xC]; };
struct VObj_800B2214 : Base_800B2214 {
    virtual void m2(int);
};

extern "C" {

void release_shared_data__13TObjEneBm3FlyFv(void);

extern void *TObjEneBm3Fly__data_805D50F4;

void release_shared_data__13TObjEneBm3FlyFv(void) {
    void *obj = TObjEneBm3Fly__data_805D50F4;
    if (obj != NULL) {
        if (obj != NULL) {
            ((VObj_800B2214 *)obj)->m2(1);
        }
        TObjEneBm3Fly__data_805D50F4 = NULL;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800B225C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TObjEneBm3Fly__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4A8);
    if (o != NULL) {
        o = TObjEneBm3Fly__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB774
#include "types.h"

extern "C" {

int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void TBoss8Dragon__sub_800BB650(void* p, void* q);
int TObjEneBm3Fly__sub_800BB774(void* p);
void noop__12TBoss8DragonFv(void);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int set_player_state_default__12TBoss8DragonFPv(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

int TObjEneBm3Fly__sub_800BB774(void* p) { return (*(u32*)((char*)p + 0x2dc) >> 1) & 0x1; }

}
#endif
#endif
