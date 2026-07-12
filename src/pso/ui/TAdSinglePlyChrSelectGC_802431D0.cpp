#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_802431D0(void);
int TAdSinglePlyChrSelectGC__sub_802431F4(void* p);
void draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TAdSinglePlyChrSelectGC__sub_80243274(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int TAdSinglePlyChrSelectGC__sub_802432CC(void* p, int a1, int a2);
s32 TAdPlayerLoadGC__sub_801E15A4(s32, s32, s32, s32, s32 *, s32);
int TAdPlayerLoadGC__sub_801E1944(void*, int, int, int);
s32 TAdSinglePlyChrSelectGC__sub_80142108(s32 *);
int TWindowKeyBoardHard__sub_801A529C(void*, int);
int TAdSinglePlyChrSelectGC__sub_80243070(void*);

int TAdSinglePlyChrSelectGC__sub_802431D0(void) { return TAdSinglePlyChrSelectGC__sub_80243070((void*)(0)); }
int TAdSinglePlyChrSelectGC__sub_802431F4(void* p) { return TWindowKeyBoardHard__sub_801A529C(p, 8); }
void draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    TAdSinglePlyChrSelectGC__sub_80142108(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x800000FF);
}
void TAdSinglePlyChrSelectGC__sub_80243274(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    TAdSinglePlyChrSelectGC__sub_80142108(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x80000000);
}
int TAdSinglePlyChrSelectGC__sub_802432CC(void* p, int a1, int a2) { return TAdPlayerLoadGC__sub_801E1944(p, a1, a2, 0); }

}
