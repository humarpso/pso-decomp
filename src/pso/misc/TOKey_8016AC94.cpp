#include "types.h"

extern "C" {

void bswap_6x05_switch_flag__5TOKeyFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TOKeyAncient01__vt23(void);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int fn_8016AD3C(void* a0 = 0);
void fn_8016AD58(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);

void bswap_6x05_switch_flag__5TOKeyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x8); }

}
