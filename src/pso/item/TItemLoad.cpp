#include "pso/TItemLoad.h"

#include "types.h"

struct O_80110750 { u8 pad[0x2c]; s32 arr[1]; };

struct O_80110788 { s32 arr[4]; s32 f10; s32 f14; };

extern "C" {
s32 TItemLoad__sub_80110750(O_80110750 *self, s32 i);
void TItemLoad__sub_80110788(O_80110788 *self);
}

extern "C" {

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

s32 TItemLoad__sub_80110750(O_80110750 *self, s32 i) {
    return self->arr[i];
}

int update_item__9TItemLoadFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 2); }

void TItemLoad__sub_80110788(O_80110788 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
    self->f10 = 0;
    self->f14 = 0;
}

void TItemLoad__sub_801107B4(void) {  }
int get_ring_lobby__9TItemLoadFPv(void* p) { return TLobby__sub_803CC4C0(*(void**)((char*)p + 0x4)); }
s32 TItemLoad__sub_801107DC(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TItemLoad__sub_801107E4(void* p) { return *(s32*)((char*)p + 0x1c); }
void* TItemLoad__sub_801107EC(void* p) { return (char*)p + 0x2c; }
int TItemLoad__sub_801107F4(void* p) { return *(u32*)((char*)p + 0x20) == 0; }
TItemLoad::~TItemLoad() {}

}
