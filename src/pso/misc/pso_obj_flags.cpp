#include "types.h"

struct ObjFlags {
    u8  _pad00[0x1c];
    u16 field_1c;
    u8  _pad1e[0x30 - 0x1e];
    u32 flags_30;
    u8  _pad34[0x96 - 0x34];
    u16 field_96;
};

extern "C" {

void obj_setField96_1(ObjFlags* p) {
    p->field_96 = 1;
}

u32 obj_testFlags30(ObjFlags* p, u32 mask) {
    return p->flags_30 & mask;
}

u16 obj_getField1c(ObjFlags* p) {
    return p->field_1c;
}

void obj_clearFlags30(ObjFlags* p, u32 mask) {
    p->flags_30 &= ~mask;
}

void obj_setFlags30(ObjFlags* p, u32 mask) {
    p->flags_30 |= mask;
}

}
