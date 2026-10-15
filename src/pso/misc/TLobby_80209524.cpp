#include "types.h"

extern "C" {

void *free_boss4rock__6TLobbyFPvs(void *arg0, s16 arg1);
s32 __dl__FPv(void *);
s32 free__11TOBoss4RockFUi(s32);

void *free_boss4rock__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(*(s32 *)((s8 *)arg0 + 4));
        __dl__FPv(*(void **)((s8 *)arg0 + 0));
        *(s32 *)((s8 *)arg0 + 8) = 0;
        *(s32 *)((s8 *)arg0 + 0xC) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
