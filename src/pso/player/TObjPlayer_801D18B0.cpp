#include "types.h"

extern "C" {
void TObjPlayer__sub_801D1808(void* p);

int TFontSmallLobby__sub_801C0228(void*);
void* TObjPlayer__sub_801D171C(void* p, void* a1);
void* TObjPlayer__sub_801D1844(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TObjPlayer__sub_801D2880(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801D1690(void* p);
void TObjPlayer__sub_801D17C0(void* p);
void TObjPlayer__sub_801D18B0(void* p);

void TObjPlayer__sub_801D18B0(void* p) { *(u8*)((char*)p + 0x0) = 78; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801D18C4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D18F8(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801D2880((char*)p + 0x4); }

}
