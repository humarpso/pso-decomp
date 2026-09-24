#include "types.h"

struct E_800A7734 { u8 pad[8]; s32 x8; s32 xc; };

struct G_800A7734 { u8 pad[0x42c]; E_800A7734 *tbl; };

struct O_800A7734 { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

extern "C" {
extern G_800A7734 *lbl_805D5050;
void TObjPlayer__sub_800A7734(O_800A7734 *self, s32 i);
}

extern "C" {

void* TObjPlayer__sub_800A772C(void* p);

void* TObjPlayer__sub_800A772C(void* p) { return (char*)p + 0x2fc; }
void TObjPlayer__sub_800A7734(O_800A7734 *self, s32 i) {
    self->x34 = lbl_805D5050->tbl[i].x8;
    self->x24 = lbl_805D5050->tbl[i].xc;
}

}
