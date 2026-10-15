#include "types.h"

extern "C" {

void baranz_launcher_update(void *arg0);

void baranz_launcher_update(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1FC);
    if (temp_r4 > 0) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = (s32) (temp_r4 - 0x888);
        *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (*(s32 *)((s8 *)arg0 + 0x1F8) - 0x888);
    }
}

}
