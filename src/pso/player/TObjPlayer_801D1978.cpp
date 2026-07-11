#include "types.h"

extern "C" {
void TObjPlayer__sub_801D18F8(void* p);
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

void TObjPlayer__sub_801D1978(void* p) { TObjPlayer__sub_801D18F8(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D19AC(void* p) { TObjPlayer__sub_801D1808(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D19E0(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
