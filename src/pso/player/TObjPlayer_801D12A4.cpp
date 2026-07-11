#include "types.h"

extern "C" {
void TObjPlayer__sub_801D10D4(void* p);
void TObjPlayer__sub_801D1160(void* p);
void TObjPlayer__sub_801D1204(void* p);

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

void TObjPlayer__sub_801D12A4(void* p) { TObjPlayer__sub_801D1204(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D12D8(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void TObjPlayer__sub_801D12E8(void* p) { *(u16*)((char*)p + 0x6) |= 0x2; }
void TObjPlayer__sub_801D12F8(void* p) { TObjPlayer__sub_801D1160(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D132C(void* p) { TObjPlayer__sub_801D10D4(p); TLobby__send_and_handle_60(p); }
int TObjPlayer__sub_801D1360(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }
void TObjPlayer__sub_801D136C(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
