#include "types.h"

extern "C" {

void TBoss3Volopt__sub_80048180(void* p);
void TBoss3Volopt__sub_800481B4(void* p);
void TBoss3Volopt__sub_800481C8(void* p);
void TBoss3Volopt__sub_80048218(void* p);
void TBoss3Volopt__sub_8004824C(void* p);
int TBoss3Volopt__sub_8003F110(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int bswap_16__FPUs(void*);

void TBoss3Volopt__sub_80048180(void* p) { TBoss3Volopt__sub_8003F110(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void TBoss3Volopt__sub_800481C8(void* p) { TObjPlayer__sub_8001960C(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void TBoss3Volopt__sub_80048218(void* p) { TBoss3Volopt__sub_800481C8((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}
