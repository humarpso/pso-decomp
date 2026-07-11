#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_skip_input__6TMovieFPv(void *arg0);
s32 TMovie__sub_80143EFC(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
s32 fn_8001B41C();
s32 fn_800F8FB8();
M2C_UNK fn_801449E4();
M2C_UNK fn_801449F0();
s32 check_reset_button__16TKeyBoardControlFv();
s32 fn_801A6D60(void *, M2C_UNK);
s8 fn_802A1144();
s8 func_801A5E54__Fv();

extern s8 lbl_8050E208[];
extern s8 lbl_8050E3B8[];

s32 check_skip_input__6TMovieFPv(void *arg0) {
    void *var_r31;
    s32 var_r30;
    s8 temp_r3;

    if (fn_8001B41C() != 0) {
        if ((fn_800F8FB8() == 0) || (TMovie__sub_80143EFC(M2C_FIELD(arg0, s32 *, 0x20)) != 0) || (func_801A5E54__Fv() != 0)) {
            if ((fn_800F8FB8() == 0) || (func_801A5E54__Fv() != 0)) {
                fn_801449F0();
            }
            return 1;
        }
        goto block_return0;
    }
    temp_r3 = fn_802A1144();
    switch (temp_r3) {
    case 0:
        var_r31 = lbl_8050E3B8 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 4) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 2) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x400) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x200) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 8) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x10) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x20) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x40) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x80) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x20000) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x10000) != 0) goto block_fn_8000F91C;
        var_r31 = lbl_8050E208 + 0x160;
        if (fn_801A6D60(var_r31, 4) != 0) goto block_fn_8000F91C;
        if (fn_801A6D60(var_r31, 2) != 0) goto block_fn_8000F91C;
        if (fn_800F8FB8() == 0) goto block_fn_8000F91C;
        if (check_reset_button__16TKeyBoardControlFv() != 0) goto block_fn_8000F91C;
        if (TMovie__sub_80143EFC(M2C_FIELD(arg0, s32 *, 0x20)) == 0) goto block_return0;
block_fn_8000F91C:
        TKeyBoardControl__sub_8000F91C(9);
        return 1;
    case 1:
        var_r30 = 0;
        if (check_reset_button__16TKeyBoardControlFv() != 0) {
            var_r30 = 1;
        }
        var_r31 = lbl_8050E3B8 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 2) != 0) goto block_call_func;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 8) != 0) goto block_call_func;
        var_r31 = lbl_8050E208 + 0x160;
        if (fn_801A6D60(var_r31, 4) != 0) goto block_call_func;
        if (fn_801A6D60(var_r31, 2) != 0) goto block_call_func;
        if (fn_800F8FB8() == 0) goto block_call_func;
        if (var_r30 != 0) goto block_call_func;
        if (TMovie__sub_80143EFC(M2C_FIELD(arg0, s32 *, 0x20)) == 0) goto block_return0;
block_call_func:
        if ((func_801A5E54__Fv() != 0) || (var_r30 != 0)) {
            fn_801449E4();
        }
        return 1;
    }
block_return0:
    return 0;
}

}
