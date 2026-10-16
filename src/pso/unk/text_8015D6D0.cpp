#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

extern "C" {

s32 TUnk_804B0BB8::init_door_switch_binding() {
    s32 temp_r0;

    *(s32 *)((s8 *)this + 0xC8) = (s32) *(s32 *)((s8 *)this + 0x84);
    temp_r0 = *(s32 *)((s8 *)this + 0xC8);
    if (temp_r0 > 0x100) {
        *(s32 *)((s8 *)this + 0xCC) = 0;
    } else if (temp_r0 < 0) {
        *(s32 *)((s8 *)this + 0xCC) = 1;
    } else {
        *(s32 *)((s8 *)this + 0xCC) = 2;
    }
    return *(s32 *)((s8 *)this + 0xC8);
}

}
