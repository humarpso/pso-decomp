#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80241BA8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (((M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x40)) + M2C_FIELD(arg0, s32 *, 0x3C)) + M2C_FIELD(arg0, s32 *, 0x44)) + 0x7F;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (0x40 - (M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(arg0, s32 *, 0x54)));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x58) + M2C_FIELD(arg0, s32 *, 0x60)) + 0x40);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x280));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) < 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x7F;
    }
}

}
