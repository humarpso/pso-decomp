#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK add_stat_clamped__10TObjPlayerFiPvs(s32, s32, s16);
void *fn_801D93C4();

void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 0xC, M2C_FIELD(fn_801D93C4(), s16 *, 0xC));
}

}
