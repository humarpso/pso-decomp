#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__15TObjBoss2TunnelFPv(void *arg0);

M2C_UNK TObjBoss2Tunnel__sub_8007DE80(f32);

void update_position__15TObjBoss2TunnelFPv(void *arg0) {
    TObjBoss2Tunnel__sub_8007DE80(M2C_FIELD(arg0, f32 *, 0x1C));
}

}
