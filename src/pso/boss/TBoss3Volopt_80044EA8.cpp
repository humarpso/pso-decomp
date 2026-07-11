#include "types.h"

extern "C" {

s32 TBoss3Volopt__sub_80044EA8(void *arg0);

s32 TBoss3Volopt__sub_80044EA8(void *arg0) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)((u8 *)arg0 + 1196 + i * 2) <= 0) {
            count++;
        }
    }
    return count;
}

}
