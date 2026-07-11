#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK set_scale_xyz__10TObjPlayerFPvf();

void set_speed__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 8) = farg0;
    set_scale_xyz__10TObjPlayerFPvf();
}

}
