#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneMe3SinowZoaReal__vt109(void);

void TObjEneMe3SinowZoaReal__vt109(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8031689C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3SinowZoaReal__vt105(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();

extern const f32 lbl_805DF304;

struct Ene;

void TObjEneMe3SinowZoaReal__vt105(void *arg0) {
    struct Ene *self = (struct Ene *) arg0;
    M2C_FIELD(arg0, s32 *, 0x3FC) = M2C_FIELD(arg0, s32 *, 0x3FC) + 1;
    if ((M2C_FIELD(arg0, s32 *, 0x3FC) >= 2) || (calc_boss4_scale__10TObjPlayerFi() < lbl_805DF304)) {
        TObjEneDD__sub_800BBA18(self, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(self, 6);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80316908
#include "types.h"

extern "C" {

int TObjEneMe3SinowZoaReal__vt60(void* p);
int TObjEneMe3SinowZoaReal__vt61(void* p);
int TObjEneMe3SinowZoa__vt60(void*);
int TObjEneMe3SinowZoa__vt61(void*);

int TObjEneMe3SinowZoaReal__vt60(void* p) { return TObjEneMe3SinowZoa__vt60(p); }
int TObjEneMe3SinowZoaReal__vt61(void* p) { return TObjEneMe3SinowZoa__vt61(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80316948
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjEneMe3SinowZoaRealFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFv(void *, int);

extern M2C_UNK __vt__22TObjEneMe3SinowZoaReal[];

void *__dt__22TObjEneMe3SinowZoaRealFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe3SinowZoaReal;
        __dt__18TObjEneMe3SinowZoaFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80316A28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_instance__22TObjEneMe3SinowZoaRealFPv(void *arg0);
void *TObjEneMe3SinowZoaReal__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create_instance__22TObjEneMe3SinowZoaRealFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x45C);
    if (o != NULL) {
        o = TObjEneMe3SinowZoaReal__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031B220
#include "types.h"

extern "C" {

int TObjEneMe3SinowZoaReal__create(void* p);
int create_instance__22TObjEneMe3SinowZoaRealFPv(void*);

int TObjEneMe3SinowZoaReal__create(void* p) { return create_instance__22TObjEneMe3SinowZoaRealFPv(p); }

}
#endif
#endif
