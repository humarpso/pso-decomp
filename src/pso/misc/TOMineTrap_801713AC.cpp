#include "types.h"

extern "C" {

void TOMineTrap__sub_80171380(void);
void fn_8017141C(void* p);
void TOMineIcon01__vt82(void);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);

void bswap_6x80_trigger_trap__10TOMineTrapFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_and_handle_60__10TOMineTrapFPv(void* p) { bswap_6x80_trigger_trap__10TOMineTrapFPv(p); TLobby__send_and_handle_60(p); }

}
