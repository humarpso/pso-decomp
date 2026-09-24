#include "types.h"

struct Ent_800774E4 { s8 id; u8 a, b, c; };

struct Obj_800774E4 { u32 f0; u8 f4; u8 pad5[0x17]; s32 f1c; u16 h[4]; Ent_800774E4 e[12]; };

extern "C" {
void TWindowSubSymbolChat__sub_800774E4(Obj_800774E4 *self);
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

void TLobby__sub_80077608(void) {  }

    extern unsigned char lbl_804FF968[];
    extern unsigned char lbl_805D4E54;
void TLobby__sub_8007760C(void) { lbl_805D4E54 = 0; TWindowSubSymbolChat__sub_800774E4((Obj_800774E4 *)(lbl_804FF968)); }

}
