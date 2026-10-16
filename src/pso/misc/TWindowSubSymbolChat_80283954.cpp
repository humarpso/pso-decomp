#include "types.h"
#include "pso/misc/TWindowSubSymbolChatFaceType.h"
#include "pso/misc/TWindowSubSymbolChatParts.h"
#include "pso/misc/TWindowSubSymbolChat.h"

extern "C" {

void TWindowSubSymbolChat::set_flag60_bit1() {
    *(u8 *)((s8 *)this + 0x60) = (u8) (*(u8 *)((s8 *)this + 0x60) | 1);
}

void TWindowSubSymbolChat::set_flag60_bit2() {
    *(u8 *)((s8 *)this + 0x60) = (u8) (*(u8 *)((s8 *)this + 0x60) | 2);
}

s32 TWindowSubSymbolChatParts::sub_80283974() {
    return *(u8 *)((s8 *)this + 0x70) & 1;
}

s32 TWindowSubSymbolChat__sub_80283980(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x70) & 2;
}

s32 TWindowSubSymbolChatFaceType::is_open() {
    return *(u8 *)((s8 *)this + 0x60) & 1;
}

s32 TWindowSubSymbolChat__sub_80283998(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x60) & 2;
}

s32 fn_802839A4(void *arg0) {
    return (s8) *(u8 *)((s8 *)arg0 + 0x61) + ((s8) *(u8 *)((s8 *)arg0 + 0x62) * 2);
}

}
