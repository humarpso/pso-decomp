#include "types.h"
#include "pso/player/TObjPlayer.h"

struct O_80099F00 { u8 pad[0xb0]; s32 xb0; };

extern "C" {
void fn_80099F00(O_80099F00 *self);
}

extern "C" {

s32 TObjPlayer::get_field_d8() { return *(s32*)((char*)this + 0xd8); }
void fn_80099F00(O_80099F00 *self) {
    if (self->xb0 == 0) {
        return;
    }
}

}
