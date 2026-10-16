#include "types.h"
#include "pso/boss/TBoss7LaserPtcl.h"

extern "C" {

u8 TBoss7LaserPtcl::is_state_2() {
    return (u8) (this->state == 2);
}

}
