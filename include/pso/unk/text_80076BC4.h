#ifndef PSO_UNK_TEXT_80076BC4_H
#define PSO_UNK_TEXT_80076BC4_H

#include "types.h"

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void *p, void *q);
s32 chat_accept_submission(s32 arg0);
void chat_dispatch_accepted_result(s32 *arg0);
void clear_chat_shortcut(s32 i);
void fn_80076BC4(void);
int get_chat_shortcut(s32 arg0);
bool is_chat_shortcut_set(s32 arg0);
void send_chat_shortcut(void);
s32 store_chat_shortcut(s32 arg0, s32 arg1);
void submit_chat_text(u8 *arg0);
}

#endif
