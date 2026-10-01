#include "types.h"
struct Obj_803D4540 {
    u8 pad[8];
    u32 flags;
    u8 padc[4];
    s32 nch;
    u8 pad14[0x2C];
    s32 h[2];
    u8 pad48[0x10];
    s32 pan[2];
    s32 vol;
    s32 vol2;
    s32 x68;
    s32 x6c;
    s32 x70;
};

struct Tbl_803D4540 { u8 pad[0x3C]; s32 v[1]; };

extern "C" {
void TLobby__sub_803ABECC(s32 h, u8 a, u8 b, u8 c, u8 d, u8 e);
extern u8 lbl_804FA088[];
extern s32 lbl_804FA470[];
void TLobby__sub_803D4540(Obj_803D4540 *o, s32 vol);
}

extern "C" {

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 stat_803D4540(Obj_803D4540 *o) {
    if (o == 0) {
        return -1;
    }
    return (o->flags >> 1) & 1;
}
void TLobby__sub_803D4540(Obj_803D4540 *o, s32 vol) {
    s32 i;
    if (o == 0) {
        return;
    }
    vol = (vol < 0) ? vol : 0;
    vol = (vol > -999) ? vol : -999;
    if (vol == o->vol) {
        return;
    }
    o->vol = vol;
    o->vol2 = o->vol;
    if (stat_803D4540(o) != 1) {
        return;
    }
    for (i = 0; i < o->nch; i++) {
        TLobby__sub_803ABECC(o->h[i], lbl_804FA088[-o->vol2], lbl_804FA470[o->pan[i] + 15],
                             0x7F - o->x70,
                             (u32)(lbl_804FA088[-o->vol] * lbl_804FA088[-o->x68]) >> 7,
                             (u32)(lbl_804FA088[-o->vol] * lbl_804FA088[-o->x6c]) >> 7);
    }
}
#pragma pop

}
