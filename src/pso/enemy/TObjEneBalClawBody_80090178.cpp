#include "types.h"
struct E_80090418 { u8 pad[8]; s32 x8; s32 xc; };

struct G_80090418 { u8 pad[0x42c]; E_80090418 *tbl; };

struct O_80090418 { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

extern "C" {
extern G_80090418 *lbl_805D4F20;
void TObjPlayer__sub_80090418(O_80090418 *self, s32 i);
}

extern "C" {

void TObjPlayer__sub_80090418(O_80090418 *self, s32 i) {
    self->x34 = lbl_805D4F20->tbl[i].x8;
    self->x24 = lbl_805D4F20->tbl[i].xc;
}

}
