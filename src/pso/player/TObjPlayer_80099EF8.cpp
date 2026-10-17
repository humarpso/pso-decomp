#include "types.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"

struct O_80099F00 { u8 pad[0xb0]; s32 xb0; };

extern "C" {
void fn_80099F00(O_80099F00 *self);
s32 TItem::get_field_d8() { return (*(s32 *)&(*(void * *)((u8 *)this + 0xD8))); }
void fn_80099F00(O_80099F00 *self) {
    if (self->xb0 == 0) {
        return;
    }
}

}
