#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_800F7A50(void* p);
int TLobby__sub_800F7A64(void);

void TLobby__sub_800F795C(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
void TLobby__sub_800F7990(void* p) { TLobby__sub_800F795C(p); TLobby__send_and_handle_60(p); }

}
