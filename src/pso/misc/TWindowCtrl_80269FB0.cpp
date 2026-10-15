#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

void TWindowCtrl::set_position(void *arg1) {
    if ((*(f32 *)((s8 *)this + 0x30) != *(f32 *)((s8 *)arg1 + 0)) || (*(f32 *)((s8 *)this + 0x34) != *(f32 *)((s8 *)arg1 + 4))) {
        *(f32 *)((s8 *)this + 0x30) = *(f32 *)((s8 *)arg1 + 0);
        *(f32 *)((s8 *)this + 0x34) = (f32) *(f32 *)((s8 *)arg1 + 4);
        *(s32 *)((s8 *)this + 0x50) = 3;
    }
}

}
