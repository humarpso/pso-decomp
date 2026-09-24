#include "types.h"
struct E_8035959C { s32 a; s32 b; f32 c; };

struct O_8035959C { u8 pad[0x1c]; s32 idx; E_8035959C e[2]; };

extern "C" {
void run_task__10TBoss4FadeFv(O_8035959C *self);
}

extern "C" {

void run_task__10TBoss4FadeFv(O_8035959C *self) {
    self->idx ^= 1;
    self->e[self->idx].a = 0;
}

}
