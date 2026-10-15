#include "types.h"

extern "C" {
bool fn_801C543C(s32 arg0, s32 arg1);
}

extern "C" {

bool fn_801C543C(s32 arg0, s32 arg1) {
    return (s8) *(u8 *)((s8 *)(arg0 + arg1) + 0) <= 0;
}

}
