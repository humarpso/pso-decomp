#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOTrapAncient01__vt84(void);
void TOTrapAncient01__vt86(void);
void TOTrap__sub_8017939C(void);

void TOTrap__sub_8017939C(void) {  }
void TOTrapAncient01__vt84(void) {  }
void TOTrapAncient01__vt86(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x801793A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801793A8 { char pad[0x18]; };
struct VObj_801793A8 : Base_801793A8 {
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
};

extern "C" {

void TOTrapAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TOTrapAncient01__sub_8017940C(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TOTrapAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_801793A8 *)arg0)->m83();
        }
        TOTrapAncient01__sub_8017940C(arg0);
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801797D0
#include "types.h"

extern "C" {

void TOTrapAncient01__vt82(void);

void TOTrapAncient01__vt82(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80179DB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TOTrapAncient01FPv(void *arg0);
void *TOTrapAncient01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TOTrapAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C8);
    if (o != NULL) {
        o = TOTrapAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80179DFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__15TOTrapAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOTrapAncient01__data_805D5AD0;

void release_static_resource__15TOTrapAncient01Fv(void) {
    if ((u32) TOTrapAncient01__data_805D5AD0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapAncient01__data_805D5AD0, 1);
        TOTrapAncient01__data_805D5AD0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226534
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_trigger_flag__15TOTrapAncient01Fii(s32 arg0, s32 arg1);
s32 TLobby__sub_80226918();

s32 check_trigger_flag__15TOTrapAncient01Fii(s32 arg0, s32 arg1) {
    s32 var_r3;

    if (arg1 & 0x2000) {
        var_r3 = 0;
    } else {
        var_r3 = TLobby__sub_80226918();
    }
    if (var_r3 == -0x100) {
        return 0;
    }
    return 1;
}

}
#endif
#endif
