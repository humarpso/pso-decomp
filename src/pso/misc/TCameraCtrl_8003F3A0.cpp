#include "types.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

s32 TCameraCtrl::get_adjusted_angle(s32 arg1) {
    return *(s16 *)((s8 *)this + 0x2C) + arg1;
}

u16 TCameraCtrl::get_param_offset(s32 arg1) {
    return (u16) (*(u16 *)((s8 *)this + 0x1C) + arg1);
}

}
