#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CC74C[];

u8 *fn_8022F3B0(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC74C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002BB1F), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
