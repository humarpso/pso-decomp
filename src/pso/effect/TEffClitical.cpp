#ifndef PSO_CLASS_PACKAGE
#include "pso/TEffClitical.h"

TEffClitical::~TEffClitical() {}
#else
#if PSO_CLASS_PACKAGE == 0x800825B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__12TEffCliticalFv(void *arg0, void *arg1);
void TEffect__ct(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK __vt__12TEffClitical[];
extern void *lbl_805D2904;
extern const f32 lbl_805D93B0;

void *__ct__12TEffCliticalFv(void *arg0, void *arg1) {
    TEffect__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TEffClitical;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2904;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg1);
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805D93B0;
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80082634
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__12TEffCliticalFPv(void *arg0);
void *__ct__12TEffCliticalFv(void *, void *);
void *__nw__7TObjectFUl(int);

void create__12TEffCliticalFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        __ct__12TEffCliticalFv(o, arg0);
    }
}

}
#endif
#endif
