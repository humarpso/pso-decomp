#include "types.h"

struct Obj_80283944 { u8 pad[0x60]; s8 f60; };

extern "C" {
void TWindowSubSymbolChat__sub_80283944(Obj_80283944 *o);
}

extern "C" {

void set_flag_bit2__20TWindowSubSymbolChatFPv(s32 *arg0) {
    *arg0 |= 2;
}

void clear_flag_bit2__20TWindowSubSymbolChatFPv(s32 *arg0) {
    *arg0 &= 0xFFFFFFFD;
}

s16 get_cursor_pos__20TWindowSubSymbolChatFPv(void *arg0) {
    return *(s16 *)((s8 *)arg0 + 0x6C);
}

s16 get_cursor_x__20TWindowSubSymbolChatFPv(void *arg0) {
    return *(s16 *)((s8 *)arg0 + 0x6A);
}

s32 is_active__20TWindowSubSymbolChatFPv(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x68) & 1;
}

s32 TWindowSubSymbolChat__sub_80283900(void *arg0) {
    return *(u8 *)((s8 *)arg0 + 0x68) & 2;
}

void clear_flag60_bit2__20TWindowSubSymbolChatFPv(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) & 0xFFFFFFFD);
}

void clear_flag60_bit4__20TWindowSubSymbolChatFPv(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) & 0xFFFFFFFB);
}

void set_pos_and_flag__20TWindowSubSymbolChatFPvii(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 0x6C) = arg1;
    *(s32 *)((s8 *)arg0 + 0x70) = arg2;
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 4);
}
void TWindowSubSymbolChat__sub_80283944(Obj_80283944 *o) {
    o->f60 &= ~1;
}

}
