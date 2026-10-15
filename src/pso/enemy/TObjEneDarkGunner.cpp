#include "types.h"

extern "C" {

void decay_timer_and_destroy__17TObjEneDarkGunnerFPv(void *arg0);
void *deleting_dtor__17TObjEneDarkGunnerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);

void decay_timer_and_destroy__17TObjEneDarkGunnerFPv(void *arg0) {
    s32 var_r31;

    var_r31 = *(u8 *)((s8 *)arg0 + 0x37);
    var_r31 -= 0x10;
    if (var_r31 < 0) {
        var_r31 = 0;
        queue_destruction__7TObjectFv(arg0);
    }
    *(u8 *)((s8 *)arg0 + 0x37) = (u8) var_r31;
    *(s8 *)((s8 *)arg0 + 0x3B) = (s8) var_r31;
}

extern s32 lbl_80490458[];

void *deleting_dtor__17TObjEneDarkGunnerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80490458;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
