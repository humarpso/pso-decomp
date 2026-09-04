#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc__13TItemProArmorFi(s32 arg0);
M2C_UNK heap_alloc__5THeapFUl(s32, s32);

extern s32 obj_heap;

void alloc__13TItemProArmorFi(s32 arg0) {
    heap_alloc__5THeapFUl(obj_heap, arg0);
}

}
