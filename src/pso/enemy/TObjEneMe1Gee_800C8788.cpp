#include "types.h"
struct Obj_800C88D4 { u8 pad[0x3c8]; u32 f3c8; u8 pad2[0x494 - 0x3cc]; s32 count; void *children[1]; };

struct Obj_800C8B4C { u8 pad[0x430]; s32 f430; };

extern "C" {
void TObjEneDD__sub_800BBA18(void *, s16);
void set_flag3c8_bit40__13TObjEneMe1GeeFPv(void *p);
s32 TObjEneMe1Gee__sub_800C88D4(Obj_800C88D4 *self);
void TObjEneDD__sub_800BBA18(void *, s16);
void TObjEneMe1Gee__sub_800C8B4C(Obj_800C8B4C *self);
}

extern "C" {

s32 TObjEneMe1Gee__sub_800C88D4(Obj_800C88D4 *self) {
    s32 i;
    if (self->f3c8 & 0x40) {
        self->f3c8 &= ~0x40;
        TObjEneDD__sub_800BBA18(self, 12);
        for (i = 0; i < self->count; i++) {
            set_flag3c8_bit40__13TObjEneMe1GeeFPv(self->children[i]);
        }
        return 1;
    }
    return 0;
}
void TObjEneMe1Gee__sub_800C8B4C(Obj_800C8B4C *self) {
    switch (self->f430) {
    case 0:
    case 1:
        self->f430++;
        TObjEneDD__sub_800BBA18(self, 7);
        break;
    case 2:
        self->f430 = 0;
        TObjEneDD__sub_800BBA18(self, 8);
        break;
    }
}

}
