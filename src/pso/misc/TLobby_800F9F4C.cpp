#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int run_frame__6TLobbyFv();
s32 TLobby__sub_800F9FD0();
int process_async_file_reads();
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int game_heap;
void TLobby::free_static_buffer(void* a0) { heap_free__5THeapFPv((void*)(game_heap), a0); }

    extern int game_heap;
void TLobby::alloc_from_heap(void* a0) { heap_alloc__5THeapFUl((void*)(game_heap), a0); }

void TLobby::pump_frames() {
loop_1:
    if (TLobby__sub_800F9FD0() != 0) {
        process_async_file_reads();
        run_frame__6TLobbyFv();
        goto loop_1;
    }
}

}
