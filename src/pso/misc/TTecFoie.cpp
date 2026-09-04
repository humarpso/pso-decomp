#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__8TTecFoieFv(void);

void render__8TTecFoieFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8022FFC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecFoie__vt4(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);

void TTecFoie__vt4(s32 arg0) {
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DC);
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DD);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80230094
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_ex__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecFoie__ct(void *, void *, void *, void *, void *);
void *TTecFoie__sub_802302A0(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create_ex__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x134);
    if (o != NULL) {
        TTecFoie__sub_802302A0(o, arg0, arg1, arg2, arg3);
    }
}

void create__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x134);
    if (o != NULL) {
        TTecFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
#endif
#endif
