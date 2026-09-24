#include "types.h"
struct Obj_8004AA04 { s32 count; u8 pad[0xC]; void **items; };

extern "C" {
void destroy_buffer_pair(void *p, s32 flag);
int free__11TOBoss4RockFUi(void *p);
void fn_8004AA04(Obj_8004AA04 *self);
}

extern "C" {

void fn_8004AA04(Obj_8004AA04 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (self->items[i] != 0) {
            destroy_buffer_pair(self->items[i], 1);
            self->items[i] = 0;
        }
    }
    free__11TOBoss4RockFUi(self->items);
    self->items = 0;
}

}
