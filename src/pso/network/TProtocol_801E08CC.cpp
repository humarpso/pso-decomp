#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __dl__9TProtocolFPv(s32 arg0);
void fn_801E08F4(void);
void fn_801E0900(void* p);
int bswap_32__FPUl(void*);
M2C_UNK heap_free__5THeapFPv(s32, s32);

extern s32 obj_heap;

void __dl__9TProtocolFPv(s32 arg0) {
    heap_free__5THeapFPv(obj_heap, arg0);
}

    extern int lbl_805D6CF0;
void fn_801E08F4(void) { lbl_805D6CF0 = 1; }

void fn_801E0900(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

}
