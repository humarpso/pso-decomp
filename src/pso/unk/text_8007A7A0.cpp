#include "types.h"
#include "pso/unk/text_8007A7A0.h"

struct RecoveredGlobal_8007A7A0_lbl_804FF9C0 {
    s32 value;
    u8 remaining[0x37C];
};

extern RecoveredGlobal_8007A7A0_lbl_804FF9C0 lbl_804FF9C0;
typedef char RecoveredGlobal_8007A7A0_lbl_804FF9C0_size[sizeof(RecoveredGlobal_8007A7A0_lbl_804FF9C0) == 0x380 ? 1 : -1];
void fn_8007A7A0(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0) = 0;
    *(s32 **)((s8 *)arg0 + 4) = &lbl_804FF9C0.value;
}
