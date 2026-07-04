#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F9EF8(M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 fn_802E00C4(s32);
extern s8 lbl_8050E3B8[];

void fn_802DC3D4(void *arg0) {
    if ((fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) || (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        fn_800F9EF8(1);
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
    }
}

}
