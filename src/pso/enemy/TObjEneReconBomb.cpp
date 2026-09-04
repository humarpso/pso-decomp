#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjEneReconBombFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__16TObjEneReconBomb[];

void *__dt__16TObjEneReconBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneReconBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8031BB44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjEneReconBomb__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
s32 TObjEneRecon__sub_8031C274(int);
f32 TObjEneRecon__sub_8031C2BC(int);
f32 TObjEneRecon__sub_8031C2C8(int);
f32 TObjEneRecon__sub_8031C2D4(int);
M2C_UNK TObjPlayer__sub_80019038();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, int);
s16 obj_getField1c(int);

extern M2C_UNK __vt__16TObjEneReconBomb[];
extern s32 lbl_805D4128;
extern const f32 lbl_805DF3A4;

u8 *TObjEneReconBomb__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    f32 temp_f31;
    u8 *temp_r5;

    TObjPlayer__sub_80019038();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *) __vt__16TObjEneReconBomb;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4128;
    M2C_FIELD(arg0, s32 *, 0x334) = arg2;
    M2C_FIELD(arg0, s16 *, 0x338) = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, f32 *, 0x34C) = TObjEneRecon__sub_8031C2D4((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, f32 *, 0x350) = TObjEneRecon__sub_8031C2C8((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, f32 *, 0x354) = TObjEneRecon__sub_8031C2BC((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    M2C_FIELD(arg0, s32 *, 0x358) = TObjEneRecon__sub_8031C274((int) (M2C_FIELD(arg0, s32 *, 0x334)));
    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r5, s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg3), (int) (temp_r5));
    temp_f31 = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_f1 = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f31);
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) lbl_805DF3A4;
    M2C_FIELD(arg0, f32 *, 0x344) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f1);
    M2C_FIELD(arg0, s32 *, 0x360) = 0;
    M2C_FIELD(arg0, s32 *, 0x35C) = 0;
    return arg0;
}

}
#endif
#endif
