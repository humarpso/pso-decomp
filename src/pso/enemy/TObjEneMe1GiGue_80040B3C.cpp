#include "types.h"
#include "pso/enemy/TObjEneMe1GiGue.h"

extern "C" {
}

extern "C" {

void TObjEneMe1GiGue::update_if_active(s32 _w1) {
    if (!(*(s32 *)((s8 *)this + 0x388) & 1)) {
        set_state((s32)(_w1));
    }
}
void TObjEneMe1GiGue::set_state(s32 arg1) {
    s16 temp_r0;
    temp_r0 = *(s16 *)((s8 *)this + 0x326);
    if (temp_r0 != arg1) {
        *(s32 *)((s8 *)this + 0x380) = (s32) temp_r0;
        *(s32 *)((s8 *)this + 0x374) = arg1;
    }
}

}
