#include "types.h"

extern "C" {

void TLobby__sub_803D2ED4(void);
s32 memset(void *, int, int);

u8 ref_counted_load_buffer[0xC00];
s32 lobby_buffer_refcount;

void dec_ref_and_clear_buffer__6TLobbyFv(void) {
    s32 temp_r0;
    temp_r0 = lobby_buffer_refcount - 1;
    lobby_buffer_refcount = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (ref_counted_load_buffer), (int) (0), (int) (0xC00));
    }
}

void TLobby__sub_803D2ED4(void) {
    if ((s32) lobby_buffer_refcount == 0) {
        memset((void *) (ref_counted_load_buffer), (int) (0), (int) (0xC00));
    }
    lobby_buffer_refcount += 1;
}

}
