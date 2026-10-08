#include "types.h"
struct E_800A884C { u8 pad[8]; s32 x8; s32 xc; };

struct G_800A884C { u8 pad[0x42c]; E_800A884C *tbl; };

struct O_800A884C { u8 pad[0x24]; s32 x24; u8 pad2[0xc]; s32 x34; };

extern "C" {
extern G_800A884C *dimedian_resource_ptr;
void fn_800A884C(O_800A884C *self, s32 i);
}

extern "C" {

void fn_800A884C(O_800A884C *self, s32 i) {
    self->x34 = dimedian_resource_ptr->tbl[i].x8;
    self->x24 = dimedian_resource_ptr->tbl[i].xc;
}

}
