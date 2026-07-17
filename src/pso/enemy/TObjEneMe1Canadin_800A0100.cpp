#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init__17TObjEneMe1CanadinFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 rand__11TOBoss4RockFv(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK __ct__7TObjectFP7TObject(u8 *, s32);

extern const f64 lbl_8043A460;
extern M2C_UNK lbl_80490440[];
extern s32 lbl_805D29BC;
extern const f32 lbl_805D994C;
extern const f32 lbl_805D9950;

#pragma opt_propagation off
u8 *init__17TObjEneMe1CanadinFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490440;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29BC;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20));
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x24));
    {
        s32 k = (s32) 0xFFFF0000;
        M2C_FIELD(arg0, s32 *, 0x40) = k + 0x33;
        M2C_FIELD(arg0, s32 *, 0x44) = k + 0x33;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (lbl_805D994C * (lbl_805D9950 * (f32) rand__11TOBoss4RockFv(k)));
    }
    return arg0;
}

}
