#include "types.h"

extern "C" {

s32 get_adjusted_angle__11TCameraCtrlFPvi(void *arg0, s32 arg1) {
    return *(s16 *)((s8 *)arg0 + 0x2C) + arg1;
}

u16 get_param_offset__11TCameraCtrlFPvi(void *arg0, s32 arg1) {
    return (u16) (*(u16 *)((s8 *)arg0 + 0x1C) + arg1);
}

}
