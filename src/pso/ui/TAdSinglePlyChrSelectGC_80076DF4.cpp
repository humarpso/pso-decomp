#include "types.h"

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
int fn_80076CD0(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

}
