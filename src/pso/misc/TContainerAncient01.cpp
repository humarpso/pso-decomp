#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TContainerAncient01__vt23(void);
int TContainerAncient01__vt24(void);
int TContainerAncient01__vt25(void);

void TContainerAncient01__vt23(void) {  }
int TContainerAncient01__vt24(void) { return 1; }
int TContainerAncient01__vt25(void) { return 1; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8018A66C
#include "types.h"

extern "C" {

void reset_hp__19TContainerAncient01FPv(void* a0);

    extern const float TContainerAncient01__data_805DBD1C;
void reset_hp__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018AACC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TContainerAncient01__sub_8018AB44(void *);
M2C_UNK reset_hp__19TContainerAncient01FPv(void *);

void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x338) = (s16) *arg1;
    if (arg2 != 0) {
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x338);
        if ((M2C_FIELD(arg0, s16 *, 0x32C) - temp_r4) <= 0) {
            reset_hp__19TContainerAncient01FPv(arg0);
            TContainerAncient01__sub_8018AB44(arg0);
            M2C_FIELD(arg0, s32 *, 0x360) = 1;
        }
    } else if ((M2C_FIELD(arg0, s16 *, 0x32C) - M2C_FIELD(arg0, s16 *, 0x338)) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018AC68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018AC68 { char pad[0x18]; };
struct VObj_8018AC68 : Base_8018AC68 {
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
    virtual void m20(s32, f32);
};

extern "C" {

f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2);
int TContainerAncient01__sub_8018ACC0(void);

extern f32 TContainerAncient01__data_805DBD10;
extern f32 TContainerAncient01__data_805DBD14;

f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018AC68 *o = (struct VObj_8018AC68 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01__sub_8018ACC0(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018AD04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8018AD04 { char pad[0x18]; };
struct VObj8018AD04 : VBase8018AD04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void draw__19TContainerAncient01FPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

void draw__19TContainerAncient01FPv(u8 *arg0) {
    if (((VObj8018AD04 *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x360) != 0) {
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x364);
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018B268
#include "types.h"

extern "C" {

void reset_state__19TContainerAncient01FPv(void* a0);

    extern const float TContainerAncient01__data_805DBD1C;
void reset_state__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018B6A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);

M2C_UNK TContainerAncient01__sub_8018B700();

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            TContainerAncient01__sub_8018B700();
            M2C_FIELD(arg0, s32 *, 0x35C) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018B79C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018B820 { char pad[0x18]; };
struct VObj_8018B820 : Base_8018B820 {
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
    virtual void m20(s32, f32);
};

extern "C" {

f32 TContainerAncient01__vt20(void *arg0);
f32 TContainerAncient01__vt21(void *arg0, s32 arg1, s32 *arg2);
M2C_UNK TObjPlayer__sub_80154954(void *, s16 *);
s32 TLobby__sub_80156A80(void *, s16 *, M2C_UNK);
M2C_UNK reset_state__19TContainerAncient01FPv();

extern f32 TContainerAncient01__data_805DBD14;

f32 TContainerAncient01__vt20(void *arg0) {
    s16 sp8;

    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
        reset_state__19TContainerAncient01FPv();
        if (((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80(arg0, &sp8, 1) != 0)) {
            sp8 = 1;
            TLobby__sub_80156A80(arg0, &sp8, 0);
            TObjPlayer__sub_80154954(arg0, &sp8);
        }
    }
    return TContainerAncient01__data_805DBD14;
}

extern f32 TContainerAncient01__data_805DBD10;
extern f32 TContainerAncient01__data_805DBD14;

f32 TContainerAncient01__vt21(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018B820 *o = (struct VObj_8018B820 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018B878
#include "types.h"

extern "C" {

int TContainerAncient01__vt19(void);

int TContainerAncient01__vt19(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018B8BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8018B8BC { char pad[0x18]; };
struct VObj8018B8BC : VBase8018B8BC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__19TContainerAncient01Fv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

void render__19TContainerAncient01Fv(u8 *arg0) {
    if (((VObj8018B8BC *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x35C) != 0) {
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x360);
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018BAE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TContainerAncient01FPv(void *arg0);
void *TContainerAncient01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__19TContainerAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x370);
    if (o != NULL) {
        o = TContainerAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018BB2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__19TContainerAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TContainerAncient01__data_805D5B90;

void release_static_resource__19TContainerAncient01Fv(void) {
    if ((u32) TContainerAncient01__data_805D5B90 != 0U) {
        TLobby__sub_8001FE7C((void*)TContainerAncient01__data_805D5B90, 1);
        TContainerAncient01__data_805D5B90 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018BC98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__19TContainerAncient01[];

void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TContainerAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018BE68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TContainerAncient01__sub_8018BE68(void);
int TContainerAncient01__sub_8018BE6C(void);
int TContainerAncient01__sub_8018BE74(void);
int get_table_entry__19TContainerAncient01Fi(int a0);
s32 TContainerAncient01__sub_8018BE90(void);

void TContainerAncient01__sub_8018BE68(void) {  }
int TContainerAncient01__sub_8018BE6C(void) { return 1; }
int TContainerAncient01__sub_8018BE74(void) { return 1; }

    extern int lbl_8050DC68[];
int get_table_entry__19TContainerAncient01Fi(int a0) {  return lbl_8050DC68[a0]; }

extern s32 TContainerAncient01__data_805D5B90;

s32 TContainerAncient01__sub_8018BE90(void) {
    return TContainerAncient01__data_805D5B90;
}

}
#endif
#endif
