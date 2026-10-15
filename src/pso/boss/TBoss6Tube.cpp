#include "types.h"

extern "C" {

void run_task__10TBoss6TubeFv(void *arg0);

s32 query_teammate_state__9TObjEneDDFPv();
s32 TBoss6EmptyWarp__sub_802B1018();
s32 TBoss6Tube__sub_802B1218(void *);
s32 update_wobble__10TBoss6TubeFPv(void *);
s32 spawn_trap__10TBoss6TubeFi(void *);
s32 update_timer__10TBoss6TubeFPv(void *);

void run_task__10TBoss6TubeFv(void *arg0) {
    s32 temp_r0;

    if ((TBoss6EmptyWarp__sub_802B1018() == 0) && (query_teammate_state__9TObjEneDDFPv() == 0)) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
        switch (temp_r0) {
        case 0:
            update_timer__10TBoss6TubeFPv(arg0);
            return;
        case 1:
            spawn_trap__10TBoss6TubeFi(arg0);
            TBoss6Tube__sub_802B1218(arg0);
            return;
        case 2:
            update_wobble__10TBoss6TubeFPv(arg0);
            break;
        }
    }
}

}
