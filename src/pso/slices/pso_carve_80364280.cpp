#include "types.h"
extern "C" {
void fn_80364280(void *arg0) {
    s32 *p = (s32 *)((u8 *)arg0 + 0x30);
    int i;
    for (i = 0; i < 32; i++) {
        *p++ = -1;
    }
    *(s32 *)((u8 *)arg0 + 0xB0) = 0;
}
}
