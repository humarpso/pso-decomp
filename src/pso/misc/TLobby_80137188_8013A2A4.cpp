#include "types.h"

extern "C" {

void TLobby__sub_8013A2DC(void);
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p);
void bswap_inventory__6TLobbyFPv(void* p);
void* init_char_data__6TLobbyFPv(void* p);
void open_hard_keyboard__6TLobbyFPv(void* p);
void set_player_count__6TLobbyFi(int a0);
int __ct__12TPlyCharDataFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__17TPlyInventoryItemFv(void*);
int test_card_flag__19TWindowKeyBoardHardFii(void*, void*);

void* init_char_data__6TLobbyFPv(void* p) { __ct__16TPlyGuildCardTagFv(p); __ct__12TPlyCharDataFv((char*)p + 0x20); return p; }
void TLobby__sub_8013A2DC(void) {  }
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void open_hard_keyboard__6TLobbyFPv(void* p) { test_card_flag__19TWindowKeyBoardHardFii(p, (void*)262144); }

void bswap_inventory__6TLobbyFPv(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 30; i++) { bswap__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

    extern int lbl_805D5D6C;
void set_player_count__6TLobbyFi(int a0) { lbl_805D5D6C = a0; }

}
