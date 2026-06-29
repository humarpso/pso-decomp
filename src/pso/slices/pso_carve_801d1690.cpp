#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void* fn_801D171C(void* p, void* a1);
void* fn_801D1844(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int fn_801D2880(void*);
int fn_801D28DC(void*);
int TLobby__sub_801E4570(void*);
void fn_801D1690(void* p);
void fn_801D17C0(void* p);
void fn_801D18B0(void* p);

void fn_801D1690(void* p) { *(u8*)((char*)p + 0x0) = 83; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D16A4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D16D8(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void* fn_801D171C(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
int fn_801D1768(void) { return 0; }
void fn_801D178C(void* p) { fn_801D16D8(p); TLobby__sub_801E4570(p); }
void fn_801D17C0(void* p) { *(u8*)((char*)p + 0x0) = 79; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D17D4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D1808(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void* fn_801D1844(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }
int fn_801D1888(void) { return 0; }
void fn_801D18B0(void* p) { *(u8*)((char*)p + 0x0) = 78; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D18C4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D18F8(void* p) { fn_8001960C(p); fn_801D2880((char*)p + 0x4); }
int fn_801D192C(void) { return 0; }
void fn_801D1978(void* p) { fn_801D18F8(p); TLobby__sub_801E4570(p); }
void fn_801D19AC(void* p) { fn_801D1808(p); TLobby__sub_801E4570(p); }
void fn_801D19E0(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); fn_801D28DC((char*)p + 0x8); }

}
