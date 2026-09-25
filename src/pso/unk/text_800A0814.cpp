#include "types.h"
struct Obj_800A0814 { u8 pad[0x374]; s32 mode; s32 timer; s32 count; u8 pad2[4]; u16 ids[1]; };

extern "C" {
void *get_enemy_entity(int);
void set_hidden_flag__10TObjPlayerFPv(void *arg0);
void TObjEneDarkGunCenter__sub_800A0814(Obj_800A0814 *self);
}

extern "C" {

void TObjEneDarkGunCenter__sub_800A0814(Obj_800A0814 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            set_hidden_flag__10TObjPlayerFPv(e);
        }
    }
    self->timer = 0x78;
    self->mode = 4;
}

}
