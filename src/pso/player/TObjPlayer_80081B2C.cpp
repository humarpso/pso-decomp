#include "types.h"

extern "C" {

f32 advance_hit_counter__10TObjPlayerFPvUi(void *arg0, u32 arg1);
int queue_destruction__10TObjPlayerFPv(void* p);
int queue_destruction__7TObjectFv(void*);

extern f32 lbl_805D9378;

f32 advance_hit_counter__10TObjPlayerFPvUi(void *arg0, u32 arg1) {
    if (arg1 != 0U) {
        *(s32 *)((s8 *)arg0 + 0x354) = (s32) (*(s32 *)((s8 *)arg0 + 0x354) + 1);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x354) >= 3) {
            *(s32 *)((s8 *)arg0 + 0x334) = 2;
        }
    }
    return lbl_805D9378;
}

int queue_destruction__10TObjPlayerFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
