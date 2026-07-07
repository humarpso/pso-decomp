#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(int, void *, int, int);

void TBoss4Type3__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    fn_8022675C(0x4003B032, arg0 + 0x38, 0, 1);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3BA) == (u16)-1) {
        fn_8022675C(0x4003C62D, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

}
