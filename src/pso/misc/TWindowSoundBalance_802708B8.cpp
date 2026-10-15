#include "types.h"
#include "pso/misc/TWindowSoundBalance.h"

extern "C" {

s32 play_sound_effect(s32, s32, s32, s32);
s32 is_active__17TWindowOptionCtrlFv();

void TWindowSoundBalance::handle_cancel() {
    if (is_active__17TWindowOptionCtrlFv() == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(u8 *)((s8 *)this + 0x60) = (u8) (*(u8 *)((s8 *)this + 0x60) | 2);
    }
}

}
