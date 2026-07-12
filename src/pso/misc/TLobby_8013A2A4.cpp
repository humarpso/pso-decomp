#include "types.h"

extern "C" {

void* init_char_data__6TLobbyFPv(void* p);
void TLobby__sub_8013A2DC(void);
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p);
void open_hard_keyboard__6TLobbyFPv(void* p);
int __ct__12TPlyCharDataFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_16__FPUs(void*);
int test_card_flag__19TWindowKeyBoardHardFii(void*, void*);

void* init_char_data__6TLobbyFPv(void* p) { __ct__16TPlyGuildCardTagFv(p); __ct__12TPlyCharDataFv((char*)p + 0x20); return p; }
void TLobby__sub_8013A2DC(void) {  }
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void open_hard_keyboard__6TLobbyFPv(void* p) { test_card_flag__19TWindowKeyBoardHardFii(p, (void*)262144); }

}
