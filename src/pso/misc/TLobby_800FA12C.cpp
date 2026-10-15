#include "types.h"

extern "C" {

void pop_and_close__6TLobbyFv(void);
s32 pop_stack_entry__6TLobbyFPvs(void *, s32);

extern void *async_file_read_current_request;

void pop_and_close__6TLobbyFv(void) {
    void *temp_r31;

    temp_r31 = *(void **)((s8 *)async_file_read_current_request + 0x38);
    pop_stack_entry__6TLobbyFPvs(async_file_read_current_request, 1);
    async_file_read_current_request = temp_r31;
}

}
