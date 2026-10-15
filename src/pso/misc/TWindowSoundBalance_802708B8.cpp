#include "types.h"

extern "C" {

void handle_cancel__19TWindowSoundBalanceFPv(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 is_active__17TWindowOptionCtrlFPv();

void handle_cancel__19TWindowSoundBalanceFPv(void *arg0) {
    if (is_active__17TWindowOptionCtrlFPv() == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
    }
}

}
