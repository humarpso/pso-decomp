#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_active_window__11TWindowCtrlFPv(void *arg0);
s32 is_visible__11TWindowCtrlFPv();
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
M2C_UNK window_request_show(u32);
s32 get_active_menu__11TWindowCtrlFPv(void *);
M2C_UNK set_position__11TWindowCtrlFPvPv(u32, s32);

void show_active_window__11TWindowCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        if (is_visible__11TWindowCtrlFPv() != 0) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, u32 *, 0x2C));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x2C));
        if (get_active_menu__11TWindowCtrlFPv(arg0) != 0) {
            set_position__11TWindowCtrlFPvPv(M2C_FIELD(arg0, u32 *, 0x2C), TWindowSubComCard__sub_8026CBB8(0x21));
            return;
        }
        set_position__11TWindowCtrlFPvPv(M2C_FIELD(arg0, u32 *, 0x2C), TWindowSubComCard__sub_8026CBB8(0x20));
    }
}

}
