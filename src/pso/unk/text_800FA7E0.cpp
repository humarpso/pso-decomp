#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK free_static_buffer__6TLobbyFPv(void *);
extern s32 async_file_read_current_request;
extern u32 lobby_stack_entry_list_tail;
extern s32 lobby_list_entry_count;
u8 *pop_stack_entry__6TLobbyFPvs(u8 *arg0, s16 arg1);
}

extern "C" {

u8 *pop_stack_entry__6TLobbyFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) lobby_stack_entry_list_tail == (u32)arg0) {
            lobby_stack_entry_list_tail = 0U;
        }
        async_file_read_current_request = M2C_FIELD(arg0, s32 *, 0x38);
        lobby_list_entry_count -= 1;
        if (arg1 > 0) {
            free_static_buffer__6TLobbyFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
