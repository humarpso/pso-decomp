#include "types.h"

extern "C" {

void TLobby__sub_8026A328(void);
s32 heap_free__5THeapFPv(s32, u32);

extern s32 TAdScrollWinGC__chat_log_heap;
extern u32 chat_last_line_buffer;

void TLobby__sub_8026A328(void) {
    if ((u32) chat_last_line_buffer != 0U) {
        heap_free__5THeapFPv(TAdScrollWinGC__chat_log_heap, chat_last_line_buffer);
        chat_last_line_buffer = 0U;
    }
}

}
