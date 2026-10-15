#include "types.h"

extern "C" {

void TLobby__sub_8020E3BC(void);
void TLobby__sub_8020E3C0(void);
int get_matching_object__6TLobbyFv(void);
int get_object_count__6TLobbyFv(void);
s32 Dolphin_ARAlloc(s32);

void TLobby__sub_8020E3BC(void) {  }

extern s32 item_drop_memory_pool_ar_addr;
extern s32 item_drop_memory_pool_size;

void TLobby__sub_8020E3C0(void) {
    item_drop_memory_pool_size = 0x100000;
    item_drop_memory_pool_ar_addr = Dolphin_ARAlloc(0x100000);
}

    extern int TLobby__data_805D6114;
int get_matching_object__6TLobbyFv(void) {  return TLobby__data_805D6114; }

    extern int TLobby__data_805D610C;
int get_object_count__6TLobbyFv(void) {  return TLobby__data_805D610C; }

}
