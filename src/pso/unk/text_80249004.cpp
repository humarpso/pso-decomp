#include "types.h"

struct RecoveredGlobal_80249004_lbl_804CE7E8 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
void sub_80248B7C__13TUnk_804CE7E8Fs(void *, s16);
u8 * fn_802683F4(void *, s32, s32, s32);
extern RecoveredGlobal_80249004_lbl_804CE7E8 status_disp_window_dispatch_table;
u8 *fn_80249004(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80249004_lbl_804CE7E8_size[sizeof(RecoveredGlobal_80249004_lbl_804CE7E8) == 0x20 ? 1 : -1];
u8 *fn_80249004(u8 *arg0, s32 arg1, s16 arg2) {
    fn_802683F4(arg0, arg1, 5, (s32) arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &status_disp_window_dispatch_table.value;
    sub_80248B7C__13TUnk_804CE7E8Fs(arg0, arg2);
    return arg0;
}

}
