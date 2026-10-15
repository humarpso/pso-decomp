#include "types.h"

extern "C" {
u8 fn_803374F8(s32 arg0, s32 arg1);
void fn_803374F0(s32 arg0, s32 arg1, s8 arg2);
}

extern "C" {

void fn_803374F0(s32 arg0, s32 arg1, s8 arg2) {
    *(s8 *)((s8 *)(arg0 + arg1) + 0) = arg2;
}

u8 fn_803374F8(s32 arg0, s32 arg1) {
    return *(u8 *)((s8 *)(arg0 + arg1) + 0);
}

}
