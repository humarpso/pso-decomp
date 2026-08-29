#include "types.h"

extern "C" {

int TLobby__sub_8013A4E4(void* a0 = 0);
int send_command__6TLobbyFPvUi(void* a0 = 0, void* a1 = 0);
void TLobby__sub_8013A4A8(void* p, void* a1);
int bswap_header_fields__6TLobbyFi(void*);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);
s32 TLobby__sub_801E44D8(s32, s32);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
int TObjPlayer__sub_8013A820(void* a0 = 0, void* a1 = 0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_packet_header__6TLobbyFPv();

void TLobby__sub_8013A4A8(void* p, void* a1) { TLobby__sub_8013A4E4(p); send_command__6TLobbyFPvUi(p, a1); }

}
