#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
extern u8 lbl_804FF968[];
extern s8 lbl_805D4E54;
extern s32 local_client_id;
void handle_6x07_symbol_chat(Pkt_80076E98 *arg0);
}

extern "C" {

s32 get_technique_name(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(text_language_group_table, s32 *, 0x10), M2C_UNK *, (arg0 * 4));
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
            for (; lbl_805D4E54 >= 1; lbl_805D4E54--) {
            }
            lbl_805D4E54++;
            copy_symbol_chat_entry__6TLobbyFPvPv(get_data_ptr__20TWindowSubSymbolChatFPv(lbl_804FF968), p);
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
