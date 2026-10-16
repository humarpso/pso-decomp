#include "types.h"
#include "pso/boss/TBoss7LaserPtcl.h"

extern "C" {

void TBoss7LaserPtcl::calc_world_position(void *arg1) {
    if (arg1 != NULL) {
        *(f32 *)((s8 *)arg1 + 0) = (f32) (*(f32 *)((s8 *)this + 0x20) + *(f32 *)((s8 *)this + 0x38));
        *(f32 *)((s8 *)arg1 + 4) = (f32) (*(f32 *)((s8 *)this + 0x24) + *(f32 *)((s8 *)this + 0x3C));
        *(f32 *)((s8 *)arg1 + 8) = (f32) (*(f32 *)((s8 *)this + 0x28) + *(f32 *)((s8 *)this + 0x40));
    }
}

extern const f32 lbl_805DE9F0;

void TBoss7LaserPtcl::update_position() {
    *(f32 *)((s8 *)this + 0x38) = (f32) (*(f32 *)((s8 *)this + 0x2C) * this->travel_distance);
    *(f32 *)((s8 *)this + 0x3C) = (f32) (lbl_805DE9F0 - *(f32 *)((s8 *)this + 0x24));
    *(f32 *)((s8 *)this + 0x40) = (f32) (*(f32 *)((s8 *)this + 0x34) * this->travel_distance);
}

}
