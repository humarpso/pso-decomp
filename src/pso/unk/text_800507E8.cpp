#include "types.h"

struct S_80050A68 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x358 - 0x1c];
    void *ptr[2];
};

extern "C" {
void destroy_motion_object__10TObjPlayerFPvs(void *, s32);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
extern u8 __vt__13TObjDFHorming[];
S_80050A68 *__dt__13TObjDFHormingFv(S_80050A68 *o, s16 flag);
}

extern "C" {

int queue_destruction__13TObjDFHormingFPv(void* p);

int queue_destruction__7TObjectFv(void*);

int queue_destruction__13TObjDFHormingFPv(void* p) { return queue_destruction__7TObjectFv(p); }
S_80050A68 *__dt__13TObjDFHormingFv(S_80050A68 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = __vt__13TObjDFHorming;
        for (i = 0; i < 2; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        destroy_motion_object__10TObjPlayerFPvs(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

}
