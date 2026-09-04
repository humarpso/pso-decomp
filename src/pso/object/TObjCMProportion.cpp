#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjCMProportionFPv(void *arg0);
void *TObjCMProportion__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TObjCMProportionFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TObjCMProportion__ct(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802918B8
#include "types.h"

extern "C" {

int TObjCMProportion__sub_802918B8(void* p);
int fn_80291784(void*);

int TObjCMProportion__sub_802918B8(void* p) { return fn_80291784(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802951EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TObjCMProportionFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_802911E8(f32);

extern M2C_UNK __vt__16TObjCMProportion[];
extern const f32 lbl_805DDA70;

void *__dt__16TObjCMProportionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMProportion;
        fn_802911E8(lbl_805DDA70);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80295250
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCMProportion__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void set_eff_tag__11TChCrEffTagFi(int);

extern M2C_UNK __vt__16TObjCMProportion[];
extern const f32 lbl_805DDA90;
extern void *lbl_805D3CE8;
extern void *lbl_805D6520;

void *TObjCMProportion__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMProportion;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CE8;
    M2C_FIELD(arg0, void **, 0x1C) = lbl_805D6520;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 1;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDA90;
    set_eff_tag__11TChCrEffTagFi(9);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80298FAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_ratio__16TObjCMProportionFv(void);
u8 *TObjCMProportion__sub_80298F08();

extern M2C_UNK lbl_80465168;
extern const f32 lbl_805DDC20;

f32 get_ratio__16TObjCMProportionFv(void) {
    return (f32) M2C_FIELD(TObjCMProportion__sub_80298F08(), u16 *, 0x18) / lbl_805DDC20;
}

}
#endif
#endif
