#include "types.h"
struct TItemShootParticle_8011B694 { u8 pad[0x1c]; f32 pos[3]; u8 pad28[0x58 - 0x28]; void *parts[2]; };

extern "C" {
void copy_pos__11TNowLoadingFPvPv(void *dst, void *src);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *obj);
void TItemShootParticle__vt4(TItemShootParticle_8011B694 *self);
}

extern "C" {

void TItemShootParticle__vt4(TItemShootParticle_8011B694 *self) {
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->parts[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(self->parts[i], self->pos);
            if (all_parents_unqueued_for_destruction__7TObjectFv(self->parts[i]) == 0) {
                self->parts[i] = 0;
            }
        }
    }
}

}
