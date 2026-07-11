#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag60_bit1__20TWindowSubSymbolChatFPv(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

void set_flag60_bit2__20TWindowSubSymbolChatFPv(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
}

s32 TWindowSubSymbolChat__sub_80283974(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x70) & 1;
}

s32 TWindowSubSymbolChat__sub_80283980(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x70) & 2;
}

s32 TWindowSubSymbolChat__sub_8028398C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x60) & 1;
}

s32 TWindowSubSymbolChat__sub_80283998(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x60) & 2;
}

s32 fn_802839A4(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x61) + ((s8) M2C_FIELD(arg0, u8 *, 0x62) * 2);
}

}
