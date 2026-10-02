#include "types.h"
struct Entry_80250380 { u8 pad[0x10]; f32 w; f32 h; };

struct Fuki_80250380 { u8 pad[0x24]; u8 entries[0x4C]; u8 phase; u8 options; u8 kind; };

struct Fuki_80250314 { u8 pad[0x38]; f32 anchor[2]; };

extern "C" {
Entry_80250380 *get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void TWindowSubSymbolChat__sub_802483F0(void *, f32 *);
extern const f32 lbl_805DCCF8;
extern const f32 TWindowFukidasi__data_805DCCF4;
extern const f32 TWindowFukidasi__data_805DCCFC;
void calc_text_size__15TWindowFukidasiFPvPv(Fuki_80250380 *b, f32 *out);
void calc_text_size__15TWindowFukidasiFPvPv(Fuki_80250380 *b, f32 *out);
void TWindowFukidasi__sub_80250314(Fuki_80250314 *b, f32 *out);
}

extern "C" {

void TWindowFukidasi__sub_80250314(Fuki_80250314 *b, f32 *out) {
    f32 size[2];
    calc_text_size__15TWindowFukidasiFPvPv((Fuki_80250380 *)(b), (f32 *)(size));
    if (b->anchor[0] > size[0]) {
        out[0] = size[0];
    } else {
        out[0] = b->anchor[0];
    }
    if (b->anchor[1] > size[1]) {
        out[1] = size[1];
    } else {
        out[1] = b->anchor[1];
    }
}

void calc_text_size__15TWindowFukidasiFPvPv(Fuki_80250380 *b, f32 *out) {
    Entry_80250380 *e;
    switch (b->kind) {
    case 0:
        e = get_array_entry__20TWindowSubStatusDispFPvi(b, 0);
        out[0] = TWindowFukidasi__data_805DCCF4 + (lbl_805DCCF8 + e->w);
        out[1] = TWindowFukidasi__data_805DCCF4 + (TWindowFukidasi__data_805DCCFC + e->h);
        break;
    case 1:
        TWindowSubSymbolChat__sub_802483F0(b->entries, out);
        break;
    case 2:
        break;
    }
}

}
