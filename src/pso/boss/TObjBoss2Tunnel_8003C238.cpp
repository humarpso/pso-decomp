#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enable_fog__15TObjBoss2TunnelFPv(void *arg0);
void enable_fog__15TObjBoss2TunnelFv(void);
M2C_UNK update_all__8TFogCtrlFii(s32, M2C_UNK);

extern s32 TObjBoss2Tunnel__data_805D4C00;

void enable_fog__15TObjBoss2TunnelFPv(void *arg0) {
    update_all__8TFogCtrlFii((s32)(M2C_FIELD(arg0, s32 *, 0xB0)), (M2C_UNK)(1));
    TObjBoss2Tunnel__data_805D4C00 |= 4;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void enable_fog__15TObjBoss2TunnelFv(void) {
    update_all__8TFogCtrlFii((s32)(0xB), (M2C_UNK)(1));
    TObjBoss2Tunnel__data_805D4C00 |= 2;
}

}
