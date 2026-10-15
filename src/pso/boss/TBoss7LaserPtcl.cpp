#include "types.h"
#include "pso/boss/TBoss7LaserPtcl.h"

extern "C" {

u8 TBoss7LaserPtcl::is_state_2() {
    return (u8) (*(s32 *)((s8 *)this + 0x1C) == 2);
}

}
