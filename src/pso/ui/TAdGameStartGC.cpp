#include "types.h"

extern "C" {

void bswap_6x92__14TAdGameStartGCFPv(void* p);
void send_6x92__14TAdGameStartGCFPv(void* p);
void TAdGameStartGC__sub_802E6368(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int bswap_32__FPUl(void*);
void render__14TAdGameStartGCFv(void);

void bswap_6x92__14TAdGameStartGCFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void send_6x92__14TAdGameStartGCFPv(void* p) { bswap_6x92__14TAdGameStartGCFPv(p); TLobby__send_and_handle_60(p); }
void TAdGameStartGC__sub_802E6368(void* p) { *(u8*)((char*)p + 0x0) = 146; *(u8*)((char*)p + 0x1) = 3; }

}
