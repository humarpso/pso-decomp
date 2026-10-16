#include "types.h"
#include "pso/boss/TBoss6Tube.h"

extern "C" {

s32 query_teammate_state__9TObjEneDDFv();
s32 TBoss6EmptyWarp__sub_802B1018();
s32 sub_802B1218__10TBoss6TubeFv(void *);

void TBoss6Tube::run_task() {
    s32 temp_r0;

    if ((TBoss6EmptyWarp__sub_802B1018() == 0) && (query_teammate_state__9TObjEneDDFv() == 0)) {
        temp_r0 = *(s32 *)&this->m_1c;
        switch (temp_r0) {
        case 0:
            update_timer();
            return;
        case 1:
            spawn_trap();
            sub_802B1218__10TBoss6TubeFv(this);
            return;
        case 2:
            update_wobble();
            break;
        }
    }
}

}
