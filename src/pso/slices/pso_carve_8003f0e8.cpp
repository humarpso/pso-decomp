#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int TLobby__sub_801E4570(void*);
int fn_8003F0E8(void* p);
s32 fn_8003F108(void* p);
void fn_8003F22C(void* p);
void fn_8003F2F4(void* p);
void fn_8003F33C(void* p);
void fn_8003F384(void* p);
int fn_80154B28(void*);

int fn_8003F0E8(void* p) { return fn_80154B28(p); }
s32 fn_8003F108(void* p) { return *(s32*)((char*)p + 0x3e0); }
int fn_8003F110(void) { return 0; }
void fn_8003F168(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }
void fn_8003F1AC(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void fn_8003F1F8(void* p) { fn_8003F1AC(p); TLobby__sub_801E4570(p); }
void fn_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
void fn_8003F240(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0xa); }
void fn_8003F274(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void fn_8003F2C0(void* p) { fn_8003F274(p); TLobby__sub_801E4570(p); }
void fn_8003F2F4(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
void fn_8003F308(void* p) { fn_8003F240(p); TLobby__sub_801E4570(p); }
void fn_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
void fn_8003F350(void* p) { fn_8003F168(p); TLobby__sub_801E4570(p); }
void fn_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

}
