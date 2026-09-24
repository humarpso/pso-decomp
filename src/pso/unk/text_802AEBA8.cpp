#include "types.h"
struct Obj_802AEBA8 { u8 pad[0xa4]; s32 a4; s32 a8; s32 ac; u8 pad2[0x6bc - 0xb0]; s32 arr[16]; s32 f6fc; s32 f700; };

extern "C" {
void TAdEnterSerialAccessGC__sub_802AEBA8(Obj_802AEBA8 *self);
}

extern "C" {

void TAdEnterSerialAccessGC__sub_802AEBA8(Obj_802AEBA8 *self) {
    s32 i;
    self->a4 = 0;
    self->a8 = 0;
    self->ac = 0;
    self->f6fc = -1;
    self->f700 = 0;
    for (i = 0; i < 16; i++) self->arr[i] = 0;
}

}
