#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_801A6A28(void *, s32, s32);
void fn_801A6A5C(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
void fn_801A6A28(void *, s32, s32);
void fn_801A6AF4(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
}

extern "C" {

void fn_801A6A5C(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    if (arg2 > 0x30) {
        fn_801A6A28(arg0, 0x08000000, arg3);
    } else if (arg2 < -0x30) {
        fn_801A6A28(arg0, 0x04000000, arg3);
    }
    if (arg1 > 0x30) {
        fn_801A6A28(arg0, 0x20000000, arg3);
        return;
    }
    if (arg1 < -0x30) {
        fn_801A6A28(arg0, 0x10000000, arg3);
    }
}
void fn_801A6AF4(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    if (arg2 > 0x30) {
        fn_801A6A28(arg0, 0x200000, arg3);
    } else if (arg2 < -0x30) {
        fn_801A6A28(arg0, 0x100000, arg3);
    }
    if (arg1 > 0x30) {
        fn_801A6A28(arg0, 0x800000, arg3);
        return;
    }
    if (arg1 < -0x30) {
        fn_801A6A28(arg0, 0x400000, arg3);
    }
}

}
