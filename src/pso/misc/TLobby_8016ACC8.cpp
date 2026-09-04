#include "types.h"

extern "C" {

void finalize_and_send_60__6TLobbyFPv(void* p);
int fn_8016AD3C(void*);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TOKeyAncient01__vt23(void);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
int bswap_16__FPUs(void*);
void bswap_6x05_switch_flag__5TOKeyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void set_type__14TOKeyAncient01FPv(void* p);

void finalize_and_send_60__6TLobbyFPv(void* p) { bswap_6x05_switch_flag__5TOKeyFPv(p); TLobby__send_and_handle_60(p); }
void* init_6x05_switch_changed__6TLobbyFPv(void* p) { fn_8016AD3C((void*)(p)); *(unsigned char*)(p) = 5; *(unsigned char*)((char*)p + 0x1) = 3; return p; }

int fn_8016AD3C(void*) { return 0; }

}
