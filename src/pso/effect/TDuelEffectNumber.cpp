#ifndef PSO_CLASS_PACKAGE
#include "pso/TDuelEffectNumber.h"

TDuelEffectNumber::~TDuelEffectNumber() {}
#else
#if PSO_CLASS_PACKAGE == 0x80080290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__17TDuelEffectNumberFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__17TDuelEffectNumber[];
extern void *lbl_805D28E0;

void *__ct__17TDuelEffectNumberFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TDuelEffectNumber;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28E0;
    M2C_FIELD(arg0, f32 *, 0x1C) = M2C_FIELD(arg2, f32 *, 0x0);
    M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg2, f32 *, 0x4);
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80080460
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_digit_transform__17TDuelEffectNumberFiPvPvi(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3);

extern const f64 lbl_80438E20;
extern const f32 lbl_805D9310;
extern const f32 lbl_805D9314;
extern const f32 lbl_805D9318;
extern const f32 lbl_805D931C;
extern const f32 lbl_805D9320;
extern const f32 lbl_805D9324;
extern const f32 lbl_805D9328;

void calc_digit_transform__17TDuelEffectNumberFiPvPvi(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3) {
    if (arg3 < 0xA) {
        *arg1 = -(lbl_805D9314 * ((f32) arg3 / lbl_805D9318) - lbl_805D9310);
    } else {
        *arg1 = lbl_805D9320 * ((f32) (arg3 - 0xA) / lbl_805D9324) + lbl_805D931C;
    }
    if (arg3 < 5) {
        *arg2 = (f32) (arg3 / 5);
        return;
    }
    *arg2 = lbl_805D931C - ((f32) (arg3 - 5) / lbl_805D9328);
}

}
#endif
#endif
