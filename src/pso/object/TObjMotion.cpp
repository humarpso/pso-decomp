#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *__dt__10TObjMotionFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

extern s32 __vt__10TObjMotion[];

void *__dt__10TObjMotionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjMotion;
        ((TObjPlayer *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
