#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024B9C0(void *arg0);
void update_trade_window__11TWindowCtrlFPv(void *arg0);
void handle_controller__11TWindowCtrlFi(s32 arg0);
s32 TOKeyMachine01__sub_802034A8();
s32 is_active__13TRaderMapCoreFv();
s32 TWindowCtrl__sub_8024AF74(s32);
s32 TWindowCtrl__sub_8024B000(void *, s32);
s32 TWindowCtrl__sub_8024B054(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, M2C_UNK *);
M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
s32 is_split_screen();
s32 fn_8002AE08(s32);
M2C_UNK advance_card_status__15TWindowCtrlMainFi(s32);
M2C_UNK window_request_show(u32);

extern s32 lbl_805D53A0;

void TWindowCtrl__sub_8024B9C0(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        if (TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, u32 *, 0x30));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x30));
    }
}

extern s32 lbl_805D53A0;

void update_trade_window__11TWindowCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        if ((TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(lbl_805D53A0)) != 0) || ((is_split_screen() != 0) && (is_active__13TRaderMapCoreFv() == 0))) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, u32 *, 0x34));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

extern u8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void handle_controller__11TWindowCtrlFi(s32 arg0) {
    if ((TOKeyMachine01__sub_802034A8() == 0xF) && (TWindowCtrl__sub_8024B054(lbl_805D53A0) == 0) && (TWindowCtrl__sub_8024B000((void *)(arg0), (s32)(lbl_805D53A0)) == 0) && (TWindowCtrl__sub_8024AF74(lbl_805D53A0) == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, fn_8002AE08(lbl_805D53A0), (M2C_UNK *)lbl_8050E208) != 0)) {
        advance_card_status__15TWindowCtrlMainFi(lbl_805D53A0);
    }
}

}
