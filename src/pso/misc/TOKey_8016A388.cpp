#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOKey__sub_8016A388(void *arg0);
s32 TOKey__sub_8016A310();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);

extern s8 lbl_8050E208[];

s32 TOKey__sub_8016A388(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r0 == 2) {
        return 0;
    }
    if ((temp_r0 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1)) {
        return 0;
    }
    if ((TOKey__sub_8016A310() != 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        return 1;
    }
    return 0;
}

}
