#include "types.h"
#include "pso/unk/text_80338F3C.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_80338F3C_lbl_804EF4CC {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80338F3C_lbl_804EF4E0 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
u8 * get_window_layout_position(s32);
extern RecoveredGlobal_80338F3C_lbl_804EF4CC lbl_804EF4CC;
extern RecoveredGlobal_80338F3C_lbl_804EF4E0 lbl_804EF4E0;
typedef char RecoveredGlobal_80338F3C_lbl_804EF4CC_size[sizeof(RecoveredGlobal_80338F3C_lbl_804EF4CC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80338F3C_lbl_804EF4E0_size[sizeof(RecoveredGlobal_80338F3C_lbl_804EF4E0) == 0x20 ? 1 : -1];
u8 *fn_80338F3C(u8 *arg0, s32 arg1) {
    ((TWindowSubStatusDisp *)arg0)->ct_helper((s32)((int) (get_window_layout_position(0xB0))), (s32)((void *) (arg1)), (s32)((int) (0x40)), (s32)((void *) (&lbl_804EF4CC.value)));
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804EF4E0.value;
    return arg0;
}

}
