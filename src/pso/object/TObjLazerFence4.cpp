#include "types.h"
#include "pso/object/TObjLazerFence4.h"

extern "C" {

s32 reset_if_door_closed__15TObjLazerFence4Fv();
s32 sub_801933C8__15TObjLazerFence4Fv();

void TObjLazerFence4::run_task() {

    switch (*(s32 *)&this->m_ac) {
    case 0:
        sub_801933C8__15TObjLazerFence4Fv();
        return;
    case 1:
        reset_if_door_closed__15TObjLazerFence4Fv();
        return;
    }
}

}
