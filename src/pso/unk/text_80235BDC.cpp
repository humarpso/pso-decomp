#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80235BDC_lbl_804CCA90 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80235BDC_lbl_804CCA90 lbl_804CCA90;
u8 *construct_delayed_point_sound(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3, u8 *arg4);
}

extern "C" {

typedef char RecoveredGlobal_80235BDC_lbl_804CCA90_size[sizeof(RecoveredGlobal_80235BDC_lbl_804CCA90) == 0x18 ? 1 : -1];
u8 *construct_delayed_point_sound(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3, u8 *arg4) {
    __ct__7TObjectFP7TObject(arg0, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCA90.value;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x24, arg1);
    return arg0;
}

}
