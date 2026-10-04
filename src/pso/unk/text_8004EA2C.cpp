#include "types.h"
typedef struct Obj_8004EA2C {
    u8 pad0[0xA8];
    s32 fa8;
    f32 fac[3];
    u8 padb8[4];
    s32 ftimer;
    f32 fc0;
} Obj_8004EA2C;

extern "C" {
void queue_destruction__7TObjectFv(void *);
void *spawn_particle_effect(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void play_sound_effect(s32, void *, s32, s32);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
void fn_8004EA2C(Obj_8004EA2C *arg0);
}

extern "C" {

void fn_8004EA2C(Obj_8004EA2C *arg0) {
    void *e;
    if (arg0->ftimer == 0x90) {
        e = spawn_particle_effect(arg0->fac, 0xC3);
        if (e != NULL) {
            set_flags__11TBoss4Type2FPvUi(e, 0x40);
        }
        play_sound_effect(0x4003AD15, arg0->fac, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    while (arg0->ftimer >= 0xB4) {
        if (arg0->fa8 != 0 || arg0->ftimer <= 0xDC) {
            e = spawn_particle_effect(arg0->fac, 0x14E);
            if (e != NULL) {
                set_flags__11TBoss4Type2FPvUi(e, 0x40);
            }
        }
        break;
    }
    if ((arg0->fc0 += 0.5f) > 119.0f) {
        arg0->fc0 = 119.0f;
    }
    if (++arg0->ftimer >= 0x118) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
