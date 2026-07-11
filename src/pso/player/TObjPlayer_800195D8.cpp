#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void* p);
int bswap_16__FPUs(void*);

void bswap_head16__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); }
int TObjPlayer__sub_8001960C(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
void send_head__10TObjPlayerFPv(void* p) { bswap_head16__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
