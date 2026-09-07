#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8007A7A0_lbl_804FF9C0 {
    M2C_UNK value;
    u8 remaining[0x37C];
};

extern "C" {
extern RecoveredGlobal_8007A7A0_lbl_804FF9C0 lbl_804FF9C0;
void fn_8007A7A0(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8007A7A0_lbl_804FF9C0_size[sizeof(RecoveredGlobal_8007A7A0_lbl_804FF9C0) == 0x380 ? 1 : -1];
void fn_8007A7A0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_804FF9C0.value;
}

}
