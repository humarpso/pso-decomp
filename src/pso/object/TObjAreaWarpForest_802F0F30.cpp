#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjAreaWarpForest__sub_802F0F30(void *arg0);
s32 TObjBoss2Tunnel__sub_802F2070();
M2C_UNK run_task__18TObjAreaWarpForestFv(void *);

void TObjAreaWarpForest__sub_802F0F30(void *arg0) {
    if (TObjBoss2Tunnel__sub_802F2070() != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = 1;
    }
    run_task__18TObjAreaWarpForestFv(arg0);
}

}
