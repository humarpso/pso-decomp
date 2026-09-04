#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrEffTag.h"

TChCrEffTag::~TChCrEffTag() {}
#else
#if PSO_CLASS_PACKAGE == 0x8029AC44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__11TChCrEffTagFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__11TChCrEffTag[];
extern const f32 lbl_805DDCA4;
extern void *lbl_805D3D08;
extern u32 TChCrEffTag__data_805D3D0C;

void *__ct__11TChCrEffTagFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TChCrEffTag;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D08;
    M2C_FIELD(arg0, u32 *, 0x1C) = -1;
    TChCrEffTag__data_805D3D0C = -1;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DDCA4;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805DDCA4;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029ACA8
#include "types.h"

extern "C" {

void set_eff_tag__11TChCrEffTagFi(int a0);

    extern int TChCrEffTag__data_805D3D0C;
void set_eff_tag__11TChCrEffTagFi(int a0) { TChCrEffTag__data_805D3D0C = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029B098
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_str__11TChCrEffTagFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__ct__14TChCrEffTagStrFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_str__11TChCrEffTagFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = __ct__14TChCrEffTagStrFv(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#endif
