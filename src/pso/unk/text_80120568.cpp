#include "types.h"
struct Pair_801205F4 { u8 a; s8 b; };

struct Data_801205F4 { u8 pad[0x27]; u8 flags; };

struct Self_801205F4 { u8 pad[0xf0]; void *f0; u8 padf4[0x1a4 - 0xf4]; Pair_801205F4 pairs[3]; u8 pad1aa[0x1dc - 0x1aa]; Data_801205F4 *data; };

extern "C" {
void apply_model_params__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80015D74(void *, s32, Pair_801205F4 *);
void TObjPlayer__sub_801205F4(Self_801205F4 *self);
}

extern "C" {

void TObjPlayer__sub_801205F4(Self_801205F4 *self) {
    s32 i;
    apply_model_params__10TObjPlayerFPv(self);
    if (!(self->data->flags & 8)) {
        for (i = 0; i != 3; i++) {
            TObjPlayer__sub_80015D74(self->f0, i, &self->pairs[i]);
        }
    }
}

}
