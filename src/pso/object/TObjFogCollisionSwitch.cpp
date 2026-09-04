#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFogCollisionSwitch__vt11(void *arg0);

M2C_UNK TObjFogCollision__vt11();

void TObjFogCollisionSwitch__vt11(void *arg0) {
    s32 temp_r0;

    TObjFogCollision__vt11();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        return;
    }
    if (temp_r0 > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0xFF;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80153A7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjFogCollisionSwitchFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__16TObjFogCollisionFv(void *, int);

extern M2C_UNK __vt__22TObjFogCollisionSwitch[];

void *__dt__22TObjFogCollisionSwitchFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjFogCollisionSwitch;
        __dt__16TObjFogCollisionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153AD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjFogCollisionSwitch__ct(void *arg0);
void TObjFogCollision__ct(void *);

extern M2C_UNK __vt__22TObjFogCollisionSwitch[];
extern void *lbl_805D2E7C;

void *TObjFogCollisionSwitch__ct(void *arg0) {
    TObjFogCollision__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjFogCollisionSwitch;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2E7C;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153B18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjFogCollisionSwitch__create(void *arg0);
void *TObjFogCollisionSwitch__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjFogCollisionSwitch__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjFogCollisionSwitch__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
