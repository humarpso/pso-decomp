#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjMesBase__vt12(void);
void clear_ref_if_destroyed__11TObjMesBaseFPv(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *obj);

void clear_ref_if_destroyed__11TObjMesBaseFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0xAC);
    if ((p != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0)) {
        M2C_FIELD(arg0, u32 *, 0xAC) = 0U;
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    }
}
void TObjMesBase__vt12(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80194CE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_state__11TObjMesBaseFPv(void *arg0);
void *__dt__11TObjMesBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

struct Base_80194CE8 { char pad[0x18]; };
struct VObj_80194CE8 : Base_80194CE8 {
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
};

void dispatch_state__11TObjMesBaseFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    switch (temp_r0) {
    case 0:
        ((VObj_80194CE8 *)arg0)->m12();
        return;
    case 1:
        ((VObj_80194CE8 *)arg0)->m13();
        return;
    }
}

extern M2C_UNK __vt__11TObjMesBase[];

void *__dt__11TObjMesBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMesBase;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80194D9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase80194 { char pad[0x18]; };
struct TObjMesBase80194 : TObjBase80194 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801569F4();

extern M2C_UNK __vt__11TObjMesBase[];
extern s32 lbl_805D33C8;

void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMesBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D33C8;
    ((TObjMesBase80194 *)arg0)->ct(arg2);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) < 0) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) > 1) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    return arg0;
}

}
#endif
#endif
