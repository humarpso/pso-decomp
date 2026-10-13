#include "types.h"

struct Ent_800774E4 { s8 id; u8 a, b, c; };

struct Obj_800774E4 { u32 f0; u8 f4; u8 pad5[0x17]; s32 f1c; u16 h[4]; Ent_800774E4 e[12]; };

typedef s32 M2C_UNK;
struct Obj_800774E4;
struct Ent_80077544 { u8 b[0x58]; };

struct Win_80077544 { u8 pad[0x15A0]; struct Ent_80077544 e[12]; };

extern "C" {
void clear_entries__20TWindowSubSymbolChatFPv(Obj_800774E4 *self);
M2C_UNK set_entry_name__20TWindowSubSymbolChatFPvPv(s32, s32);
int get_symbol_chat_preset(s32);
void clear_entries__20TWindowSubSymbolChatFPv(Obj_800774E4 *self);
M2C_UNK bswap_entry__20TWindowSubSymbolChatFPv(void *);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 set_stream_and_load_file__6TLobbyFi(char *);
M2C_UNK move_data__6TLobbyFv(void *, s32, M2C_UNK);
extern char symbol_chat_default_data_filename[];
void load_symbol_chat_data__20TWindowSubSymbolChatFPv(struct Win_80077544 *w);
}

extern "C" {

void TLobby__sub_80077608(void);
void clear_received_symbol_chat(void);
void open_symbol_chat__11TWindowChatFPv(s32 *arg0);
int get_symbol_chat_preset(s32);

void open_symbol_chat__11TWindowChatFPv(s32 *arg0) {
    get_symbol_chat_preset(*arg0);
}

void clear_entries__20TWindowSubSymbolChatFPv(Obj_800774E4 *self) {
    s32 i;
    self->f0 = 0;
    self->f4 = 0;
    self->f1c = 0;
    for (i = 0; i < 4; i++) {
        self->h[i] = 0xFF;
    }
    for (i = 0; i < 12; i++) {
        self->e[i].id = -1;
        self->e[i].a = 0;
        self->e[i].b = 0;
        self->e[i].c = 0;
    }
}

void load_symbol_chat_data__20TWindowSubSymbolChatFPv(struct Win_80077544 *w) {
    s32 i;
    s32 t;
    s32 data;
    struct Ent_80077544 *e;
    e = w->e;
    data = set_stream_and_load_file__6TLobbyFi(symbol_chat_default_data_filename);
    move_data__6TLobbyFv(e, data, 0x420);
    safe_free__23TAdSinglePlyChrSelectGCFUi(data);
    for (i = 0; i < 6; i++) {
        bswap_entry__20TWindowSubSymbolChatFPv(&e[i]);
        t = get_symbol_chat_preset(i);
        set_entry_name__20TWindowSubSymbolChatFPvPv(t, get_message_10__20TWindowSubStatusDispFPv(i + 0xC6));
    }
    for (; i < 12; i++) {
        bswap_entry__20TWindowSubSymbolChatFPv(&e[i]);
        clear_entries__20TWindowSubSymbolChatFPv((Obj_800774E4 *)get_symbol_chat_preset(i));
    }
}

void TLobby__sub_80077608(void) {  }

    extern unsigned char symbol_chat_receive_buffer[];
    extern unsigned char pending_symbol_chat_count;
void clear_received_symbol_chat(void) { pending_symbol_chat_count = 0; clear_entries__20TWindowSubSymbolChatFPv((Obj_800774E4 *)(symbol_chat_receive_buffer)); }

}
