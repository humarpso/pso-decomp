#include "types.h"

extern "C" {

int TObjPlayer__sub_8001960C(void*);
int TLobby__sub_801E44D8(void*, void*);
s32 TWindowSubComCard__sub_8007B6D8(void* p);
int TWindowSubComCard__sub_8007B6E0(void* p);
u8 TWindowSubComCard__sub_8007B6EC(void* p);
int fn_8007B73C(void* p);
int bswap__16TPlyGuildCardTagFv(void*);

int TWindowSubComCard__sub_8007B6F4(void) { return 0; }
void fn_8007B708(void* p) { TObjPlayer__sub_8001960C(p); fn_8007B73C((char*)p + 0x4); }
int fn_8007B73C(void* p) { return bswap__16TPlyGuildCardTagFv(p); }
void fn_8007B75C(void* p, void* a1) { fn_8007B708(p); TLobby__sub_801E44D8(p, a1); }

}
