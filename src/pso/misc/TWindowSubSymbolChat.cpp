#include "types.h"
#include "pso/misc/TWindowSubSymbolChat.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_38 { u8 bytes[0x38]; };

struct ByteBlock_3C { u8 bytes[0x3C]; };

extern "C" {
s32 __copy(void *, void *, int);
s32 *copy_chat_entry__20TWindowSubSymbolChatFPvPv(s32 *arg0, s32 *arg1);
}

extern "C" {

s32 refresh_parts__20TWindowSubSymbolChatFv();
s32 update_layout__20TWindowSubSymbolChatFv(void);

s32 TWindowSubSymbolChat::compute_total_height() {
    s32 temp_r31;

    s32 temp_r3;
    temp_r31 = TWindowSubSymbolChat::calc_remaining_slots();
    temp_r3 = update_layout__20TWindowSubSymbolChatFv();
    return temp_r3 + temp_r31;
}
s32 TWindowSubSymbolChat::calc_remaining_slots() {
    return 0xC - refresh_parts__20TWindowSubSymbolChatFv();
}
void*TWindowSubSymbolChat::get_keyboard_ptr() { return (char*)this + 0x4; }

    extern unsigned char pending_symbol_chat_count;
unsigned char TWindowSubSymbolChat::get_global_4e54() {  return pending_symbol_chat_count; }

void TWindowSubSymbolChat::set_flag_bit1(s32 *arg0) {
    *arg0 |= 1;
}

s32 TWindowSubSymbolChat::commit(s32 * _w1) {
    s32 arg0 = (s32)this;
    copy_chat_entry__20TWindowSubSymbolChatFPvPv((s32 *)(arg0), (s32 *)(_w1));
    return arg0;
}
s32 *copy_chat_entry__20TWindowSubSymbolChatFPvPv(s32 *arg0, s32 *arg1) {
    u8 *temp_r4;
    u8 *temp_r5;
    *(s32 *)((s8 *)arg0 + 0) = *(s32 *)((s8 *)arg1 + 0);
    __copy((void *) ((u8 *)(arg0) + 4), (void *) ((u8 *)(arg1) + 4), (int) (0x17));
    temp_r5 = (u8 *)(arg0) + 0x18;
    temp_r4 = (u8 *)(arg1) + 0x18;
    *(ByteBlock_3C *)((s32) temp_r5 + 4) = *(const ByteBlock_3C *)((s32) temp_r4 + 4);
    return arg0;
}

}
