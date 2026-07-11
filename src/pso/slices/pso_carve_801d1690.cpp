#include "types.h"

extern "C" {

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

void TObjPlayer__sub_801D1690(void* p) { *(u8*)((char*)p + 0x0) = 83; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801D16A4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D16D8(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void* TObjPlayer__sub_801D171C(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
int TObjPlayer__sub_801D1768(void) { return 0; }
void TObjPlayer__sub_801D178C(void* p) { TObjPlayer__sub_801D16D8(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D17C0(void* p) { *(u8*)((char*)p + 0x0) = 79; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801D17D4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D1808(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void* TObjPlayer__sub_801D1844(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }
int TObjPlayer__sub_801D1888(void) { return 0; }
void TObjPlayer__sub_801D18B0(void* p) { *(u8*)((char*)p + 0x0) = 78; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801D18C4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D18F8(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801D2880((char*)p + 0x4); }
int TObjPlayer__sub_801D192C(void) { return 0; }
void TObjPlayer__sub_801D1978(void* p) { TObjPlayer__sub_801D18F8(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D19AC(void* p) { TObjPlayer__sub_801D1808(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D19E0(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
