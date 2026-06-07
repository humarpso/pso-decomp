#include "types.h"

extern void* __OSArenaHi;
extern void* __OSArenaLo;

void* OSGetArenaHi(void) {
    return __OSArenaHi;
}

void* OSGetArenaLo(void) {
    return __OSArenaLo;
}

void OSSetArenaHi(void* newHi) {
    __OSArenaHi = newHi;
}

void OSSetArenaLo(void* newLo) {
    __OSArenaLo = newLo;
}
