#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80072308(s32);
M2C_UNK fn_80072C38(void *);
M2C_UNK fn_80072C78(void *);
M2C_UNK fn_80072D48(void *);
M2C_UNK fn_80072DA0();
M2C_UNK fn_80072DD8(void *);
M2C_UNK fn_80072E10(void *);
s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(u32);
extern M2C_UNK lbl_8048D120[];
extern s8 lbl_8050E208[];

void fn_80072FD8(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    fn_80072DA0();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        fn_80072C78(arg0);
    }
    var_r31 = 0;
    if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 == 2) {
            var_r31 = 1;
            goto block_6;
        }
        fn_80072308(lbl_8048D120[temp_r3]);
        fn_80072D48(arg0);
        fn_80072E10(arg0);
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        return;
    }
block_6:
    if ((var_r31 != 0) || (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0)) {
        fn_80072C38(arg0);
        fn_80072D48(arg0);
        fn_80072DD8(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
