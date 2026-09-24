#include "types.h"

struct E_80306AC8 { u8 pad[0x1c]; u32 flags; u8 pad2[0xc4 - 0x20]; };

struct O_80306AC8 { E_80306AC8 e[12]; u8 pad[0x97c - 12 * 0xc4]; s32 count; };

extern "C" {
s32 fn_80306AC8(O_80306AC8 *self);
}

extern "C" {

int TAdMultiConfirmGC__sub_80306ABC(void* p);

int TAdMultiConfirmGC__sub_80306ABC(void* p) { return *(u32*)((char*)p + 0x980) & 0x1; }
s32 fn_80306AC8(O_80306AC8 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (!(self->e[i].flags & 4)) return 0;
    }
    return 1;
}

}
