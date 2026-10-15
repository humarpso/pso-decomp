#include "types.h"
#include "pso/ui/TAdScrollWinGC.h"

extern "C" {

s32 close_window__14TAdScrollWinGCFv();

void TAdScrollWinGC::close() {
    close_window__14TAdScrollWinGCFv();
    *(s32 *)((s8 *)this + 0x4C) = 1;
}

}
