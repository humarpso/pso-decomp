#include "types.h"
#include "pso/item/TItemShootParticle.h"
#include "pso/TObject.h"
#include "pso/misc/TNowLoading.h"
struct TItemShootParticle_8011B694 { u8 pad[0x1c]; f32 pos[3]; u8 pad28[0x58 - 0x28]; void *parts[2]; };

extern "C" {
}

extern "C" {

void TItemShootParticle::hook() {
    TItemShootParticle_8011B694 *self = (TItemShootParticle_8011B694 *)this;
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->parts[i] != 0) {
            ((TNowLoading *)(self->parts[i]))->copy_pos(self->pos);
            if (((TObject *)(self->parts[i]))->all_parents_unqueued_for_destruction() == 0) {
                self->parts[i] = 0;
            }
        }
    }
}

}
