#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_800FE5A0(void *);

void fn_800FE510(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xCFC) == 0) {
        fn_800FE5A0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
