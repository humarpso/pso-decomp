#include "types.h"

struct Pair_801200C0 { u8 a; u8 b; };

struct Data_801200C0 { u8 pad[0x16]; u8 max; u8 pad17[0x27 - 0x17]; u8 flags; };

struct Self_801200C0 { u8 pad[0x1a4]; Pair_801200C0 pairs[3]; u8 pad1aa[0x1d1 - 0x1aa]; u8 cur; u8 pad1d2[0x1dc - 0x1d2]; Data_801200C0 *data; };

extern "C" {
void TObjPlayer__sub_801200C0(Self_801200C0 *self);
}

extern "C" {

int TObjPlayer__sub_8012012C(void* p);
int set_status_flags__10TObjPlayerFPvUi(void*, int);

void TObjPlayer__sub_801200C0(Self_801200C0 *self) {
    s32 i;
    Pair_801200C0 *p;
    if (self->data->max < self->cur) {
        self->cur = 0;
    }
    if (self->data->flags & 8) {
        p = self->pairs;
        for (i = 0; i < 3; i++) {
            u8 a = p->a;
            s8 b = p->b;
            if (a <= 5 && b != 0) {
                p->a = 0;
                p->b = 0;
            }
            p++;
        }
    }
}

}
