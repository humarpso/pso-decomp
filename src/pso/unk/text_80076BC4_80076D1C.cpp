#include "types.h"

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
int chat_accept_submission(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void TWindowShortListCtrl__sub_80076D1C(void) { TWindowKeyBoardSoft__sub_80076E2C(); chat_accept_submission(); }

}
