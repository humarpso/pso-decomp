#include "types.h"
struct Ctl_80248324 { u8 pad[4]; s32 *tbl; };

extern "C" {
void TWindowSubSymbolChatPartsSet__sub_802480EC(s32, s32, s32, s32, s32, s32, s32, s32);
void fn_80248324(Ctl_80248324 *c, s32 arg1, s32 arg2);
}

extern "C" {

void fn_80248324(Ctl_80248324 *c, s32 arg1, s32 arg2) {
    s32 *p = c->tbl + arg2;
    TWindowSubSymbolChatPartsSet__sub_802480EC(p[5], p[9], p[1], (u8)arg1, (arg1 >> 8) & 7, (arg1 >> 11) & 1, (arg1 >> 12) & 1, arg2);
}

}
