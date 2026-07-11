#include "types.h"

extern "C" {
void bswap_packet__10TObjPlayerFPv(void* p);

int TObjPlayer__sub_801D0FF4(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void TObjPlayer__sub_801D1480(void* p);
int TObjPlayer__sub_801BF4B8(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void handle_recv_packet__10TObjPlayerFPv(void* p) { bswap_packet__10TObjPlayerFPv(p); update_players__6TLobbyFi(p); }
void TObjPlayer__sub_801D1440(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void* TObjPlayer__sub_801D1450(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void TObjPlayer__sub_801D1480(void* p) { *(u8*)((char*)p + 0x0) = 87; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_endian_words__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); }

}
