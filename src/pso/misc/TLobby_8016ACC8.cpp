#include "types.h"

extern "C" {
void TOKey__sub_8016AC94(void* p);

int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void fn_8016AD58(void* p);
void TOKeyAncient01__vt23(void);

void finalize_and_send_60__6TLobbyFPv(void* p) { TOKey__sub_8016AC94(p); TLobby__send_and_handle_60(p); }
void* init_6x05_switch_changed__6TLobbyFPv(void* p) { fn_8016AD3C(p); *(unsigned char*)(p) = 5; *(unsigned char*)((char*)p + 0x1) = 3; return p; }

}
