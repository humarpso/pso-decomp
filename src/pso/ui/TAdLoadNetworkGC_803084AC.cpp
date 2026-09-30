#include "types.h"
struct V_803084AC { f32 x, y, z; };

struct Net_803084AC { u8 pad0[0x20]; void *obj[5]; V_803084AC pos; };

struct Net_80308518 { u8 pad0[0x18]; void *vt; u8 pad1[4]; void *obj[5]; };

extern "C" {
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
extern V_803084AC lbl_804E72F0[];
void run_task__16TAdLoadNetworkGCFv(Net_803084AC *o);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
extern u8 __vt__16TAdLoadNetworkGC[];
Net_80308518 *__dt__16TAdLoadNetworkGCFv(Net_80308518 *self, s16 flag);
}

extern "C" {

void run_task__16TAdLoadNetworkGCFv(Net_803084AC *o) {
    u32 i;
    for (i = 0; i < 5; i++) {
        copy_pos__11TNowLoadingFPvPv(o->obj[i], &o->pos);
        copy_vec3__11TBoss4Type2FPvPv(o->obj[i], &lbl_804E72F0[i]);
    }
}
Net_80308518 *__dt__16TAdLoadNetworkGCFv(Net_80308518 *self, s16 flag) {
    u32 i;
    if (self != NULL) {
        self->vt = __vt__16TAdLoadNetworkGC;
        for (i = 0; i < 5; i++) {
            queue_destruction__7TObjectFv(self->obj[i]);
            self->obj[i] = 0;
        }
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

}
