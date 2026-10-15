#include "types.h"

struct O_800C3B8C { u8 pad[0x3c4]; u32 flags; };

extern "C" {
bool TObjEneRe2Flower__sub_800C3B8C(O_800C3B8C *self);
}

extern "C" {

int get_flag_11__16TObjEneRe2FlowerFv(void* p);
void TObjEneRe2Flower__sub_800C3BA8(void);

bool TObjEneRe2Flower__sub_800C3B8C(O_800C3B8C *self) {
    u32 f = self->flags;
    if (f & 0x800) {
        return false;
    }
    return (f & 0x400) != 0;
}

}
