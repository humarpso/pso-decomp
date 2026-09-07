#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F43A8_lbl_805127B0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
extern RecoveredGlobal_801F43A8_lbl_805127B0 lbl_805127B0;
M2C_UNK *fn_801F43A8(void);
}

extern "C" {

typedef char RecoveredGlobal_801F43A8_lbl_805127B0_size[sizeof(RecoveredGlobal_801F43A8_lbl_805127B0) == 0x20 ? 1 : -1];
M2C_UNK *fn_801F43A8(void) {
    return &lbl_805127B0.value;
}

}
