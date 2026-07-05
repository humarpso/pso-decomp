#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK fn_803361C4(void*);
extern u32 lbl_805D6D40;

void fn_803360FC(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        fn_803361C4((void*)lbl_805D6D40);
    }
}

}
