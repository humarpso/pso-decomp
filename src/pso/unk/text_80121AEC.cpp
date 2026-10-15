#include "types.h"

extern "C" {
void TObjPlayer__sub_80121AEC(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80121AEC(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1FC);
    if (temp_r0 == 2) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x1F8);
        if (temp_r4 < 0x2AAA) {
            *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (temp_r4 + 0x888);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) >= 0x2AAA) {
                *(s32 *)((s8 *)arg0 + 0x1F8) = 0x2AAA;
                *(s32 *)((s8 *)arg0 + 0x1FC) = 3;
            }
        }
    } else if (temp_r0 == 1) {
        temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x1F8);
        if (temp_r4_2 > 0) {
            *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (temp_r4_2 - 0x444);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) <= 0) {
                *(s32 *)((s8 *)arg0 + 0x1F8) = 0;
                *(s32 *)((s8 *)arg0 + 0x1FC) = 0;
            }
        }
    }
}

}
