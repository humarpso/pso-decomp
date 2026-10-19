#include "types.h"
#include "pso/unk/text_8039739C.h"
#include <dolphin/os.h>

extern "C" {
extern const char lbl_8047BA20[];
extern const char lbl_8047BA58[];

#pragma push
#pragma inline_depth(1)
#pragma dont_inline off
inline static void InitDefaultHeap(void) {
    void *arenaLo;
    void *arenaHi;

    OSReport(lbl_8047BA20);
    OSReport(lbl_8047BA58);

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
