#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 __dl__FPv(void *);
s32 mem_free(s32);

void *TLobby::free_boss4rock(s16 arg1) {
    if (this != NULL) {
        mem_free(*(s32 *)((s8 *)this + 4));
        __dl__FPv(*(void **)((s8 *)this + 0));
        *(s32 *)((s8 *)this + 8) = 0;
        *(s32 *)((s8 *)this + 0xC) = 0;
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

}
