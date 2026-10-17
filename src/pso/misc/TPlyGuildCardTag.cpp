#include "types.h"
#include "pso/misc/TPlyGuildCardTag.h"

extern "C" {

void __ct__16TPlyGuildCardTagFUsUl(void *arg0, s16 arg1, s32 arg2) {
    *(s8 *)((s8 *)arg0 + 0) = 0;
    *(s8 *)((s8 *)arg0 + 1) = 0;
    *(s16 *)((s8 *)arg0 + 2) = arg1;
    *(s32 *)((s8 *)arg0 + 4) = arg2;
}

}
