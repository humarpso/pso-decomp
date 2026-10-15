#include "types.h"

extern "C" {

void __dl__9TProtocolFPv(s32 arg0);
void fn_801E08F4(void);
void fn_801E0900(void* p);
int bswap_32__FPUl(void*);
s32 heap_free__5THeapFPv(s32, s32);

extern s32 obj_heap;

void __dl__9TProtocolFPv(s32 arg0) {
    heap_free__5THeapFPv(obj_heap, arg0);
}

    extern int lobby_count_value;
void fn_801E08F4(void) { lobby_count_value = 1; }

void fn_801E0900(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

}
