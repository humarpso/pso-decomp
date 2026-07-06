#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BC3DC(u8 *arg0);
M2C_UNK TOSwitchAttack__sub_80087278(void *, M2C_UNK, M2C_UNK);

void TBoss6Type2__sub_802BC3DC(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x518) % 24) == 0) {
        TOSwitchAttack__sub_80087278(arg0 + 0x38, 0x224, 0x2040);
    }
}

}
