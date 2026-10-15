#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 pop_stack_entry__6TLobbyFs(void *, s32);

extern void *async_file_read_current_request;

void TLobby::pop_and_close() {
    void *temp_r31;

    temp_r31 = *(void **)((s8 *)async_file_read_current_request + 0x38);
    pop_stack_entry__6TLobbyFs(async_file_read_current_request, 1);
    async_file_read_current_request = temp_r31;
}

}
