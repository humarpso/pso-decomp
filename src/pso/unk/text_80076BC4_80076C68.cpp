#include "types.h"

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
int fn_80076CD0(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void fn_80076C68(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {
    case 1:
        TLobby__sub_80076BC8((s8 *)arg0 + 4);
        return;
    case 2:
        TWindowDD__sub_80348C78((s8 *)arg0 + 4);
        return;
    case 3:
        TWindowSubSymbolChat__sub_80076F88((s8 *)arg0 + 4);
    case 0:
        return;
    }
}
int fn_80076CD0(void) { return 0; }

}
