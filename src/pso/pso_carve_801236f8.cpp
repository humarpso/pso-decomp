#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_801236F8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) >= 0x1555) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0x1555;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0x1555;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
}

}
