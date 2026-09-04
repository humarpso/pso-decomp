#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_world_position__15TBoss7LaserPtclFPvPv(void *arg0, void *arg1);
void update_position__15TBoss7LaserPtclFPv(void *arg0);

void calc_world_position__15TBoss7LaserPtclFPvPv(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + M2C_FIELD(arg0, f32 *, 0x38));
        M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(arg0, f32 *, 0x3C));
        M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(arg0, f32 *, 0x40));
    }
}

extern const f32 lbl_805DE9F0;

void update_position__15TBoss7LaserPtclFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x4C));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DE9F0 - M2C_FIELD(arg0, f32 *, 0x24));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * M2C_FIELD(arg0, f32 *, 0x4C));
}

}
