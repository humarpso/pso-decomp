#include "types.h"
#include "pso/object/TObjLazerFence4.h"

extern "C" {

s32 reset_if_door_closed__15TObjLazerFence4Fv();
s32 TObjLazerFence4__sub_801933C8();

void TObjLazerFence4::run_task() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0xAC);
    switch (temp_r0) {
    case 0:
        TObjLazerFence4__sub_801933C8();
        return;
    case 1:
        reset_if_door_closed__15TObjLazerFence4Fv();
        return;
    }
}

}
