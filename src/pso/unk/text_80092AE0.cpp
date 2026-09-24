#include "types.h"
struct E_80092AE0 { u8 pad[8]; s32 x8; s32 xc; };

struct G_80092AE0 { u8 pad[0x42c]; E_80092AE0 *tbl; };

struct O_80092AE0 { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

extern "C" {
extern G_80092AE0 *lbl_805D4F48;
void fn_80092AE0(O_80092AE0 *self, s32 i);
}

extern "C" {

void fn_80092AE0(O_80092AE0 *self, s32 i) {
    self->x34 = lbl_805D4F48->tbl[i].x8;
    self->x24 = lbl_805D4F48->tbl[i].xc;
}

}
