#include "types.h"
#include "pso/misc/TUnk_804CCA90.h"
#include "pso/misc/TTecMegid.h"

extern "C" {

void *fn_80235B84(void *arg0, s16 arg1);
s32 play_sound_effect(s32, void *, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);

void TUnk_804CCA90::run_task() {
    u8 *arg0 = (u8 *)this;
    *(s16 *)((s8 *)arg0 + 0x1E) = (s16) (*(s16 *)((s8 *)arg0 + 0x1E) + 1);
    if ((s16) *(s16 *)((s8 *)arg0 + 0x1E) > (s16) *(s16 *)((s8 *)arg0 + 0x1C)) {
        play_sound_effect(*(s32 *)((s8 *)arg0 + 0x20), arg0 + 0x24, 0, 0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern s32 lbl_804CCA90[];

void *fn_80235B84(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCA90;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
