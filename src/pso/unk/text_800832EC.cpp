#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800832EC_lbl_8048E5DC {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800832EC_lbl_8048E5DC lbl_8048E5DC;
u8 *fn_800832EC(u8 *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_800832EC_lbl_8048E5DC_size[sizeof(RecoveredGlobal_800832EC_lbl_8048E5DC) == 0x18 ? 1 : -1];
u8 *fn_800832EC(u8 *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, f32 farg0) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8048E5DC.value;
    M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2C), (void *) (arg4));
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

}
