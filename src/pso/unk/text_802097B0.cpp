#include "types.h"
struct Ent_802098AC { f32 a, b, c; u32 d, e, f, g; };

struct Out_802098AC { u8 pad[0x14]; f32 a, b, c; u32 d, e, f; };

struct Hdr_802099FC { s32 table; s32 b; s32 count; s32 d; };

struct Rec_802099FC { f32 f[5]; s16 h[6]; };

struct Out_802099FC {
    u8 pad0[6];
    s16 f6;
    u8 pad8[0x2C - 8];
    f32 f[5];
    s16 f40;
    s16 f42;
};

struct Hdr_80209AEC { s32 a; s32 table; s32 c; s32 count; };

struct Ent_80209AEC { u8 b0; u8 b1; u8 weight; u8 pad; };

extern "C" {
s32 TLobby__sub_80209410(s32);
void swap_header_endian__6TLobbyFPv(void *);
extern s32 lbl_805D60A4;
extern Ent_802098AC *lbl_805D60B8;
void TLobby__sub_802098AC(Out_802098AC *out);
Rec_802099FC *TLobby__sub_8020994C(void *, s32, s32);
s16 clamp_min_drop__6TLobbyFUi(s32, s32);
void TLobby__sub_8020A48C(void *p);
void TLobby__sub_8020A568(void *p);
extern u8 *lbl_805D60B0;
void TLobby__sub_802099FC(Out_802099FC *arg0, s32 arg1);
u32 TItemDrop__sub_80107B0C(s32, u32);
void TLobby__sub_8020A568(void *p);
extern s32 lbl_805D60A0;
extern u8 *lbl_805D60B0;
void TLobby__sub_80209AEC(s32 *arg0, s32 *arg1);
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
void TLobby__sub_802099FC(Out_802099FC *arg0, s32 arg1) {
    Hdr_802099FC hdr = *(Hdr_802099FC *)lbl_805D60B0;
    Rec_802099FC *p;
    TLobby__sub_8020A568(&hdr);
    p = TLobby__sub_8020994C(lbl_805D60B0 + hdr.table, hdr.count, arg1);
    if (p != NULL) {
        Rec_802099FC r = *p;
        TLobby__sub_8020A48C(&r);
        arg0->f[0] = r.f[0];
        arg0->f[1] = r.f[1];
        arg0->f[2] = r.f[2];
        arg0->f[3] = r.f[3];
        arg0->f[4] = r.f[4];
        arg0->f40 = r.h[1];
        arg0->f42 = r.h[0];
        arg0->f6 = clamp_min_drop__6TLobbyFUi(r.h[4], r.h[5] + 1);
    }
}
void TLobby__sub_80209AEC(s32 *arg0, s32 *arg1) {
    Hdr_80209AEC hdr = *(Hdr_80209AEC *)lbl_805D60B0;
    Ent_80209AEC *tbl;
    u32 total;
    u32 r;
    s32 i;
    s32 n;
    TLobby__sub_8020A568(&hdr);
    tbl = (Ent_80209AEC *)(lbl_805D60B0 + hdr.table);
    n = hdr.count;
    total = 0;
    for (i = 0; i < n; i++) {
        total += tbl[i].weight;
    }
    r = TItemDrop__sub_80107B0C(lbl_805D60A0, total);
    for (i = 0; i < n; i++) {
        if (tbl[i].weight != 0) {
            if (r < tbl[i].weight) {
                *arg0 = tbl[i].b1;
                *arg1 = tbl[i].b0;
                return;
            }
            r -= tbl[i].weight;
        }
    }
    *arg1 = -1;
    *arg0 = -1;
}

}
