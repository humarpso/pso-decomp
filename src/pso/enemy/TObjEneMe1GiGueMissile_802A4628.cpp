#include "types.h"

extern "C" {

void update_lifetime__22TObjEneMe1GiGueMissileFPv(void *arg0);

s32 queue_destruction__7TObjectFv();

void update_lifetime__22TObjEneMe1GiGueMissileFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = *(f32 *)((s8 *)arg0 + 0x24);
    if (temp_f1 > *(f32 *)((s8 *)arg0 + 0x20)) {
        queue_destruction__7TObjectFv();
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0xAC));
}

}
