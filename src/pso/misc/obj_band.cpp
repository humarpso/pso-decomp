#include "types.h"

struct GameObj {
    u8 _pad00[0xB0];
    u32 flags;
    u8 _pad_B4[0x4];
    s16 a;
    s16 b;
    u8 _pad_BC[0x4];
    f32 c;
    u8 _pad_C4[0x4];
    f32 d;
};

int objInBand(GameObj* obj, f32 v) {
    u32 flags = obj->flags;
    if (!((flags & 4) && !(flags & 1)) &&
        obj->a == obj->b &&
        v < obj->c &&
        obj->c <= v + obj->d)
        return 1;
    return 0;
}

#include "types.h"

extern "C" {

void TObjPlayer__sub_80142EEC(void);
int TObjPlayer__sub_803D898C(void*);

    extern int lbl_805D567C;
void TObjPlayer__sub_80142EEC(void) { TObjPlayer__sub_803D898C((void*)(lbl_805D567C)); lbl_805D567C = (lbl_805D567C + 0x30); }

}
