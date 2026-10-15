#include "types.h"

extern "C" {

void set_speed__10TObjPlayerFPvf(void *arg0, f32 farg0);
s32 set_scale_xyz__10TObjPlayerFPvf();

void set_speed__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    *(f32 *)((s8 *)arg0 + 8) = farg0;
    set_scale_xyz__10TObjPlayerFPvf();
}

}
