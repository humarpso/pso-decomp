#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneMe3Stelth__vt109(void);
void TObjEneMe3Stelth__sub_800F4910(void);
void TObjEneMe3Stelth__sub_800F4914(void* p);
void init_anim__16TObjEneMe3StelthFPv(void* p);

int TObjEneDD__vt93(void*);
int TObjEneDD__vt92(void*);
int TObjEneMe3Stelth__sub_800F5864(void*, void*);
int TObjEneMe3Stelth__sub_800F5874(void*, void*);

void TObjEneMe3Stelth__sub_800F4910(void) {  }
void TObjEneMe3Stelth__sub_800F4914(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }
void init_anim__16TObjEneMe3StelthFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }
void TObjEneMe3Stelth__vt109(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x800F0AE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_resources__16TObjEneMe3StelthFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D52F8;

void destroy_resources__16TObjEneMe3StelthFv(void) {
    if ((u32) lbl_805D52F8 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D52F8);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D52F8);
        lbl_805D52F8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F0C18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
s32 TObjEneMe3Stelth__sub_800F0B4C(s32, s32);

void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0) {
    if (TObjEneMe3Stelth__sub_800F0B4C(arg0, arg0 + 0x38) != 0) {
        TBoss3Volopt__sub_8022675C(0x3A836, arg0 + 0x38, 0, 0);
        return;
    }
    TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0xF3);
    TBoss3Volopt__sub_8022675C(0x3A836, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F169C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void exec__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 TObjEneMe3SinowZoa__sub_800D7310(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK, s32);
s32 objInBand__FP7GameObjf(void *, f32);

s32 is_split_screen();
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DA828;
extern const f32 lbl_805DA830;
extern const f32 TObjEneMe3Stelth__data_805DA834;
extern const f32 lbl_805DA838;

struct VB18 { char pad[0x18]; };
struct VO18 : VB18 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();
    virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();
    virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();
    virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();
    virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();
    virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();
    virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
    virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();
    virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();
    virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();
    virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
    virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();
    virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();
    virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();
    virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
    virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();
    virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();
    virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
    virtual void m95();virtual void m96();virtual void m97();virtual void m98();virtual void m99();
    virtual void m100();
};
struct VB414 { char pad[0x14]; };
struct VO414 : VB414 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
};

void exec__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r7;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VO18*)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF1);
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x3CC) | 1;
        M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0x424) = 0;
        TBoss3Volopt__sub_8022675C(0x3B23B, arg0 + 0x38, 0, 0, temp_r7);
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 3) {
            TObjEneDD__sub_800BBA18(arg0, 6);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFE);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
            set_indexed_flags(arg0, 0, 0x08000000);
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x424) = 3;
        } else if (is_split_screen() != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x424);
            switch (temp_r0) {
            case 0:
                if (objInBand__FP7GameObjf(arg0, lbl_805DA828) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 8);
                    ((VO414*)(arg0 + 0x404))->m3();
                    M2C_FIELD(arg0, s32 *, 0x424) = 1;
                }
                break;
            case 1:
                if (TObjEneMe3SinowZoa__sub_800D7310(arg0 + 0x404, lbl_805DA830) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                    M2C_FIELD(arg0, s32 *, 0x424) = 2;
                }
                break;
            }
        } else if (objInBand__FP7GameObjf(arg0, TObjEneMe3Stelth__data_805DA834) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 8);
            M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA838) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        }
        ((VO18*)arg0)->m100();
        ((VO18*)arg0)->m87();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F1C90
#include "types.h"

extern "C" {

void setup_move__16TObjEneMe3StelthFPv(void* p);
int TObjEneMe3Stelth__sub_800F4758(void*);
int get_target_info__9TObjEneDDFPv(void*);
int setup_move_bounds__16TObjEneMe3StelthFPv(void*);

void setup_move__16TObjEneMe3StelthFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { setup_move_bounds__16TObjEneMe3StelthFPv(p); TObjEneMe3Stelth__sub_800F4758(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F2240
#include "types.h"

extern "C" {

void add_instance__16TObjEneMe3StelthFv(void);
int TOTrapAncient02__sub_800837D4(void*);

    extern int TObjEneMe3Stelth__data_805D5304;
    extern int lbl_805D5310;
void add_instance__16TObjEneMe3StelthFv(void) { TOTrapAncient02__sub_800837D4((void*)(lbl_805D5310)); TObjEneMe3Stelth__data_805D5304 = (TObjEneMe3Stelth__data_805D5304 + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F2A48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();

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

struct SubBase { char pad[0x14]; };
struct SubObj : SubBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual M2C_UNK v4();
};

void action__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((TObj *)arg0)->v93();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 4);
        ((SubObj *)(arg0 + 0x404))->v2();
        M2C_FIELD(arg0, s32 *, 0x424) = 1;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 0);
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x424);
        switch (temp_r0) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x424) = 1;
            }
            break;
        case 1:
            if (((SubObj *)(arg0 + 0x404))->v4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x424) = 2;
            }
            break;
        }
        ((TObj *)arg0)->v100();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4424
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3Stelth__sub_800F4424(u8 *arg0, s32 arg1);
s32 check_v2_mode__9TObjEneDDFv(void);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

}

struct Base18F { char pad[0x18]; };
struct VObj18F : Base18F {
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
    virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

extern "C" {

void TObjEneMe3Stelth__sub_800F4424(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            set_field_378__9TObjEneDDFPvi(arg0, 1);
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            set_field_378__9TObjEneDDFPvi(arg0, 3);
        }
        ((VObj18F *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 2);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFE);
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFEFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x424) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) > 5) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
                TObjEneDD__sub_800BBA18(arg0, 1);
            } else {
                TObjEneDD__sub_800BBA18(arg0, 3);
            }
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3D0) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj18F *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3D0) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F47F4
#include "types.h"

extern "C" {

int select_and_apply_target__16TObjEneMe3StelthFPv(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

int select_and_apply_target__16TObjEneMe3StelthFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4868
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800F4868 { char pad[0x18]; };
struct VObj_800F4868 : Base_800F4868 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual void m73();  virtual void m74();  virtual void m75();
    virtual void m76();  virtual void m77();  virtual void m78();  virtual void m79();
    virtual void m80();  virtual void m81();  virtual void m82();  virtual void m83();
    virtual void m84();  virtual void m85();  virtual void m86();
};
struct Base_800F48B8 { char pad[0x18]; };
struct VObj_800F48B8 : Base_800F48B8 {
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
    virtual void m97();
    virtual void m98();
};

extern "C" {

void update_collision__16TObjEneMe3StelthFPv(void *arg0);
void update_distance_state__16TObjEneMe3StelthFPv(void *arg0);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

void update_collision__16TObjEneMe3StelthFPv(void *arg0) {
    struct VObj_800F4868 *o = (struct VObj_800F4868 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801564A0(arg0);
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
}

extern const f32 lbl_805DA894;

void update_distance_state__16TObjEneMe3StelthFPv(void *arg0) {
    VObj_800F48B8 *o = (VObj_800F48B8 *)arg0;
    if ((M2C_FIELD(arg0, f32 *, 0x3D0) - M2C_FIELD(arg0, f32 *, 0x3C)) > lbl_805DA894) {
        o->m95();
        return;
    }
    o->m96();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0);
s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0);

struct E4988Base { char pad[0x14]; };
struct E4988Obj : E4988Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E4988Obj*)(arg0 + 0x404))->m7();
        return 1;
    }
    return 0;
}

struct E49D0Base { char pad[0x14]; };
struct E49D0Obj : E49D0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3CC) & 4) {
        ((E49D0Obj*)(arg0 + 0x404))->m6();
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4A18
#include "types.h"

extern "C" {

void TObjEneMe3Stelth__vt105(void);

void TObjEneMe3Stelth__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4A1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4A8C(void);
s32 TObjEneMe3Stelth__sub_800F4CC8(void *, s32, f32);

extern f32 TObjEneMe3Stelth__data_805DA844;
extern f32 lbl_805DA898;
extern f32 lbl_805DA89C;

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x10000)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if ((temp_f1 > lbl_805DA898) && (temp_f1 < lbl_805DA89C) && (TObjEneMe3Stelth__sub_800F4CC8(arg0, M2C_FIELD(arg0, s32 *, 0x60), temp_f1 - TObjEneMe3Stelth__data_805DA844) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3Stelth__sub_800F4A8C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4DE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0);
void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0);
s32 TObjEneMe3Stelth__sub_800F4814(void *);
s32 TObjEneMe3Stelth__sub_800F4850();

extern const f32 lbl_805DA81C;
extern const f32 lbl_805DA87C;
extern const f32 lbl_805DA8A8;
extern const f32 lbl_805DA8AC;

void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0) {
    if (TObjEneMe3Stelth__sub_800F4850() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = TObjEneMe3Stelth__sub_800F4814(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (lbl_805DA8A8 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) (lbl_805DA87C + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (lbl_805DA8AC + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (lbl_805DA81C + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4F14
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__sub_800F4FC8(void);

void TObjEneMe3Stelth__sub_800F4F14(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F4F98
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__sub_800F4FC8(void);

void TObjEneMe3Stelth__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { TObjEneDD__sub_800BBA18(p, (void*)15); } }
void TObjEneMe3Stelth__sub_800F4FC8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F5084
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__16TObjEneMe3Stelth[];

void *__dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMe3Stelth;
        if (M2C_FIELD(arg0, void **, 0x444) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x444)); M2C_FIELD(arg0, M2C_UNK *, 0x444) = 0; }
        if (M2C_FIELD(arg0, void **, 0x448) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x448)); M2C_FIELD(arg0, M2C_UNK *, 0x448) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x404, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F52B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3Stelth__ct(void *arg0);
void init_object__9TObjEneDDFPv(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__16TObjEneMe3Stelth[];
extern void *lbl_805D2AF8;

void *TObjEneMe3Stelth__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMe3Stelth;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1028));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F53C8
#include "types.h"

extern "C" {

int create_real__16TObjEneMe3StelthFPv(void* p);
int create__20TObjEneMe3StelthRealFPv(void*);

int create_real__16TObjEneMe3StelthFPv(void* p) { return create__20TObjEneMe3StelthRealFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F5884
#include "types.h"

extern "C" {

int draw_model__16TObjEneMe3StelthFPv(void* p);
int draw_model__12TObjNpcEnemyFPv(void*);

int draw_model__16TObjEneMe3StelthFPv(void* p) { return draw_model__12TObjNpcEnemyFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D70AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_attack__16TObjEneMe3StelthFsiiiff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);
u8 *TObjNpcEnemy__sub_802D732C();
M2C_UNK copy_position_data(void *, s32);

void spawn_attack__16TObjEneMe3StelthFsiiiff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;

    temp_r3 = TObjNpcEnemy__sub_802D732C();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0) = arg0;
        M2C_FIELD(temp_r3, s16 *, 2) = 3;
        M2C_FIELD(temp_r3, f32 *, 4) = farg1;
        M2C_FIELD(temp_r3, s32 *, 8) = arg1;
        M2C_FIELD(temp_r3, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r3, f32 *, 0x10) = farg0;
        copy_position_data(temp_r3 + 0x14, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DC82C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_depth_buffer_id__16TObjEneMe3StelthFi(s32 arg0);

extern s32 lbl_805D7708;

void set_depth_buffer_id__16TObjEneMe3StelthFi(s32 arg0) {
    lbl_805D7708 = arg0;
}

}
#endif
#endif
