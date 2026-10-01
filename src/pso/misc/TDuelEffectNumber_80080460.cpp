#pragma push

#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D9330;
void run_task__17TDuelEffectStringFv(u8 *arg0);
void TDuelEffectNumber__sub_800803D4(s32, f32);
void TDuelEffectNumber__sub_80080438(void *, f32);
void calc_digit_transform__17TDuelEffectNumberFiPvPvi(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 __cvt_fp2unsigned(f32);
s32 set_global_param__8TObjFishFi(s32);
void TWindowSubStatusDisp__sub_803DEE6C(s32);
void get_player__20TWindowSubStatusDispFv(void);
void TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805D932C;
void render__17TDuelEffectStringFv(u8 *arg0);
}

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

#pragma pop

#pragma push

#include "pso/TDuelEffectString.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

f32 TBoss8Dragon__sub_8008072C(void);
void *__ct__17TDuelEffectStringFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
f64 pow();

extern M2C_UNK __vt__17TDuelEffectString[];
extern void *lbl_805D28E8;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void render__17TDuelEffectStringFv(u8 *arg0) {
    f32 spC;
    f32 sp8;
    s32 temp_r0;
    s32 temp_r31;
    calc_digit_transform__17TDuelEffectNumberFiPvPvi((s32)((s32) arg0), (f32 *)(&spC), (f32 *)(&sp8), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    temp_r31 = __cvt_fp2unsigned(lbl_805D932C * sp8) | 0xFF0000 | 0xFFFF;
    init_xyz_limits__10TObjPlayerFv();
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    TWindowSubStatusDisp__sub_803DF160(6, temp_r31);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 0:
        TDuelEffectNumber__sub_80080438(arg0, spC);
        break;
    case 1:
        TDuelEffectNumber__sub_800803D4((s32) arg0, spC);
        break;
    }
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}
#pragma pop

void run_task__17TDuelEffectStringFv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x28) >= lbl_805D9330) {
        queue_destruction__7TObjectFv(arg0);
    }
}

TDuelEffectString::~TDuelEffectString() {}
void *__ct__17TDuelEffectStringFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TDuelEffectString;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28E8;
    M2C_FIELD(arg0, f32 *, 0x1C) = M2C_FIELD(arg2, f32 *, 0x0);
    M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg2, f32 *, 0x4);
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}

f32 TBoss8Dragon__sub_8008072C(void) {
    return (f32) pow();
}

}

#pragma pop
