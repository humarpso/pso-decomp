#include "types.h"
#include "pso/misc/TWindowChat.h"
#include "pso/misc/TWindowSubSymbolChat.h"

struct Ent_800774E4 { s8 id; u8 a, b, c; };

struct Obj_800774E4 { u32 f0; u8 f4; u8 pad5[0x17]; s32 f1c; u16 h[4]; Ent_800774E4 e[12]; };

struct Obj_800774E4;
struct Ent_80077544 { u8 b[0x58]; };

struct Win_80077544 { u8 pad[0x15A0]; struct Ent_80077544 e[12]; };

extern "C" {
s32 set_entry_name__20TWindowSubSymbolChatFPv(s32, s32);
int get_symbol_chat_preset(s32);
s32 bswap_entry__20TWindowSubSymbolChatFv(void *);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(s32);
s32 set_stream_and_load_file__6TLobbyFi(char *);
s32 move_data__6TLobbyFPCvUl(void *, s32, s32);
extern char symbol_chat_default_data_filename[];
}

extern "C" {

void TLobby__sub_80077608(void);
void clear_received_symbol_chat(void);
int get_symbol_chat_preset(s32);

void TWindowChat::open_symbol_chat(s32 *arg0) {
    get_symbol_chat_preset(*arg0);
}

void TWindowSubSymbolChat::clear_entries() {
    Obj_800774E4 *self = (Obj_800774E4 *)this;
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

void TWindowSubSymbolChat::load_symbol_chat_data() {
    struct Win_80077544 *w = (struct Win_80077544 *)this;
    s32 i;
    s32 t;
    s32 data;
    struct Ent_80077544 *e;
    e = w->e;
    data = set_stream_and_load_file__6TLobbyFi(symbol_chat_default_data_filename);
    move_data__6TLobbyFPCvUl(e, data, 0x420);
    safe_free__23TAdSinglePlyChrSelectGCFUl(data);
    for (i = 0; i < 6; i++) {
        bswap_entry__20TWindowSubSymbolChatFv(&e[i]);
        t = get_symbol_chat_preset(i);
        set_entry_name__20TWindowSubSymbolChatFPv(t, get_message_10__20TWindowSubStatusDispFl(i + 0xC6));
    }
    for (; i < 12; i++) {
        bswap_entry__20TWindowSubSymbolChatFv(&e[i]);
        ((TWindowSubSymbolChat *)((Obj_800774E4 *)get_symbol_chat_preset(i)))->clear_entries();
    }
}

void TLobby__sub_80077608(void) {  }

    extern unsigned char symbol_chat_receive_buffer[];
    extern unsigned char pending_symbol_chat_count;
void clear_received_symbol_chat(void) { pending_symbol_chat_count = 0; ((TWindowSubSymbolChat *)symbol_chat_receive_buffer)->clear_entries(); }

}
