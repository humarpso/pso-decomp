#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOContainerAncientItemCommon__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK spawn_item__17TObjContainerItemFPvi(void *, void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

struct Base_8015C098 { char pad[0x18]; };
struct VObj_8015C098 : Base_8015C098 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77();
};

void TOContainerAncientItemCommon__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 1) {
        if (arg2 != 0) {
            ((struct VObj_8015C098 *) arg0)->m77();
            spawn_item__17TObjContainerItemFPvi(arg0, arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015C198
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__28TOContainerAncientItemCommonFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_ancient_container__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__28TOContainerAncientItemCommon[];

void *__dt__28TOContainerAncientItemCommonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TOContainerAncientItemCommon;
        destroy_ancient_container__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015C1F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOContainerAncientItemCommon__ct(void *arg0);
void fn_8015C534(void *);

extern M2C_UNK __vt__28TOContainerAncientItemCommon[];
extern void *lbl_805D2EFC;

void *TOContainerAncientItemCommon__ct(void *arg0) {
    fn_8015C534(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TOContainerAncientItemCommon;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2EFC;
    return arg0;
}

}
#endif
#endif
