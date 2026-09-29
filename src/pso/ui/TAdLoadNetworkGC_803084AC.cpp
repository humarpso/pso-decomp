#include "types.h"
struct V_803084AC { f32 x, y, z; };

struct Net_803084AC { u8 pad0[0x20]; void *obj[5]; V_803084AC pos; };

extern "C" {
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
extern V_803084AC lbl_804E72F0[];
void run_task__16TAdLoadNetworkGCFv(Net_803084AC *o);
}

extern "C" {

void run_task__16TAdLoadNetworkGCFv(Net_803084AC *o) {
    u32 i;
    for (i = 0; i < 5; i++) {
        copy_pos__11TNowLoadingFPvPv(o->obj[i], &o->pos);
        copy_vec3__11TBoss4Type2FPvPv(o->obj[i], &lbl_804E72F0[i]);
    }
}

}
