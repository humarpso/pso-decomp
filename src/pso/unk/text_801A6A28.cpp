#include "types.h"
#include "pso/unk/text_801A6A28.h"

void fn_801A6A28(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 0x48) = (s32) (*(s32 *)((s8 *)arg0 + 0x48) | arg1);
    if (arg2 & arg1) {
        *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (*(s32 *)((s8 *)arg0 + 0x4C) & ~arg1);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (*(s32 *)((s8 *)arg0 + 0x4C) | arg1);
}
