#include "types.h"
extern "C" {
s32 __ct__7TObjectFP7TObject(void *);
s32 alloc_buffer__11TOBoss4RockFPv(int);
void *memset(s32, int, u32);
extern char __vt__19TOChatSensorCapture[];
extern s32 lbl_805D2EE0;
extern u8 *TOChatSensorCapture__instance;
u8 *TOChatSensorCapture__ct(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
u8 *TOChatSensorCapture__ct(u8 *arg0) {
    s32 i;
    s32 *w = (s32 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    *(void **)(arg0 + 0x18) = __vt__19TOChatSensorCapture;
    w[0] = lbl_805D2EE0;
    i = 0;
    do {
        w[i + 7] = 0;
        w[i + 11] = alloc_buffer__11TOBoss4RockFPv(0x100);
        memset(w[i + 11], 0, 4);
        i += 1;
    } while (i != 4);
    TOChatSensorCapture__instance = arg0;
    return arg0;
}
#pragma pop

}
