#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80263A20_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 is_split_screen();
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 request_close__19TWindowSubTradeMainFPv(void *);
s32 window_request_show(void *);
s32 TWindowSubAreaMapDisp__sub_80246948(void *);
s32 is_player_input_active(void *);
extern RecoveredGlobal_80263A20_lbl_8050E208 controller_input_state;
void toggle_help_window_on_button(u32 arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_80263A20_lbl_8050E208_size[sizeof(RecoveredGlobal_80263A20_lbl_8050E208) == 0x1B0 ? 1 : -1];
void toggle_help_window_on_button(u32 arg0, s32 arg1) {
    if ((is_split_screen() != 0) && (arg0 != 0U) && (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + (is_player_input_active((void *) (arg1)) * 0x50) + 0x20), (int) (0x400)) != 0)) {
        if (TWindowSubAreaMapDisp__sub_80246948((void *) (arg0)) != 0) {
            window_request_show((void *) (arg0));
            return;
        }
        request_close__19TWindowSubTradeMainFPv((void *) (arg0));
    }
}

}
