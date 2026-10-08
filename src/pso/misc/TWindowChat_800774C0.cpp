#include "types.h"

struct Ent_800774E4 { s8 id; u8 a, b, c; };

struct Obj_800774E4 { u32 f0; u8 f4; u8 pad5[0x17]; s32 f1c; u16 h[4]; Ent_800774E4 e[12]; };

typedef s32 M2C_UNK;
struct Obj_800774E4;
struct Ent_80077544 { u8 b[0x58]; };

struct Win_80077544 { u8 pad[0x15A0]; struct Ent_80077544 e[12]; };

extern "C" {
void TWindowSubSymbolChat__sub_800774E4(Obj_800774E4 *self);
M2C_UNK TWindowSubSymbolChat__sub_80076FEC(s32, s32);
int TWindowSubSymbolChat__sub_80077480(s32);
void TWindowSubSymbolChat__sub_800774E4(Obj_800774E4 *self);
M2C_UNK bswap_entry__20TWindowSubSymbolChatFPv(void *);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 set_stream_and_load_file__6TLobbyFi(char *);
M2C_UNK move_data__6TLobbyFv(void *, s32, M2C_UNK);
extern char lbl_80438854[];
void load_symbol_chat_data__20TWindowSubSymbolChatFPv(struct Win_80077544 *w);
}

extern "C" {

void TLobby__sub_80077608(void);
void TLobby__sub_8007760C(void);
void open_symbol_chat__11TWindowChatFPv(s32 *arg0);
int TWindowSubSymbolChat__sub_80077480(s32);

void open_symbol_chat__11TWindowChatFPv(s32 *arg0) {
    TWindowSubSymbolChat__sub_80077480(*arg0);
}

void TWindowSubSymbolChat__sub_800774E4(Obj_800774E4 *self) {
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
    data = set_stream_and_load_file__6TLobbyFi(lbl_80438854);
    move_data__6TLobbyFv(e, data, 0x420);
    safe_free__23TAdSinglePlyChrSelectGCFUi(data);
    for (i = 0; i < 6; i++) {
        bswap_entry__20TWindowSubSymbolChatFPv(&e[i]);
        t = TWindowSubSymbolChat__sub_80077480(i);
        TWindowSubSymbolChat__sub_80076FEC(t, get_message_10__20TWindowSubStatusDispFPv(i + 0xC6));
    }
    for (; i < 12; i++) {
        bswap_entry__20TWindowSubSymbolChatFPv(&e[i]);
        TWindowSubSymbolChat__sub_800774E4((Obj_800774E4 *)TWindowSubSymbolChat__sub_80077480(i));
    }
}

void TLobby__sub_80077608(void) {  }

    extern unsigned char lbl_804FF968[];
    extern unsigned char lbl_805D4E54;
void TLobby__sub_8007760C(void) { lbl_805D4E54 = 0; TWindowSubSymbolChat__sub_800774E4((Obj_800774E4 *)(lbl_804FF968)); }

}
