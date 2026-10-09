#include "types.h"

extern "C" {

void destroy_game_heap__6TLobbyFv(void);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
int free_chr_select_data__6TLobbyFv(void);
int process_pending_resources(void);
int __dt__5THeapFv(void*, void*);

    extern int lbl_805D5370;
    extern int lbl_805D537C;
void destroy_game_heap__6TLobbyFv(void) { process_pending_resources(); safe_free__23TAdSinglePlyChrSelectGCFUi((void*)(lbl_805D5370)); free_chr_select_data__6TLobbyFv(); __dt__5THeapFv((void*)(lbl_805D537C), (void*)1); }

}
