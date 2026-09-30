#include "types.h"
struct Ent_800FDD70 { u8 pad[0x30]; };

extern "C" {
s32 strcmp(void *, void *);
extern Ent_800FDD70 TItemDrop__data_805011E0[];
extern u32 TItemDrop__data_805D53C4;
extern s32 TItemDrop__data_805D53C8;
Ent_800FDD70 *TItemDrop__sub_800FDD70(void *name);
}

extern "C" {

Ent_800FDD70 *TItemDrop__sub_800FDD70(void *name) {
    Ent_800FDD70 *e;
    s32 i;
    if (TItemDrop__data_805D53C4 == 0) {
        return 0;
    }
    e = TItemDrop__data_805011E0;
    for (i = 0; i < TItemDrop__data_805D53C8; i++, e++) {
        if (strcmp(e, name) == 0) {
            return e;
        }
    }
    return 0;
}

}
