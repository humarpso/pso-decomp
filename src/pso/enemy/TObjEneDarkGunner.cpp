#include "types.h"
#include "pso/enemy/TObjEneDarkGunner.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);

void TObjEneDarkGunner::decay_timer_and_destroy() {
    s32 var_r31;

    var_r31 = *(u8 *)((s8 *)this + 0x37);
    var_r31 -= 0x10;
    if (var_r31 < 0) {
        var_r31 = 0;
        queue_destruction__7TObjectFv(this);
    }
    *(u8 *)((s8 *)this + 0x37) = (u8) var_r31;
    *(s8 *)((s8 *)this + 0x3B) = (s8) var_r31;
}

extern s32 lbl_80490458[];

void *TObjEneDarkGunner::deleting_dtor(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_80490458;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
