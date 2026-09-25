#include "types.h"
struct E_800FFC6C { void *data; };

struct D_800FFC6C { u8 pad[4]; E_800FFC6C *e; };

struct C_800FFC6C { u8 pad[0x2C]; D_800FFC6C *d; };

struct B_800FFC6C { u8 pad[0x2C]; C_800FFC6C *c; };

struct A_800FFC6C { u8 pad[0x34]; B_800FFC6C *b; u8 pad38[0xCFC - 0x38]; s32 busy; };

struct Obj_800FFC6C { u8 pad[0x1C]; A_800FFC6C *a; void *data; s32 ready; };

extern "C" {
void fn_800FFC6C(Obj_800FFC6C *self);
}

extern "C" {

void fn_800FFC6C(Obj_800FFC6C *self) {
    A_800FFC6C *a = self->a;
    B_800FFC6C *b;
    C_800FFC6C *c;
    D_800FFC6C *d;
    E_800FFC6C *e;
    if (a->busy != 0) return;
    b = a->b;
    if (b == NULL) return;
    c = b->c;
    if (c == NULL) return;
    d = c->d;
    if (d == NULL) return;
    e = d->e;
    if (e == NULL || e->data == NULL) return;
    self->data = e->data;
    self->ready = 1;
}

}
