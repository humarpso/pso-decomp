#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0);
M2C_UNK set_stat_scale__10TObjPlayerFPvf(f32);
M2C_UNK set_ring_action__10TObjPlayerFPvi(s32, M2C_UNK);

extern const f32 lbl_805DC320;

void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0) {
    set_stat_scale__10TObjPlayerFPvf(lbl_805DC320);
    set_ring_action__10TObjPlayerFPvi(arg0, 0);
}

}
