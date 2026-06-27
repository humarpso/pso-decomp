#include "types.h"

extern "C" {

void fn_80048218(void* p);
int bswap_16__FPUs(void*);
int fn_8001960C(void*);
void fn_800481C8(void* p);
int fn_8003F110(void*);
int TLobby__sub_801E4570(void*);
void fn_800481B4(void* p);
void fn_8004824C(void* p);

void fn_80048180(void* p) { fn_8003F110(p); TLobby__sub_801E4570(p); }
void fn_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void fn_800481C8(void* p) { fn_8001960C(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void fn_80048218(void* p) { fn_800481C8(p); TLobby__sub_801E4570(p); }
void fn_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}
