#include "types.h"
struct Node_801E4E7C { Node_801E4E7C *next; u8 pad[0x24]; s8 idx; };

struct Ctrl_801E4E7C { u8 pad[0x20]; Node_801E4E7C **tails; s32 dirty; };

extern "C" {
void TParticleCtrl__sub_801E4E7C(Ctrl_801E4E7C *self, Node_801E4E7C *n);
}

extern "C" {

void TParticleCtrl__sub_801E4E7C(Ctrl_801E4E7C *self, Node_801E4E7C *n) {
    s32 i = n->idx;
    n->next = 0;
    self->tails[i]->next = n;
    self->tails[i] = n;
    self->dirty = 1;
}

}
