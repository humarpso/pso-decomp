#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0);

s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0);
        if (!(temp_r3 & 8)) {
            var_r31 += 1;
        }
        if (!(temp_r3 & 0x10)) {
            var_r31 += count_active_segments__15TObjBoss2TunnelFPv(M2C_FIELD(arg0, void **, 0x2C));
        }
        arg0 = M2C_FIELD(arg0, void **, 0x30);
    } while (arg0 != NULL);
    return var_r31;
}

}
