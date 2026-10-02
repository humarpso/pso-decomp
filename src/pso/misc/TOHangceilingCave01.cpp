#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TOHangceilingCave01KeyQuick__ct(int, int, void *);
s32 TOHangceilingCave01Key__ct(int, int, void *);
s32 TOHangceilingCave01Normal__ct(int, int, void *);
s32 __nw__7TObjectFUl(int);
extern s32 tl_05;
s32 TOHangceilingCave01__create(u8 *arg0);
}

extern "C" {

struct VBase_80168588 { char pad[0x18]; };
struct VObj_80168588 : VBase_80168588 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
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
    virtual void v76(); virtual void v77();
};
struct VObj_80168834_80168588 {
    char pad[0x18];
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
};

struct VBase_18_26a62c { char pad[0x18]; };
struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

int TOHangceilingCave01__sub_80168624(void);
f32 TOHangceilingCave01__sub_8016862C(void);
f32 TOHangceilingCave01__sub_80168634(void);
void TOHangceilingCave01__sub_8016863C(void);
void TOHangceilingCave01__sub_80168640(void);
void check_player_trigger__19TOHangceilingCave01FPv(u8 *arg0);
void destroy_instance__19TOHangceilingCave01Fv(void);
void init_geometry__19TOHangceilingCave01FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
bool TOHangceilingCave01__sub_801688C0(u8 *);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK fn_80168398(void *);
f32 xz_distance_squared(void *, void *);
M2C_UNK TObjPlayer__sub_803D9884(void *, void *);
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DB664;
extern const f32 lbl_805DB698;
extern const f32 lbl_805DB69C;
extern const f32 lbl_805DB6A0;
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_scale__27TOHangceilingCave01KeyQuickFPvf(void *, f32, f32);

extern const f32 lbl_805DB654;
extern const f32 lbl_805DB688;
extern const f32 lbl_805DB690;

void init_geometry__19TOHangceilingCave01FPv(void *arg0) {
    f32 temp_f2;
    VObj_80168588 *self = (VObj_80168588 *)arg0;

    M2C_FIELD(arg0, s32 *, 0x35C) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, u32 *, 0x358) = (u32) M2C_FIELD(arg0, u32 *, 0x8C);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x358) >= 3U) {
        M2C_FIELD(arg0, u32 *, 0x358) = 2U;
    }
    temp_f2 = lbl_805DB690 + M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x350) = (f32) (temp_f2 - lbl_805DB654);
    set_scale__27TOHangceilingCave01KeyQuickFPvf(arg0, lbl_805DB688 + M2C_FIELD(arg0, f32 *, 0x70), temp_f2);
    self->v77();
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) (lbl_805DB654 - M2C_FIELD(arg0, f32 *, 0x6C));
}

int TOHangceilingCave01__sub_80168624(void) { return 1; }

extern f32 lbl_805DB650;

f32 TOHangceilingCave01__sub_8016862C(void) {
    return lbl_805DB650;
}

extern f32 lbl_805DB650;

f32 TOHangceilingCave01__sub_80168634(void) {
    return lbl_805DB650;
}

void TOHangceilingCave01__sub_8016863C(void) {  }
void TOHangceilingCave01__sub_80168640(void) {  }

extern const f32 lbl_805DB694;

void check_player_trigger__19TOHangceilingCave01FPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        ((VObj_80168834_80168588*)arg0)->m78();
        fn_80168398(arg0);
        if ((((s32 (*)(void *))TOHangceilingCave01__sub_801688C0)(arg0) != 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) && (objInBand__FP7GameObjf(arg0, lbl_805DB694) != 0)) {
            spawn_particle_effect(arg0 + 0x38, 0x64);
        }
    }
}

bool TOHangceilingCave01__sub_801688C0(u8 *arg0) {
    f32 sp8[3];

    if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (lbl_805D4DF0 + 0x178)) < lbl_805DB698) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return 1;
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DB69C, lbl_805DB664) == 0) {
        return 0;
    }
    TObjPlayer__sub_803D9884((void *) (arg0 + 0x38), (void *) sp8);
    return (sp8[2] > lbl_805DB6A0) == 0;
}

extern u32 lbl_805D59D0;
extern void *lbl_805D59D4;

s32 TOHangceilingCave01__create(u8 *arg0) {
  s32 temp_r0;
  s32 temp_r3;
  s32 temp_r3_2;
  s32 temp_r3_3;
  s32 var_r0;
  s32 var_r0_2;
  s32 var_r0_3;
  if (arg0 != 0)
  {
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x38));
    switch (temp_r0)
    {
      case 0:
        temp_r3 = __nw__7TObjectFUl((int) 0x360);
        var_r0 = temp_r3;
        if (var_r0 != 0)
      {
        var_r0 = TOHangceilingCave01Normal__ct((int) temp_r3, (int) tl_05, (void *) arg0);
      }
        return var_r0;
      case 1:
        temp_r3_2 = __nw__7TObjectFUl((int) 0x360);
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0)
      {
        var_r0_2 = TOHangceilingCave01Key__ct((int) temp_r3_2, (int) tl_05, (void *) arg0);
      }
        return var_r0_2;
      case 2:
        temp_r3_3 = __nw__7TObjectFUl((int) 0x360);
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0)
      {
        var_r0_3 = TOHangceilingCave01KeyQuick__ct((int) temp_r3_3, (int) tl_05, (void *) arg0);
      }
        return var_r0_3;
    }
  }
  else
  {
  }
  return 0;
}

void destroy_instance__19TOHangceilingCave01Fv(void) {
    if ((void *) lbl_805D59D4 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59D4, s32 *, 4));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59D4, s32 *, 0));
        if ((void *) lbl_805D59D4 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D59D4);
            lbl_805D59D4 = NULL;
        }
    }
    if ((u32) lbl_805D59D0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D59D0, 1);
        lbl_805D59D0 = 0U;
    }
}

}
