#include "types.h"

extern "C" {

s32 submit_chat_text(void *);
s32 send_selected_symbol_chat__20TWindowSubSymbolChatFPv(void *);
s32 send_chat_packet__9TWindowDDFPv(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
int chat_accept_submission(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void TWindowShortListCtrl__sub_80076D1C(void) { TWindowKeyBoardSoft__sub_80076E2C(); chat_accept_submission(); }

}
