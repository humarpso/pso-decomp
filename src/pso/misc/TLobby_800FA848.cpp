#include "types.h"

extern "C" {

void link_into_list__6TLobbyFPv(void *arg0);

extern void *async_file_read_current_request;
extern void *lobby_stack_entry_list_tail;
extern s32 lobby_list_entry_count;
extern s32 lobby_list_next_id;

void link_into_list__6TLobbyFPv(void *arg0) {
    if ((void *) async_file_read_current_request == NULL) {
        async_file_read_current_request = arg0;
    }
    if ((void *) lobby_stack_entry_list_tail != NULL) {
        *(void **)((s8 *)lobby_stack_entry_list_tail + 0x38) = arg0;
    }
    lobby_stack_entry_list_tail = arg0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    lobby_list_entry_count += 1;
    *(s32 *)((s8 *)arg0 + 4) = lobby_list_next_id++;
}

}
