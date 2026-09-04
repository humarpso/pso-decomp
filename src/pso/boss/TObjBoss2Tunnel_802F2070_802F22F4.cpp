#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjBoss2Tunnel__sub_802F22F4(void);
s32 is_phase_active__15TObjBoss2TunnelFv(void);

extern u32 lbl_805D6968;

s32 TObjBoss2Tunnel__sub_802F22F4(void) {
    return ((u32) lbl_805D6968 >> 0xDU) & 1;
}

extern u32 lbl_805D6968;

s32 is_phase_active__15TObjBoss2TunnelFv(void) {
    return ((u32) lbl_805D6968 >> 0xCU) & 1;
}

}
