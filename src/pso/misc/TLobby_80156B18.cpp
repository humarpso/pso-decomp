#include "types.h"

extern "C" {

int TLobby__sub_80156B18(void* p);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_80156BA8(void* p);
s32 bswap_32__FPUl(s32);
int bswap_header__6TLobbyFi(void*);
s32 read_be16_field2__10TObjPlayerFPv();

int TLobby__sub_80156B18(void* p) { return bswap_header__6TLobbyFi(p); }

}
