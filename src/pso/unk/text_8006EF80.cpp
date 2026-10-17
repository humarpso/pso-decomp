#include "types.h"

struct RecoveredGlobal_8006EF80_lbl_8048C9D8 {
    s32 value;
    u8 remaining[0x744];
};

extern "C" {
extern RecoveredGlobal_8006EF80_lbl_8048C9D8 challenge_mode_state;
s32 fn_8006EF80(void);
typedef char RecoveredGlobal_8006EF80_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006EF80_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 fn_8006EF80(void) {
    return *(s32 *)((s8 *)(&challenge_mode_state.value) + 0x48);
}

}
