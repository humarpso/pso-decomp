#include "types.h"
struct T_8032DA60 { u8 pad0[0x70]; void *f70; void *f74; s32 f78; };

extern "C" {
s32 create_status_effect__10TObjPlayerFiPvi(s32, void *, s32);
void TObjPlayer__sub_8032E4C8();
void TObjPlayer__sub_8032DA60(void *self, T_8032DA60 *p);
}

extern "C" {

void TObjPlayer__sub_8032DA60(void *self, T_8032DA60 *p) {
    p->f78 = 0x176;
    p->f74 = (void *)create_status_effect__10TObjPlayerFiPvi;
    p->f70 = (void *)TObjPlayer__sub_8032E4C8;
}

}
