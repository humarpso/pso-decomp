#ifndef PSO_SYSTEM_THEAP_H
#define PSO_SYSTEM_THEAP_H

#include "types.h"

extern "C" {
void __dl__5THeapFPv(void);
void __nw__5THeapFUl(void);
}
u32 calc_gx_tile_index(u32 x, u32 y, s16 w);

// --- C functions defined in THeap.cpp ---
extern "C" {
void __dl__5THeapFPv(void);
void __nw__5THeapFUl(void);
}
// --- end of C functions

#endif
