#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubSymbolChat__sub_802838C4(s32 *arg0) {
    *arg0 |= 2;
}

void TWindowSubSymbolChat__sub_802838D4(s32 *arg0) {
    *arg0 &= 0xFFFFFFFD;
}

s16 TWindowSubSymbolChat__sub_802838E4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x6C);
}

s16 TWindowSubSymbolChat__sub_802838EC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x6A);
}

s32 TWindowSubSymbolChat__sub_802838F4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x68) & 1;
}

s32 TWindowSubSymbolChat__sub_80283900(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x68) & 2;
}

void TWindowSubSymbolChat__sub_8028390C(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFFFFFFFD);
}

void TWindowSubSymbolChat__sub_8028391C(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFFFFFFFB);
}

void TWindowSubSymbolChat__sub_8028392C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x70) = arg2;
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 4);
}

}
