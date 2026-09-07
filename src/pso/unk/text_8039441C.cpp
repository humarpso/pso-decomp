#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80394638_gTRKState {
    M2C_UNK value;
    u8 remaining[0xA0];
};

extern "C" {
extern RecoveredGlobal_80394638_gTRKState gTRKState;
s32 TRKTargetStop(void);
}

extern "C" {

typedef char RecoveredGlobal_80394638_gTRKState_size[sizeof(RecoveredGlobal_80394638_gTRKState) == 0xA4 ? 1 : -1];
s32 TRKTargetStop(void) {
    M2C_FIELD(&gTRKState.value, s32 *, 0x98) = 1;
    return 0;
}

}
