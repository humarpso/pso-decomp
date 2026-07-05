#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void*);
extern M2C_UNK lbl_805434A8[];
extern u32 lbl_805D6CC4;

void fn_8032C6AC(void) {
    if ((u32) lbl_805D6CC4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D6CC4);
        lbl_805D6CC4 = 0U;
    }
    M2C_FIELD(lbl_805434A8, s8 *, 7) = 0;
}

}
