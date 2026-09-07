#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800A02AC_lbl_80490458 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800A02AC_lbl_80490458 lbl_80490458;
extern s32 lbl_805D29B8;
u8 *fn_800A02AC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

typedef char RecoveredGlobal_800A02AC_lbl_80490458_size[sizeof(RecoveredGlobal_800A02AC_lbl_80490458) == 0x18 ? 1 : -1];
u8 *fn_800A02AC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80490458.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29B8;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    M2C_FIELD(arg0, s32 *, 0x34) = 0xFFFF0033;
    M2C_FIELD(arg0, s32 *, 0x38) = 0xFFFF0033;
    return arg0;
}

}
