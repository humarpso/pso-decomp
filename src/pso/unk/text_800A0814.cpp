#include "types.h"
#include "pso/enemy/TObjEneDarkGunCenter.h"
#include "pso/player/TObjPlayer.h"
struct Obj_800A0814 { u8 pad[0x374]; s32 mode; s32 timer; s32 count; u8 pad2[4]; u16 ids[1]; };

extern "C" {
void *get_enemy_entity(int);
}

extern "C" {

void TObjEneDarkGunCenter::hide_linked_enemies() {
    Obj_800A0814 *self = (Obj_800A0814 *)this;
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            ((TObjPlayer *)e)->set_hidden_flag();
        }
    }
    self->timer = 0x78;
    self->mode = 4;
}

}
