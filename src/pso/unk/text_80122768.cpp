#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::update_fade_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    temp_r0 = this->m_1fc;
    if (temp_r0 == 2) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x1F8);
        if (temp_r4 < 0x2AAA) {
            *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (temp_r4 + 0x888);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) >= 0x2AAA) {
                *(s32 *)((s8 *)arg0 + 0x1F8) = 0x2AAA;
                this->m_1fc = 3;
            }
        }
    } else if (temp_r0 == 1) {
        temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x1F8);
        if (temp_r4_2 > 0) {
            *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (temp_r4_2 - 0x444);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) <= 0) {
                *(s32 *)((s8 *)arg0 + 0x1F8) = 0;
                this->m_1fc = 0;
            }
        }
    }
}

}
