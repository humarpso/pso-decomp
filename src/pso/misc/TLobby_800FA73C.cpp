#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int safe_free__23TAdSinglePlyChrSelectGCFUl(void*);
int free_chr_select_data__6TLobbyFv(void);
int process_pending_resources(void);
int __dt__5THeapFv(void*, void*);

    extern int async_file_read_sector_buffer;
    extern int game_heap;
void TLobby::destroy_game_heap() { process_pending_resources(); safe_free__23TAdSinglePlyChrSelectGCFUl((void*)(async_file_read_sector_buffer)); free_chr_select_data__6TLobbyFv(); __dt__5THeapFv((void*)(game_heap), (void*)1); }

}
