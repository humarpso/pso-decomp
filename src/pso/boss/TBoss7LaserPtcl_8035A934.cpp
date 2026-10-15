#include "types.h"

extern "C" {

void calc_world_position__15TBoss7LaserPtclFPvPv(void *arg0, void *arg1);
void update_position__15TBoss7LaserPtclFPv(void *arg0);

void calc_world_position__15TBoss7LaserPtclFPvPv(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        *(f32 *)((s8 *)arg1 + 0) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) + *(f32 *)((s8 *)arg0 + 0x38));
        *(f32 *)((s8 *)arg1 + 4) = (f32) (*(f32 *)((s8 *)arg0 + 0x24) + *(f32 *)((s8 *)arg0 + 0x3C));
        *(f32 *)((s8 *)arg1 + 8) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) + *(f32 *)((s8 *)arg0 + 0x40));
    }
}

extern const f32 lbl_805DE9F0;

void update_position__15TBoss7LaserPtclFPv(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) * *(f32 *)((s8 *)arg0 + 0x4C));
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (lbl_805DE9F0 - *(f32 *)((s8 *)arg0 + 0x24));
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) (*(f32 *)((s8 *)arg0 + 0x34) * *(f32 *)((s8 *)arg0 + 0x4C));
}

}
