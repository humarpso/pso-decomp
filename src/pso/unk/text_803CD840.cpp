#include "types.h"
struct Ent_803CE198 { s32 a; s32 b; u8 pad[8]; };

struct Sub_803CE198 { u8 pad[0x214]; Ent_803CE198 e[1]; };

struct Obj_803CE198 { u8 pad[0xa0]; Sub_803CE198 sub; };

extern "C" {
void TLobby__sub_803CE198(Obj_803CE198 *self, s32 i, s32 *a, s32 *b);
}

extern "C" {

void TLobby__sub_803CE198(Obj_803CE198 *self, s32 i, s32 *a, s32 *b) {
    Sub_803CE198 *s = &self->sub;
    if (a != 0) {
        *a = s->e[i].a;
    }
    if (b != 0) {
        *b = s->e[i].b;
    }
}

}
