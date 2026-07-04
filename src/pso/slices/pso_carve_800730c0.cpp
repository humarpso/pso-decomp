#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80072D48(void *);
M2C_UNK fn_80072DA0(void *);
M2C_UNK fn_80072DD8();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TObjPlayer__sub_801B5680();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void fn_800730C0(void *arg0) {
    fn_80072DD8();
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (TObjPlayer__sub_801B5680() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        fn_80072D48(arg0);
        fn_80072DA0(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

}
