#include "types.h"
struct O_8010EFE8 { s32 count; s32 f4; u8 *buf; };

extern "C" {
void fn_8010EFE8(O_8010EFE8 *self);
}

extern "C" {

void fn_8010EFE8(O_8010EFE8 *self) {
    s32 i;
    if (self->buf == 0) {
        return;
    }
    for (i = 0; i != self->count; i++) {
        self->buf[i] = i;
    }
}

}
