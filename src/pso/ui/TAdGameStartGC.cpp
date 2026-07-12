#include "types.h"

extern "C" {

void TAdGameStartGC__sub_802E62F8(void* p);
void TAdGameStartGC__sub_802E6334(void* p);
void TAdGameStartGC__sub_802E6368(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int bswap_32__FPUl(void*);
void render__14TAdGameStartGCFv(void);

void TAdGameStartGC__sub_802E62F8(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void TAdGameStartGC__sub_802E6334(void* p) { TAdGameStartGC__sub_802E62F8(p); TLobby__send_and_handle_60(p); }
void TAdGameStartGC__sub_802E6368(void* p) { *(u8*)((char*)p + 0x0) = 146; *(u8*)((char*)p + 0x1) = 3; }

}
