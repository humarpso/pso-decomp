#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv();
extern void *lbl_805D54DC;

void fn_80119D6C(void) {
    queue_destruction__7TObjectFv();
    if ((void *) lbl_805D54DC != NULL) {
        M2C_FIELD(lbl_805D54DC, s32 *, 0x1C) = 1;
    }
}

}
