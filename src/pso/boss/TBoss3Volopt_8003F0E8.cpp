#include "types.h"

extern "C" {

int TBoss3Volopt__sub_8003F0E8(void* p);
s32 TBoss3Volopt__sub_8003F108(void* p);
void TBoss3Volopt__sub_8003F110(void* p);
void TBoss3Volopt__sub_8003F168(void* p);
void TBoss3Volopt__sub_8003F1AC(void* p);
void TBoss3Volopt__sub_8003F1F8(void* p);
void TBoss3Volopt__sub_8003F22C(void* p);
void TBoss3Volopt__sub_8003F240(void* p);
void TBoss3Volopt__sub_8003F274(void* p);
void TBoss3Volopt__sub_8003F2C0(void* p);
void TBoss3Volopt__sub_8003F2F4(void* p);
void TBoss3Volopt__sub_8003F308(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void TBoss3Volopt__sub_8003F350(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
int TBoss3Volopt__sub_8003F398(void);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void* a0 = 0);
int TObjPlayer__sub_80154B28(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);

int TBoss3Volopt__sub_8003F0E8(void* p) { return TObjPlayer__sub_80154B28(p); }
s32 TBoss3Volopt__sub_8003F108(void* p) { return *(s32*)((char*)p + 0x3e0); }
void TBoss3Volopt__sub_8003F110(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); { int i; for (i = 0; i < 7; i++) { bswap_16__FPUs((char*)p + 0x6 + i * 2); } } }
void TBoss3Volopt__sub_8003F168(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }
void TBoss3Volopt__sub_8003F1AC(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void TBoss3Volopt__sub_8003F1F8(void* p) { TBoss3Volopt__sub_8003F1AC(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
void TBoss3Volopt__sub_8003F240(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0xa); }
void TBoss3Volopt__sub_8003F274(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void TBoss3Volopt__sub_8003F2C0(void* p) { TBoss3Volopt__sub_8003F274(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F2F4(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
void TBoss3Volopt__sub_8003F308(void* p) { TBoss3Volopt__sub_8003F240(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
void TBoss3Volopt__sub_8003F350(void* p) { TBoss3Volopt__sub_8003F168(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

    extern int lbl_805D4C40;
int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
