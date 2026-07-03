#include "types.h"

extern "C" {

void TOMineTrap__sub_80171380(void);
void fn_8017141C(void* p);
void TOMineIcon01__vt82(void);
int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int TLobby__send_and_handle_60(void*);

int TOMineTrap__vt18(void) { return 0; }
int TOMineTrap__vt19(void) { return 0; }
void fn_801713AC(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_801713E8(void* p) { fn_801713AC(p); TLobby__send_and_handle_60(p); }
void fn_8017141C(void* p) { *(u8*)((char*)p + 0x0) = 128; *(u8*)((char*)p + 0x1) = 2; }

}
