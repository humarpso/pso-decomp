#include "types.h"
#include "pso/THeap.h"

extern "C" {

void TLobby__sub_8026A328(void);

extern s32 TAdScrollWinGC__chat_log_heap;
extern u32 chat_last_line_buffer;

void TLobby__sub_8026A328(void) {
    if ((u32) chat_last_line_buffer != 0U) {
        ((THeap *)TAdScrollWinGC__chat_log_heap)->heap_free((void *)chat_last_line_buffer);
        chat_last_line_buffer = 0U;
    }
}

}
