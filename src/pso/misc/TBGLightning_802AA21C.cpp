#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0);
s32 rand__11TOBoss4RockFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32, s8, f32, f32);
M2C_UNK __ct__7TObjectFP7TObject(u8 *, void *);

extern const f64 lbl_8046FC98;
struct VTBlob_802AA21C { void *slots[8]; };
extern struct VTBlob_802AA21C __vt__12TBGLightning;
extern s32 lbl_805D3E38;
extern const f32 lbl_805DE038;
extern const f32 lbl_805DE064;

u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    s8 temp_r5;

    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) &__vt__12TBGLightning;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E38;
    temp_f2 = (f32) rand__11TOBoss4RockFv();
    temp_f1 = lbl_805DE038 * temp_f2;
    temp_r5 = (s8) (lbl_805DE064 * temp_f1);
    M2C_FIELD(arg0, s8 *, 0x1C) = temp_r5;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2, temp_r5, temp_f1, temp_f2);
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    return arg0;
}

}
