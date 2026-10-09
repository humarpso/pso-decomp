#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8006EF80_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
extern RecoveredGlobal_8006EF80_lbl_8048C9D8 challenge_mode_state;
s32 fn_8006EF80(void);
}

extern "C" {

typedef char RecoveredGlobal_8006EF80_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006EF80_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 fn_8006EF80(void) {
    return M2C_FIELD(&challenge_mode_state.value, s32 *, 0x48);
}

}
