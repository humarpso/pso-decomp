#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803948B4_gTRKCPUState {
    M2C_UNK value;
    u8 remaining[0x42C];
};

extern "C" {
extern RecoveredGlobal_803948B4_gTRKCPUState gTRKCPUState;
s32 TRKTargetGetPC(void);
}

extern "C" {

typedef char RecoveredGlobal_803948B4_gTRKCPUState_size[sizeof(RecoveredGlobal_803948B4_gTRKCPUState) == 0x430 ? 1 : -1];
s32 TRKTargetGetPC(void) {
    return M2C_FIELD(&gTRKCPUState.value, s32 *, 0x80);
}

}
