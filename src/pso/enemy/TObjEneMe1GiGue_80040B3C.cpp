#include "types.h"

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *arg0, s32 arg1);
}

extern "C" {

void update_if_active__15TObjEneMe1GiGueFPv(void *arg0, s32 _w1);

void update_if_active__15TObjEneMe1GiGueFPv(void *arg0, s32 _w1) {
    if (!(*(s32 *)((s8 *)arg0 + 0x388) & 1)) {
        set_state__15TObjEneMe1GiGueFPvi((void *)(arg0), (s32)(_w1));
    }
}
void set_state__15TObjEneMe1GiGueFPvi(void *arg0, s32 arg1) {
    s16 temp_r0;
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    if (temp_r0 != arg1) {
        *(s32 *)((s8 *)arg0 + 0x380) = (s32) temp_r0;
        *(s32 *)((s8 *)arg0 + 0x374) = arg1;
    }
}

}
