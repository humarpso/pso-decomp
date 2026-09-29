#include "types.h"
struct E_803DD3C8 { u8 pad[0x10]; };

struct Fmt_803DD3DC { u8 pad0[4]; u16 w; u16 pad6; u16 h; u8 rest[0x3A]; };

extern "C" {
extern E_803DD3C8 lbl_8058CE40[];
E_803DD3C8 *fn_803DD3C8(s32 i);
void fn_803DD430(Fmt_803DD3DC *, Fmt_803DD3DC *);
s32 fn_803DD3DC(Fmt_803DD3DC *arg0);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
E_803DD3C8 *fn_803DD3C8(s32 i) {
    return &lbl_8058CE40[i];
}
#pragma pop

s32 fn_803DD3DC(Fmt_803DD3DC *arg0) {
    Fmt_803DD3DC sp8;
    if (arg0 == 0) {
        fn_803DD430(arg0, &sp8);
        arg0 = &sp8;
    }
    return (u16)((arg0->w + 15) & ~15) * arg0->h * 2;
}

}
