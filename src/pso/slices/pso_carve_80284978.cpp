#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
extern s8 lbl_8050E208[];

void fn_80284978(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    void *temp_r31;

    if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 0x10000) != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 **, 0x6C);
            if ((s32) *temp_r3 != 0) {
                *temp_r3 = 0;
            } else {
                *temp_r3 = 1;
            }
        }
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 0x20000) != 0) {
            temp_r3_2 = M2C_FIELD(arg0, s32 **, 0x70);
            if ((s32) *temp_r3_2 != 0) {
                *temp_r3_2 = 0;
                return;
            }
            *temp_r3_2 = 1;
        }
    }
}

}
