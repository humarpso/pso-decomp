#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_download_state__6TLobbyFv(void);
M2C_UNK init_download_buffers__6TLobbyFv();
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 __ct__5THeapFUli(M2C_UNK, M2C_UNK, M2C_UNK);
s32 __nw__5THeapFUl(M2C_UNK);

extern s32 async_file_read_current_request;
extern s32 lobby_stack_entry_list_tail;
extern s32 lobby_list_entry_count;
extern s32 async_file_read_state;
extern s32 async_file_read_sector_buffer;
extern s32 lobby_download_state_ptr;
extern s32 lobby_list_next_id;
extern s32 game_heap;

void init_download_state__6TLobbyFv(void) {
    s32 var_r0;

    init_download_buffers__6TLobbyFv();
    async_file_read_sector_buffer = alloc__22TQuestVmDownLoadServerFPv(0x800);
    lobby_stack_entry_list_tail = 0;
    async_file_read_current_request = 0;
    lobby_download_state_ptr = 0;
    async_file_read_state = 0;
    lobby_list_entry_count = 0;
    lobby_list_next_id = 0;
    var_r0 = __nw__5THeapFUl(0x14);
    if (var_r0 != 0) {
        var_r0 = __ct__5THeapFUli(var_r0, 0x4000, 0x20);
    }
    game_heap = var_r0;
}

}
