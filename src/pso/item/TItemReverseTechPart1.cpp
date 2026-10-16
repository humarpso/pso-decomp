#include "pso/TItemReverseTechPart1.h"

#include "types.h"

extern "C" {

struct Self_80119DA0 {
    u8 pad0[0x1C];
    s32 state;
    s32 timer;
    s32 t1;
    s32 t2;
    s32 t3;
    void *ring;
};

void queue_destruction__7TObjectFv(void *);
void TAdRicoRingCtrl__sub_8001B4A0(void *, f32);
void start_fade_all__15TAdRicoRingCtrlFf(void *, f32);
void *TAdRicoRingCtrl__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void TItemReverseTechPart1::run_task() {
    Self_80119DA0 *self = (Self_80119DA0 *)this;
    void *p;

    switch (self->state) {
    case 0:
        break;
    case 1:
        if (self->ring == NULL) {
            p = __nw__7TObjectFUl(0x2C);
            if (p != NULL) {
                p = TAdRicoRingCtrl__ct(p, self);
            }
            self->ring = p;
            if (self->ring != NULL) {
                start_fade_all__15TAdRicoRingCtrlFf(self->ring, self->t1);
            }
        }
        if (self->timer == self->t1) {
            self->state = 2;
            self->timer = 0;
        } else {
            self->timer++;
        }
        break;
    case 2:
        if (self->timer == self->t2) {
            self->state = 3;
            self->timer = 0;
            if (self->ring != NULL) {
                TAdRicoRingCtrl__sub_8001B4A0(self->ring, self->t1);
                self->ring = NULL;
            }
        } else {
            self->timer++;
        }
        break;
    case 3:
        if (self->timer == self->t3) {
            self->state = 4;
            self->timer = 0;
        } else {
            self->timer++;
        }
        break;
    case 4:
        queue_destruction__7TObjectFv(self);
        break;
    }
}

}

TItemReverseTechPart1::~TItemReverseTechPart1() {}

#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void *TItemReverseTechPart1__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__21TItemReverseTechPart1[];
extern void *lbl_805D2C4C;
extern void * TItemReverseTechPart1__instance;
extern void *tl_00;
extern s32 destroy_and_flag__21TItemReverseTechPart2Fv[];

void *TItemReverseTechPart1__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TItemReverseTechPart1;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2C4C;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 150;
    *(u32 *)((s8 *)arg0 + 0x28) = 3900;
    *(u32 *)((s8 *)arg0 + 0x2C) = 150;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    TItemReverseTechPart1__instance = arg0;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        ((TLobby *)o)->init_fade(tl_00, destroy_and_flag__21TItemReverseTechPart2Fv);
    }
    return arg0;
}

}
