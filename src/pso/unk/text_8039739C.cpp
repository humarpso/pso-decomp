#ifndef PSO_SDK_COMPACT_MATH
#define PSO_SDK_COMPACT_MATH 1
#endif
#include "types.h"
#include "pso/unk/text_8039739C.h"
#include <dolphin/os.h>

extern "C" {
#pragma push
#pragma readonly_strings on
#pragma inline_depth(1)
#pragma dont_inline off
inline static void InitDefaultHeap(void) {
    void *arenaLo;
    void *arenaHi;

    OSReport("GCN_Mem_Alloc.c : InitDefaultHeap. No Heap Available\n");
    OSReport("Metrowerks CW runtime library initializing default heap\n");

    arenaLo = OSGetArenaLo();
    arenaHi = OSGetArenaHi();

    arenaLo = OSInitAlloc(arenaLo, arenaHi, 1);
    OSSetArenaLo(arenaLo);

    arenaLo = (void *)OSRoundUp32B(arenaLo);
    arenaHi = (void *)OSRoundDown32B(arenaHi);

    OSSetCurrentHeap(OSCreateHeap(arenaLo, arenaHi));
    OSSetArenaLo(arenaLo = arenaHi);
}

void __sys_free(void *ptr) {
    if (__OSCurrHeap == -1) {
        InitDefaultHeap();
    }
    OSFreeToHeap(__OSCurrHeap, ptr);
}
#pragma pop
}
