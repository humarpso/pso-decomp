#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);

extern f32 lbl_805D9378;

f32 TObjPlayer::advance_hit_counter(u32 arg1) {
    if (arg1 != 0U) {
        *(s32 *)((s8 *)this + 0x354) = (s32) (*(s32 *)((s8 *)this + 0x354) + 1);
        if ((s32) *(s32 *)((s8 *)this + 0x354) >= 3) {
            *(s32 *)((s8 *)this + 0x334) = 2;
        }
    }
    return lbl_805D9378;
}

int TObjPlayer::queue_destruction() { return queue_destruction__7TObjectFv(this); }

}
