#include "types.h"
struct Player_801BB524 { u8 pad[0x30]; u32 flags; u8 pad34[0x324 - 0x34]; s16 control; };

extern "C" {
void TObjPlayer__sub_801BEB34(void *self, s32 role);
void TObjPlayer__sub_801BBD58(void *self);
s32 TObjPlayer__sub_801BA6BC(void *self);
s32 TObjPlayer__sub_801BB524(Player_801BB524 *self, s32 role);
}

extern "C" {

s32 TObjPlayer__sub_801BB524(Player_801BB524 *self, s32 role) {
    TObjPlayer__sub_801BEB34(self, role);
    if (role < 4) {
        self->control = 1;
    } else if (role == 4) {
        self->control = 2;
    } else if (role == 5) {
        self->control = 3;
    } else if (role == 6) {
        self->control = 6;
    } else if (role == 7) {
        self->control = 7;
    } else {
        return 0;
    }
    self->flags |= 0x10000000;
    TObjPlayer__sub_801BBD58(self);
    return TObjPlayer__sub_801BA6BC(self) != 1 ? 1 : 0;
}

}
