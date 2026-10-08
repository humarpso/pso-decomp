#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TBoss6TubeFv(void *arg0);

s32 query_teammate_state__9TObjEneDDFPv();
s32 TBoss6EmptyWarp__sub_802B1018();
M2C_UNK TBoss6Tube__sub_802B1218(void *);
M2C_UNK update_wobble__10TBoss6TubeFPv(void *);
M2C_UNK spawn_trap__10TBoss6TubeFi(void *);
M2C_UNK update_timer__10TBoss6TubeFPv(void *);

void run_task__10TBoss6TubeFv(void *arg0) {
    s32 temp_r0;

    if ((TBoss6EmptyWarp__sub_802B1018() == 0) && (query_teammate_state__9TObjEneDDFPv() == 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
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
