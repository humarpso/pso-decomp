#include "pso/TItemLoad.h"

TItemLoad::~TItemLoad() {}

#include "types.h"

extern "C" {

int TItemLoad__sub_80110750(void);
int TItemLoad__sub_80110788(void);
void TItemLoad__sub_801107B4(void);
s32 TItemLoad__sub_801107DC(void* p);
s32 TItemLoad__sub_801107E4(void* p);
void* TItemLoad__sub_801107EC(void* p);
int TItemLoad__sub_801107F4(void* p);
int get_ring_lobby__9TItemLoadFPv(void* p);
int update_item__9TItemLoadFPv(void* p);
s32 TItemLoad__sub_80110740(void* p);
s32 TItemLoad__sub_80110748(void* p);
int TLobby__sub_803CC4C0(void*);
int TObjPlayer__sub_8001BEF8(void*, int);

int TItemLoad__sub_80110750(void) { return 0; }

int update_item__9TItemLoadFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 2); }

int TItemLoad__sub_80110788(void) { return 0; }

void TItemLoad__sub_801107B4(void) {  }
int get_ring_lobby__9TItemLoadFPv(void* p) { return TLobby__sub_803CC4C0(*(void**)((char*)p + 0x4)); }
s32 TItemLoad__sub_801107DC(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TItemLoad__sub_801107E4(void* p) { return *(s32*)((char*)p + 0x1c); }
void* TItemLoad__sub_801107EC(void* p) { return (char*)p + 0x2c; }
int TItemLoad__sub_801107F4(void* p) { return *(u32*)((char*)p + 0x20) == 0; }

}
