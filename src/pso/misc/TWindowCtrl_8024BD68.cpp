#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_window_visibility__11TWindowCtrlFPv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
s32 TWindowCtrl__sub_8024AFB8(void *, s32);
s32 TWindowCtrl__sub_8024B054(s32);
s32 TWindowCtrl__sub_8024C680();
s32 fn_80076CD0(void *);
s32 fn_801CBD00();
M2C_UNK fn_802472A8(u32);
M2C_UNK fn_8024735C(u32);
M2C_UNK fn_80247DFC(u32);
s32 fn_80247E44(u32);
M2C_UNK fn_80247E50(u32);
s32 fn_80247EA8(u32);

extern s32 lbl_805D53A0;

void update_window_visibility__11TWindowCtrlFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s16 *, 0x22) = (s16) (temp_r3 - 1);
        }
        if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
            fn_802472A8(M2C_FIELD(arg0, u32 *, 0x38));
            return;
        }
        temp_r31 = fn_801CBD00();
        if ((TWindowCtrl__sub_8024C680() != 0) || (TWindowCtrl__sub_8024AF74(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024AFB8(arg0, lbl_805D53A0) != 0) || (((u16)temp_r31 != 0xffffU) && ((s32)(u16)temp_r31 != (s32) lbl_805D53A0))) {
            fn_802472A8(M2C_FIELD(arg0, u32 *, 0x38));
            return;
        }
        fn_8024735C(M2C_FIELD(arg0, u32 *, 0x38));
        if ((fn_80247EA8(M2C_FIELD(arg0, u32 *, 0x38)) != 0) && (fn_80076CD0(arg0 + 0x94) != 0)) {
            fn_80247E50(M2C_FIELD(arg0, u32 *, 0x38));
        }
        if (fn_80247E44(M2C_FIELD(arg0, u32 *, 0x38)) != 0) {
            fn_80247DFC(M2C_FIELD(arg0, u32 *, 0x38));
        }
    }
}

}
