#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __ct__9TItemLoadFv(void *, s32);
void * __nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;

void fn_8011070C(void) {
    void *obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        __ct__9TItemLoadFv(obj, tl_05);
    }
}

}
