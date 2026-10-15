#include "types.h"

struct Pkt_80076E98 { u8 pad[4]; s32 f4; u32 f8; };

extern "C" {
extern u8 *text_language_group_table;
s32 get_technique_name(s32 arg0);
s32 obj_getField1c(s32);
void *copy_symbol_chat_entry__6TLobbyFPvPv(void *, void *);
void *get_data_ptr__20TWindowSubSymbolChatFPv(void *);
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(Pkt_80076E98 *);
s32 get_player_by_client_id(s32);
void open_balloon__11TWindowCtrlFUsPvii(s32, void *, s32, s32);
void dispatch_by_index__6TLobbyFUsi(u16, void *);
extern u8 symbol_chat_receive_buffer[];
extern s8 pending_symbol_chat_count;
extern s32 local_client_id;
void handle_6x07_symbol_chat(Pkt_80076E98 *arg0);
}

extern "C" {

s32 get_technique_name(s32 arg0) {
    return *(s32 *)((s8 *)(*(s32 *)((s8 *)text_language_group_table + 0x10)) + (arg0 * 4));
}
void handle_6x07_symbol_chat(Pkt_80076E98 *arg0) {
    u32 *p;
    s32 ply;
    bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(arg0);
    p = &arg0->f8;
    ply = get_player_by_client_id(arg0->f4);
    if (ply != 0) {
        dispatch_by_index__6TLobbyFUsi(arg0->f4, p);
        open_balloon__11TWindowCtrlFUsPvii(obj_getField1c(ply), p, 2, local_client_id);
        if (*p & 0x200) {
            for (; pending_symbol_chat_count >= 1; pending_symbol_chat_count--) {
            }
            pending_symbol_chat_count++;
            copy_symbol_chat_entry__6TLobbyFPvPv(get_data_ptr__20TWindowSubSymbolChatFPv(symbol_chat_receive_buffer), p);
        }
    }
}
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct SymBody_80076F48 { u32 w[12]; };
struct SymPair_80076F48 { u32 b; u32 c; };
struct Sym_80076F48 { u32 a; SymPair_80076F48 mid; SymBody_80076F48 body; };
void *copy_symbol_chat_entry__6TLobbyFPvPv(void *dst, void *src) {
    *(Sym_80076F48 *)dst = *(Sym_80076F48 *)src;
    return dst;
}

}
