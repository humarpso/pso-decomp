#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80048560_lbl_80484860 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80048560_lbl_804FF1D0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801E341C(void *, int, int);
extern RecoveredGlobal_80048560_lbl_80484860 lbl_80484860;
extern RecoveredGlobal_80048560_lbl_804FF1D0 lbl_804FF1D0;
void fn_80048560(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80048560_lbl_80484860_size[sizeof(RecoveredGlobal_80048560_lbl_80484860) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_80048560_lbl_804FF1D0_size[sizeof(RecoveredGlobal_80048560_lbl_804FF1D0) == 0x18 ? 1 : -1];
void fn_80048560(u8 *arg0) {
    VecCopy__FP3VecPC3Vec((void *) (&lbl_804FF1D0.value), (int) (M2C_FIELD(arg0, s32 *, 0x1C)));
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)&lbl_804FF1D0.value + 0xC), (int) (M2C_FIELD(arg0, s32 *, 0x20)));
    init_xyz_limits__10TObjPlayerFv();
    TObjPlayer__sub_801E341C((void *) (&lbl_80484860.value), (int) (1), (int) (5));
    reset_transform_state__10TObjPlayerFv();
}

}
