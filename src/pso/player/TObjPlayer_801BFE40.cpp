#include "types.h"

extern "C" {

void set_scale_xyz__10TObjPlayerFPvf(void *arg0, f32 farg0);

void set_scale_xyz__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    *(f32 *)((s8 *)arg0 + 0x14) = farg0;
    *(f32 *)((s8 *)arg0 + 0x10) = farg0;
    *(f32 *)((s8 *)arg0 + 0xC) = farg0;
}

}
