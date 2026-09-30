#include "types.h"
struct Ent_802098AC { f32 a, b, c; u32 d, e, f, g; };

struct Out_802098AC { u8 pad[0x14]; f32 a, b, c; u32 d, e, f; };

extern "C" {
s32 TLobby__sub_80209410(s32);
void swap_header_endian__6TLobbyFPv(void *);
extern s32 lbl_805D60A4;
extern Ent_802098AC *lbl_805D60B8;
void TLobby__sub_802098AC(Out_802098AC *out);
}

extern "C" {

void TLobby__sub_802098AC(Out_802098AC *out) {
    s32 i = TLobby__sub_80209410(lbl_805D60A4);
    Ent_802098AC e = lbl_805D60B8[i];
    swap_header_endian__6TLobbyFPv(&e);
    out->a = e.a;
    out->b = e.b;
    out->c = e.c;
    out->d = e.d;
    out->e = e.e;
    out->f = e.f;
}

}
