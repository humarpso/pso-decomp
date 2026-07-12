#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int TObjPlayer__sub_8001960C(void* a0 = 0);
void bswap_fields_x4__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801165D0(void* p);
s32 TObjPlayer__sub_80116578(void* p);
void TObjPlayer__sub_80116604(void* p);
u16 TObjPlayer__sub_80116618(void* p);

s32 TObjPlayer__sub_80116578(void* p) { return *(s32*)((char*)p + 0xdc); }
void bswap_fields_x4__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void TObjPlayer__sub_801165D0(void* p) { bswap_fields_x4__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_80116604(void* p) { *(u8*)((char*)p + 0x0) = 102; *(u8*)((char*)p + 0x1) = 3; }

}
