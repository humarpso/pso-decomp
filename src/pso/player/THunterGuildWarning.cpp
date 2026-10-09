#include "pso/THunterGuildWarning.h"

extern "C" void close_windows__19THunterGuildWarningFPv(void*);
extern s32 THunterGuildWarning__data_805D6178;

struct HGW_802119F0 { u8 pad[0x1c]; s32 state; s32 timer; };
extern "C" s32 queue_destruction__7TObjectFv(u32);

void THunterGuildWarning::run_task() {
    HGW_802119F0 *self = (HGW_802119F0 *)this;
    switch (self->state) {
    case 0:
    case 1:
        if (--self->timer < 0) {
            queue_destruction__7TObjectFv((u32)self);
        }
        break;
    case 2:
        break;
    }
}

THunterGuildWarning::~THunterGuildWarning() {
    close_windows__19THunterGuildWarningFPv(this);
    THunterGuildWarning__data_805D6178 = 0;
}
