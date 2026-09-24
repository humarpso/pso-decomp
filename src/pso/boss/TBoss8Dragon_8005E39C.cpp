#include "types.h"
struct Obj_8005E4D4 { u8 pad[0x734]; void *parts[16]; };

struct Obj_8005E52C { u8 pad[0x734]; void *parts[16]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void enable__13TParticleCtrlFPv(void *);
extern u8 lbl_804882B0[];
void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self);
}

extern "C" {

void TBoss8Dragon__sub_8005E4D4(Obj_8005E4D4 *self) {
    s32 i;
    for (i = 15; i >= 0; i--) {
        if (self->parts[i] != 0) {
            queue_destruction__7TObjectFv(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}
void TBoss8Dragon__sub_8005E52C(Obj_8005E52C *self) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (self->parts[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(self->parts[i], lbl_804882B0);
            enable__13TParticleCtrlFPv(self->parts[i]);
        }
    }
}

}
