#include "types.h"

extern "C" {

void TObjFogCollisionSwitch__vt11(void *arg0);

s32 TObjFogCollision__vt11();

void TObjFogCollisionSwitch__vt11(void *arg0) {
    s32 temp_r0;

    TObjFogCollision__vt11();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x8C);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x8C) = 0;
        return;
    }
    if (temp_r0 > 0xFF) {
        *(s32 *)((s8 *)arg0 + 0x8C) = 0xFF;
    }
}

}
