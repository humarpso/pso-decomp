#include "types.h"

extern "C" {

s32 init_door_switch_binding(void *arg0) {
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 0xC8) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC8);
    if (temp_r0 > 0x100) {
        *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    } else if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0xCC) = 2;
    }
    return *(s32 *)((s8 *)arg0 + 0xC8);
}

}
