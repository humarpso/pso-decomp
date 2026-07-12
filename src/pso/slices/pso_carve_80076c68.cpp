#include "types.h"

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void fn_80076D1C(void);
int fn_80076E2C(void);
int fn_80076CD0(void);
void fn_80076DF4(void* p, void* q);

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
void fn_80076D1C(void) { fn_80076E2C(); fn_80076CD0(); }
int fn_80076D40(void) { return 0; }
int fn_80076D68(void) { return 0; }
int fn_80076D9C(void) { return 0; }
void fn_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
int TWindowKeyBoardSoft__sub_80076E00(void) { return 0; }
int fn_80076E2C(void) { return 0; }

}
