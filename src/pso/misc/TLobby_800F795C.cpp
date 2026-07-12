#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_800F7A50(void* p);
int TLobby__sub_800F7A64(void);

void bswap_field__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }
void broadcast_state__6TLobbyFPv(void* p) { bswap_field__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
