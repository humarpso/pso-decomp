#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneDarkGunCenter__sub_800A0B18(void);
void render__20TObjEneDarkGunCenterFv(void);

void TObjEneDarkGunCenter__sub_800A0B18(void) {  }
void render__20TObjEneDarkGunCenterFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x800A0E14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__20TObjEneDarkGunCenterFPv(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjEneDarkGunCenter__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__20TObjEneDarkGunCenterFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3A8);
    if (o2 != NULL) {
        o2 = TObjEneDarkGunCenter__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800A0E7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneDarkGunCenter__sub_800A0E7C(void);
void TObjEneDarkGunCenter__sub_800A0E80(void);
void *__dt__20TObjEneDarkGunCenterFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

void TObjEneDarkGunCenter__sub_800A0E7C(void) {  }
void TObjEneDarkGunCenter__sub_800A0E80(void) {  }

extern M2C_UNK __vt__20TObjEneDarkGunCenter[];

void *__dt__20TObjEneDarkGunCenterFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneDarkGunCenter;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
