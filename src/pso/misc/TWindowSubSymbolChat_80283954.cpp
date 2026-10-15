#include "types.h"

extern "C" {

void set_flag60_bit1__20TWindowSubSymbolChatFPv(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 1);
}

void set_flag60_bit2__20TWindowSubSymbolChatFPv(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
}

s32 TWindowSubSymbolChat__sub_80283974(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x70) & 1;
}

s32 TWindowSubSymbolChat__sub_80283980(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x70) & 2;
}

s32 is_open__20TWindowSubSymbolChatFPv(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x60) & 1;
}

s32 TWindowSubSymbolChat__sub_80283998(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x60) & 2;
}

s32 fn_802839A4(void *arg0) {
    return (s8) *(u8 *)((s8 *)arg0 + 0x61) + ((s8) *(u8 *)((s8 *)arg0 + 0x62) * 2);
}

}
