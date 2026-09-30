#include "types.h"

struct Obj_800C86E0 { u8 pad0[0x390]; void *key; u8 pad1[0x100]; s32 count; u8 *items[8]; };

extern "C" {
s32 TObjEneMe1Gee__sub_800CB584(u8 *);
s32 check_v2_mode__9TObjEneDDFv();
s32 TObjEneMe1Gee__sub_800C86E0(Obj_800C86E0 *arg0);
}

extern "C" {

void TObjEneMe1Gee__sub_800C86DC(void);

s32 TObjEneMe1Gee__sub_800C86E0(Obj_800C86E0 *arg0) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if ((void *)TObjEneMe1Gee__sub_800CB584(arg0->items[i]) == arg0->key) {
            n++;
        }
    }
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return n < 4;
    }
    return n < 2;
}

}
