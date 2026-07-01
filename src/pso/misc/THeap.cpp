#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __dl__5THeapFPv(void);
void __nw__5THeapFUl(void);
M2C_UNK xfree__FPv();
M2C_UNK xmalloc__FUl();

void __dl__5THeapFPv(void) {
    xfree__FPv();
}

void __nw__5THeapFUl(void) {
    xmalloc__FUl();
}

}
