#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrTagPlBack.h"

TChCrTagPlBack::~TChCrTagPlBack() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A54D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TChCrTagPlBackFv(void *arg0);
void __ct__8TChCrTagFv(void *);

extern const f32 lbl_805DDFE4;
extern M2C_UNK __vt__14TChCrTagPlBack[];
extern const f32 lbl_805DDFE8;
extern void *lbl_805D3DF0;

void *__ct__14TChCrTagPlBackFv(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TChCrTagPlBack;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DF0;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDFE4;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDFE8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDFE4;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDFE8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A552C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__14TChCrTagPlBackFPv(void *arg0);
void * create_default__14TChCrTagPlBackFv(void);
void get_position_offset__14TChCrTagPlBackFPvPv(void *arg0, void *arg1);
void *__ct__14TChCrTagPlBackFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create__14TChCrTagPlBackFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = __ct__14TChCrTagPlBackFv(o, tl_03, arg0);
    }
    return o;
}

void * create_default__14TChCrTagPlBackFv(void) { return create__14TChCrTagPlBackFPv((void *)((void*)(0))); }

extern const f32 lbl_805DDFF0;
extern const f32 lbl_805DDFF4;

void get_position_offset__14TChCrTagPlBackFPvPv(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((M2C_FIELD(temp_r5, f32 *, 0x30) + M2C_FIELD(temp_r5, f32 *, 0x38)) - lbl_805DDFF0);
        temp_r3 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(arg1, f32 *, 4) = (f32) ((M2C_FIELD(temp_r3, f32 *, 0x34) + M2C_FIELD(temp_r3, f32 *, 0x3C)) - lbl_805DDFF4);
    }
}

}
#endif
#endif
