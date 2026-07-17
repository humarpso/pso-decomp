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
s32 get_display_flag__11TWindowCtrlFv();
s32 fn_80076CD0(void *);
s32 get_current_target_id__10TObjPlayerFv();
M2C_UNK update__11TWindowChatFPv(u32);
M2C_UNK open_input__11TWindowChatFPv(u32);
M2C_UNK TWindowChat__sub_80247DFC(u32);
s32 is_visible__11TWindowChatFPv(u32);
M2C_UNK TWindowChat__sub_80247E50(u32);
s32 is_mode_bit4__11TWindowChatFPv(u32);

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
            update__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38));
            return;
        }
        temp_r31 = get_current_target_id__10TObjPlayerFv();
        if ((get_display_flag__11TWindowCtrlFv() != 0) || (TWindowCtrl__sub_8024AF74(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024AFB8(arg0, lbl_805D53A0) != 0) || (((u16)temp_r31 != 0xffffU) && ((s32)(u16)temp_r31 != (s32) lbl_805D53A0))) {
            update__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38));
            return;
        }
        open_input__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38));
        if ((is_mode_bit4__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0) && (fn_80076CD0(arg0 + 0x94) != 0)) {
            TWindowChat__sub_80247E50(M2C_FIELD(arg0, u32 *, 0x38));
        }
        if (is_visible__11TWindowChatFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0) {
            TWindowChat__sub_80247DFC(M2C_FIELD(arg0, u32 *, 0x38));
        }
    }
}

}
