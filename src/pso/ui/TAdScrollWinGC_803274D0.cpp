#include "types.h"

extern "C" {

void close__14TAdScrollWinGCFPv(void *arg0);
s32 close_window__14TAdScrollWinGCFPv();

void close__14TAdScrollWinGCFPv(void *arg0) {
    close_window__14TAdScrollWinGCFPv();
    *(s32 *)((s8 *)arg0 + 0x4C) = 1;
}

}
