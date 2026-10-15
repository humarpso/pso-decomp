#include "types.h"

extern "C" {

void run_task__12TNeedleShootFv(void *arg0);

s32 update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);
s32 TNeedleShoot__sub_802A4668();
s32 update_position__12TNeedleShootFPv();

void run_task__12TNeedleShootFv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB8) == 1) {
        update_position__12TNeedleShootFPv();
        update_lifetime__22TObjEneMe1GiGueMissileFPv(arg0);
        return;
    }
    TNeedleShoot__sub_802A4668();
}

}
