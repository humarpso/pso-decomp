#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_800F7A50(void* p);
int TLobby__sub_800F7A64(void);

void bswap_enemy_state__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void TLobby__sub_800F7A1C(void* p) { bswap_enemy_state__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void TLobby__sub_800F7A50(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int TLobby__sub_800F7A64(void) { return 4; }

}
