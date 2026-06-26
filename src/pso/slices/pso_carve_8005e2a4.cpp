#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);

void fn_8005E2A4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x72C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x72C));
        M2C_FIELD(arg0, u32 *, 0x72C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x728) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x728));
        M2C_FIELD(arg0, u32 *, 0x728) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x724) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x724));
        M2C_FIELD(arg0, u32 *, 0x724) = 0U;
    }
}

}
