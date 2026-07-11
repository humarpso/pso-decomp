#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TBoss7PhotonBullet__sub_802ED524(void);

void *TLobby__sub_8001E1D8(M2C_UNK);

f32 TBoss7PhotonBullet__sub_802ED524(void) {
    return M2C_FIELD(TLobby__sub_8001E1D8(0xF), f32 *, 4);
}

}
