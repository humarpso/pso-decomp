#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);

void bswap_head16__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); }
int read_be16_field2__10TObjPlayerFPv(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
void send_head__10TObjPlayerFPv(void* p) { bswap_head16__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
