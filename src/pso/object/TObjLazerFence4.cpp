#include "types.h"

extern "C" {

void run_task__15TObjLazerFence4Fv(void *arg0);
s32 reset_if_door_closed__15TObjLazerFence4FPv();
s32 TObjLazerFence4__sub_801933C8();

void run_task__15TObjLazerFence4Fv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0xAC);
    switch (temp_r0) {
    case 0:
        TObjLazerFence4__sub_801933C8();
        return;
    case 1:
        reset_if_door_closed__15TObjLazerFence4FPv();
        return;
    }
}

}
