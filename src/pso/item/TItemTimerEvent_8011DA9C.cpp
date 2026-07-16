#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemTimerEvent__sub_8011DA9C(void *arg0);
s32 TLobby__sub_800822E8(s32, M2C_UNK);

void TItemTimerEvent__sub_8011DA9C(void *arg0) {
    if (TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0x28), 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
}

}
